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


NewtonPhysicsServer::NewtonPhysicsServer()
	:PhysicsServer()
{

}

NewtonPhysicsServer::~NewtonPhysicsServer()
{
}


void NewtonPhysicsServer::free(RID p_rid)
{
	dAssert(0);
	return;
}

void NewtonPhysicsServer::set_active(bool p_active)
{
	dAssert(0);
}

void NewtonPhysicsServer::init()
{
	dAssert(0);
}

void NewtonPhysicsServer::step(float p_step)
{
	dAssert(0);
}

void NewtonPhysicsServer::sync()
{
	dAssert(0);
}

void NewtonPhysicsServer::flush_queries()
{
	dAssert(0);
}

void NewtonPhysicsServer::finish()
{
	dAssert(0);
}

bool NewtonPhysicsServer::is_flushing_queries() const
{
	dAssert(0);
	return false;
}

int NewtonPhysicsServer::get_process_info(ProcessInfo p_info)
{
	dAssert(0);
	return 0;
}

/*
RID NewtonPhysicsServer::shape_create(ShapeType p_shape)
void NewtonPhysicsServer::shape_set_data(RID p_shape, const Variant &p_data)
void NewtonPhysicsServer::shape_set_custom_solver_bias(RID p_shape, real_t p_bias)
ShapeType NewtonPhysicsServer::shape_get_type(RID p_shape) const
Variant NewtonPhysicsServer::shape_get_data(RID p_shape) const
void NewtonPhysicsServer::shape_set_margin(RID p_shape, real_t p_margin)

real_t NewtonPhysicsServer::shape_get_margin(RID p_shape) const

real_t NewtonPhysicsServer::shape_get_custom_solver_bias(RID p_shape) const

RID NewtonPhysicsServer::space_create()

void NewtonPhysicsServer::space_set_active(RID p_space, bool p_active)

bool NewtonPhysicsServer::space_is_active(RID p_space) const

void NewtonPhysicsServer::space_set_param(RID p_space, SpaceParameter p_param, real_t p_value)

real_t NewtonPhysicsServer::space_get_param(RID p_space, SpaceParameter p_param) const

PhysicsDirectSpaceState *NewtonPhysicsServer::space_get_direct_state(RID p_space)

void NewtonPhysicsServer::space_set_debug_contacts(RID p_space, int p_max_contacts)

Vector<Vector3> NewtonPhysicsServer::space_get_contacts(RID p_space) const

int NewtonPhysicsServer::space_get_contact_count(RID p_space) const

RID NewtonPhysicsServer::area_create()

void NewtonPhysicsServer::area_set_space(RID p_area, RID p_space)

RID NewtonPhysicsServer::area_get_space(RID p_area) const

void NewtonPhysicsServer::area_set_space_override_mode(RID p_area, AreaSpaceOverrideMode p_mode)
AreaSpaceOverrideMode NewtonPhysicsServer::area_get_space_override_mode(RID p_area) const

void NewtonPhysicsServer::area_add_shape(RID p_area, RID p_shape, const Transform &p_transform = Transform(), bool p_disabled = false)
void NewtonPhysicsServer::area_set_shape(RID p_area, int p_shape_idx, RID p_shape)
void NewtonPhysicsServer::area_set_shape_transform(RID p_area, int p_shape_idx, const Transform &p_transform)
int NewtonPhysicsServer::area_get_shape_count(RID p_area) const

RID NewtonPhysicsServer::area_get_shape(RID p_area, int p_shape_idx) const

Transform NewtonPhysicsServer::area_get_shape_transform(RID p_area, int p_shape_idx) const

void NewtonPhysicsServer::area_remove_shape(RID p_area, int p_shape_idx)
void NewtonPhysicsServer::area_clear_shapes(RID p_area)
void NewtonPhysicsServer::area_set_shape_disabled(RID p_area, int p_shape_idx, bool p_disabled)
void NewtonPhysicsServer::area_attach_object_instance_id(RID p_area, ObjectID p_ID)
ObjectID NewtonPhysicsServer::area_get_object_instance_id(RID p_area) const

void NewtonPhysicsServer::area_set_param(RID p_area, AreaParameter p_param, const Variant &p_value)
void NewtonPhysicsServer::area_set_transform(RID p_area, const Transform &p_transform)
Variant NewtonPhysicsServer::area_get_param(RID p_parea, AreaParameter p_param) const

Transform NewtonPhysicsServer::area_get_transform(RID p_area) const

void NewtonPhysicsServer::area_set_collision_mask(RID p_area, uint32_t p_mask)
void NewtonPhysicsServer::area_set_collision_layer(RID p_area, uint32_t p_layer)
void NewtonPhysicsServer::area_set_monitorable(RID p_area, bool p_monitorable)
void NewtonPhysicsServer::area_set_monitor_callback(RID p_area, Object *p_receiver, const StringName &p_method)
void NewtonPhysicsServer::area_set_area_monitor_callback(RID p_area, Object *p_receiver, const StringName &p_method)
void NewtonPhysicsServer::area_set_ray_pickable(RID p_area, bool p_enable)
bool NewtonPhysicsServer::area_is_ray_pickable(RID p_area) const
*/

