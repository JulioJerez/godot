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


RID NewtonPhysicsServer::shape_create(ShapeType p_shape)
{
	dAssert(0);
	return RID();
}

void NewtonPhysicsServer::shape_set_data(RID p_shape, const Variant &p_data)
{
	dAssert(0);
}

void NewtonPhysicsServer::shape_set_custom_solver_bias(RID p_shape, real_t p_bias)
{
	dAssert(0);
}

PhysicsServer::ShapeType NewtonPhysicsServer::shape_get_type(RID p_shape) const
{
	dAssert(0);
	return SHAPE_SPHERE;
}

Variant NewtonPhysicsServer::shape_get_data(RID p_shape) const
{
	dAssert(0);
	return Variant();
}

void NewtonPhysicsServer::shape_set_margin(RID p_shape, real_t p_margin)
{
	dAssert(0);
}

real_t NewtonPhysicsServer::shape_get_margin(RID p_shape) const
{
	dAssert(0);
	return 0;
}

real_t NewtonPhysicsServer::shape_get_custom_solver_bias(RID p_shape) const
{
	dAssert(0);
	return 0;
}

