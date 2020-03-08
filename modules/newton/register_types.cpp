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

#include "register_types.h"
#include "newton_physics_server.h"

#ifndef _3D_DISABLED
static PhysicsServer *createNewtonPhysicsCallback()
{
	return memnew(NewtonPhysicsServer);
}
#endif


void register_newton_types()
{
#ifndef _3D_DISABLED
	PhysicsServerManager::register_server("Newton", &createNewtonPhysicsCallback);
	PhysicsServerManager::set_default_server("Newton", 2);
#endif
}

void unregister_newton_types()
{
}
