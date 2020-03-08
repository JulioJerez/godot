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

#include "newtonRID.h"
#include "newtonSpace.h"
#include "newton_physics_server.h"


RID NewtonPhysicsServer::space_create()
{
	NewtonSpace* const space = new NewtonSpace;
	RID rid (m_spaceOwner.make_rid(space));
	space->set_self(rid);
	space->_set_physics_server(this);
	return rid;
}

void NewtonPhysicsServer::space_set_active(RID p_space, bool p_active)
{
	NewtonSpace* const space = m_spaceOwner.getornull(p_space);
	ERR_FAIL_COND(!space);

	if (space_is_active(p_space) == p_active) {
		return;
	}

	if (p_active) {
		m_activeSpaces.push_back(space);
	} else {
		m_activeSpaces.erase(space);
	}
}

bool NewtonPhysicsServer::space_is_active(RID p_space) const
{
	NewtonSpace* const space = (NewtonSpace*) m_spaceOwner.getornull(p_space);
	ERR_FAIL_COND_V(!space, false);

	return (m_activeSpaces.find(space) != -1) ? true : false;
}

void NewtonPhysicsServer::space_set_param(RID p_space, SpaceParameter p_param, real_t p_value)
{
	dAssert(0);
}

real_t NewtonPhysicsServer::space_get_param(RID p_space, SpaceParameter p_param) const
{
	dAssert(0);
	return 0;
}

PhysicsDirectSpaceState *NewtonPhysicsServer::space_get_direct_state(RID p_space)
{
	dAssert(0);
	return NULL;
}

void NewtonPhysicsServer::space_set_debug_contacts(RID p_space, int p_max_contacts)
{
	dAssert(0);
}

Vector<Vector3> NewtonPhysicsServer::space_get_contacts(RID p_space) const
{
	dAssert(0);
	return Vector<Vector3>();
}

int NewtonPhysicsServer::space_get_contact_count(RID p_space) const
{
	dAssert(0);
	return 0;
}


