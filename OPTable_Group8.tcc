/*
Copyright (C) 2006 - 2013 Evan Teran
                          eteran@alum.rit.edu

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef OPTABLE_GROUP8_20080314_TCC_
#define OPTABLE_GROUP8_20080314_TCC_

#include "Operand.h"

template <class M>
const typename Instruction<M>::opcode_entry Instruction<M>::Opcodes_Group8[8] = {
	{ "invalid", &Instruction::decode_invalid, OP_INVALID, FLAG_NONE },
	{ "invalid", &Instruction::decode_invalid, OP_INVALID, FLAG_NONE },
	{ "invalid", &Instruction::decode_invalid, OP_INVALID, FLAG_NONE },
	{ "invalid", &Instruction::decode_invalid, OP_INVALID, FLAG_NONE },
	{ "bt",      &Instruction::decode_Ev_Ib,   OP_BT,      FLAG_W_FLAGS },
	{ "bts",     &Instruction::decode_Ev_Ib,   OP_BTS,     FLAG_W_FLAGS },
	{ "btr",     &Instruction::decode_Ev_Ib,   OP_BTR,     FLAG_W_FLAGS },
	{ "btc",     &Instruction::decode_Ev_Ib,   OP_BTC,     FLAG_W_FLAGS },
};

#endif

