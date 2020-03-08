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


RID NewtonPhysicsServer::space_create()
{
	dAssert(0);
	return RID();
}

void NewtonPhysicsServer::space_set_active(RID p_space, bool p_active)
{
	dAssert(0);
}

bool NewtonPhysicsServer::space_is_active(RID p_space) const
{
	dAssert(0);
	return 0;
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


