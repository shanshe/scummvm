/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */

#include "common/gui_options.h"
#include "common/language.h"
#include "engines/game.h"

namespace Glk {
namespace Comprehend {

const PlainGameDescriptor COMPREHEND_GAME_LIST[] = {
    {"crimsoncrown", "Crimson Crown"},
    {"ootopis", "OO-Topos"},
    {"transylvania", "Transylvania"},
    {"talisman", "Talisman"},
	{nullptr, nullptr}
};

struct ComprehendDetectionEntry {
	const char *const _gameId;
	const char *const _filename;
	const char *const _md5;
};

const ComprehendDetectionEntry COMPREHEND_GAMES[] = {
    // DOS games
    {"crimsoncrown", "cc1.gda", "f2abf019675ac5c9bcfd81032bc7787b"},
    {"transylvania", "tr.gda", "22e08633eea02ceee49b909dfd982d22"},

    {nullptr, nullptr, nullptr}};

} // End of namespace Comprehend
} // End of namespace Glk