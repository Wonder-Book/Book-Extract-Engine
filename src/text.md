# explain why need engine

# border

engine:
1.init
2.exec user logic before loop
3.loop


extract data:
use state to store data
provide api for user to operate it


/*
package engine to one dist file;
import it in html page;
*/


## user logic
1.device logic
2.shader logic
3.add gameObject logic
4.set camera data


## identify Model
User



Data:
state


View:
canvas


Director:
init
    (分析：为什么传入canvas id, context param 参数，而不是设置到state上!)


loop:
    extract Render:
        opt: create vbo firstly when render instead of when Director->init




GameObject:
Transform
Geometry
Material:
    one material->one shader



Shader:
GLSL
Program



Camera:
vMatrix
pMatrix


DeviceManager



Utils:
Vector3
Matrix
Error
Immutable/MutableHashMap
...


////# begin move logic from demo->Main to engine

