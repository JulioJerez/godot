/*************************************************************************/
/*  newton_physics_server.cpp                                            */
/*************************************************************************/
/* Copyright (c) 2019-2019 Daniel Rakos <daniel.rakos@rastergrid.com>    */
/* All Rights Reserved.                                                  */
/*                                                                       */
/* Unauthorized copying of this file, via any medium is strictly         */
/* prohibited.                                                           */
/*                                                                       */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,       */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF    */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.*/
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY  */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,  */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE     */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                */
/*************************************************************************/

#include "newton_physics_server.h"

/* SHAPE API */

RID NewtonPhysicsServer::shape_create(ShapeType p_shape) {

	ShapeNewton *shape = nullptr;

	switch (p_shape) {
		case SHAPE_PLANE:
			// NEWTON-TODO: ???
			shape = memnew(PlaneShapeNewton);
			break;

		case SHAPE_RAY:
			// NEWTON-TODO: ???
			shape = memnew(RayShapeNewton);
			break;

		case SHAPE_SPHERE:
			// NEWTON-TODO: NewtonCreateSphere
			shape = memnew(SphereShapeNewton);
			break;

		case SHAPE_BOX:
			// NEWTON-TODO: NewtonCreateBox
			shape = memnew(BoxShapeNewton);
			break;

		case SHAPE_CAPSULE:
			// NEWTON-TODO: NewtonCreateCapsule
			shape = memnew(CapsuleShapeNewton);
			break;

		case SHAPE_CYLINDER:
			// NEWTON-TODO: NewtonCreateCylinder
			shape = memnew(CylinderShapeNewton);
			break;

		case SHAPE_CONVEX_POLYGON:
			// NEWTON-TODO: NewtonCreateConvexHull?
			shape = memnew(ConvexPolygonShapeNewton);
			break;

		case SHAPE_CONCAVE_POLYGON:
			// NEWTON-TODO: NewtonCreateSceneCollision or NewtonCreateTreeCollision?
			shape = memnew(ConcavePolygonShapeNewton);
			break;

		case SHAPE_HEIGHTMAP:
			// NEWTON-TODO: NewtonCreateHeightFieldCollision
			shape = memnew(HeightMapShapeNewton);
			break;

		case SHAPE_CUSTOM:
		default:
			ERR_FAIL_V(RID());
			break;
	}

	RID id = shape_owner.make_rid(shape);

	return id;
}

PhysicsServer::ShapeType NewtonPhysicsServer::shape_get_type(RID p_shape) const {

	const ShapeNewton *shape = shape_owner.get(p_shape);
	ERR_FAIL_COND_V(!shape, SHAPE_CUSTOM);

	ERR_FAIL_V(SHAPE_CUSTOM); // NEWTON-TODO: NewtonCollisionGetType
}

void NewtonPhysicsServer::shape_set_data(RID p_shape, const Variant &p_data) {

	ShapeNewton *shape = shape_owner.get(p_shape);
	ERR_FAIL_COND(!shape);
	shape->set_data(p_data);
}

Variant NewtonPhysicsServer::shape_get_data(RID p_shape) const {

	const ShapeNewton *shape = shape_owner.get(p_shape);
	ERR_FAIL_COND_V(!shape, Variant());

	ERR_FAIL_V(Variant()); // NEWTON-TODO
}

void NewtonPhysicsServer::shape_set_custom_solver_bias(RID p_shape, real_t p_bias) {

	ERR_FAIL(); // NEWTON-TODO (probably no-op)
}

real_t NewtonPhysicsServer::shape_get_custom_solver_bias(RID p_shape) const {

	ERR_FAIL_V(0); // NEWTON-TODO (probably no-op)
}

void NewtonPhysicsServer::shape_set_margin(RID p_shape, real_t p_margin) {
	ERR_FAIL(); // NEWTON-TODO (probably no-op)
}

real_t NewtonPhysicsServer::shape_get_margin(RID p_shape) const {
	ERR_FAIL_V(0); // NEWTON-TODO (probably no-op)
}

/* SPACE API */

RID NewtonPhysicsServer::space_create() {

	ERR_FAIL_V(RID()); // NEWTON-TODO: NewtonCreate?
}

void NewtonPhysicsServer::space_set_active(RID p_space, bool p_active) {

	ERR_FAIL(); // NEWTON-TODO
}

bool NewtonPhysicsServer::space_is_active(RID p_space) const {

	ERR_FAIL_V(false); // NEWTON-TODO
}

void NewtonPhysicsServer::space_set_param(RID p_space, SpaceParameter p_param, real_t p_value) {

	ERR_FAIL(); // NEWTON-TODO
}

real_t NewtonPhysicsServer::space_get_param(RID p_space, SpaceParameter p_param) const {

	ERR_FAIL_V(0); // NEWTON-TODO
}

PhysicsDirectSpaceState *NewtonPhysicsServer::space_get_direct_state(RID p_space) {

	ERR_FAIL_V(nullptr); // NEWTON-TODO
}

void NewtonPhysicsServer::space_set_debug_contacts(RID p_space, int p_max_contacts) {

	ERR_FAIL(); // NEWTON-TODO
}

Vector<Vector3> NewtonPhysicsServer::space_get_contacts(RID p_space) const {

	ERR_FAIL_V(Vector<Vector3>()); // NEWTON-TODO
}

int NewtonPhysicsServer::space_get_contact_count(RID p_space) const {

	ERR_FAIL_V(-1); // NEWTON-TODO
}

/* AREA API */

RID NewtonPhysicsServer::area_create() {

	ERR_FAIL_V(RID()); // NEWTON-TODO: collision with NewtonCollisionSetMode(1)
}

void NewtonPhysicsServer::area_set_space(RID p_area, RID p_space) {

	ERR_FAIL(); // NEWTON-TODO
}

RID NewtonPhysicsServer::area_get_space(RID p_area) const {

	ERR_FAIL_V(RID()); // NEWTON-TODO
}

void NewtonPhysicsServer::area_set_space_override_mode(RID p_area, AreaSpaceOverrideMode p_mode) {

	ERR_FAIL(); // NEWTON-TODO
}

PhysicsServer::AreaSpaceOverrideMode NewtonPhysicsServer::area_get_space_override_mode(RID p_area) const {

	ERR_FAIL_V(AREA_SPACE_OVERRIDE_DISABLED); // NEWTON-TODO
}

void NewtonPhysicsServer::area_add_shape(RID p_area, RID p_shape, const Transform &p_transform) {

	ERR_FAIL(); // NEWTON-TODO
}

void NewtonPhysicsServer::area_set_shape(RID p_area, int p_shape_idx, RID p_shape) {

	ERR_FAIL(); // NEWTON-TODO
}

void NewtonPhysicsServer::area_set_shape_transform(RID p_area, int p_shape_idx, const Transform &p_transform) {

	ERR_FAIL(); // NEWTON-TODO
}

int NewtonPhysicsServer::area_get_shape_count(RID p_area) const {

	ERR_FAIL_V(-1); // NEWTON-TODO
}

RID NewtonPhysicsServer::area_get_shape(RID p_area, int p_shape_idx) const {

	ERR_FAIL_V(RID()); // NEWTON-TODO
}

Transform NewtonPhysicsServer::area_get_shape_transform(RID p_area, int p_shape_idx) const {

	ERR_FAIL_V(Transform()); // NEWTON-TODO
}

void NewtonPhysicsServer::area_remove_shape(RID p_area, int p_shape_idx) {

	ERR_FAIL(); // NEWTON-TODO
}

void NewtonPhysicsServer::area_clear_shapes(RID p_area) {

	ERR_FAIL(); // NEWTON-TODO
}

void NewtonPhysicsServer::area_set_shape_disabled(RID p_area, int p_shape_idx, bool p_disabled) {

	ERR_FAIL(); // NEWTON-TODO
}

void NewtonPhysicsServer::area_attach_object_instance_id(RID p_area, ObjectID p_ID) {

	ERR_FAIL(); // NEWTON-TODO
}

ObjectID NewtonPhysicsServer::area_get_object_instance_id(RID p_area) const {

	ERR_FAIL_V(0); // NEWTON-TODO
}

void NewtonPhysicsServer::area_set_param(RID p_area, AreaParameter p_param, const Variant &p_value) {

	ERR_FAIL(); // NEWTON-TODO
}

void NewtonPhysicsServer::area_set_transform(RID p_area, const Transform &p_transform) {

	ERR_FAIL(); // NEWTON-TODO
}

Variant NewtonPhysicsServer::area_get_param(RID p_area, AreaParameter p_param) const {

	ERR_FAIL_V(Variant()); // NEWTON-TODO
}

Transform NewtonPhysicsServer::area_get_transform(RID p_area) const {

	ERR_FAIL_V(Transform()); // NEWTON-TODO
}

void NewtonPhysicsServer::area_set_collision_layer(RID p_area, uint32_t p_layer) {

	ERR_FAIL(); // NEWTON-TODO: Something with NewtonMaterialSetDefaultCollidable (group IDs as layers)?
}

void NewtonPhysicsServer::area_set_collision_mask(RID p_area, uint32_t p_mask) {

	ERR_FAIL(); // NEWTON-TODO
}

void NewtonPhysicsServer::area_set_monitorable(RID p_area, bool p_monitorable) {

	ERR_FAIL(); // NEWTON-TODO
}

void NewtonPhysicsServer::area_set_monitor_callback(RID p_area, Object *p_receiver, const StringName &p_method) {

	ERR_FAIL(); // NEWTON-TODO
}

void NewtonPhysicsServer::area_set_area_monitor_callback(RID p_area, Object *p_receiver, const StringName &p_method) {

	ERR_FAIL(); // NEWTON-TODO
}

void NewtonPhysicsServer::area_set_ray_pickable(RID p_area, bool p_enable) {

	ERR_FAIL(); // NEWTON-TODO
}

bool NewtonPhysicsServer::area_is_ray_pickable(RID p_area) const {

	ERR_FAIL_V(false); // NEWTON-TODO
}

/* BODY API */

RID NewtonPhysicsServer::body_create(BodyMode p_mode, bool p_init_sleeping) {

	ERR_FAIL_V(RID()); // NEWTON-TODO
}

void NewtonPhysicsServer::body_set_space(RID p_body, RID p_space) {

	ERR_FAIL(); // NEWTON-TODO
}

RID NewtonPhysicsServer::body_get_space(RID p_body) const {

	ERR_FAIL_V(RID()); // NEWTON-TODO
}

void NewtonPhysicsServer::body_set_mode(RID p_body, BodyMode p_mode) {

	ERR_FAIL(); // NEWTON-TODO
}

PhysicsServer::BodyMode NewtonPhysicsServer::body_get_mode(RID p_body) const {

	ERR_FAIL_V(BODY_MODE_STATIC); // NEWTON-TODO
}

void NewtonPhysicsServer::body_add_shape(RID p_body, RID p_shape, const Transform &p_transform) {

	ERR_FAIL(); // NEWTON-TODO
}

void NewtonPhysicsServer::body_set_shape(RID p_body, int p_shape_idx, RID p_shape) {

	ERR_FAIL(); // NEWTON-TODO
}

void NewtonPhysicsServer::body_set_shape_transform(RID p_body, int p_shape_idx, const Transform &p_transform) {

	ERR_FAIL(); // NEWTON-TODO
}

int NewtonPhysicsServer::body_get_shape_count(RID p_body) const {

	ERR_FAIL_V(-1); // NEWTON-TODO
}

RID NewtonPhysicsServer::body_get_shape(RID p_body, int p_shape_idx) const {

	ERR_FAIL_V(RID()); // NEWTON-TODO
}

Transform NewtonPhysicsServer::body_get_shape_transform(RID p_body, int p_shape_idx) const {

	ERR_FAIL_V(Transform()); // NEWTON-TODO
}

void NewtonPhysicsServer::body_set_shape_disabled(RID p_body, int p_shape_idx, bool p_disabled) {

	ERR_FAIL(); // NEWTON-TODO
}

void NewtonPhysicsServer::body_remove_shape(RID p_body, int p_shape_idx) {

	ERR_FAIL(); // NEWTON-TODO
}

void NewtonPhysicsServer::body_clear_shapes(RID p_body) {

	ERR_FAIL(); // NEWTON-TODO
}

void NewtonPhysicsServer::body_set_enable_continuous_collision_detection(RID p_body, bool p_enable) {

	ERR_FAIL(); // NEWTON-TODO
}

bool NewtonPhysicsServer::body_is_continuous_collision_detection_enabled(RID p_body) const {

	ERR_FAIL_V(false); // NEWTON-TODO
}

void NewtonPhysicsServer::body_set_collision_layer(RID p_body, uint32_t p_layer) {

	ERR_FAIL(); // NEWTON-TODO
}

uint32_t NewtonPhysicsServer::body_get_collision_layer(RID p_body) const {

	ERR_FAIL_V(0); // NEWTON-TODO
}

void NewtonPhysicsServer::body_set_collision_mask(RID p_body, uint32_t p_mask) {

	ERR_FAIL(); // NEWTON-TODO
}

uint32_t NewtonPhysicsServer::body_get_collision_mask(RID p_body) const {

	ERR_FAIL_V(0); // NEWTON-TODO
}

void NewtonPhysicsServer::body_attach_object_instance_id(RID p_body, uint32_t p_ID) {

	ERR_FAIL(); // NEWTON-TODO
}

uint32_t NewtonPhysicsServer::body_get_object_instance_id(RID p_body) const {

	ERR_FAIL_V(0); // NEWTON-TODO
}

void NewtonPhysicsServer::body_set_user_flags(RID p_body, uint32_t p_flags) {

	ERR_FAIL(); // NEWTON-TODO
}

uint32_t NewtonPhysicsServer::body_get_user_flags(RID p_body) const {

	ERR_FAIL_V(0); // NEWTON-TODO
}

void NewtonPhysicsServer::body_set_param(RID p_body, BodyParameter p_param, real_t p_value) {

	ERR_FAIL(); // NEWTON-TODO
}

real_t NewtonPhysicsServer::body_get_param(RID p_body, BodyParameter p_param) const {

	ERR_FAIL_V(0); // NEWTON-TODO
}

void NewtonPhysicsServer::body_set_kinematic_safe_margin(RID p_body, real_t p_margin) {

	ERR_FAIL(); // NEWTON-TODO
}

real_t NewtonPhysicsServer::body_get_kinematic_safe_margin(RID p_body) const {

	ERR_FAIL_V(0); // NEWTON-TODO
}

void NewtonPhysicsServer::body_set_state(RID p_body, BodyState p_state, const Variant &p_variant) {

	ERR_FAIL(); // NEWTON-TODO
}

Variant NewtonPhysicsServer::body_get_state(RID p_body, BodyState p_state) const {

	ERR_FAIL_V(Variant()); // NEWTON-TODO
}

void NewtonPhysicsServer::body_set_applied_force(RID p_body, const Vector3 &p_force) {

	ERR_FAIL(); // NEWTON-TODO
}

Vector3 NewtonPhysicsServer::body_get_applied_force(RID p_body) const {

	ERR_FAIL_V(Vector3()); // NEWTON-TODO
}

void NewtonPhysicsServer::body_set_applied_torque(RID p_body, const Vector3 &p_torque) {

	ERR_FAIL(); // NEWTON-TODO
}

Vector3 NewtonPhysicsServer::body_get_applied_torque(RID p_body) const {

	ERR_FAIL_V(Vector3()); // NEWTON-TODO
}

void NewtonPhysicsServer::body_add_central_force(RID p_body, const Vector3 &p_force) {

	ERR_FAIL(); // NEWTON-TODO
}

void NewtonPhysicsServer::body_add_force(RID p_body, const Vector3 &p_force, const Vector3 &p_pos) {

	ERR_FAIL(); // NEWTON-TODO
}

void NewtonPhysicsServer::body_add_torque(RID p_body, const Vector3 &p_torque) {

	ERR_FAIL(); // NEWTON-TODO
}

void NewtonPhysicsServer::body_apply_central_impulse(RID p_body, const Vector3 &p_impulse) {

	ERR_FAIL(); // NEWTON-TODO
}

void NewtonPhysicsServer::body_apply_impulse(RID p_body, const Vector3 &p_pos, const Vector3 &p_impulse) {

	ERR_FAIL(); // NEWTON-TODO
}

void NewtonPhysicsServer::body_apply_torque_impulse(RID p_body, const Vector3 &p_impulse) {

	ERR_FAIL(); // NEWTON-TODO
}

void NewtonPhysicsServer::body_set_axis_velocity(RID p_body, const Vector3 &p_axis_velocity) {

	ERR_FAIL(); // NEWTON-TODO
}

void NewtonPhysicsServer::body_set_axis_lock(RID p_body, BodyAxis p_axis, bool p_lock) {

	ERR_FAIL(); // NEWTON-TODO
}

bool NewtonPhysicsServer::body_is_axis_locked(RID p_body, BodyAxis p_axis) const {

	ERR_FAIL_V(false); // NEWTON-TODO
}

void NewtonPhysicsServer::body_add_collision_exception(RID p_body, RID p_body_b) {

	ERR_FAIL(); // NEWTON-TODO
}

void NewtonPhysicsServer::body_remove_collision_exception(RID p_body, RID p_body_b) {

	ERR_FAIL(); // NEWTON-TODO
}

void NewtonPhysicsServer::body_get_collision_exceptions(RID p_body, List<RID> *p_exceptions) {

	ERR_FAIL(); // NEWTON-TODO
}

void NewtonPhysicsServer::body_set_max_contacts_reported(RID p_body, int p_contacts) {

	ERR_FAIL(); // NEWTON-TODO
}

int NewtonPhysicsServer::body_get_max_contacts_reported(RID p_body) const {

	ERR_FAIL_V(-1); // NEWTON-TODO
}

void NewtonPhysicsServer::body_set_contacts_reported_depth_threshold(RID p_body, real_t p_threshold) {

	ERR_FAIL(); // NEWTON-TODO
}

real_t NewtonPhysicsServer::body_get_contacts_reported_depth_threshold(RID p_body) const {

	ERR_FAIL_V(0); // NEWTON-TODO
}

void NewtonPhysicsServer::body_set_omit_force_integration(RID p_body, bool p_omit) {

	ERR_FAIL(); // NEWTON-TODO
}

bool NewtonPhysicsServer::body_is_omitting_force_integration(RID p_body) const {

	ERR_FAIL_V(false); // NEWTON-TODO
}

void NewtonPhysicsServer::body_set_force_integration_callback(RID p_body, Object *p_receiver, const StringName &p_method, const Variant &p_udata) {

	ERR_FAIL(); // NEWTON-TODO
}

void NewtonPhysicsServer::body_set_ray_pickable(RID p_body, bool p_enable) {

	ERR_FAIL(); // NEWTON-TODO
}

bool NewtonPhysicsServer::body_is_ray_pickable(RID p_body) const {

	ERR_FAIL_V(false); // NEWTON-TODO
}

bool NewtonPhysicsServer::body_test_motion(RID p_body, const Transform &p_from, const Vector3 &p_motion, bool p_infinite_inertia, MotionResult *r_result, bool p_exclude_raycast_shapes) {

	ERR_FAIL_V(false); // NEWTON-TODO
}

int NewtonPhysicsServer::body_test_ray_separation(RID p_body, const Transform &p_transform, bool p_infinite_inertia, Vector3 &r_recover_motion, SeparationResult *r_results, int p_result_max, float p_margin) {

	ERR_FAIL_V(0); // NEWTON-TODO
}

PhysicsDirectBodyState *NewtonPhysicsServer::body_get_direct_state(RID p_body) {

	ERR_FAIL_V(nullptr); // NEWTON-TODO
}

/* SOFT BODY API */

RID NewtonPhysicsServer::soft_body_create(bool p_init_sleeping) {

	ERR_FAIL_V(RID()); // NEWTON-TODO
}

void NewtonPhysicsServer::soft_body_update_visual_server(RID p_body, class SoftBodyVisualServerHandler *p_visual_server_handler) {

	ERR_FAIL(); // NEWTON-TODO
}

void NewtonPhysicsServer::soft_body_set_space(RID p_body, RID p_space) {

	ERR_FAIL(); // NEWTON-TODO
}

RID NewtonPhysicsServer::soft_body_get_space(RID p_body) const {

	ERR_FAIL_V(RID()); // NEWTON-TODO
}

void NewtonPhysicsServer::soft_body_set_mesh(RID p_body, const REF &p_mesh) {

	ERR_FAIL(); // NEWTON-TODO
}

void NewtonPhysicsServer::soft_body_set_collision_layer(RID p_body, uint32_t p_layer) {

	ERR_FAIL(); // NEWTON-TODO
}

uint32_t NewtonPhysicsServer::soft_body_get_collision_layer(RID p_body) const {

	ERR_FAIL_V(0); // NEWTON-TODO
}

void NewtonPhysicsServer::soft_body_set_collision_mask(RID p_body, uint32_t p_layer) {

	ERR_FAIL(); // NEWTON-TODO
}

uint32_t NewtonPhysicsServer::soft_body_get_collision_mask(RID p_body) const {

	ERR_FAIL_V(0); // NEWTON-TODO
}

void NewtonPhysicsServer::soft_body_add_collision_exception(RID p_body, RID p_body_b) {

	ERR_FAIL(); // NEWTON-TODO
}

void NewtonPhysicsServer::soft_body_remove_collision_exception(RID p_body, RID p_body_b) {

	ERR_FAIL(); // NEWTON-TODO
}

void NewtonPhysicsServer::soft_body_get_collision_exceptions(RID p_body, List<RID> *p_exceptions) {

	ERR_FAIL(); // NEWTON-TODO
}

void NewtonPhysicsServer::soft_body_set_state(RID p_body, BodyState p_state, const Variant &p_variant) {

	ERR_FAIL(); // NEWTON-TODO
}

Variant NewtonPhysicsServer::soft_body_get_state(RID p_body, BodyState p_state) const {

	ERR_FAIL_V(Variant()); // NEWTON-TODO
}

void NewtonPhysicsServer::soft_body_set_transform(RID p_body, const Transform &p_transform) {

	ERR_FAIL(); // NEWTON-TODO
}

Vector3 NewtonPhysicsServer::soft_body_get_vertex_position(RID p_body, int vertex_index) const {

	ERR_FAIL_V(Vector3()); // NEWTON-TODO
}

void NewtonPhysicsServer::soft_body_set_ray_pickable(RID p_body, bool p_enable) {

	ERR_FAIL(); // NEWTON-TODO
}

bool NewtonPhysicsServer::soft_body_is_ray_pickable(RID p_body) const {

	ERR_FAIL_V(false); // NEWTON-TODO
}

void NewtonPhysicsServer::soft_body_set_simulation_precision(RID p_body, int p_simulation_precision) {

	ERR_FAIL(); // NEWTON-TODO
}

int NewtonPhysicsServer::soft_body_get_simulation_precision(RID p_body) {

	ERR_FAIL_V(0); // NEWTON-TODO
}

void NewtonPhysicsServer::soft_body_set_total_mass(RID p_body, real_t p_total_mass) {

	ERR_FAIL(); // NEWTON-TODO
}

real_t NewtonPhysicsServer::soft_body_get_total_mass(RID p_body) {

	ERR_FAIL_V(0); // NEWTON-TODO
}

void NewtonPhysicsServer::soft_body_set_linear_stiffness(RID p_body, real_t p_stiffness) {

	ERR_FAIL(); // NEWTON-TODO
}

real_t NewtonPhysicsServer::soft_body_get_linear_stiffness(RID p_body) {

	ERR_FAIL_V(0); // NEWTON-TODO
}

void NewtonPhysicsServer::soft_body_set_areaAngular_stiffness(RID p_body, real_t p_stiffness) {

	ERR_FAIL(); // NEWTON-TODO
}

real_t NewtonPhysicsServer::soft_body_get_areaAngular_stiffness(RID p_body) {

	ERR_FAIL_V(0); // NEWTON-TODO
}

void NewtonPhysicsServer::soft_body_set_volume_stiffness(RID p_body, real_t p_stiffness) {

	ERR_FAIL(); // NEWTON-TODO
}

real_t NewtonPhysicsServer::soft_body_get_volume_stiffness(RID p_body) {

	ERR_FAIL_V(0); // NEWTON-TODO
}

void NewtonPhysicsServer::soft_body_set_pressure_coefficient(RID p_body, real_t p_pressure_coefficient) {

	ERR_FAIL(); // NEWTON-TODO
}

real_t NewtonPhysicsServer::soft_body_get_pressure_coefficient(RID p_body) {

	ERR_FAIL_V(0); // NEWTON-TODO
}

void NewtonPhysicsServer::soft_body_set_pose_matching_coefficient(RID p_body, real_t p_pose_matching_coefficient) {

	ERR_FAIL(); // NEWTON-TODO
}

real_t NewtonPhysicsServer::soft_body_get_pose_matching_coefficient(RID p_body) {

	ERR_FAIL_V(0); // NEWTON-TODO
}

void NewtonPhysicsServer::soft_body_set_damping_coefficient(RID p_body, real_t p_damping_coefficient) {

	ERR_FAIL(); // NEWTON-TODO
}

real_t NewtonPhysicsServer::soft_body_get_damping_coefficient(RID p_body) {

	ERR_FAIL_V(0); // NEWTON-TODO
}

void NewtonPhysicsServer::soft_body_set_drag_coefficient(RID p_body, real_t p_drag_coefficient) {

	ERR_FAIL(); // NEWTON-TODO
}

real_t NewtonPhysicsServer::soft_body_get_drag_coefficient(RID p_body) {

	ERR_FAIL_V(0); // NEWTON-TODO
}

void NewtonPhysicsServer::soft_body_move_point(RID p_body, int p_point_index, const Vector3 &p_global_position) {

	ERR_FAIL(); // NEWTON-TODO
}

Vector3 NewtonPhysicsServer::soft_body_get_point_global_position(RID p_body, int p_point_index) {

	ERR_FAIL_V(Vector3()); // NEWTON-TODO
}

Vector3 NewtonPhysicsServer::soft_body_get_point_offset(RID p_body, int p_point_index) const {

	ERR_FAIL_V(Vector3()); // NEWTON-TODO
}

void NewtonPhysicsServer::soft_body_remove_all_pinned_points(RID p_body) {

	ERR_FAIL(); // NEWTON-TODO
}

void NewtonPhysicsServer::soft_body_pin_point(RID p_body, int p_point_index, bool p_pin) {

	ERR_FAIL(); // NEWTON-TODO
}

bool NewtonPhysicsServer::soft_body_is_point_pinned(RID p_body, int p_point_index) {

	ERR_FAIL_V(false); // NEWTON-TODO
}

/* JOINT API */

PhysicsServer::JointType NewtonPhysicsServer::joint_get_type(RID p_joint) const {

	ERR_FAIL_V(JOINT_PIN); // NEWTON-TODO
}

void NewtonPhysicsServer::joint_set_solver_priority(RID p_joint, int p_priority) {

	ERR_FAIL(); // NEWTON-TODO
}

int NewtonPhysicsServer::joint_get_solver_priority(RID p_joint) const {

	ERR_FAIL_V(0); // NEWTON-TODO
}

void NewtonPhysicsServer::joint_disable_collisions_between_bodies(RID p_joint, const bool p_disable) {

	ERR_FAIL(); // NEWTON-TODO
}

bool NewtonPhysicsServer::joint_is_disabled_collisions_between_bodies(RID p_joint) const {

	ERR_FAIL_V(true); // NEWTON-TODO
}

RID NewtonPhysicsServer::joint_create_pin(RID p_body_A, const Vector3 &p_local_A, RID p_body_B, const Vector3 &p_local_B) {

	ERR_FAIL_V(RID()); // NEWTON-TODO
}

void NewtonPhysicsServer::pin_joint_set_param(RID p_joint, PinJointParam p_param, real_t p_value) {

	ERR_FAIL(); // NEWTON-TODO
}

real_t NewtonPhysicsServer::pin_joint_get_param(RID p_joint, PinJointParam p_param) const {

	ERR_FAIL_V(0); // NEWTON-TODO
}

void NewtonPhysicsServer::pin_joint_set_local_a(RID p_joint, const Vector3 &p_A) {

	ERR_FAIL(); // NEWTON-TODO
}

Vector3 NewtonPhysicsServer::pin_joint_get_local_a(RID p_joint) const {

	ERR_FAIL_V(Vector3()); // NEWTON-TODO
}

void NewtonPhysicsServer::pin_joint_set_local_b(RID p_joint, const Vector3 &p_B) {

	ERR_FAIL(); // NEWTON-TODO
}

Vector3 NewtonPhysicsServer::pin_joint_get_local_b(RID p_joint) const {

	ERR_FAIL_V(Vector3()); // NEWTON-TODO
}

RID NewtonPhysicsServer::joint_create_hinge(RID p_body_A, const Transform &p_frame_A, RID p_body_B, const Transform &p_frame_B) {

	ERR_FAIL_V(RID()); // NEWTON-TODO
}

RID NewtonPhysicsServer::joint_create_hinge_simple(RID p_body_A, const Vector3 &p_pivot_A, const Vector3 &p_axis_A, RID p_body_B, const Vector3 &p_pivot_B, const Vector3 &p_axis_B) {

	ERR_FAIL_V(RID()); // NEWTON-TODO
}

void NewtonPhysicsServer::hinge_joint_set_param(RID p_joint, HingeJointParam p_param, real_t p_value) {

	ERR_FAIL(); // NEWTON-TODO
}

real_t NewtonPhysicsServer::hinge_joint_get_param(RID p_joint, HingeJointParam p_param) const {

	ERR_FAIL_V(0); // NEWTON-TODO
}

void NewtonPhysicsServer::hinge_joint_set_flag(RID p_joint, HingeJointFlag p_flag, bool p_value) {

	ERR_FAIL(); // NEWTON-TODO
}

bool NewtonPhysicsServer::hinge_joint_get_flag(RID p_joint, HingeJointFlag p_flag) const {

	ERR_FAIL_V(false); // NEWTON-TODO
}

RID NewtonPhysicsServer::joint_create_slider(RID p_body_A, const Transform &p_local_frame_A, RID p_body_B, const Transform &p_local_frame_B) {

	ERR_FAIL_V(RID()); // NEWTON-TODO
}

void NewtonPhysicsServer::slider_joint_set_param(RID p_joint, SliderJointParam p_param, real_t p_value) {

	ERR_FAIL(); // NEWTON-TODO
}

real_t NewtonPhysicsServer::slider_joint_get_param(RID p_joint, SliderJointParam p_param) const {

	ERR_FAIL_V(0); // NEWTON-TODO
}

RID NewtonPhysicsServer::joint_create_cone_twist(RID p_body_A, const Transform &p_local_frame_A, RID p_body_B, const Transform &p_local_frame_B) {

	ERR_FAIL_V(RID()); // NEWTON-TODO
}

void NewtonPhysicsServer::cone_twist_joint_set_param(RID p_joint, ConeTwistJointParam p_param, real_t p_value) {

	ERR_FAIL(); // NEWTON-TODO
}

real_t NewtonPhysicsServer::cone_twist_joint_get_param(RID p_joint, ConeTwistJointParam p_param) const {

	ERR_FAIL_V(0); // NEWTON-TODO
}

RID NewtonPhysicsServer::joint_create_generic_6dof(RID p_body_A, const Transform &p_local_frame_A, RID p_body_B, const Transform &p_local_frame_B) {

	ERR_FAIL_V(RID()); // NEWTON-TODO
}

void NewtonPhysicsServer::generic_6dof_joint_set_param(RID p_joint, Vector3::Axis p_axis, G6DOFJointAxisParam p_param, real_t p_value) {

	ERR_FAIL(); // NEWTON-TODO
}

real_t NewtonPhysicsServer::generic_6dof_joint_get_param(RID p_joint, Vector3::Axis p_axis, G6DOFJointAxisParam p_param) {

	ERR_FAIL_V(0); // NEWTON-TODO
}

void NewtonPhysicsServer::generic_6dof_joint_set_flag(RID p_joint, Vector3::Axis p_axis, G6DOFJointAxisFlag p_flag, bool p_enable) {

	ERR_FAIL(); // NEWTON-TODO
}

bool NewtonPhysicsServer::generic_6dof_joint_get_flag(RID p_joint, Vector3::Axis p_axis, G6DOFJointAxisFlag p_flag) {

	ERR_FAIL_V(false); // NEWTON-TODO
}

void NewtonPhysicsServer::generic_6dof_joint_set_precision(RID p_joint, int precision) {

	ERR_FAIL(); // NEWTON-TODO
}

int NewtonPhysicsServer::generic_6dof_joint_get_precision(RID p_joint) {

	ERR_FAIL_V(0); // NEWTON-TODO
}

/* MISC */

void NewtonPhysicsServer::free(RID p_rid) {

	ERR_FAIL(); // NEWTON-TODO
};

void NewtonPhysicsServer::set_active(bool p_active) {

	ERR_FAIL(); // NEWTON-TODO
};

void NewtonPhysicsServer::init() {

	ERR_FAIL(); // NEWTON-TODO
};

void NewtonPhysicsServer::step(real_t p_step) {

	ERR_FAIL(); // NEWTON-TODO
}

void NewtonPhysicsServer::sync(){

	ERR_FAIL(); // NEWTON-TODO
};

void NewtonPhysicsServer::flush_queries() {

	ERR_FAIL(); // NEWTON-TODO
};

void NewtonPhysicsServer::finish() {

	ERR_FAIL(); // NEWTON-TODO
};

bool NewtonPhysicsServer::is_flushing_queries() const {

	ERR_FAIL_V(false); // NEWTON-TODO
}

int NewtonPhysicsServer::get_process_info(ProcessInfo p_info) {

	ERR_FAIL_V(0); // NEWTON-TODO
}

NewtonPhysicsServer::NewtonPhysicsServer() {

}

NewtonPhysicsServer::~NewtonPhysicsServer() {

}
