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

	virtual void set_data(const Variant &p_data) = 0;

	private:
};


class NewtonShapeBox: public NewtonShape
{
	public:
	NewtonShapeBox()
		:NewtonShape()
		,m_halfExtents(0.1f, 0.1f, 0.1f) 
	{
	}

	virtual void set_data(const Variant &p_data);

	Vector3 m_halfExtents;
};



class NewtonShapeRay: public NewtonShape
{
	public:
	NewtonShapeRay()
		:NewtonShape()
		,m_length(0.0f)
		,m_slips_on_slope(false)
	{
	}

	virtual void set_data(const Variant& p_data);

	real_t m_length;
	bool m_slips_on_slope;
};

#endif
