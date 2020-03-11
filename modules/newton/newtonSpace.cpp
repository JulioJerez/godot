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

#include "newtonSpace.h"
#include "newton_physics_server.h"

#include <Newton.h>

NewtonSpace::NewtonSpace() 
	:newtonRID()
{
	m_world = NULL;
	m_gravityMagnitude = 10.0f;
	m_gravityDirection = Vector3(0.0f, -1.0f, 0.0f);
}

NewtonSpace::~NewtonSpace()
{
}

void NewtonSpace::set_param(PhysicsServer::AreaParameter p_param, const Variant &p_value)
{
	switch (p_param)
	{
		case PhysicsServer::AREA_PARAM_GRAVITY:
			m_gravityMagnitude = p_value;
			break;

		case PhysicsServer::AREA_PARAM_GRAVITY_VECTOR:
			m_gravityDirection = p_value;
			break;

		// I do not know what this shit mean, but is not physics
		case PhysicsServer::AREA_PARAM_PRIORITY:
		case PhysicsServer::AREA_PARAM_LINEAR_DAMP:
		case PhysicsServer::AREA_PARAM_ANGULAR_DAMP:
		case PhysicsServer::AREA_PARAM_GRAVITY_IS_POINT:
		case PhysicsServer::AREA_PARAM_GRAVITY_DISTANCE_SCALE:
		case PhysicsServer::AREA_PARAM_GRAVITY_POINT_ATTENUATION:
			break;

		default:
			dAssert(0);
			WARN_PRINT("This set parameter (" + itos(p_param) + ") is ignored, the Newton doesn't support it.");
			break;
	}
}


void NewtonSpace::step(real_t timestep)
{

}
