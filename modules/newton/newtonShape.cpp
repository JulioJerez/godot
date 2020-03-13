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

NewtonShape::NewtonShape() 
	:newtonRID()
{
}

NewtonShape::~NewtonShape()
{
}

void NewtonShape::notifyShapeChanged()
{
//	for (Map<ShapeOwnerBullet *, int>::Element *E = owners.front(); E; E = E->next()) {
//		ShapeOwnerBullet *owner = static_cast<ShapeOwnerBullet *>(E->key());
//		owner->shape_changed(owner->find_shape(this));
//	}
}


void NewtonShapeRay::set_data(const Variant& p_data)
{
	Dictionary d = p_data;
	m_length = d["length"];
	m_slips_on_slope = d["slips_on_slope"];
}

Variant NewtonShapeRay::get_data() const
{
	dAssert(0);
	return Variant();
}

void NewtonShapeBox::set_data(const Variant& p_data)
{
	m_halfExtents = p_data;
}

Variant NewtonShapeBox::get_data() const
{
	dAssert(0);
	return Variant();
}

void NewtonShapeCapsule::set_data(const Variant& p_data)
{
	Dictionary d = p_data;
	m_height = d["height"];
	m_radius = d["radius"];
}

Variant NewtonShapeCapsule::get_data() const
{
	dAssert(0);
	return Variant();
}

void NewtonShapeCylinder::set_data(const Variant& p_data)
{
	Dictionary d = p_data;
	m_height = d["height"];
	m_radius = d["radius"];
}

Variant NewtonShapeCylinder::get_data() const
{
	dAssert(0);
	return Variant();
}


void NewtonShapeConcavePolygon::set_data(const Variant& p_data)
{
	const Vector<Vector3>& p_vertices = p_data;
	m_vertices = p_vertices;
	notifyShapeChanged();
}

Variant NewtonShapeConcavePolygon::get_data() const
{
	return m_vertices;
}

void NewtonShapeHeightMap::set_data(const Variant& p_data)
{
	Dictionary d = p_data;
	ERR_FAIL_COND(!d.has("width"));
	ERR_FAIL_COND(!d.has("depth"));
	ERR_FAIL_COND(!d.has("heights"));

	real_t l_min_height = 0.0f;
	real_t l_max_height = 0.0f;

	if (d.has("min_height"))
		l_min_height = d["min_height"];
	if (d.has("max_height"))
		l_max_height = d["max_height"];

	//ERR_FAIL_COND(l_min_height > l_max_height);

	int l_width = d["width"];
	int l_depth = d["depth"];

	const Variant& l_heights_v = d["heights"];
	if (l_heights_v.get_type() == Variant::PACKED_FLOAT32_ARRAY) {
		// Ready-to-use heights can be passed

		m_heights.resize(l_width * l_depth);
		float* const dst = m_heights.ptrw();

		const Vector<real_t>& data = l_heights_v;
		const real_t* const src = data.ptr();
		for (int i = 0; i < data.size(); ++i) {
			dst[i] = float (src[i]);
		}
	} else {
		dAssert(0);
		ERR_FAIL_MSG("Expected PackedFloat32Array or float Image.");
	}

	ERR_FAIL_COND(l_width <= 0);
	ERR_FAIL_COND(l_depth <= 0);
	ERR_FAIL_COND(m_heights.size() != (l_width * l_depth));

	// Compute min and max heights if not specified.
	if (!d.has("min_height") && !d.has("max_height")) {

		const float* const r = m_heights.ptr();
		int heights_size = m_heights.size();

		for (int i = 0; i < heights_size; ++i) {
			real_t h = r[i];

			if (h < l_min_height) {
				l_min_height = h;
			} else if (h > l_max_height) {
				l_max_height = h;
			}
		}
	}
}

Variant NewtonShapeHeightMap::get_data() const
{
	dAssert(0);
	return Variant();
}
