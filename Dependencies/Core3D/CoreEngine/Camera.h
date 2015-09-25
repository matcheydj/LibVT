//
//  Camera.h
//  Core3D
//
//  Created by Julian Mayer on 21.11.07.
//  Copyright 2007 - 2010 A. Julian Mayer.
//
/*
This library is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General Public License as published by the Free Software Foundation; either version 3.0 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License along with this library; if not, see <http://www.gnu.org/licenses/> or write to the Free Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
*/

@interface Camera : SceneNode
{
	float fov, nearPlane, farPlane;

	matrix44f_c projectionMatrix;
	matrix44f_c viewMatrix;
	vector<matrix44f_c> modelViewMatrices;
}

@property (assign, nonatomic) float fov;
@property (assign, nonatomic) float nearPlane;
@property (assign, nonatomic) float farPlane;
@property (assign, readonly) matrix44f_c projectionMatrix;
@property (assign, readonly) matrix44f_c viewMatrix;

- (void)updateProjection;


- (matrix44f_c)modelViewMatrix;

- (void)push;
- (void)pop;
- (void)identity;
- (void)translate:(vector3f)tra;
- (void)rotate:(vector3f)rot withConfig:(axisConfigurationEnum)axisRotation;

@end