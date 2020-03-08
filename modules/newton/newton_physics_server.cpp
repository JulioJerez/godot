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


NewtonPhysicsServer::NewtonPhysicsServer()
	:PhysicsServer()
{

}

NewtonPhysicsServer::~NewtonPhysicsServer()
{
}


void NewtonPhysicsServer::free(RID p_rid)
{
	dAssert(0);
	return;
}

void NewtonPhysicsServer::set_active(bool p_active)
{
	dAssert(0);
}

void NewtonPhysicsServer::init()
{
	dAssert(0);
}

void NewtonPhysicsServer::step(float p_step)
{
	dAssert(0);
}

void NewtonPhysicsServer::sync()
{
	dAssert(0);
}

void NewtonPhysicsServer::flush_queries()
{
	dAssert(0);
}

void NewtonPhysicsServer::finish()
{
	dAssert(0);
}

bool NewtonPhysicsServer::is_flushing_queries() const
{
	dAssert(0);
	return false;
}

int NewtonPhysicsServer::get_process_info(ProcessInfo p_info)
{
	dAssert(0);
	return 0;
}

/*
RID NewtonPhysicsServer::shape_create(ShapeType p_shape)
void NewtonPhysicsServer::shape_set_data(RID p_shape, const Variant &p_data)
void NewtonPhysicsServer::shape_set_custom_solver_bias(RID p_shape, real_t p_bias)
ShapeType NewtonPhysicsServer::shape_get_type(RID p_shape) const
Variant NewtonPhysicsServer::shape_get_data(RID p_shape) const
void NewtonPhysicsServer::shape_set_margin(RID p_shape, real_t p_margin)

real_t NewtonPhysicsServer::shape_get_margin(RID p_shape) const

real_t NewtonPhysicsServer::shape_get_custom_solver_bias(RID p_shape) const

RID NewtonPhysicsServer::space_create()

void NewtonPhysicsServer::space_set_active(RID p_space, bool p_active)

bool NewtonPhysicsServer::space_is_active(RID p_space) const

void NewtonPhysicsServer::space_set_param(RID p_space, SpaceParameter p_param, real_t p_value)

real_t NewtonPhysicsServer::space_get_param(RID p_space, SpaceParameter p_param) const

PhysicsDirectSpaceState *NewtonPhysicsServer::space_get_direct_state(RID p_space)

void NewtonPhysicsServer::space_set_debug_contacts(RID p_space, int p_max_contacts)

Vector<Vector3> NewtonPhysicsServer::space_get_contacts(RID p_space) const

int NewtonPhysicsServer::space_get_contact_count(RID p_space) const

RID NewtonPhysicsServer::area_create()

void NewtonPhysicsServer::area_set_space(RID p_area, RID p_space)

RID NewtonPhysicsServer::area_get_space(RID p_area) const

void NewtonPhysicsServer::area_set_space_override_mode(RID p_area, AreaSpaceOverrideMode p_mode)
AreaSpaceOverrideMode NewtonPhysicsServer::area_get_space_override_mode(RID p_area) const

void NewtonPhysicsServer::area_add_shape(RID p_area, RID p_shape, const Transform &p_transform = Transform(), bool p_disabled = false)
void NewtonPhysicsServer::area_set_shape(RID p_area, int p_shape_idx, RID p_shape)
void NewtonPhysicsServer::area_set_shape_transform(RID p_area, int p_shape_idx, const Transform &p_transform)
int NewtonPhysicsServer::area_get_shape_count(RID p_area) const

RID NewtonPhysicsServer::area_get_shape(RID p_area, int p_shape_idx) const

Transform NewtonPhysicsServer::area_get_shape_transform(RID p_area, int p_shape_idx) const

void NewtonPhysicsServer::area_remove_shape(RID p_area, int p_shape_idx)
void NewtonPhysicsServer::area_clear_shapes(RID p_area)
void NewtonPhysicsServer::area_set_shape_disabled(RID p_area, int p_shape_idx, bool p_disabled)
void NewtonPhysicsServer::area_attach_object_instance_id(RID p_area, ObjectID p_ID)
ObjectID NewtonPhysicsServer::area_get_object_instance_id(RID p_area) const

void NewtonPhysicsServer::area_set_param(RID p_area, AreaParameter p_param, const Variant &p_value)
void NewtonPhysicsServer::area_set_transform(RID p_area, const Transform &p_transform)
Variant NewtonPhysicsServer::area_get_param(RID p_parea, AreaParameter p_param) const

Transform NewtonPhysicsServer::area_get_transform(RID p_area) const

void NewtonPhysicsServer::area_set_collision_mask(RID p_area, uint32_t p_mask)
void NewtonPhysicsServer::area_set_collision_layer(RID p_area, uint32_t p_layer)
void NewtonPhysicsServer::area_set_monitorable(RID p_area, bool p_monitorable)
void NewtonPhysicsServer::area_set_monitor_callback(RID p_area, Object *p_receiver, const StringName &p_method)
void NewtonPhysicsServer::area_set_area_monitor_callback(RID p_area, Object *p_receiver, const StringName &p_method)
void NewtonPhysicsServer::area_set_ray_pickable(RID p_area, bool p_enable)
bool NewtonPhysicsServer::area_is_ray_pickable(RID p_area) const


RID NewtonPhysicsServer::body_create(BodyMode p_mode, bool p_init_sleeping)
{
	dAssert(0);
	return NULL;
}

void NewtonPhysicsServer::body_set_space(RID p_body, RID p_space)
{
	dAssert(0);
}

RID NewtonPhysicsServer::body_get_space(RID p_body) const

void NewtonPhysicsServer::body_set_mode(RID p_body, BodyMode p_mode)
BodyMode NewtonPhysicsServer::body_get_mode(RID p_body) const

void NewtonPhysicsServer::body_add_shape(RID p_body, RID p_shape, const Transform &p_transform = Transform(), bool p_disabled = false)
void NewtonPhysicsServer::body_set_shape(RID p_body, int p_shape_idx, RID p_shape)
void NewtonPhysicsServer::body_set_shape_transform(RID p_body, int p_shape_idx, const Transform &p_transform)

int NewtonPhysicsServer::body_get_shape_count(RID p_body) const

RID NewtonPhysicsServer::body_get_shape(RID p_body, int p_shape_idx) const

Transform NewtonPhysicsServer::body_get_shape_transform(RID p_body, int p_shape_idx) const

void NewtonPhysicsServer::body_remove_shape(RID p_body, int p_shape_idx)
void NewtonPhysicsServer::body_clear_shapes(RID p_body)

void NewtonPhysicsServer::body_set_shape_disabled(RID p_body, int p_shape_idx, bool p_disabled)

void NewtonPhysicsServer::body_attach_object_instance_id(RID p_body, uint32_t p_ID)
uint32_t body_get_object_instance_id(RID p_body) const

void NewtonPhysicsServer::body_set_enable_continuous_collision_detection(RID p_body, bool p_enable)
bool body_is_continuous_collision_detection_enabled(RID p_body) const

void NewtonPhysicsServer::body_set_collision_layer(RID p_body, uint32_t p_layer)
uint32_t body_get_collision_layer(RID p_body) const

void NewtonPhysicsServer::body_set_collision_mask(RID p_body, uint32_t p_mask)
uint32_t body_get_collision_mask(RID p_body) const

void NewtonPhysicsServer::body_set_user_flags(RID p_body, uint32_t p_flags)
uint32_t body_get_user_flags(RID p_body) const

void NewtonPhysicsServer::body_set_param(RID p_body, BodyParameter p_param, float p_value)
float body_get_param(RID p_body, BodyParameter p_param) const

void NewtonPhysicsServer::body_set_kinematic_safe_margin(RID p_body, real_t p_margin)
real_t body_get_kinematic_safe_margin(RID p_body) const

void NewtonPhysicsServer::body_set_state(RID p_body, BodyState p_state, const Variant &p_variant)
Variant body_get_state(RID p_body, BodyState p_state) const

//do something about it
void NewtonPhysicsServer::body_set_applied_force(RID p_body, const Vector3 &p_force)
Vector3 body_get_applied_force(RID p_body) const

void NewtonPhysicsServer::body_set_applied_torque(RID p_body, const Vector3 &p_torque)
Vector3 body_get_applied_torque(RID p_body) const

void NewtonPhysicsServer::body_add_central_force(RID p_body, const Vector3 &p_force)
void NewtonPhysicsServer::body_add_force(RID p_body, const Vector3 &p_force, const Vector3 &p_pos)
void NewtonPhysicsServer::body_add_torque(RID p_body, const Vector3 &p_torque)

void NewtonPhysicsServer::body_apply_central_impulse(RID p_body, const Vector3 &p_impulse)
void NewtonPhysicsServer::body_apply_impulse(RID p_body, const Vector3 &p_pos, const Vector3 &p_impulse)
void NewtonPhysicsServer::body_apply_torque_impulse(RID p_body, const Vector3 &p_impulse)
void NewtonPhysicsServer::body_set_axis_velocity(RID p_body, const Vector3 &p_axis_velocity)

void NewtonPhysicsServer::body_set_axis_lock(RID p_body, BodyAxis p_axis, bool p_lock)
bool body_is_axis_locked(RID p_body, BodyAxis p_axis) const

//fix
void NewtonPhysicsServer::body_add_collision_exception(RID p_body, RID p_body_b)
void NewtonPhysicsServer::body_remove_collision_exception(RID p_body, RID p_body_b)
void NewtonPhysicsServer::body_get_collision_exceptions(RID p_body, List<RID> *p_exceptions)

void NewtonPhysicsServer::body_set_max_contacts_reported(RID p_body, int p_contacts)
int body_get_max_contacts_reported(RID p_body) const

//missing remove
void NewtonPhysicsServer::body_set_contacts_reported_depth_threshold(RID p_body, float p_threshold)
float body_get_contacts_reported_depth_threshold(RID p_body) const

void NewtonPhysicsServer::body_set_omit_force_integration(RID p_body, bool p_omit)
bool body_is_omitting_force_integration(RID p_body) const

void NewtonPhysicsServer::body_set_force_integration_callback(RID p_body, Object *p_receiver, const StringName &p_method, const Variant &p_udata = Variant())

void NewtonPhysicsServer::body_set_ray_pickable(RID p_body, bool p_enable)
bool body_is_ray_pickable(RID p_body) const

PhysicsDirectBodyState *body_get_direct_state(RID p_body)
bool body_test_motion(RID p_body, const Transform &p_from, const Vector3 &p_motion, bool p_infinite_inertia, MotionResult *r_result = NULL, bool p_exclude_raycast_shapes = true)
int body_test_ray_separation(RID p_body, const Transform &p_transform, bool p_infinite_inertia, Vector3 &r_recover_motion, SeparationResult *r_results, int p_result_max, float p_margin = 0.001)

// SOFT BODY 
RID soft_body_create(bool p_init_sleeping = false)
void NewtonPhysicsServer::soft_body_update_visual_server(RID p_body, class SoftBodyVisualServerHandler *p_visual_server_handler)

void NewtonPhysicsServer::soft_body_set_space(RID p_body, RID p_space)
RID soft_body_get_space(RID p_body) const

void NewtonPhysicsServer::soft_body_set_mesh(RID p_body, const REF &p_mesh)

void NewtonPhysicsServer::soft_body_set_collision_layer(RID p_body, uint32_t p_layer)
uint32_t soft_body_get_collision_layer(RID p_body) const

void NewtonPhysicsServer::soft_body_set_collision_mask(RID p_body, uint32_t p_mask)
uint32_t soft_body_get_collision_mask(RID p_body) const

void NewtonPhysicsServer::soft_body_add_collision_exception(RID p_body, RID p_body_b)
void NewtonPhysicsServer::soft_body_remove_collision_exception(RID p_body, RID p_body_b)
void NewtonPhysicsServer::soft_body_get_collision_exceptions(RID p_body, List<RID> *p_exceptions)

void NewtonPhysicsServer::soft_body_set_state(RID p_body, BodyState p_state, const Variant &p_variant)
Variant soft_body_get_state(RID p_body, BodyState p_state) const

void NewtonPhysicsServer::soft_body_set_transform(RID p_body, const Transform &p_transform)
Vector3 soft_body_get_vertex_position(RID p_body, int vertex_index) const

void NewtonPhysicsServer::soft_body_set_ray_pickable(RID p_body, bool p_enable)
bool soft_body_is_ray_pickable(RID p_body) const

void NewtonPhysicsServer::soft_body_set_simulation_precision(RID p_body, int p_simulation_precision)
int soft_body_get_simulation_precision(RID p_body)

void NewtonPhysicsServer::soft_body_set_total_mass(RID p_body, real_t p_total_mass)
real_t soft_body_get_total_mass(RID p_body)

void NewtonPhysicsServer::soft_body_set_linear_stiffness(RID p_body, real_t p_stiffness)
real_t soft_body_get_linear_stiffness(RID p_body)

void NewtonPhysicsServer::soft_body_set_areaAngular_stiffness(RID p_body, real_t p_stiffness)
real_t soft_body_get_areaAngular_stiffness(RID p_body)

void NewtonPhysicsServer::soft_body_set_volume_stiffness(RID p_body, real_t p_stiffness)
real_t soft_body_get_volume_stiffness(RID p_body)

void NewtonPhysicsServer::soft_body_set_pressure_coefficient(RID p_body, real_t p_pressure_coefficient)
real_t soft_body_get_pressure_coefficient(RID p_body)

void NewtonPhysicsServer::soft_body_set_pose_matching_coefficient(RID p_body, real_t p_pose_matching_coefficient)
real_t soft_body_get_pose_matching_coefficient(RID p_body)

void NewtonPhysicsServer::soft_body_set_damping_coefficient(RID p_body, real_t p_damping_coefficient)
real_t soft_body_get_damping_coefficient(RID p_body)

void NewtonPhysicsServer::soft_body_set_drag_coefficient(RID p_body, real_t p_drag_coefficient)
real_t soft_body_get_drag_coefficient(RID p_body)

void NewtonPhysicsServer::soft_body_move_point(RID p_body, int p_point_index, const Vector3 &p_global_position)
Vector3 soft_body_get_point_global_position(RID p_body, int p_point_index)

Vector3 soft_body_get_point_offset(RID p_body, int p_point_index) const

void NewtonPhysicsServer::soft_body_remove_all_pinned_points(RID p_body)
void NewtonPhysicsServer::soft_body_pin_point(RID p_body, int p_point_index, bool p_pin)
bool soft_body_is_point_pinned(RID p_body, int p_point_index)
*/

