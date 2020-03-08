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


RID NewtonPhysicsServer::area_create()
{
	dAssert(0);
	return RID();
}

void NewtonPhysicsServer::area_set_space(RID p_area, RID p_space)
{
	dAssert(0);
}

RID NewtonPhysicsServer::area_get_space(RID p_area) const
{
	dAssert(0);
	return RID();
}

void NewtonPhysicsServer::area_set_space_override_mode(RID p_area, AreaSpaceOverrideMode p_mode)
{
	dAssert(0);
}

NewtonPhysicsServer::AreaSpaceOverrideMode NewtonPhysicsServer::area_get_space_override_mode(RID p_area) const
{
	dAssert(0);
	return AREA_SPACE_OVERRIDE_COMBINE;
}

void NewtonPhysicsServer::area_add_shape(RID p_area, RID p_shape, const Transform &p_transform, bool p_disabled)
{
	dAssert(0);
}

void NewtonPhysicsServer::area_set_shape(RID p_area, int p_shape_idx, RID p_shape)
{
	dAssert(0);
}

void NewtonPhysicsServer::area_set_shape_transform(RID p_area, int p_shape_idx, const Transform &p_transform)
{
	dAssert(0);
}

int NewtonPhysicsServer::area_get_shape_count(RID p_area) const
{
	dAssert(0);
	return 0;
}

RID NewtonPhysicsServer::area_get_shape(RID p_area, int p_shape_idx) const
{
	dAssert(0);
	return RID();
}

Transform NewtonPhysicsServer::area_get_shape_transform(RID p_area, int p_shape_idx) const
{
	dAssert(0);
	return Transform();
}

void NewtonPhysicsServer::area_remove_shape(RID p_area, int p_shape_idx)
{
	dAssert(0);
}

void NewtonPhysicsServer::area_clear_shapes(RID p_area)
{
	dAssert(0);
}

void NewtonPhysicsServer::area_set_shape_disabled(RID p_area, int p_shape_idx, bool p_disabled)
{
	dAssert(0);
}

void NewtonPhysicsServer::area_attach_object_instance_id(RID p_area, ObjectID p_ID)
{
	dAssert(0);
}

ObjectID NewtonPhysicsServer::area_get_object_instance_id(RID p_area) const
{
	dAssert(0);
	return ObjectID();
}

void NewtonPhysicsServer::area_set_param(RID p_area, AreaParameter p_param, const Variant &p_value)
{
	dAssert(0);
}

void NewtonPhysicsServer::area_set_transform(RID p_area, const Transform &p_transform)
{
	dAssert(0);
}

Variant NewtonPhysicsServer::area_get_param(RID p_parea, AreaParameter p_param) const
{
	dAssert(0);
	return Variant();
}

Transform NewtonPhysicsServer::area_get_transform(RID p_area) const
{
	dAssert(0);
	return Transform();
}

void NewtonPhysicsServer::area_set_collision_mask(RID p_area, uint32_t p_mask)
{
	dAssert(0);
}

void NewtonPhysicsServer::area_set_collision_layer(RID p_area, uint32_t p_layer)
{
	dAssert(0);
}

void NewtonPhysicsServer::area_set_monitorable(RID p_area, bool p_monitorable)
{
	dAssert(0);
}

void NewtonPhysicsServer::area_set_monitor_callback(RID p_area, Object *p_receiver, const StringName &p_method)
{
	dAssert(0);
}

void NewtonPhysicsServer::area_set_area_monitor_callback(RID p_area, Object *p_receiver, const StringName &p_method)
{
	dAssert(0);
}

void NewtonPhysicsServer::area_set_ray_pickable(RID p_area, bool p_enable)
{
	dAssert(0);
}

bool NewtonPhysicsServer::area_is_ray_pickable(RID p_area) const
{
	dAssert(0);
	return 0;
}

