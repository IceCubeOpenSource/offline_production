//
//   Copyright (c) 2004, 2005, 2006, 2007, 2008   Troy D. Straszheim  
//   
//   $Id: I3MapIntVectorInt.cxx 122595 2014-08-19 05:27:17Z david.schultz $
//
//   This file is part of IceTray.
//
//   IceTray is free software; you can redistribute it and/or modify
//   it under the terms of the GNU General Public License as published by
//   the Free Software Foundation; either version 3 of the License, or
//   (at your option) any later version.
//
//   IceTray is distributed in the hope that it will be useful,
//   but WITHOUT ANY WARRANTY; without even the implied warranty of
//   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//   GNU General Public License for more details.
//
//   You should have received a copy of the GNU General Public License
//   along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#include <dataclasses/I3Map.h>
#include <icetray/python/dataclass_suite.hpp>

using namespace boost::python;

void register_I3MapIntVectorInt()
{
  class_<I3MapIntVectorInt, bases<I3FrameObject>, I3MapIntVectorIntPtr>("I3MapIntVectorInt")
    .def(dataclass_suite<I3MapIntVectorInt >())
    ;
  register_pointer_conversions<I3MapIntVectorInt>();
}

