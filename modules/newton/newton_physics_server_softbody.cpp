/* Copyright (c) <2003-2019> <Newton Game Dynamics>
* 
* This software is provided 'as-is', without any express or implied
* warranty. In no event will the authors be held liable for any damages
* arising from the use of this software.
* 
* Permission is granted to anyone to use this software for any purpose,
* including commercial applications, and to alter it and redistribute it
* freely
*/

#include "newton_physics_server.h"


RID NewtonPhysicsServer::soft_body_create(bool p_init_sleeping)
{
	dAssert(0);
	return RID();
}

void NewtonPhysicsServer::soft_body_update_visual_server(RID p_body, class SoftBodyVisualServerHandler *p_visual_server_handler)
{
	dAssert(0);
}

void NewtonPhysicsServer::soft_body_set_space(RID p_body, RID p_space)
{
	dAssert(0);
}

RID NewtonPhysicsServer::soft_body_get_space(RID p_body) const
{
	dAssert(0);
	return RID();
}

void NewtonPhysicsServer::soft_body_set_mesh(RID p_body, const REF &p_mesh)
{
	dAssert(0);
}

void NewtonPhysicsServer::soft_body_set_collision_layer(RID p_body, uint32_t p_layer)
{
	dAssert(0);
}

uint32_t NewtonPhysicsServer::soft_body_get_collision_layer(RID p_body) const
{
	dAssert(0);
	return 0;
}

void NewtonPhysicsServer::soft_body_set_collision_mask(RID p_body, uint32_t p_mask)
{
	dAssert(0);
}

uint32_t NewtonPhysicsServer::soft_body_get_collision_mask(RID p_body) const
{
	dAssert(0);
	return 0;
}

void NewtonPhysicsServer::soft_body_add_collision_exception(RID p_body, RID p_body_b)
{
	dAssert(0);
}

void NewtonPhysicsServer::soft_body_remove_collision_exception(RID p_body, RID p_body_b)
{
	dAssert(0);
}

void NewtonPhysicsServer::soft_body_get_collision_exceptions(RID p_body, List<RID> *p_exceptions)
{
	dAssert(0);
}

void NewtonPhysicsServer::soft_body_set_state(RID p_body, BodyState p_state, const Variant &p_variant)
{
	dAssert(0);
}

Variant NewtonPhysicsServer::soft_body_get_state(RID p_body, BodyState p_state) const
{
	dAssert(0);
	return Variant();
}

void NewtonPhysicsServer::soft_body_set_transform(RID p_body, const Transform &p_transform)
{
	dAssert(0);
}

Vector3 NewtonPhysicsServer::soft_body_get_vertex_position(RID p_body, int vertex_index) const
{
	dAssert(0);
	return Vector3(0, 0, 0);
}

void NewtonPhysicsServer::soft_body_set_ray_pickable(RID p_body, bool p_enable)
{
	dAssert(0);
}

bool NewtonPhysicsServer::soft_body_is_ray_pickable(RID p_body) const
{
	dAssert(0);
	return 0;
}

void NewtonPhysicsServer::soft_body_set_simulation_precision(RID p_body, int p_simulation_precision)
{
	dAssert(0);
}

int NewtonPhysicsServer::soft_body_get_simulation_precision(RID p_body)
{
	dAssert(0);
	return 0;
}

void NewtonPhysicsServer::soft_body_set_total_mass(RID p_body, real_t p_total_mass)
{
	dAssert(0);
}

real_t NewtonPhysicsServer::soft_body_get_total_mass(RID p_body)

{
	dAssert(0);
	return 0;
}

void NewtonPhysicsServer::soft_body_set_linear_stiffness(RID p_body, real_t p_stiffness)
{
	dAssert(0);
}

real_t NewtonPhysicsServer::soft_body_get_linear_stiffness(RID p_body)
{
	dAssert(0);
	return 0;
}

void NewtonPhysicsServer::soft_body_set_areaAngular_stiffness(RID p_body, real_t p_stiffness)
{
	dAssert(0);
}

real_t NewtonPhysicsServer::soft_body_get_areaAngular_stiffness(RID p_body)
{
	dAssert(0);
	return 0;
}

void NewtonPhysicsServer::soft_body_set_volume_stiffness(RID p_body, real_t p_stiffness)
{
	dAssert(0);
}

real_t NewtonPhysicsServer::soft_body_get_volume_stiffness(RID p_body)
{
	dAssert(0);
	return 0;
}

void NewtonPhysicsServer::soft_body_set_pressure_coefficient(RID p_body, real_t p_pressure_coefficient)
{
	dAssert(0);
}

real_t NewtonPhysicsServer::soft_body_get_pressure_coefficient(RID p_body)
{
	dAssert(0);
	return 0;
}

void NewtonPhysicsServer::soft_body_set_pose_matching_coefficient(RID p_body, real_t p_pose_matching_coefficient)
{
	dAssert(0);
}

real_t NewtonPhysicsServer::soft_body_get_pose_matching_coefficient(RID p_body)
{
	dAssert(0);
	return 0;
}

void NewtonPhysicsServer::soft_body_set_damping_coefficient(RID p_body, real_t p_damping_coefficient)
{
	dAssert(0);
}

real_t NewtonPhysicsServer::soft_body_get_damping_coefficient(RID p_body)
{
	dAssert(0);
	return 0;
}

void NewtonPhysicsServer::soft_body_set_drag_coefficient(RID p_body, real_t p_drag_coefficient)
{
	dAssert(0);
}

real_t NewtonPhysicsServer::soft_body_get_drag_coefficient(RID p_body)
{
	dAssert(0);
	return 0;
}

void NewtonPhysicsServer::soft_body_move_point(RID p_body, int p_point_index, const Vector3 &p_global_position)
{
	dAssert(0);
}

Vector3 NewtonPhysicsServer::NewtonPhysicsServer::soft_body_get_point_global_position(RID p_body, int p_point_index)
{
	dAssert(0);
	return Vector3(0, 0, 0);
}

Vector3 NewtonPhysicsServer::soft_body_get_point_offset(RID p_body, int p_point_index) const
{
	dAssert(0);
	return Vector3(0, 0, 0);
}

void NewtonPhysicsServer::soft_body_remove_all_pinned_points(RID p_body)
{
	dAssert(0);
}

void NewtonPhysicsServer::soft_body_pin_point(RID p_body, int p_point_index, bool p_pin)
{
	dAssert(0);
}

bool NewtonPhysicsServer::soft_body_is_point_pinned(RID p_body, int p_point_index)
{
	dAssert(0);
	return false;
}
