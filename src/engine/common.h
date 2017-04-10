/*
Copyright (C) 1996-1997 Id Software, Inc.

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/
#ifndef ENGINE_COMMON_H
#define ENGINE_COMMON_H

// comndef.h  -- general definitions

/**
*	does a varargs printf into a temp buffer, so I don't need to have
*	varargs versions of all text functions.
*	FIXME: make this buffer size safe someday
*/
char* va( const char* format, ... );

#endif //ENGINE_COMMON_H
