/*
	normalmap GIMP plugin

	Copyright (C) 2002-2012 Shawn Kirst <skirst@gmail.com>

	This program is free software; you can redistribute it and/or
	modify it under the terms of the GNU General Public
	License as published by the Free Software Foundation; either
	version 2 of the License, or (at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
	General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; see the file COPYING.  If not, write to
	the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
	Boston, MA 02111-1307, USA.
*/

#ifndef __PREVIEW3D_H
#define __PREVIEW3D_H

void show_3D_preview(GimpDrawable *drawable);
void destroy_3D_preview(void);
void update_3D_preview(unsigned int w, unsigned int h, int bpp,
                       unsigned char *image);
int is_3D_preview_active(void);

#endif
