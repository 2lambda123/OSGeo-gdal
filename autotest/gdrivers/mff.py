#!/usr/bin/env pytest
###############################################################################
# $Id$
#
# Project:  GDAL/OGR Test Suite
# Purpose:  Test MFF driver
# Author:   Even Rouault, <even dot rouault at spatialys.com>
#
###############################################################################
# Copyright (c) 2009, Even Rouault <even dot rouault at spatialys.com>
#
# Permission is hereby granted, free of charge, to any person obtaining a
# copy of this software and associated documentation files (the "Software"),
# to deal in the Software without restriction, including without limitation
# the rights to use, copy, modify, merge, publish, distribute, sublicense,
# and/or sell copies of the Software, and to permit persons to whom the
# Software is furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included
# in all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
# OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
# THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
# FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
# DEALINGS IN THE SOFTWARE.
###############################################################################

import gdaltest
import pytest

pytestmark = pytest.mark.require_driver("MFF")

###############################################################################
# Test reading a - fake - MFF dataset


def test_mff_1():

    tst = gdaltest.GDALTest("MFF", "mff/fakemff.hdr", 1, 1)
    tst.testOpen()


###############################################################################
# Test reading a - fake - tiled MFF dataset


def test_mff_2():

    tst = gdaltest.GDALTest("MFF", "mff/fakemfftiled.hdr", 1, 1)
    tst.testOpen()


###############################################################################
# Test reading a MFF file generated by CreateCopy()


def test_mff_3():

    tst = gdaltest.GDALTest("MFF", "mff/bytemff.hdr", 1, 4672)
    tst.testOpen()
