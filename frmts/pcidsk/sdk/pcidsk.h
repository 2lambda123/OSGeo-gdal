/******************************************************************************
 *
 * Purpose:  Primary public include file for PCIDSK SDK.
 *
 ******************************************************************************
 * Copyright (c) 2009
 * PCI Geomatics, 90 Allstate Parkway, Markham, Ontario, Canada.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 ****************************************************************************/

/**
 * \file pcidsk.h
 *
 * Public PCIDSK library classes and functions.
 */

#ifndef PCIDSK_H_INCLUDED
#define PCIDSK_H_INCLUDED

#include "pcidsk_config.h"
#include "pcidsk_types.h"
#include "pcidsk_file.h"
#include "pcidsk_channel.h"
#include "pcidsk_buffer.h"
#include "pcidsk_mutex.h"
#include "pcidsk_exception.h"
#include "pcidsk_interfaces.h"
#include "pcidsk_segment.h"
#include "pcidsk_io.h"
#include "pcidsk_georef.h"
#include "pcidsk_rpc.h"

//! Namespace for all PCIDSK Library classes and functions.

namespace PCIDSK {
/************************************************************************/
/*                      PCIDSK Access Functions                         */
/************************************************************************/
PCIDSKFile PCIDSK_DLL *Open( const std::string& filename, const std::string& access,
                             const PCIDSKInterfaces *interfaces = nullptr,
                             int max_channel_count_allowed = -1 );

PCIDSKFile PCIDSK_DLL *Create( const std::string& filename, int pixels, int lines,
                               int channel_count, eChanType *channel_types,
                               const std::string&  options,
                               const PCIDSKInterfaces *interfaces = nullptr );


} // end of PCIDSK namespace

#endif // PCIDSK_H_INCLUDED
