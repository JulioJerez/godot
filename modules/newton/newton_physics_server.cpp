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

NewtonPhysicsServer::NewtonPhysicsServer()
	:PhysicsServer()
{
	m_active = true;
}

NewtonPhysicsServer::~NewtonPhysicsServer()
{
}

void NewtonPhysicsServer::free(RID p_rid)
{
	if (m_spaceOwner.owns(p_rid)) {
		NewtonSpace *const space = m_spaceOwner.getornull(p_rid);
		space_set_active(p_rid, false);
		m_spaceOwner.free(p_rid);
		delete space;
	}
}

void NewtonPhysicsServer::set_active(bool p_active)
{
	m_active = p_active;
}

void NewtonPhysicsServer::init()
{
	// do nothong
}

void NewtonPhysicsServer::sync()
{
	// do nothong
}

void NewtonPhysicsServer::flush_queries()
{
	// do nothong
}

void NewtonPhysicsServer::finish()
{
	// do nothong
}

bool NewtonPhysicsServer::is_flushing_queries() const
{
	nAssert(0);
	return false;
}

int NewtonPhysicsServer::get_process_info(ProcessInfo p_info)
{
	nAssert(0);
	return 0;
}


void NewtonPhysicsServer::step(float timestep)
{
	if (m_active) {
		const int count = m_activeSpaces.size();
		for (int i = 0; i < count; ++i) {
			m_activeSpaces[i]->step(timestep);
		}
	}
}



