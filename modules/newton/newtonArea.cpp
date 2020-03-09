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

#include "newtonArea.h"
#include "newton_physics_server.h"

// basically these are triggers 
NewtonArea::NewtonArea() 
	:newtonRID()
{
	m_monitorable = true;
	m_spOv_gravityVec = Vector3(0.0f, -1.0f, 0.0f);
	m_spOv_gravityMag = -10.0f;
}

NewtonArea::~NewtonArea()
{
}

void NewtonArea::set_instance_id(const ObjectID &p_instance_id)
{
	m_instance_id = p_instance_id;
}

void NewtonArea::set_collision_layer(uint32_t p_layer)
{
}

void NewtonArea::set_collision_mask(uint32_t p_mask)
{
}

void NewtonArea::set_param(PhysicsServer::AreaParameter p_param, const Variant &p_value)
{
	switch (p_param)
	{
		case PhysicsServer::AREA_PARAM_GRAVITY:
			//set_spOv_gravityMag(p_value);
			m_spOv_gravityMag = p_value;
			break;
		case PhysicsServer::AREA_PARAM_GRAVITY_VECTOR:
			//set_spOv_gravityVec(p_value);
			m_spOv_gravityVec = p_value;
			break;
		//case PhysicsServer::AREA_PARAM_LINEAR_DAMP:
		//	set_spOv_linearDump(p_value);
		//	break;
		//case PhysicsServer::AREA_PARAM_ANGULAR_DAMP:
		//	set_spOv_angularDump(p_value);
		//	break;
		//case PhysicsServer::AREA_PARAM_PRIORITY:
		//	set_spOv_priority(p_value);
		//	break;
		//case PhysicsServer::AREA_PARAM_GRAVITY_IS_POINT:
		//	set_spOv_gravityPoint(p_value);
		//	break;
		//case PhysicsServer::AREA_PARAM_GRAVITY_DISTANCE_SCALE:
		//	set_spOv_gravityPointDistanceScale(p_value);
		//	break;
		//case PhysicsServer::AREA_PARAM_GRAVITY_POINT_ATTENUATION:
		//	set_spOv_gravityPointAttenuation(p_value);
		//	break;
		default:
			dAssert(0);
			WARN_PRINT("Area doesn't support this parameter in the Newton backend: " + itos(p_param));
	}
}

void NewtonArea::set_godot_object_flags(int flags)
{

}

void NewtonArea::set_monitorable(bool p_monitorable)
{
	m_monitorable = p_monitorable;
}

int NewtonArea::get_godot_object_flags() const
{
	return 0;
}

void NewtonArea::set_event_callback(NewtonPhysicsServer::Triger_Type p_callbackObjectType, ObjectID p_id, const StringName &p_method)
{
	NewtonPhysicsServer::InOutEventCallback &ev = m_eventsCallbacks[static_cast<int>(p_callbackObjectType)];
	ev.event_callback_id = p_id;
	ev.event_callback_method = p_method;

	/// Set if monitoring
	if (m_eventsCallbacks[0].event_callback_id.is_valid() || m_eventsCallbacks[1].event_callback_id.is_valid()) {
		set_godot_object_flags(get_godot_object_flags() | NewtonPhysicsServer::GOF_IS_MONITORING_AREA);
	} else {
		set_godot_object_flags(get_godot_object_flags() & (~NewtonPhysicsServer::GOF_IS_MONITORING_AREA));
	}
}
