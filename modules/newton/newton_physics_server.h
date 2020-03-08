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


#ifndef NEWTON_PHYSICS_SERVER_H
#define NEWTON_PHYSICS_SERVER_H

#include "core/rid.h"
#include "core/rid_owner.h"
#include "servers/physics_server.h"


#include <assert.h>
static void dAssert(int xxx)
{
	assert(0);
}

class NewtonSpace;

class NewtonPhysicsServer: public PhysicsServer
{
	GDCLASS(NewtonPhysicsServer, PhysicsServer)

	public:
	NewtonPhysicsServer();
	~NewtonPhysicsServer();

	protected:

	// MISC 
	void free(RID p_rid);
	
	void init();
	void sync();
	void finish();
	void flush_queries();
	void step(float p_step);
	void set_active(bool p_active);

	bool is_flushing_queries() const;
	int get_process_info(ProcessInfo p_info);


	// collision shapes	
	RID shape_create(ShapeType p_shape);
	void shape_set_data(RID p_shape, const Variant &p_data);
	void shape_set_custom_solver_bias(RID p_shape, real_t p_bias);

	ShapeType shape_get_type(RID p_shape) const;
	Variant shape_get_data(RID p_shape) const;

	void shape_set_margin(RID p_shape, real_t p_margin);
	real_t shape_get_margin(RID p_shape) const;

	real_t shape_get_custom_solver_bias(RID p_shape) const;

	// SPACE API 
	RID space_create();
	void space_set_active(RID p_space, bool p_active);
	bool space_is_active(RID p_space) const;

	void space_set_param(RID p_space, SpaceParameter p_param, real_t p_value);
	real_t space_get_param(RID p_space, SpaceParameter p_param) const;

	// this function only works on physics process, errors and returns null otherwise
	PhysicsDirectSpaceState *space_get_direct_state(RID p_space);

	void space_set_debug_contacts(RID p_space, int p_max_contacts);
	Vector<Vector3> space_get_contacts(RID p_space) const;
	int space_get_contact_count(RID p_space) const;


	// AREA API 
	//missing attenuation? missing better override?
	RID area_create();

	void area_set_space(RID p_area, RID p_space);
	RID area_get_space(RID p_area) const;

	void area_set_space_override_mode(RID p_area, AreaSpaceOverrideMode p_mode);
	AreaSpaceOverrideMode area_get_space_override_mode(RID p_area) const;

	void area_add_shape(RID p_area, RID p_shape, const Transform &p_transform = Transform(), bool p_disabled = false);
	void area_set_shape(RID p_area, int p_shape_idx, RID p_shape);
	void area_set_shape_transform(RID p_area, int p_shape_idx, const Transform &p_transform);

	int area_get_shape_count(RID p_area) const;
	RID area_get_shape(RID p_area, int p_shape_idx) const;
	Transform area_get_shape_transform(RID p_area, int p_shape_idx) const;

	void area_remove_shape(RID p_area, int p_shape_idx);
	void area_clear_shapes(RID p_area);

	void area_set_shape_disabled(RID p_area, int p_shape_idx, bool p_disabled);

	void area_attach_object_instance_id(RID p_area, ObjectID p_id);
	ObjectID area_get_object_instance_id(RID p_area) const;

	void area_set_param(RID p_area, AreaParameter p_param, const Variant &p_value);
	void area_set_transform(RID p_area, const Transform &p_transform);

	Variant area_get_param(RID p_parea, AreaParameter p_param) const;
	Transform area_get_transform(RID p_area) const;

	void area_set_collision_mask(RID p_area, uint32_t p_mask);
	void area_set_collision_layer(RID p_area, uint32_t p_layer);

	void area_set_monitorable(RID p_area, bool p_monitorable);

	void area_set_monitor_callback(RID p_area, Object *p_receiver, const StringName &p_method);
	void area_set_area_monitor_callback(RID p_area, Object *p_receiver, const StringName &p_method);

	void area_set_ray_pickable(RID p_area, bool p_enable);
	bool area_is_ray_pickable(RID p_area) const;

	// BODY API 
	RID body_create(BodyMode p_mode = BODY_MODE_RIGID, bool p_init_sleeping = false);
	void body_set_space(RID p_body, RID p_space);
	RID body_get_space(RID p_body) const;
	void body_set_mode(RID p_body, BodyMode p_mode);
	BodyMode body_get_mode(RID p_body) const;
	void body_add_shape(RID p_body, RID p_shape, const Transform &p_transform = Transform(), bool p_disabled = false);
	void body_set_shape(RID p_body, int p_shape_idx, RID p_shape);
	void body_set_shape_transform(RID p_body, int p_shape_idx, const Transform &p_transform);
	int body_get_shape_count(RID p_body) const;
	RID body_get_shape(RID p_body, int p_shape_idx) const;
	Transform body_get_shape_transform(RID p_body, int p_shape_idx) const;
	void body_remove_shape(RID p_body, int p_shape_idx);
	void body_clear_shapes(RID p_body);
	void body_set_shape_disabled(RID p_body, int p_shape_idx, bool p_disabled);
	void body_attach_object_instance_id(RID p_body, ObjectID p_id);
	ObjectID body_get_object_instance_id(RID p_body) const;
	void body_set_enable_continuous_collision_detection(RID p_body, bool p_enable);
	bool body_is_continuous_collision_detection_enabled(RID p_body) const;
	void body_set_collision_layer(RID p_body, uint32_t p_layer);
	uint32_t body_get_collision_layer(RID p_body) const;
	void body_set_collision_mask(RID p_body, uint32_t p_mask);
	uint32_t body_get_collision_mask(RID p_body) const;
	void body_set_user_flags(RID p_body, uint32_t p_flags);
	uint32_t body_get_user_flags(RID p_body) const;
	void body_set_param(RID p_body, BodyParameter p_param, float p_value);
	float body_get_param(RID p_body, BodyParameter p_param) const;
	void body_set_kinematic_safe_margin(RID p_body, real_t p_margin);
	real_t body_get_kinematic_safe_margin(RID p_body) const;
	void body_set_state(RID p_body, BodyState p_state, const Variant &p_variant);
	Variant body_get_state(RID p_body, BodyState p_state) const;

	//do something about it
	void body_set_applied_force(RID p_body, const Vector3 &p_force);
	Vector3 body_get_applied_force(RID p_body) const;
	void body_set_applied_torque(RID p_body, const Vector3 &p_torque);
	Vector3 body_get_applied_torque(RID p_body) const;
	void body_add_central_force(RID p_body, const Vector3 &p_force);
	void body_add_force(RID p_body, const Vector3 &p_force, const Vector3 &p_pos);
	void body_add_torque(RID p_body, const Vector3 &p_torque);
	void body_apply_central_impulse(RID p_body, const Vector3 &p_impulse);
	void body_apply_impulse(RID p_body, const Vector3 &p_pos, const Vector3 &p_impulse);
	void body_apply_torque_impulse(RID p_body, const Vector3 &p_impulse);
	void body_set_axis_velocity(RID p_body, const Vector3 &p_axis_velocity);
	void body_set_axis_lock(RID p_body, BodyAxis p_axis, bool p_lock);
	bool body_is_axis_locked(RID p_body, BodyAxis p_axis) const;

	//fix
	void body_add_collision_exception(RID p_body, RID p_body_b);
	void body_remove_collision_exception(RID p_body, RID p_body_b);
	void body_get_collision_exceptions(RID p_body, List<RID> *p_exceptions);
	void body_set_max_contacts_reported(RID p_body, int p_contacts);
	int body_get_max_contacts_reported(RID p_body) const;

	//missing remove
	void body_set_contacts_reported_depth_threshold(RID p_body, float p_threshold);
	float body_get_contacts_reported_depth_threshold(RID p_body) const;
	void body_set_omit_force_integration(RID p_body, bool p_omit);
	bool body_is_omitting_force_integration(RID p_body) const;
	void body_set_force_integration_callback(RID p_body, Object *p_receiver, const StringName &p_method, const Variant &p_udata = Variant());
	void body_set_ray_pickable(RID p_body, bool p_enable);
	bool body_is_ray_pickable(RID p_body) const;

	// this function only works on physics process, errors and returns null otherwise
	PhysicsDirectBodyState *body_get_direct_state(RID p_body);
	bool body_test_motion(RID p_body, const Transform &p_from, const Vector3 &p_motion, bool p_infinite_inertia, MotionResult *r_result = NULL, bool p_exclude_raycast_shapes = true);
	int body_test_ray_separation(RID p_body, const Transform &p_transform, bool p_infinite_inertia, Vector3 &r_recover_motion, SeparationResult *r_results, int p_result_max, float p_margin = 0.001);

	// SOFT BODY 
	RID soft_body_create(bool p_init_sleeping = false);
	void soft_body_update_visual_server(RID p_body, class SoftBodyVisualServerHandler *p_visual_server_handler);
	void soft_body_set_space(RID p_body, RID p_space);
	RID soft_body_get_space(RID p_body) const;
	void soft_body_set_mesh(RID p_body, const REF &p_mesh);
	void soft_body_set_collision_layer(RID p_body, uint32_t p_layer);
	uint32_t soft_body_get_collision_layer(RID p_body) const;
	void soft_body_set_collision_mask(RID p_body, uint32_t p_mask);
	uint32_t soft_body_get_collision_mask(RID p_body) const;
	void soft_body_add_collision_exception(RID p_body, RID p_body_b);
	void soft_body_remove_collision_exception(RID p_body, RID p_body_b);
	void soft_body_get_collision_exceptions(RID p_body, List<RID> *p_exceptions);
	void soft_body_set_state(RID p_body, BodyState p_state, const Variant &p_variant);
	Variant soft_body_get_state(RID p_body, BodyState p_state) const;
	void soft_body_set_transform(RID p_body, const Transform &p_transform);
	Vector3 soft_body_get_vertex_position(RID p_body, int vertex_index) const;
	void soft_body_set_ray_pickable(RID p_body, bool p_enable);
	bool soft_body_is_ray_pickable(RID p_body) const;
	void soft_body_set_simulation_precision(RID p_body, int p_simulation_precision);
	int soft_body_get_simulation_precision(RID p_body);
	void soft_body_set_total_mass(RID p_body, real_t p_total_mass);
	real_t soft_body_get_total_mass(RID p_body);
	void soft_body_set_linear_stiffness(RID p_body, real_t p_stiffness);
	real_t soft_body_get_linear_stiffness(RID p_body);
	void soft_body_set_areaAngular_stiffness(RID p_body, real_t p_stiffness);
	real_t soft_body_get_areaAngular_stiffness(RID p_body);
	void soft_body_set_volume_stiffness(RID p_body, real_t p_stiffness);
	real_t soft_body_get_volume_stiffness(RID p_body);
	void soft_body_set_pressure_coefficient(RID p_body, real_t p_pressure_coefficient);
	real_t soft_body_get_pressure_coefficient(RID p_body);
	void soft_body_set_pose_matching_coefficient(RID p_body, real_t p_pose_matching_coefficient);
	real_t soft_body_get_pose_matching_coefficient(RID p_body);
	void soft_body_set_damping_coefficient(RID p_body, real_t p_damping_coefficient);
	real_t soft_body_get_damping_coefficient(RID p_body);
	void soft_body_set_drag_coefficient(RID p_body, real_t p_drag_coefficient);
	real_t soft_body_get_drag_coefficient(RID p_body);
	void soft_body_move_point(RID p_body, int p_point_index, const Vector3 &p_global_position);
	Vector3 soft_body_get_point_global_position(RID p_body, int p_point_index);
	Vector3 soft_body_get_point_offset(RID p_body, int p_point_index) const;
	void soft_body_remove_all_pinned_points(RID p_body);
	void soft_body_pin_point(RID p_body, int p_point_index, bool p_pin);
	bool soft_body_is_point_pinned(RID p_body, int p_point_index);

	// JOINT API 
	JointType joint_get_type(RID p_joint) const;
	void joint_set_solver_priority(RID p_joint, int p_priority);
	int joint_get_solver_priority(RID p_joint) const;
	void joint_disable_collisions_between_bodies(RID p_joint, const bool p_disable);
	bool joint_is_disabled_collisions_between_bodies(RID p_joint) const;
	RID joint_create_pin(RID p_body_A, const Vector3 &p_local_A, RID p_body_B, const Vector3 &p_local_B);
	void pin_joint_set_param(RID p_joint, PinJointParam p_param, float p_value);
	float pin_joint_get_param(RID p_joint, PinJointParam p_param) const;
	void pin_joint_set_local_a(RID p_joint, const Vector3 &p_A);
	Vector3 pin_joint_get_local_a(RID p_joint) const;
	void pin_joint_set_local_b(RID p_joint, const Vector3 &p_B);
	Vector3 pin_joint_get_local_b(RID p_joint) const;
	RID joint_create_hinge(RID p_body_A, const Transform &p_hinge_A, RID p_body_B, const Transform &p_hinge_B);
	RID joint_create_hinge_simple(RID p_body_A, const Vector3 &p_pivot_A, const Vector3 &p_axis_A, RID p_body_B, const Vector3 &p_pivot_B, const Vector3 &p_axis_B);
	void hinge_joint_set_param(RID p_joint, HingeJointParam p_param, float p_value);
	float hinge_joint_get_param(RID p_joint, HingeJointParam p_param) const;
	void hinge_joint_set_flag(RID p_joint, HingeJointFlag p_flag, bool p_value);
	bool hinge_joint_get_flag(RID p_joint, HingeJointFlag p_flag) const;
	RID joint_create_slider(RID p_body_A, const Transform &p_local_frame_A, RID p_body_B, const Transform &p_local_frame_B); //reference frame is A
	void slider_joint_set_param(RID p_joint, SliderJointParam p_param, float p_value);
	float slider_joint_get_param(RID p_joint, SliderJointParam p_param) const;
	RID joint_create_cone_twist(RID p_body_A, const Transform &p_local_frame_A, RID p_body_B, const Transform &p_local_frame_B); //reference frame is A
	void cone_twist_joint_set_param(RID p_joint, ConeTwistJointParam p_param, float p_value);
	float cone_twist_joint_get_param(RID p_joint, ConeTwistJointParam p_param) const;
	RID joint_create_generic_6dof(RID p_body_A, const Transform &p_local_frame_A, RID p_body_B, const Transform &p_local_frame_B); //reference frame is A
	void generic_6dof_joint_set_param(RID p_joint, Vector3::Axis, G6DOFJointAxisParam p_param, float p_value);
	float generic_6dof_joint_get_param(RID p_joint, Vector3::Axis, G6DOFJointAxisParam p_param);
	void generic_6dof_joint_set_flag(RID p_joint, Vector3::Axis, G6DOFJointAxisFlag p_flag, bool p_enable);
	bool generic_6dof_joint_get_flag(RID p_joint, Vector3::Axis, G6DOFJointAxisFlag p_flag);
	void generic_6dof_joint_set_precision(RID p_joint, int precision);
	int generic_6dof_joint_get_precision(RID p_joint);

	private:
	Vector<NewtonSpace*> m_activeSpaces;
	mutable RID_PtrOwner<NewtonSpace> m_spaceOwner;
	bool m_active;
};

#endif
