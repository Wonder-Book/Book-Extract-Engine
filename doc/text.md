# explain why need engine

# border

engine:
1.init
2.exec user logic before loop
3.loop


extract data:
use state to store data
provide api for user to operate it



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





## use engine

- use by import es6 module
    - use reason
    - use js



- use single engine js

1.extract api
2.generate index
move to npm(e.g. wonder-generate-index)
3.package engine to one dist file;
4.import it in html page;
5.invoke api to run