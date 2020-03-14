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

#include "newtonArea.h"
#include "newtonSpace.h"
#include "newtonHeaders.h"
#include "newton_physics_server.h"


RID NewtonPhysicsServer::area_create()
{
	NewtonArea* const area = new NewtonArea;
	area->set_collision_layer(1);
	area->set_collision_mask(1);

	RID rid(m_areaOwner.make_rid(area));
	area->set_self(rid);
	area->_set_physics_server(this);
	return rid;
}

void NewtonPhysicsServer::area_set_space(RID p_area, RID p_space)
{
	nAssert(0);
}

RID NewtonPhysicsServer::area_get_space(RID p_area) const
{
	nAssert(0);
	return RID();
}

void NewtonPhysicsServer::area_set_space_override_mode(RID p_area, AreaSpaceOverrideMode p_mode)
{
	nAssert(0);
}

NewtonPhysicsServer::AreaSpaceOverrideMode NewtonPhysicsServer::area_get_space_override_mode(RID p_area) const
{
	nAssert(0);
	return AREA_SPACE_OVERRIDE_COMBINE;
}

void NewtonPhysicsServer::area_add_shape(RID p_area, RID p_shape, const Transform &p_transform, bool p_disabled)
{
	nAssert(0);
}

void NewtonPhysicsServer::area_set_shape(RID p_area, int p_shape_idx, RID p_shape)
{
	nAssert(0);
}

void NewtonPhysicsServer::area_set_shape_transform(RID p_area, int p_shape_idx, const Transform &p_transform)
{
	nAssert(0);
}

int NewtonPhysicsServer::area_get_shape_count(RID p_area) const
{
	nAssert(0);
	return 0;
}

RID NewtonPhysicsServer::area_get_shape(RID p_area, int p_shape_idx) const
{
	nAssert(0);
	return RID();
}

Transform NewtonPhysicsServer::area_get_shape_transform(RID p_area, int p_shape_idx) const
{
	nAssert(0);
	return Transform();
}

void NewtonPhysicsServer::area_remove_shape(RID p_area, int p_shape_idx)
{
	nAssert(0);
}

void NewtonPhysicsServer::area_clear_shapes(RID p_area)
{
	nAssert(0);
}

void NewtonPhysicsServer::area_set_shape_disabled(RID p_area, int p_shape_idx, bool p_disabled)
{
	nAssert(0);
}

void NewtonPhysicsServer::area_attach_object_instance_id(RID p_area, ObjectID p_id)
{
	if (m_spaceOwner.owns(p_area)) {
		return;
	}
	NewtonArea *const area = m_areaOwner.getornull(p_area);
	ERR_FAIL_COND(!area);
	area->set_instance_id(p_id);
}

ObjectID NewtonPhysicsServer::area_get_object_instance_id(RID p_area) const
{
	nAssert(0);
	return ObjectID();
}

void NewtonPhysicsServer::area_set_param(RID p_area, AreaParameter p_param, const Variant &p_value)
{
	if (m_spaceOwner.owns(p_area)) {
		NewtonSpace* const space = (NewtonSpace *)m_spaceOwner.getornull(p_area);
		if (space) {
			space->set_param(p_param, p_value);
		}
	} else {
		NewtonArea *const area = m_areaOwner.getornull(p_area);
		ERR_FAIL_COND(!area);
		
		area->set_param(p_param, p_value);
	}
}

void NewtonPhysicsServer::area_set_transform(RID p_area, const Transform &p_transform)
{
	nAssert(0);
}

Variant NewtonPhysicsServer::area_get_param(RID p_parea, AreaParameter p_param) const
{
	nAssert(0);
	return Variant();
}

Transform NewtonPhysicsServer::area_get_transform(RID p_area) const
{
	nAssert(0);
	return Transform();
}

void NewtonPhysicsServer::area_set_collision_mask(RID p_area, uint32_t p_mask)
{
	nAssert(0);
}

void NewtonPhysicsServer::area_set_collision_layer(RID p_area, uint32_t p_layer)
{
	nAssert(0);
}

void NewtonPhysicsServer::area_set_monitorable(RID p_area, bool p_monitorable)
{
	NewtonArea *const area = m_areaOwner.getornull(p_area);
	ERR_FAIL_COND(!area);

	area->set_monitorable(p_monitorable);
}

void NewtonPhysicsServer::area_set_monitor_callback(RID p_area, Object *p_receiver, const StringName &p_method)
{
	NewtonArea *const area = m_areaOwner.getornull(p_area);
	ERR_FAIL_COND(!area);

	area->set_event_callback(TYPE_RIGID_BODY, p_receiver ? p_receiver->get_instance_id() : ObjectID(), p_method);
}

void NewtonPhysicsServer::area_set_area_monitor_callback(RID p_area, Object *p_receiver, const StringName &p_method)
{
	NewtonArea *const area = m_areaOwner.getornull(p_area);
	ERR_FAIL_COND(!area);

	area->set_event_callback(TYPE_AREA, p_receiver ? p_receiver->get_instance_id() : ObjectID(), p_method);
}

void NewtonPhysicsServer::area_set_ray_pickable(RID p_area, bool p_enable)
{
	nAssert(0);
}

bool NewtonPhysicsServer::area_is_ray_pickable(RID p_area) const
{
	nAssert(0);
	return 0;
}

