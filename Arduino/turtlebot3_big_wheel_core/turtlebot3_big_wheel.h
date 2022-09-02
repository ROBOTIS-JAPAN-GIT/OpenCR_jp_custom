/*******************************************************************************
* Copyright 2016 ROBOTIS CO., LTD.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

/* Authors: Yoonseok Pyo, Leon Jung, Darby Lim, HanCheol Cho */
/* Modified Date: September 2nd, 2022
   Modified Contents: Addition of multiple parameters for TurtleBot3 Friends (ROBOTIS JAPAN custom model)
   Modified Authors: Masaya Shoji, Koumei Yamashita, Keith Valentin */

#ifndef TURTLEBOT3_BIG_WHEEL_H_
#define TURTLEBOT3_BIG_WHEEL_H_

#define NAME                             "Big Wheel"

#define WHEEL_RADIUS                     0.06225           //  (BURGER : 0.033[m], WAFFLE : 0.033[m], PIZZA : 0.06225[m], BIG_WHEEL : 0.06225[m])
#define WHEEL_SEPARATION                 0.29405           //  (BURGER : 0.160[m], WAFFLE : 0.287[m], PIZZA : 0.46485[m], BIG_WHEEL : 0.29405[m])
#define TURNING_RADIUS                   0.147025          //  (BURGER : 0.080[m], WAFFLE : 0.1435[m], PIZZA : 0.232425[m], BIG_WHEEL : 0.147025[m])
#define ROBOT_RADIUS                     0.220             //  (BURGER : 0.105[m], WAFFLE : 0.220[m], PIZZA : 0.355778[m], BIG_WHEEL : 0.220[m])
#define ROBOT_RPM                        77                //  (BURGER : 61[rpm], WAFFLE : 77[rpm], PIZZA : 53[rpm], BIG_WHEEL : 77[rpm])

#define ENCODER_MIN                      -2147483648     // raw
#define ENCODER_MAX                      2147483648      // raw

#define MAX_LINEAR_VELOCITY              (WHEEL_RADIUS * 2 * 3.14159265359 * ROBOT_RPM / 60)  // [m/s] 
#define MAX_ANGULAR_VELOCITY             (MAX_LINEAR_VELOCITY / TURNING_RADIUS)               // [rad/s]

#define MIN_LINEAR_VELOCITY              -MAX_LINEAR_VELOCITY  
#define MIN_ANGULAR_VELOCITY             -MAX_ANGULAR_VELOCITY 

#endif  //TURTLEBOT3_BIG_WHEEL_H_
