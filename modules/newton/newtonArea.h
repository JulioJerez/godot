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

#ifndef NEWTON_AREA_H
#define NEWTON_AREA_H

#include "newtonRID.h"
#include "servers/physics_server.h"
#include "newton_physics_server.h"

// basically these are triggers
class NewtonArea: public newtonRID
{
	public:
	NewtonArea();
	virtual ~NewtonArea();

	int get_godot_object_flags() const;

	void set_godot_object_flags(int flags);
	void set_collision_mask(uint32_t p_mask);
	void set_monitorable(bool p_monitorable);
	void set_collision_layer(uint32_t p_layer);
	void set_instance_id(const ObjectID &p_instance_id);
	void set_param(PhysicsServer::AreaParameter p_param, const Variant &p_value);
	void set_event_callback(NewtonPhysicsServer::Triger_Type p_callbackObjectType, ObjectID p_id, const StringName &p_method);

	protected:
	ObjectID m_instance_id;

	Vector3 m_spOv_gravityVec;
	real_t m_spOv_gravityMag;
	NewtonPhysicsServer::InOutEventCallback m_eventsCallbacks[2];

	bool m_monitorable;
};
#endif
