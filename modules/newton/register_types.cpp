/*************************************************************************/
/*  register_types.cpp                                                   */
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

#include "register_types.h"

#include "newton_physics_server.h"
#include "core/class_db.h"
#include "core/project_settings.h"

#ifndef _3D_DISABLED
PhysicsServer *_createNewtonPhysicsCallback() {
	return memnew(NewtonPhysicsServer);
}
#endif

void register_newton_types() {
#ifndef _3D_DISABLED
	PhysicsServerManager::register_server("Newton Dynamics", &_createNewtonPhysicsCallback);
#endif
}

void unregister_newton_types() {
}
