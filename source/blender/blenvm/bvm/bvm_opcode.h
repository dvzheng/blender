/*
 * ***** BEGIN GPL LICENSE BLOCK *****
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
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * The Original Code is Copyright (C) Blender Foundation.
 * All rights reserved.
 *
 * The Original Code is: all of this file.
 *
 * Contributor(s): Lukas Toenne
 *
 * ***** END GPL LICENSE BLOCK *****
 */

#ifndef __BVM_OPCODE_H__
#define __BVM_OPCODE_H__

/** \file bvm_opcode.h
 *  \ingroup bvm
 */

namespace bvm {

enum OpCode {
	OP_NOOP = 0,
	OP_VALUE_FLOAT,
	OP_VALUE_FLOAT3,
	OP_VALUE_FLOAT4,
	OP_VALUE_INT,
	OP_VALUE_MATRIX44,
	OP_VALUE_POINTER,
	OP_VALUE_MESH,
	OP_FLOAT_TO_INT,
	OP_INT_TO_FLOAT,
	OP_SET_FLOAT3,
	OP_GET_ELEM_FLOAT3,
	OP_SET_FLOAT4,
	OP_GET_ELEM_FLOAT4,
	OP_MATRIX44_TO_LOC,
	OP_MATRIX44_TO_EULER,
	OP_MATRIX44_TO_AXISANGLE,
	OP_MATRIX44_TO_SCALE,
	OP_LOC_TO_MATRIX44,
	OP_EULER_TO_MATRIX44,
	OP_AXISANGLE_TO_MATRIX44,
	OP_SCALE_TO_MATRIX44,
	
	OP_INIT_MESH_PTR,
	OP_RELEASE_MESH_PTR,
	
	OP_ADD_FLOAT,
	OP_SUB_FLOAT,
	OP_MUL_FLOAT,
	OP_DIV_FLOAT,
	OP_SINE,
	OP_COSINE,
	OP_TANGENT,
	OP_ARCSINE,
	OP_ARCCOSINE,
	OP_ARCTANGENT,
	OP_POWER,
	OP_LOGARITHM,
	OP_MINIMUM,
	OP_MAXIMUM,
	OP_ROUND,
	OP_LESS_THAN,
	OP_GREATER_THAN,
	OP_MODULO,
	OP_ABSOLUTE,
	OP_CLAMP,
	
	OP_ADD_FLOAT3,
	OP_SUB_FLOAT3,
	OP_MUL_FLOAT3,
	OP_DIV_FLOAT3,
	OP_MUL_FLOAT3_FLOAT,
	OP_DIV_FLOAT3_FLOAT,
	OP_AVERAGE_FLOAT3,
	OP_DOT_FLOAT3,
	OP_CROSS_FLOAT3,
	OP_NORMALIZE_FLOAT3,
	
	OP_ADD_MATRIX44,
	OP_SUB_MATRIX44,
	OP_MUL_MATRIX44,
	OP_MUL_MATRIX44_FLOAT,
	OP_DIV_MATRIX44_FLOAT,
	OP_NEGATE_MATRIX44,
	OP_TRANSPOSE_MATRIX44,
	OP_INVERT_MATRIX44,
	OP_ADJOINT_MATRIX44,
	OP_DETERMINANT_MATRIX44,
	
	OP_MUL_MATRIX44_FLOAT3,
	OP_MUL_MATRIX44_FLOAT4,
	
	OP_MIX_RGB,
	
	OP_INT_TO_RANDOM,
	OP_FLOAT_TO_RANDOM,
	
	OP_TEX_PROC_VORONOI,
	OP_TEX_PROC_BLEND,
	OP_TEX_PROC_MAGIC,
	OP_TEX_PROC_MARBLE,
	OP_TEX_PROC_CLOUDS,
	OP_TEX_PROC_WOOD,
	OP_TEX_PROC_MUSGRAVE,
	OP_TEX_PROC_NOISE,
	OP_TEX_PROC_STUCCI,
	OP_TEX_PROC_DISTNOISE,
	
	OP_OBJECT_LOOKUP,
	
	OP_EFFECTOR_TRANSFORM,
	OP_EFFECTOR_CLOSEST_POINT,
	
	OP_MESH_LOAD,
	OP_MESH_COMBINE,
	OP_MESH_ARRAY,
	OP_MESH_DISPLACE,
	OP_MESH_BOOLEAN,
	
	OP_CURVE_PATH,
	
	OP_END,
	
//	OP_JUMP,
//	OP_JUMP_IF_ZERO,
//	OP_JUMP_IF_ONE,
};

} /* namespace bvm */

#endif /* __BVM_OPCODE_H__ */
