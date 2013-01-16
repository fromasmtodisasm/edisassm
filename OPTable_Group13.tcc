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

#ifndef OPTABLE_GROUP13_20080314_TCC_
#define OPTABLE_GROUP13_20080314_TCC_

#include "Operand.h"

template <class M>
const typename Instruction<M>::opcode_entry Instruction<M>::Opcodes_Group13[8] = {
	{ "invalid", &Instruction::decode_invalid, OP_INVALID, FLAG_NONE },
	{ "invalid", &Instruction::decode_invalid, OP_INVALID, FLAG_NONE },
	{ "psrlw",   &Instruction::decode_Nq_Ib,   OP_PSRLW,   FLAG_MMX },
	{ "invalid", &Instruction::decode_invalid, OP_INVALID, FLAG_NONE },
	{ "psraw",   &Instruction::decode_Nq_Ib,   OP_PSRAW,   FLAG_MMX },
	{ "invalid", &Instruction::decode_invalid, OP_INVALID, FLAG_NONE },
	{ "psllw",   &Instruction::decode_Nq_Ib,   OP_PSLLW,   FLAG_MMX },
	{ "invalid", &Instruction::decode_invalid, OP_INVALID, FLAG_NONE },
};

template <class M>
const typename Instruction<M>::opcode_entry Instruction<M>::Opcodes_Group13_66[8] = {
	{ "invalid", &Instruction::decode_invalid, OP_INVALID, FLAG_NONE },
	{ "invalid", &Instruction::decode_invalid, OP_INVALID, FLAG_NONE },
	{ "psrlw",   &Instruction::decode_Uo_Ib,   OP_PSRLW,   FLAG_SSE2 },
	{ "invalid", &Instruction::decode_invalid, OP_INVALID, FLAG_NONE },
	{ "psraw",   &Instruction::decode_Uo_Ib,   OP_PSRAW,   FLAG_SSE2 },
	{ "invalid", &Instruction::decode_invalid, OP_INVALID, FLAG_NONE },
	{ "psllw",   &Instruction::decode_Uo_Ib,   OP_PSLLW,   FLAG_SSE2 },
	{ "invalid", &Instruction::decode_invalid, OP_INVALID, FLAG_NONE },
};


#endif

