/* Copyright 2020 ProfessorPenultimate
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

//This is where shit gets weird, bear with me please...
#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 --Format K(row, column)--
 */
#define LAYOUT_Genesis( \
K97, K07, K68, K88,  K98, K4A, K96, K06, K95, K05, K94, K04, K93, K03, K92, K02, K91, K01, K90, K00, \
K87, K17, K58, K78,  K3A, K86, K16, K85, K15, K84, K14, K83, K13, K82, K12, K81, K11,   K80,    K10, \
K77, K27, K48,         K2A,  K76, K26, K75, K25, K74, K24, K73, K23, K72, K22, K71, K21,  K70,  K20, \
K67, K37, K38, K1A,     K66,  K36, K65, K35, K64, K34, K63, K33, K62, K32, K61, K31,      K60,   K30, \
K57, K47, K28,         K56,  K46, K55, K45, K54, K44, K53, K43, K52, K42, K51,     K41,    K50, K40, \
   K08,   K18, K0A,  K09,   K19,   K29,           K39,                 K49, K59, K69, K79, K89, K99 \
) { \
    {K0A, K09, K08, K07, K06, K05, K04, K03, K02, K01, K00 }, \
    {K1A, K19, K18, K17, K16, K15, K14, K13, K12, K11, K10 }, \
    {K2A, K29, K28, K27, K26, K25, K24, K23, K22, K21, K20 }, \
    {K3A, K39, K38, K37, K36, K35, K34, K33, K32, K31, K30 }, \
    {K4A, K49, K48, K47, K46, K45, K44, K43, K42, K41, K40 }, \
    {KC_NO, K59, K58, K57, K56, K55, K54, K53, K52, K51, K50 }, \
    {KC_NO, K69, K68, K67, K66, K65, K64, K63, K62, K61, K60 }, \
    {KC_NO, K79, K78, K77, K76, K75, K74, K73, K72, K71, K70 }, \
    {KC_NO, K89, K88, K87, K86, K85, K84, K83, K82, K81, K80 }, \
    {KC_NO, K99, K98, K97, K96, K95, K94, K93, K92, K91, K90 } \
}
/*
Logical Matrix of 10 rows and 11 columns,this matrix starts at the top right to make
wiring easier
*/
