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

#ifndef NEWTON_SPACE_H
#define NEWTON_SPACE_H

#include "newtonRID.h"
#include "servers/physics_server.h"

class NewtonWorld;

class NewtonSpace: public newtonRID
{
	public:
	NewtonSpace();
	virtual ~NewtonSpace();

	void step(real_t timestep);
	void set_param(PhysicsServer::AreaParameter p_param, const Variant &p_value);

	private:
	static void PostUpdateCallback(const NewtonWorld *const world, real_t timestep);

	NewtonWorld* m_world; 
	Vector3 m_gravityDirection;
	real_t m_gravityMagnitude;
};
#endif
