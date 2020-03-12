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


#ifndef NEWTON_RID_H
#define NEWTON_RID_H

#include "core/rid.h"
#include "core/rid_owner.h"

class NewtonPhysicsServer;


class newtonRID
{
	public:
	_FORCE_INLINE_ void set_self(const RID &p_self)
	{
			m_self = p_self;
	}

	_FORCE_INLINE_ RID get_self() const
	{
		return m_self;
	}

	_FORCE_INLINE_ void _set_physics_server(NewtonPhysicsServer *p_physicsServer)
	{
		m_server = p_physicsServer;
	}

	_FORCE_INLINE_ NewtonPhysicsServer *get_physics_server() const
	{
		return m_server;
	}

	void *operator new(size_t size)
	{
		return memalloc(size);
	}

	void operator delete(void *ptr)
	{
		memfree(ptr);
	}

	private:
	RID m_self;
	NewtonPhysicsServer* m_server;
};

#endif
