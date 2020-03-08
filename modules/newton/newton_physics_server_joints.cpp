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



PhysicsServer::JointType NewtonPhysicsServer::joint_get_type(RID p_joint) const
{
	dAssert(0);
	return JOINT_PIN;
}

void NewtonPhysicsServer::joint_set_solver_priority(RID p_joint, int p_priority)
{
	dAssert(0);
}

int NewtonPhysicsServer::joint_get_solver_priority(RID p_joint) const
{
	dAssert(0);
	return 0;
}

void NewtonPhysicsServer::joint_disable_collisions_between_bodies(RID p_joint, const bool p_disable)
{
	dAssert(0);
}

bool NewtonPhysicsServer::joint_is_disabled_collisions_between_bodies(RID p_joint) const
{
	dAssert(0);
	return 0;
}

RID NewtonPhysicsServer::joint_create_pin(RID p_body_A, const Vector3 &p_local_A, RID p_body_B, const Vector3 &p_local_B)
{
	dAssert(0);
	return RID();
}

void NewtonPhysicsServer::pin_joint_set_param(RID p_joint, PinJointParam p_param, float p_value)
{
	dAssert(0);
}

float NewtonPhysicsServer::pin_joint_get_param(RID p_joint, PinJointParam p_param) const
{
	dAssert(0);
	return 0;
}

void NewtonPhysicsServer::pin_joint_set_local_a(RID p_joint, const Vector3 &p_A)
{
	dAssert(0);
}

Vector3 NewtonPhysicsServer::pin_joint_get_local_a(RID p_joint) const
{
	dAssert(0);
	return Vector3(0, 0, 0);
}

void NewtonPhysicsServer::pin_joint_set_local_b(RID p_joint, const Vector3 &p_B)
{
	dAssert(0);
}

Vector3 NewtonPhysicsServer::pin_joint_get_local_b(RID p_joint) const
{
	dAssert(0);
	return Vector3(0, 0, 0);
}

RID NewtonPhysicsServer::joint_create_hinge(RID p_body_A, const Transform &p_hinge_A, RID p_body_B, const Transform &p_hinge_B)
{
	dAssert(0);
	return RID();
}

RID NewtonPhysicsServer::joint_create_hinge_simple(RID p_body_A, const Vector3 &p_pivot_A, const Vector3 &p_axis_A, RID p_body_B, const Vector3 &p_pivot_B, const Vector3 &p_axis_B)
{
	dAssert(0);
	return RID();
}

void NewtonPhysicsServer::hinge_joint_set_param(RID p_joint, HingeJointParam p_param, float p_value)
{
	dAssert(0);
}

float NewtonPhysicsServer::hinge_joint_get_param(RID p_joint, HingeJointParam p_param) const
{
	dAssert(0);
	return 0;
}

void NewtonPhysicsServer::hinge_joint_set_flag(RID p_joint, HingeJointFlag p_flag, bool p_value)
{
	dAssert(0);
}

bool NewtonPhysicsServer::hinge_joint_get_flag(RID p_joint, HingeJointFlag p_flag) const
{
	dAssert(0);
	return 0;
}

RID NewtonPhysicsServer::joint_create_slider(RID p_body_A, const Transform &p_local_frame_A, RID p_body_B, const Transform &p_local_frame_B)
{
	dAssert(0);
	return RID();
}

void NewtonPhysicsServer::slider_joint_set_param(RID p_joint, SliderJointParam p_param, float p_value)
{
	dAssert(0);
}

float NewtonPhysicsServer::slider_joint_get_param(RID p_joint, SliderJointParam p_param) const
{
	dAssert(0);
	return 0;
}

RID NewtonPhysicsServer::joint_create_cone_twist(RID p_body_A, const Transform &p_local_frame_A, RID p_body_B, const Transform &p_local_frame_B)
{
	dAssert(0);
	return RID();
}

void NewtonPhysicsServer::cone_twist_joint_set_param(RID p_joint, ConeTwistJointParam p_param, float p_value)
{
	dAssert(0);
}

float NewtonPhysicsServer::cone_twist_joint_get_param(RID p_joint, ConeTwistJointParam p_param) const
{
	dAssert(0);
	return 0;
}

RID NewtonPhysicsServer::joint_create_generic_6dof(RID p_body_A, const Transform &p_local_frame_A, RID p_body_B, const Transform &p_local_frame_B) 
{
	dAssert(0);
	return RID();
}

void NewtonPhysicsServer::generic_6dof_joint_set_param(RID p_joint, Vector3::Axis, G6DOFJointAxisParam p_param, float p_value)
{
	dAssert(0);
}

float NewtonPhysicsServer::generic_6dof_joint_get_param(RID p_joint, Vector3::Axis, G6DOFJointAxisParam p_param)
{
	dAssert(0);
	return 0;
}


void NewtonPhysicsServer::generic_6dof_joint_set_flag(RID p_joint, Vector3::Axis, G6DOFJointAxisFlag p_flag, bool p_enable)
{
	dAssert(0);
}

bool NewtonPhysicsServer::generic_6dof_joint_get_flag(RID p_joint, Vector3::Axis, G6DOFJointAxisFlag p_flag)
{
	dAssert(0);
	return false;
}

void NewtonPhysicsServer::generic_6dof_joint_set_precision(RID p_joint, int precision)
{
	dAssert(0);
}

int NewtonPhysicsServer::generic_6dof_joint_get_precision(RID p_joint)
{
	dAssert(0);
	return 0;
}
