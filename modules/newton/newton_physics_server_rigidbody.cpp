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
#include "newtonArea.h"
#include "newtonRigidBody.h"

RID NewtonPhysicsServer::body_create(BodyMode p_mode, bool p_init_sleeping)
{
	NewtonRigidBody* const body = new NewtonRigidBody;

	body->set_mode(p_mode);
	body->set_state(BODY_STATE_SLEEPING, p_init_sleeping);
	
	RID rid(m_bodyOwner.make_rid(body));
	body->set_self(rid);
	body->_set_physics_server(this);
	return rid;
}

void NewtonPhysicsServer::body_set_space(RID p_body, RID p_space)
{
	dAssert(0);
}

RID NewtonPhysicsServer::body_get_space(RID p_body) const
{
	dAssert(0);
	return RID();
}

void NewtonPhysicsServer::body_set_mode(RID p_body, BodyMode p_mode)
{
	dAssert(0);
}

NewtonPhysicsServer::BodyMode NewtonPhysicsServer::body_get_mode(RID p_body) const
{
	dAssert(0);
	return BODY_MODE_RIGID;
}

void NewtonPhysicsServer::body_add_shape(RID p_body, RID p_shape, const Transform &p_transform, bool p_disabled)
{
	dAssert(0);
}

void NewtonPhysicsServer::body_set_shape(RID p_body, int p_shape_idx, RID p_shape)
{
	dAssert(0);
}

void NewtonPhysicsServer::body_set_shape_transform(RID p_body, int p_shape_idx, const Transform &p_transform)
{
	dAssert(0);
}

int NewtonPhysicsServer::body_get_shape_count(RID p_body) const
{
	dAssert(0);
	return 0;
}

RID NewtonPhysicsServer::body_get_shape(RID p_body, int p_shape_idx) const
{
	dAssert(0);
	return RID();
}

Transform NewtonPhysicsServer::body_get_shape_transform(RID p_body, int p_shape_idx) const
{
	dAssert(0);
	return Transform();
}

void NewtonPhysicsServer::body_remove_shape(RID p_body, int p_shape_idx)
{
	dAssert(0);
}

void NewtonPhysicsServer::body_clear_shapes(RID p_body)
{
	dAssert(0);
}

void NewtonPhysicsServer::body_set_shape_disabled(RID p_body, int p_shape_idx, bool p_disabled)
{
	dAssert(0);
}

void NewtonPhysicsServer::body_attach_object_instance_id(RID p_body, ObjectID p_id)
{
	NewtonBody* body = NULL;
	if (m_bodyOwner.owns(p_body)) {
		body = m_bodyOwner.getornull(p_body);
	} else if (m_areaOwner.owns(p_body)) {
		body = m_areaOwner.getornull(p_body);
	}
	ERR_FAIL_COND(!body);

	body->set_instance_id(p_id);
}

ObjectID NewtonPhysicsServer::body_get_object_instance_id(RID p_body) const
{
	dAssert(0);
	return ObjectID();
}

void NewtonPhysicsServer::body_set_enable_continuous_collision_detection(RID p_body, bool p_enable)
{
	dAssert(0);
}

bool NewtonPhysicsServer::body_is_continuous_collision_detection_enabled(RID p_body) const
{
	dAssert(0);
	return 0;
}

void NewtonPhysicsServer::body_set_collision_layer(RID p_body, uint32_t p_layer)
{
	dAssert(0);
}

uint32_t NewtonPhysicsServer::body_get_collision_layer(RID p_body) const
{
	dAssert(0);
	return 0;
}

void NewtonPhysicsServer::body_set_collision_mask(RID p_body, uint32_t p_mask)
{
	dAssert(0);
}

uint32_t NewtonPhysicsServer::body_get_collision_mask(RID p_body) const
{
	dAssert(0);
	return 0;
}

void NewtonPhysicsServer::body_set_user_flags(RID p_body, uint32_t p_flags)
{
	dAssert(0);
}

uint32_t NewtonPhysicsServer::body_get_user_flags(RID p_body) const
{
	dAssert(0);
	return 0;
}

void NewtonPhysicsServer::body_set_param(RID p_body, BodyParameter p_param, float p_value)
{
	dAssert(0);
}

float NewtonPhysicsServer::body_get_param(RID p_body, BodyParameter p_param) const
{
	dAssert(0);
	return 0;
}

void NewtonPhysicsServer::body_set_kinematic_safe_margin(RID p_body, real_t p_margin)
{
	dAssert(0);
}

real_t NewtonPhysicsServer::body_get_kinematic_safe_margin(RID p_body) const
{
	dAssert(0);
	return 0;
}

void NewtonPhysicsServer::body_set_state(RID p_body, BodyState p_state, const Variant &p_variant)
{
	dAssert(0);
}

Variant NewtonPhysicsServer::body_get_state(RID p_body, BodyState p_state) const
{
	dAssert(0);
	return Variant();
}

//do something about it
void NewtonPhysicsServer::body_set_applied_force(RID p_body, const Vector3 &p_force)
{
	dAssert(0);
}

Vector3 NewtonPhysicsServer::body_get_applied_force(RID p_body) const
{
	dAssert(0);
	return Vector3(0, 0, 0);
}

void NewtonPhysicsServer::body_set_applied_torque(RID p_body, const Vector3 &p_torque)
{
	dAssert(0);
}

Vector3 NewtonPhysicsServer::body_get_applied_torque(RID p_body) const
{
	dAssert(0);
	return Vector3(0, 0, 0);
}

void NewtonPhysicsServer::body_add_central_force(RID p_body, const Vector3 &p_force)
{
	dAssert(0);
}

void NewtonPhysicsServer::body_add_force(RID p_body, const Vector3 &p_force, const Vector3 &p_pos)
{
	dAssert(0);
}

void NewtonPhysicsServer::body_add_torque(RID p_body, const Vector3 &p_torque)
{
	dAssert(0);
}

void NewtonPhysicsServer::body_apply_central_impulse(RID p_body, const Vector3 &p_impulse)
{
	dAssert(0);
}

void NewtonPhysicsServer::body_apply_impulse(RID p_body, const Vector3 &p_pos, const Vector3 &p_impulse)
{
	dAssert(0);
}

void NewtonPhysicsServer::body_apply_torque_impulse(RID p_body, const Vector3 &p_impulse)
{
	dAssert(0);
}

void NewtonPhysicsServer::body_set_axis_velocity(RID p_body, const Vector3 &p_axis_velocity)
{
	dAssert(0);
}

void NewtonPhysicsServer::body_set_axis_lock(RID p_body, BodyAxis p_axis, bool p_lock)
{
	dAssert(0);
}

bool NewtonPhysicsServer::body_is_axis_locked(RID p_body, BodyAxis p_axis) const
{
	dAssert(0);
	return 0;
}

//fix
void NewtonPhysicsServer::body_add_collision_exception(RID p_body, RID p_body_b)
{
	dAssert(0);
}

void NewtonPhysicsServer::body_remove_collision_exception(RID p_body, RID p_body_b)
{
	dAssert(0);
}

void NewtonPhysicsServer::body_get_collision_exceptions(RID p_body, List<RID> *p_exceptions)
{
	dAssert(0);
}

void NewtonPhysicsServer::body_set_max_contacts_reported(RID p_body, int p_contacts)
{
	dAssert(0);
}

int NewtonPhysicsServer::body_get_max_contacts_reported(RID p_body) const
{
	dAssert(0);
	return 0;
}

//missing remove
void NewtonPhysicsServer::body_set_contacts_reported_depth_threshold(RID p_body, float p_threshold)
{
	dAssert(0);
}

float NewtonPhysicsServer::body_get_contacts_reported_depth_threshold(RID p_body) const
{
	dAssert(0);
	return 0;
}

void NewtonPhysicsServer::body_set_omit_force_integration(RID p_body, bool p_omit)
{
	dAssert(0);
}

bool NewtonPhysicsServer::body_is_omitting_force_integration(RID p_body) const
{
	dAssert(0);
	return 0;
}

void NewtonPhysicsServer::body_set_force_integration_callback(RID p_body, Object *p_receiver, const StringName &p_method, const Variant &p_udata)
{
	dAssert(0);
}

void NewtonPhysicsServer::body_set_ray_pickable(RID p_body, bool p_enable)
{
	dAssert(0);
}

bool NewtonPhysicsServer::body_is_ray_pickable(RID p_body) const
{
	dAssert(0);
	return 0;
}

PhysicsDirectBodyState* NewtonPhysicsServer::body_get_direct_state(RID p_body)
{
	dAssert(0);
	return 0;
}

bool NewtonPhysicsServer::body_test_motion(RID p_body, const Transform &p_from, const Vector3 &p_motion, bool p_infinite_inertia, MotionResult *r_result, bool p_exclude_raycast_shapes)
{
	dAssert(0);
	return 0;
}

int NewtonPhysicsServer::body_test_ray_separation(RID p_body, const Transform &p_transform, bool p_infinite_inertia, Vector3 &r_recover_motion, SeparationResult *r_results, int p_result_max, float p_margin)
{
	dAssert(0);
	return 0;
}


