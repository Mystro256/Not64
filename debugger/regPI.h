/*
 * debugger/regPI.h
 * 
 * 
 * Debugger for Mupen64 - davFr
 * Copyright (C) 2002 davFr - robind@esiee.fr
 *
 * Mupen64 is copyrighted (C) 2002 Hacktarux
 * Mupen64 homepage: http://mupen64.emulation64.com
 *         email address: hacktarux@yahoo.fr
 * 
 * This program is free software; you can redistribute it and/
 * or modify it under the terms of the GNU General Public Li-
 * cence as published by the Free Software Foundation; either
 * version 2 of the Licence.
 *
 * This program is distributed in the hope that it will be use-
 * ful, but WITHOUT ANY WARRANTY; without even the implied war-
 * ranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public Licence for more details.
 *
 * You should have received a copy of the GNU General Public
 * Licence along with this program; if not, write to the Free
 * Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301 USA
 *
**/

#ifndef REGPI_H
#define REGPI_H

#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <gtk/gtk.h>
#include <glib.h>

#include "types.h"
#include "../r4300/r4300.h"
#include "../memory/memory.h"

#include "debugger.h"



GtkWidget *frRegPI;

int regPI_opened;

void init_regPI();
void update_regPI();

#endif //REGPI_H
