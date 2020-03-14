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

#include "newtonBody.h"
#include "newtonHeaders.h"
#include "newton_physics_server.h"

NewtonBody::NewtonBody() 
	:newtonRID()
{
	m_sleepMode = true;
	m_mode = PhysicsServer::BODY_MODE_STATIC;
}

NewtonBody::~NewtonBody()
{
}

void NewtonBody::set_instance_id(const ObjectID &p_instance_id)
{
	m_instance_id = p_instance_id;
}

void NewtonBody::set_mode(PhysicsServer::BodyMode p_mode)
{
	//can_integrate_forces = false;
	//destroy_kinematic_utilities();

	// The mode change is relevant to its mass
	m_mode = p_mode;
/*
	switch (p_mode)
	{
		case PhysicsServer::BODY_MODE_KINEMATIC:
			mode = PhysicsServer::BODY_MODE_KINEMATIC;
			//reload_axis_lock();
			//_internal_set_mass(0);
			//init_kinematic_utilities();
			break;
		case PhysicsServer::BODY_MODE_STATIC:
			nAssert(0);
			//mode = PhysicsServer::BODY_MODE_STATIC;
			//reload_axis_lock();
			//_internal_set_mass(0);
			break;
		case PhysicsServer::BODY_MODE_RIGID:
			nAssert(0);
			//mode = PhysicsServer::BODY_MODE_RIGID;
			//reload_axis_lock();
			//_internal_set_mass(0 == mass ? 1 : mass);
			//scratch_space_override_modificator();
			break;
		case PhysicsServer::BODY_MODE_CHARACTER:
			nAssert(0);
			//mode = PhysicsServer::BODY_MODE_CHARACTER;
			//reload_axis_lock();
			//_internal_set_mass(0 == mass ? 1 : mass);
			//scratch_space_override_modificator();
			break;
	}
*/
}

void NewtonBody::set_state(PhysicsServer::BodyState p_state, const Variant &p_variant)
{
	switch (p_state)
	{
		case PhysicsServer::BODY_STATE_TRANSFORM:
			nAssert(0);
			//set_transform(p_variant);
			break;
		case PhysicsServer::BODY_STATE_LINEAR_VELOCITY:
			nAssert(0);
			//set_linear_velocity(p_variant);
			break;
		case PhysicsServer::BODY_STATE_ANGULAR_VELOCITY:
			nAssert(0);
			//set_angular_velocity(p_variant);
			break;
		case PhysicsServer::BODY_STATE_SLEEPING:
			m_sleepMode = !bool(p_variant);
			break;
		case PhysicsServer::BODY_STATE_CAN_SLEEP:
			nAssert(0);
			//can_sleep = bool(p_variant);
			//if (!can_sleep) {
			//	// Can't sleep
			//	btBody->forceActivationState(DISABLE_DEACTIVATION);
			//}
			//else {
			//	btBody->forceActivationState(ACTIVE_TAG);
			//}
			break;
	}
}
