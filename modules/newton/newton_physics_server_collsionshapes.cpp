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

#include "newtonShape.h"
#include "newton_physics_server.h"


RID NewtonPhysicsServer::shape_create(ShapeType p_shape)
{
	NewtonShape* shape = NULL;
	switch (p_shape)
	{
		case SHAPE_PLANE:
		{
			dAssert(0);
			//shape = new PlaneShapeNewton;
			break;
		} 
		case SHAPE_SPHERE:
		{
			dAssert(0);
			//shape = new SphereShapeNewton;
			break;
		} 
		case SHAPE_BOX:
		{
			dAssert(0);
			//shape = new BoxShapeNewton;
			break;
		} 
		case SHAPE_CAPSULE:
		{
			dAssert(0);
			//shape = new CapsuleShapeNewton;
			break;
		} 
		case SHAPE_CYLINDER:
		{
			dAssert(0);
			//shape = new CylinderShapeNewton;
			break;
		} 
		case SHAPE_CONVEX_POLYGON:
		{
			dAssert(0);
			//shape = new ConvexPolygonShapeNewton;
			break;
		} 
		case SHAPE_CONCAVE_POLYGON:
		{
			dAssert(0);
			//shape = new ConcavePolygonShapeNewton;
			break;
		} 
		case SHAPE_HEIGHTMAP:
		{
			dAssert(0);
			//shape = new HeightMapShapeNewton;
			break;
		} 
		case SHAPE_RAY:
		{
			dAssert(0);
			//shape = new RayShapeNewton;
			break;
		}

		case SHAPE_CUSTOM:
		default:
			ERR_FAIL_V(RID());
			break;
	}

	RID rid(m_shapeOwner.make_rid(shape));
	shape->set_self(rid);
	shape->_set_physics_server(this);
	return rid;
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
