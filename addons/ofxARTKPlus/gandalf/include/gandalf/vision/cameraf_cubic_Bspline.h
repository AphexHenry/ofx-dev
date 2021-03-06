/**
 * File:          $RCSfile: cameraf_cubic_Bspline.h,v $
 * Module:        Functions for single precision camera defined as a projective warp and a B-spline warp
 * Part of:       Gandalf Library
 *
 * Revision:      $Revision: 1.3 $
 * Last edited:   $Date: 2005/10/03 14:41:27 $
 * Author:        $Author: pm $
 * Copyright:     (c) 2000 Imagineer Systems Limited
 */

/* This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with this library; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#ifndef _GAN_CAMERAF_CUBIC_BSPLINE_H
#define _GAN_CAMERAF_CUBIC_BSPLINE_H

#include <stdio.h>
#include <gandalf/vision/cameraf.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * \addtogroup Vision
 * \{
 */

/**
 * \addtogroup Camera
 * \{
 */

GANDALF_API Gan_Bool gan_cameraf_build_cubic_Bspline ( Gan_Camera_f *camera,
                                                       float zh,
                                                       float fx, float fy,
                                                       float x0, float y0,
                                                       float skew, float kyx,
                                                       float kzx,  float kzy,
                                                       Gan_Vector2_f weight[1 + (1 << GAN_CUBIC_BSPLINE_CAMERA_LEVEL)][1 + (1 << GAN_CUBIC_BSPLINE_CAMERA_LEVEL)],
                                                       Gan_CubicBSplineSupportF* support );

/**
 * \}
 */

/**
 * \}
 */

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _GAN_CAMERAF_CUBIC_BSPLINE_H */
