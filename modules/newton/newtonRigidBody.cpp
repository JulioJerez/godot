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

#include "newtonHeaders.h"
#include "newtonRigidBody.h"
#include "newton_physics_server.h"

NewtonRigidBody::NewtonRigidBody() 
	:NewtonBody()
{
	m_mass = 0.0f;
	m_locked_axis = 0;
}

NewtonRigidBody::~NewtonRigidBody()
{
}

void NewtonRigidBody::set_force_integration_callback(ObjectID p_id, const StringName &p_method, const Variant &p_udata)
{
	m_forceCallback = ForceIntegrationCallback();

	if (p_id.is_valid()) {
		m_forceCallback.m_id = p_id;
		m_forceCallback.m_method = p_method;
		m_forceCallback.m_udata = p_udata;
	}
}

bool NewtonRigidBody::is_axis_locked(PhysicsServer::BodyAxis p_axis) const
{
	return m_locked_axis & p_axis;
}

void NewtonRigidBody::set_param(PhysicsServer::BodyParameter p_param, real_t p_value)
{
	switch (p_param)
	{
		case PhysicsServer::BODY_PARAM_BOUNCE:
			nAssert(0);
			//setRestitution(p_value);
			break;
		case PhysicsServer::BODY_PARAM_FRICTION:
			nAssert(0);
			//setFriction(p_value);
			break;
		case PhysicsServer::BODY_PARAM_MASS:
		{
			nAssert(p_value >= 0.0f);
			m_mass = p_value;
			break;
		}
		case PhysicsServer::BODY_PARAM_LINEAR_DAMP:
			nAssert(0);
			//linearDamp = p_value;
			//setDamping(linearDamp, angularDamp);
			break;
		case PhysicsServer::BODY_PARAM_ANGULAR_DAMP:
			nAssert(0);
			//angularDamp = p_value;
			//setDamping(linearDamp, angularDamp);
			break;
		case PhysicsServer::BODY_PARAM_GRAVITY_SCALE:
			nAssert(0);
			//gravity_scale = p_value;
			//scratch_space_override_modificator();
			break;
		default:
			WARN_PRINT("Parameter " + itos(p_param) + " not supported by bullet. Value: " + itos(p_value));
	}
}
