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

#ifndef NEWTON_RIGID_BODY_H
#define NEWTON_RIGID_BODY_H

#include "newtonRID.h"
#include "newtonBody.h"
#include "servers/physics_server.h"

class NewtonRigidBody: public NewtonBody
{
	public:
	NewtonRigidBody();
	virtual ~NewtonRigidBody();

	void set_param(PhysicsServer::BodyParameter p_param, real_t);
	bool is_axis_locked(PhysicsServer::BodyAxis p_axis) const;
	void set_force_integration_callback(ObjectID p_id, const StringName &p_method, const Variant &p_udata = Variant());

	protected:
	class ForceIntegrationCallback
	{
		public:
		ForceIntegrationCallback()
			:m_id(uint64_t(0))
			,m_udata()
			,m_method("")
		{
		}

		ObjectID m_id;
		Variant m_udata;
		StringName m_method;
	};

	ForceIntegrationCallback m_forceCallback;
	real_t m_mass;
	uint16_t m_locked_axis;
};



#endif
