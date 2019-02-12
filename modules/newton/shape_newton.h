/*************************************************************************/
/*  shape_newton.h                                                       */
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

#ifndef SHAPE_NEWTON_H
#define SHAPE_NEWTON_H

#include "servers/physics_server.h"

class ShapeNewton : public RID_Data {
public:
	virtual void set_data(const Variant &p_data) = 0;
};

class ConcaveShapeNewton : public ShapeNewton {

};

class PlaneShapeNewton : public ShapeNewton {
public:
	virtual void set_data(const Variant &p_data) override;
};

class RayShapeNewton : public ShapeNewton {
public:
	virtual void set_data(const Variant &p_data) override;
};

class SphereShapeNewton : public ShapeNewton {
public:
	virtual void set_data(const Variant &p_data) override;
};

class BoxShapeNewton : public ShapeNewton {
public:
	virtual void set_data(const Variant &p_data) override;
};

class CapsuleShapeNewton : public ShapeNewton {
public:
	virtual void set_data(const Variant &p_data) override;
};

class CylinderShapeNewton : public ShapeNewton {
public:
	virtual void set_data(const Variant &p_data) override;
};

class ConvexPolygonShapeNewton : public ShapeNewton {
public:
	virtual void set_data(const Variant &p_data) override;
};

class ConcavePolygonShapeNewton : public ConcaveShapeNewton {
public:
	virtual void set_data(const Variant &p_data) override;
};

class HeightMapShapeNewton : public ConcaveShapeNewton {
public:
	virtual void set_data(const Variant &p_data) override;
};

#endif
