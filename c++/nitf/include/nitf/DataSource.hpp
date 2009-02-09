/* =========================================================================
 * This file is part of NITRO
 * =========================================================================
 *
 * (C) Copyright 2004 - 2009, General Dynamics - Advanced Information Systems
 *
 * NITRO is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program; if not, If not,
 * see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef __NITF_DATASOURCE_HPP__
#define __NITF_DATASOURCE_HPP__

#include "nitf/DataSource.h"
#include "nitf/System.hpp"
#include "nitf/Object.hpp"
#include <string>

/*!
 *  \file DataSource.hpp
 *  \brief  Contains wrapper implementations for DataSources
 */
namespace nitf
{

/*!
 *  \class DataSource
 *  \brief  The C++ wrapper for the nitf_DataSource
 */
DECLARE_CLASS(DataSource)
{
public:
    //! Copy constructor
    DataSource(const DataSource & x)
    {
        setNative(x.getNative());
    }

    //! Assignment Operator
    DataSource & operator=(const DataSource & x)
    {
        if (&x != this)
            setNative(x.getNative());
        return *this;
    }

    // Set native object
    DataSource(nitf_DataSource * x)
    {
        setNative(x);
        getNativeOrThrow();
    }

    //! Destructor
    virtual ~DataSource(){}

    /*!
     *  Read from the DataSource into the buffer
     *  \param buf  The buffer
     *  \param size  The size of the buffer
     */
    virtual void read(char * buf, off_t size) throw (nitf::NITFException){}

    /*
     * Returns the size of the DataSource, in bytes
     */
    virtual off_t getSize() { return 0; }
    virtual void setSize(off_t size) {}
private:

    //! Allows the engine to call the read function for this object
    static NITF_BOOL DataSource_read(NITF_DATA * data,
                                     char * buf,
                                     off_t size,
                                     nitf_Error * error);
    //! Needed for the engine interface
    static void DataSource_destruct(NITF_DATA* data);
    static off_t DataSource_getSize(NITF_DATA* data);
    static void DataSource_setSize(NITF_DATA* data, off_t size);

protected:

    //! Get the native data source interface
    nitf_IDataSource getIDataSource()
    {
        // Create a data source interface that
        // the native layer can use
        nitf_IDataSource dataSource =
        {
            &DataSource_read,
            &DataSource_destruct,
            &DataSource_getSize,
            &DataSource_setSize
        };
        return dataSource;
    }

    //! Constructor
    DataSource() throw (nitf::NITFException);

    //Here so nothing gets initialized
    DataSource(bool b){}

    nitf_Error error;
};



/*!
 *  \class KnownDataSource
 *  \brief  The base class for known data sources in the engine.
 */
class KnownDataSource : public DataSource
{
public:
    //! Constructor
    KnownDataSource(): DataSource(false), mData(NULL), mIface(NULL){}
    //! Destructor
    virtual ~KnownDataSource() {}

    /*!
     *  Read from the KnownDataSource into the buffer
     *  \param buf  The buffer
     *  \param size  The size of the buffer
     */
    virtual void read(char * buf, off_t size) throw (nitf::NITFException);

    /*
     * Returns the size of the segment
     */
    virtual off_t getSize();
    virtual void setSize(off_t size);
protected:
    NITF_DATA * mData;
    nitf_IDataSource * mIface;
};

}
#endif