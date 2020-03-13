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

#ifndef NEWTON_SHAPE_H
#define NEWTON_SHAPE_H

#include "newtonRID.h"
#include "servers/physics_server.h"

class NewtonShape: public newtonRID
{
	public:
	NewtonShape();
	virtual ~NewtonShape();

	virtual Variant get_data() const = 0;
	virtual void set_data(const Variant &p_data) = 0;

	protected:
	void notifyShapeChanged();

};

class NewtonShapeRay : public NewtonShape
{
	public:
	NewtonShapeRay()
		:NewtonShape()
		, m_length(0.0f)
		, m_slips_on_slope(false)
	{
	}

	virtual Variant get_data() const;
	virtual void set_data(const Variant& p_data);

	real_t m_length;
	bool m_slips_on_slope;
};


class NewtonShapeBox: public NewtonShape
{
	public:
	NewtonShapeBox()
		:NewtonShape()
		,m_halfExtents(0.1f, 0.1f, 0.1f) 
	{
	}

	virtual Variant get_data() const;
	virtual void set_data(const Variant &p_data);

	Vector3 m_halfExtents;
};

class NewtonShapeCapsule: public NewtonShape
{
	public:
	NewtonShapeCapsule()
		:NewtonShape()
		,m_height(0.25f)
		,m_radius(0.25f)
	{
	}

	virtual Variant get_data() const;
	virtual void set_data(const Variant &p_data);

	real_t m_height;
	real_t m_radius;
};

class NewtonShapeCylinder: public NewtonShape
{
	public:
	NewtonShapeCylinder()
		:NewtonShape()
		,m_height(0.25f)
		,m_radius(0.25f)
	{
	}

	virtual Variant get_data() const;
	virtual void set_data(const Variant &p_data);

	real_t m_height;
	real_t m_radius;
};


class NewtonShapeConcavePolygon: public NewtonShape
{
	public:
	NewtonShapeConcavePolygon()
		:NewtonShape()
	{
	}

	virtual Variant get_data() const;
	virtual void set_data(const Variant& p_data);

	Vector<Vector3> m_vertices;
};

class NewtonShapeHeightMap: public NewtonShape
{
	public:
	NewtonShapeHeightMap()
		:NewtonShape()
	{
	}

	virtual Variant get_data() const;
	virtual void set_data(const Variant& p_data);

	Vector<float> m_heights;
	int m_width;
	int m_depth;
	real_t m_min_height;
	real_t m_max_height;
};


#endif
