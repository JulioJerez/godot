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
#include "newtonHeaders.h"
#include "newton_physics_server.h"


#define MAX_PHYSICS_SUB_STEPS	2

class NewtonMemoryCallback
{
	public:
	NewtonMemoryCallback()
	{
		atexit(NewtonMemoryCallbackCallback);
		// Set the memory allocation function before creation the newton world
		// this is the only function that can be called before the creation of the newton world.
		// it should be called once, and the the call is optional
		NewtonSetMemorySystem(PhysicsAlloc, PhysicsFree);

		#if defined(_DEBUG) && defined(_MSC_VER)
			// Track all memory leaks at the operating system level.
			// make sure no Newton tool or utility leaves leaks behind.
			_CrtSetDbgFlag(_CRTDBG_LEAK_CHECK_DF | _CrtSetDbgFlag(_CRTDBG_LEAK_CHECK_DF));
			//_CrtSetBreakAlloc (318776);
		#endif
	}

	static void NewtonMemoryCallbackCallback()
	{
		#if defined(_DEBUG) && defined(_MSC_VER)
			_CrtDumpMemoryLeaks();
		#endif
	}


	static void* PhysicsAlloc(int sizeInBytes)
	{
		void* const ptr = memalloc(sizeInBytes);
		return ptr;
	}

	// memory free use by the engine
	static void PhysicsFree(void* ptr, int sizeInBytes)
	{
		memfree(ptr);
	}
};

static NewtonMemoryCallback g_memoryCallback;

NewtonSpace::NewtonSpace() 
	:newtonRID()
{
	m_gravityMagnitude = 10.0f;
	m_gravityDirection = Vector3(0.0f, -1.0f, 0.0f);

	// create the newton world
	m_world = NewtonCreate();

	// link the work with this user data
	NewtonWorldSetUserData(m_world, this);

	// set a post update callback which is call after all simulation and all listeners updates
	NewtonSetPostUpdateCallback(m_world, PostUpdateCallback);

	// set the number of sub steps
	NewtonSetNumberOfSubsteps(m_world, MAX_PHYSICS_SUB_STEPS);

	// set joint serialization call back
	//dCustomJoint::Initalize(m_world);
}

NewtonSpace::~NewtonSpace()
{
	NewtonWaitForUpdateToFinish(m_world);
	NewtonDestroy(m_world);
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
			nAssert(0);
			WARN_PRINT("This set parameter (" + itos(p_param) + ") is ignored, the Newton doesn't support it.");
			break;
	}
}


void NewtonSpace::PostUpdateCallback(const NewtonWorld *const world, real_t timestep)
{

}

void NewtonSpace::step(real_t timestep)
{

}
