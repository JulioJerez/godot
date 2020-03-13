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

#ifndef NEWTON_BODY_H
#define NEWTON_BODY_H

#include "newtonRID.h"
#include "servers/physics_server.h"

class NewtonBody: public newtonRID
{
	public:
	NewtonBody();
	virtual ~NewtonBody();

	void set_mode(PhysicsServer::BodyMode p_mode);
	void set_state(PhysicsServer::BodyState p_state, const Variant &p_variant);

	protected:
	PhysicsServer::BodyMode m_mode;
	bool m_sleepMode;
};



#endif
