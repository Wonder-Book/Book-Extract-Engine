(function webpackUniversalModuleDefinition(root, factory) {
	if(typeof exports === 'object' && typeof module === 'object')
		module.exports = factory();
	else if(typeof define === 'function' && define.amd)
		define([], factory);
	else if(typeof exports === 'object')
		exports["wd"] = factory();
	else
		root["wd"] = factory();
})(window, function() {
return /******/ (function(modules) { // webpackBootstrap
/******/ 	// The module cache
/******/ 	var installedModules = {};
/******/
/******/ 	// The require function
/******/ 	function __webpack_require__(moduleId) {
/******/
/******/ 		// Check if module is in cache
/******/ 		if(installedModules[moduleId]) {
/******/ 			return installedModules[moduleId].exports;
/******/ 		}
/******/ 		// Create a new module (and put it into the cache)
/******/ 		var module = installedModules[moduleId] = {
/******/ 			i: moduleId,
/******/ 			l: false,
/******/ 			exports: {}
/******/ 		};
/******/
/******/ 		// Execute the module function
/******/ 		modules[moduleId].call(module.exports, module, module.exports, __webpack_require__);
/******/
/******/ 		// Flag the module as loaded
/******/ 		module.l = true;
/******/
/******/ 		// Return the exports of the module
/******/ 		return module.exports;
/******/ 	}
/******/
/******/
/******/ 	// expose the modules object (__webpack_modules__)
/******/ 	__webpack_require__.m = modules;
/******/
/******/ 	// expose the module cache
/******/ 	__webpack_require__.c = installedModules;
/******/
/******/ 	// define getter function for harmony exports
/******/ 	__webpack_require__.d = function(exports, name, getter) {
/******/ 		if(!__webpack_require__.o(exports, name)) {
/******/ 			Object.defineProperty(exports, name, { enumerable: true, get: getter });
/******/ 		}
/******/ 	};
/******/
/******/ 	// define __esModule on exports
/******/ 	__webpack_require__.r = function(exports) {
/******/ 		if(typeof Symbol !== 'undefined' && Symbol.toStringTag) {
/******/ 			Object.defineProperty(exports, Symbol.toStringTag, { value: 'Module' });
/******/ 		}
/******/ 		Object.defineProperty(exports, '__esModule', { value: true });
/******/ 	};
/******/
/******/ 	// create a fake namespace object
/******/ 	// mode & 1: value is a module id, require it
/******/ 	// mode & 2: merge all properties of value into the ns
/******/ 	// mode & 4: return value when already ns object
/******/ 	// mode & 8|1: behave like require
/******/ 	__webpack_require__.t = function(value, mode) {
/******/ 		if(mode & 1) value = __webpack_require__(value);
/******/ 		if(mode & 8) return value;
/******/ 		if((mode & 4) && typeof value === 'object' && value && value.__esModule) return value;
/******/ 		var ns = Object.create(null);
/******/ 		__webpack_require__.r(ns);
/******/ 		Object.defineProperty(ns, 'default', { enumerable: true, value: value });
/******/ 		if(mode & 2 && typeof value != 'string') for(var key in value) __webpack_require__.d(ns, key, function(key) { return value[key]; }.bind(null, key));
/******/ 		return ns;
/******/ 	};
/******/
/******/ 	// getDefaultExport function for compatibility with non-harmony modules
/******/ 	__webpack_require__.n = function(module) {
/******/ 		var getter = module && module.__esModule ?
/******/ 			function getDefault() { return module['default']; } :
/******/ 			function getModuleExports() { return module; };
/******/ 		__webpack_require__.d(getter, 'a', getter);
/******/ 		return getter;
/******/ 	};
/******/
/******/ 	// Object.prototype.hasOwnProperty.call
/******/ 	__webpack_require__.o = function(object, property) { return Object.prototype.hasOwnProperty.call(object, property); };
/******/
/******/ 	// __webpack_public_path__
/******/ 	__webpack_require__.p = "";
/******/
/******/
/******/ 	// Load entry module and return exports
/******/ 	return __webpack_require__(__webpack_require__.s = "./lib/es6_global/src/Index.js");
/******/ })
/************************************************************************/
/******/ ({

/***/ "./lib/es6_global/src/Camera.js":
/*!**************************************!*\
  !*** ./lib/es6_global/src/Camera.js ***!
  \**************************************/
/*! exports provided: createCameraData, unsafeGetVMatrix, unsafeGetPMatrix */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
eval("__webpack_require__.r(__webpack_exports__);\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"createCameraData\", function() { return createCameraData; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"unsafeGetVMatrix\", function() { return unsafeGetVMatrix; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"unsafeGetPMatrix\", function() { return unsafeGetPMatrix; });\n/* harmony import */ var _utils_Option_js__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! ./utils/Option.js */ \"./lib/es6_global/src/utils/Option.js\");\n\n\n\n\nfunction createCameraData(param) {\n  return /* record */[\n          /* vMatrix */undefined,\n          /* pMatrix */undefined\n        ];\n}\n\nfunction unsafeGetVMatrix(state) {\n  return _utils_Option_js__WEBPACK_IMPORTED_MODULE_0__[\"unsafeGet\"](state[/* cameraData */4][/* vMatrix */0]);\n}\n\nfunction unsafeGetPMatrix(state) {\n  return _utils_Option_js__WEBPACK_IMPORTED_MODULE_0__[\"unsafeGet\"](state[/* cameraData */4][/* pMatrix */1]);\n}\n\n\n/* No side effect */\n\n\n//# sourceURL=webpack://wd/./lib/es6_global/src/Camera.js?");

/***/ }),

/***/ "./lib/es6_global/src/Data.js":
/*!************************************!*\
  !*** ./lib/es6_global/src/Data.js ***!
  \************************************/
/*! exports provided: stateData, getStateData, unsafeGetState, createState, setState */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
eval("__webpack_require__.r(__webpack_exports__);\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"stateData\", function() { return stateData; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"getStateData\", function() { return getStateData; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"unsafeGetState\", function() { return unsafeGetState; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"createState\", function() { return createState; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"setState\", function() { return setState; });\n/* harmony import */ var _View_js__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! ./View.js */ \"./lib/es6_global/src/View.js\");\n/* harmony import */ var _Camera_js__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! ./Camera.js */ \"./lib/es6_global/src/Camera.js\");\n/* harmony import */ var _utils_Option_js__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! ./utils/Option.js */ \"./lib/es6_global/src/utils/Option.js\");\n/* harmony import */ var _Shader_js__WEBPACK_IMPORTED_MODULE_3__ = __webpack_require__(/*! ./Shader.js */ \"./lib/es6_global/src/Shader.js\");\n/* harmony import */ var _GameObject_js__WEBPACK_IMPORTED_MODULE_4__ = __webpack_require__(/*! ./GameObject.js */ \"./lib/es6_global/src/GameObject.js\");\n/* harmony import */ var _DeviceManager_js__WEBPACK_IMPORTED_MODULE_5__ = __webpack_require__(/*! ./DeviceManager.js */ \"./lib/es6_global/src/DeviceManager.js\");\n\n\n\n\n\n\n\n\n\nvar stateData = /* record */[/* state */undefined];\n\nfunction getStateData(param) {\n  return stateData;\n}\n\nfunction unsafeGetState(param) {\n  return _utils_Option_js__WEBPACK_IMPORTED_MODULE_2__[\"unsafeGet\"](stateData[/* state */0]);\n}\n\nfunction createState(param) {\n  return /* record */[\n          /* viewData */_View_js__WEBPACK_IMPORTED_MODULE_0__[\"createViewData\"](/* () */0),\n          /* deviceManagerData */_DeviceManager_js__WEBPACK_IMPORTED_MODULE_5__[\"createData\"](/* () */0),\n          /* glslData */_Shader_js__WEBPACK_IMPORTED_MODULE_3__[\"GLSL\"].createGLSLData(/* () */0),\n          /* programData */_Shader_js__WEBPACK_IMPORTED_MODULE_3__[\"Program\"].createProgramData(/* () */0),\n          /* cameraData */_Camera_js__WEBPACK_IMPORTED_MODULE_1__[\"createCameraData\"](/* () */0),\n          /* allGameObjectData */_GameObject_js__WEBPACK_IMPORTED_MODULE_4__[\"createAllGameObjectData\"](/* () */0)\n        ];\n}\n\nfunction setState(state) {\n  stateData[/* state */0] = state;\n  return state;\n}\n\n\n/* No side effect */\n\n\n//# sourceURL=webpack://wd/./lib/es6_global/src/Data.js?");

/***/ }),

/***/ "./lib/es6_global/src/DeviceManager.js":
/*!*********************************************!*\
  !*** ./lib/es6_global/src/DeviceManager.js ***!
  \*********************************************/
/*! exports provided: createData, setGl, unsafeGetGl, getClearColor, clearColor, initGlState */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
eval("__webpack_require__.r(__webpack_exports__);\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"createData\", function() { return createData; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"setGl\", function() { return setGl; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"unsafeGetGl\", function() { return unsafeGetGl; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"getClearColor\", function() { return getClearColor; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"clearColor\", function() { return clearColor; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"initGlState\", function() { return initGlState; });\n/* harmony import */ var _node_modules_bs_platform_lib_es6_caml_option_js__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! ../../../node_modules/bs-platform/lib/es6/caml_option.js */ \"./node_modules/bs-platform/lib/es6/caml_option.js\");\n/* harmony import */ var _utils_Option_js__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! ./utils/Option.js */ \"./lib/es6_global/src/utils/Option.js\");\n\n\n\n\n\nfunction createData(param) {\n  return /* record */[\n          /* gl */undefined,\n          /* clearColor : tuple */[\n            0,\n            0,\n            0,\n            1\n          ]\n        ];\n}\n\nfunction setGl(gl, state) {\n  var init = state[/* deviceManagerData */1];\n  return /* record */[\n          /* viewData */state[/* viewData */0],\n          /* deviceManagerData : record */[\n            /* gl */_node_modules_bs_platform_lib_es6_caml_option_js__WEBPACK_IMPORTED_MODULE_0__[\"some\"](gl),\n            /* clearColor */init[/* clearColor */1]\n          ],\n          /* glslData */state[/* glslData */2],\n          /* programData */state[/* programData */3],\n          /* cameraData */state[/* cameraData */4],\n          /* allGameObjectData */state[/* allGameObjectData */5]\n        ];\n}\n\nfunction unsafeGetGl(state) {\n  return _utils_Option_js__WEBPACK_IMPORTED_MODULE_1__[\"unsafeGet\"](state[/* deviceManagerData */1][/* gl */0]);\n}\n\nfunction getClearColor(state) {\n  return state[/* deviceManagerData */1][/* clearColor */1];\n}\n\nfunction clearColor(gl, state) {\n  var match = state[/* deviceManagerData */1][/* clearColor */1];\n  gl.clearColor(match[0], match[1], match[2], match[3]);\n  return state;\n}\n\nfunction initGlState(gl) {\n  gl.enable(gl.DEPTH_TEST);\n  gl.enable(gl.CULL_FACE);\n  gl.cullFace(gl.BACK);\n  return /* () */0;\n}\n\n\n/* No side effect */\n\n\n//# sourceURL=webpack://wd/./lib/es6_global/src/DeviceManager.js?");

/***/ }),

/***/ "./lib/es6_global/src/GameObject.js":
/*!******************************************!*\
  !*** ./lib/es6_global/src/GameObject.js ***!
  \******************************************/
/*! exports provided: Transform, Geometry, Material, getGameObjectDataArr, createAllGameObjectData */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
eval("__webpack_require__.r(__webpack_exports__);\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"Transform\", function() { return Transform; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"Geometry\", function() { return Geometry; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"Material\", function() { return Material; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"getGameObjectDataArr\", function() { return getGameObjectDataArr; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"createAllGameObjectData\", function() { return createAllGameObjectData; });\n\n\n\nfunction createTransformData(mMatrix) {\n  return /* record */[/* mMatrix */mMatrix];\n}\n\nfunction getMMatrix(param) {\n  return param[/* mMatrix */0];\n}\n\nvar Transform = {\n  createTransformData: createTransformData,\n  getMMatrix: getMMatrix\n};\n\nfunction createTriangleGeometryData(param) {\n  var vertices = new Float32Array(/* array */[\n        0,\n        0.5,\n        0.0,\n        -0.5,\n        -0.5,\n        0.0,\n        0.5,\n        -0.5,\n        0.0\n      ]);\n  var indices = new Uint16Array(/* array */[\n        0,\n        1,\n        2\n      ]);\n  return /* tuple */[\n          vertices,\n          indices\n        ];\n}\n\nfunction createGeometryDataWithGeometryPoints(vertices, indices) {\n  return /* record */[\n          /* vertices */vertices,\n          /* indices */indices,\n          /* vertexBuffer */undefined,\n          /* indexBuffer */undefined\n        ];\n}\n\nfunction getBuffers(param) {\n  return /* tuple */[\n          param[/* vertexBuffer */2],\n          param[/* indexBuffer */3]\n        ];\n}\n\nfunction getIndices(param) {\n  return param[/* indices */1];\n}\n\nvar Geometry = {\n  createTriangleGeometryData: createTriangleGeometryData,\n  createGeometryDataWithGeometryPoints: createGeometryDataWithGeometryPoints,\n  getBuffers: getBuffers,\n  getIndices: getIndices\n};\n\nfunction createMaterialData(shaderName, color) {\n  return /* record */[\n          /* shaderName */shaderName,\n          /* color */color\n        ];\n}\n\nfunction getColor(param) {\n  return param[/* color */1];\n}\n\nvar Material = {\n  createMaterialData: createMaterialData,\n  getColor: getColor\n};\n\nfunction getGameObjectDataArr(state) {\n  return state[/* allGameObjectData */5][/* gameObjectDataArr */0];\n}\n\nfunction createAllGameObjectData(param) {\n  return /* record */[/* gameObjectDataArr : array */[]];\n}\n\n\n/* No side effect */\n\n\n//# sourceURL=webpack://wd/./lib/es6_global/src/GameObject.js?");

/***/ }),

/***/ "./lib/es6_global/src/Index.js":
/*!*************************************!*\
  !*** ./lib/es6_global/src/Index.js ***!
  \*************************************/
/*! exports provided: setCameraData, createState, setClearColor, loop, initAll, addGameObjectData, createTriangleGeometryData, createIdentityMatrix4, setLookAt, buildPerspective, setTranslation, addGLSL, setCanvasById, unsafeGetCanvas */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
eval("__webpack_require__.r(__webpack_exports__);\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"setCameraData\", function() { return setCameraData; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"createState\", function() { return createState; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"setClearColor\", function() { return setClearColor; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"loop\", function() { return loop; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"initAll\", function() { return initAll; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"addGameObjectData\", function() { return addGameObjectData; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"createTriangleGeometryData\", function() { return createTriangleGeometryData; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"createIdentityMatrix4\", function() { return createIdentityMatrix4; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"setLookAt\", function() { return setLookAt; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"buildPerspective\", function() { return buildPerspective; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"setTranslation\", function() { return setTranslation; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"addGLSL\", function() { return addGLSL; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"setCanvasById\", function() { return setCanvasById; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"unsafeGetCanvas\", function() { return unsafeGetCanvas; });\n/* harmony import */ var _api_DataAPI_js__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! ./api/DataAPI.js */ \"./lib/es6_global/src/api/DataAPI.js\");\n/* harmony import */ var _api_ViewAPI_js__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! ./api/ViewAPI.js */ \"./lib/es6_global/src/api/ViewAPI.js\");\n/* harmony import */ var _api_camera_CameraAPI_js__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! ./api/camera/CameraAPI.js */ \"./lib/es6_global/src/api/camera/CameraAPI.js\");\n/* harmony import */ var _api_MatrixAPI_js__WEBPACK_IMPORTED_MODULE_3__ = __webpack_require__(/*! ./api/MatrixAPI.js */ \"./lib/es6_global/src/api/MatrixAPI.js\");\n/* harmony import */ var _api_ShaderAPI_js__WEBPACK_IMPORTED_MODULE_4__ = __webpack_require__(/*! ./api/ShaderAPI.js */ \"./lib/es6_global/src/api/ShaderAPI.js\");\n/* harmony import */ var _api_DirectorAPI_js__WEBPACK_IMPORTED_MODULE_5__ = __webpack_require__(/*! ./api/DirectorAPI.js */ \"./lib/es6_global/src/api/DirectorAPI.js\");\n/* harmony import */ var _api_GameObjectAPI_js__WEBPACK_IMPORTED_MODULE_6__ = __webpack_require__(/*! ./api/GameObjectAPI.js */ \"./lib/es6_global/src/api/GameObjectAPI.js\");\n/* harmony import */ var _api_DeviceManagerAPI_js__WEBPACK_IMPORTED_MODULE_7__ = __webpack_require__(/*! ./api/DeviceManagerAPI.js */ \"./lib/es6_global/src/api/DeviceManagerAPI.js\");\n\n\n\n\n\n\n\n\n\n\n\nvar setCameraData = _api_camera_CameraAPI_js__WEBPACK_IMPORTED_MODULE_2__[\"setCameraData\"];\n\nvar createState = _api_DataAPI_js__WEBPACK_IMPORTED_MODULE_0__[\"createState\"];\n\nvar setClearColor = _api_DeviceManagerAPI_js__WEBPACK_IMPORTED_MODULE_7__[\"setClearColor\"];\n\nvar loop = _api_DirectorAPI_js__WEBPACK_IMPORTED_MODULE_5__[\"loop\"];\n\nvar initAll = _api_DirectorAPI_js__WEBPACK_IMPORTED_MODULE_5__[\"initAll\"];\n\nvar addGameObjectData = _api_GameObjectAPI_js__WEBPACK_IMPORTED_MODULE_6__[\"addGameObjectData\"];\n\nvar createTriangleGeometryData = _api_GameObjectAPI_js__WEBPACK_IMPORTED_MODULE_6__[\"createTriangleGeometryData\"];\n\nvar createIdentityMatrix4 = _api_MatrixAPI_js__WEBPACK_IMPORTED_MODULE_3__[\"createIdentityMatrix4\"];\n\nvar setLookAt = _api_MatrixAPI_js__WEBPACK_IMPORTED_MODULE_3__[\"setLookAt\"];\n\nvar buildPerspective = _api_MatrixAPI_js__WEBPACK_IMPORTED_MODULE_3__[\"buildPerspective\"];\n\nvar setTranslation = _api_MatrixAPI_js__WEBPACK_IMPORTED_MODULE_3__[\"setTranslation\"];\n\nvar addGLSL = _api_ShaderAPI_js__WEBPACK_IMPORTED_MODULE_4__[\"addGLSL\"];\n\nvar setCanvasById = _api_ViewAPI_js__WEBPACK_IMPORTED_MODULE_1__[\"setCanvasById\"];\n\nvar unsafeGetCanvas = _api_ViewAPI_js__WEBPACK_IMPORTED_MODULE_1__[\"unsafeGetCanvas\"];\n\n\n/* No side effect */\n\n\n//# sourceURL=webpack://wd/./lib/es6_global/src/Index.js?");

/***/ }),

/***/ "./lib/es6_global/src/Render.js":
/*!**************************************!*\
  !*** ./lib/es6_global/src/Render.js ***!
  \**************************************/
/*! exports provided: _createVBOs, _getOrCreateVBOs, _getProgram, _changeGameObjectDataArrToRenderDataArr, _sendAttributeData, _sendCameraUniformData, _sendModelUniformData, render */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
eval("__webpack_require__.r(__webpack_exports__);\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"_createVBOs\", function() { return _createVBOs; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"_getOrCreateVBOs\", function() { return _getOrCreateVBOs; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"_getProgram\", function() { return _getProgram; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"_changeGameObjectDataArrToRenderDataArr\", function() { return _changeGameObjectDataArrToRenderDataArr; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"_sendAttributeData\", function() { return _sendAttributeData; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"_sendCameraUniformData\", function() { return _sendCameraUniformData; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"_sendModelUniformData\", function() { return _sendModelUniformData; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"render\", function() { return render; });\n/* harmony import */ var _utils_Error_js__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! ./utils/Error.js */ \"./lib/es6_global/src/utils/Error.js\");\n/* harmony import */ var _Camera_js__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! ./Camera.js */ \"./lib/es6_global/src/Camera.js\");\n/* harmony import */ var _utils_Option_js__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! ./utils/Option.js */ \"./lib/es6_global/src/utils/Option.js\");\n/* harmony import */ var _Shader_js__WEBPACK_IMPORTED_MODULE_3__ = __webpack_require__(/*! ./Shader.js */ \"./lib/es6_global/src/Shader.js\");\n/* harmony import */ var _GameObject_js__WEBPACK_IMPORTED_MODULE_4__ = __webpack_require__(/*! ./GameObject.js */ \"./lib/es6_global/src/GameObject.js\");\n\n\n\n\n\n\n\n\nfunction _createVBOs(param, gl) {\n  var vertexBuffer = gl.createBuffer();\n  gl.bindBuffer(gl.ARRAY_BUFFER, vertexBuffer);\n  gl.bufferData(gl.ARRAY_BUFFER, param[0], gl.STATIC_DRAW);\n  var indexBuffer = gl.createBuffer();\n  gl.bindBuffer(gl.ELEMENT_ARRAY_BUFFER, indexBuffer);\n  gl.bufferData(gl.ELEMENT_ARRAY_BUFFER, param[1], gl.STATIC_DRAW);\n  return /* tuple */[\n          vertexBuffer,\n          indexBuffer\n        ];\n}\n\nfunction _getOrCreateVBOs(param, gl) {\n  var indexBuffer = param[/* indexBuffer */3];\n  var vertexBuffer = param[/* vertexBuffer */2];\n  if (vertexBuffer !== undefined || indexBuffer !== undefined) {\n    return /* tuple */[\n            _utils_Option_js__WEBPACK_IMPORTED_MODULE_2__[\"unsafeGet\"](vertexBuffer),\n            _utils_Option_js__WEBPACK_IMPORTED_MODULE_2__[\"unsafeGet\"](indexBuffer)\n          ];\n  } else {\n    return _createVBOs(/* tuple */[\n                param[/* vertices */0],\n                param[/* indices */1]\n              ], gl);\n  }\n}\n\nfunction _getProgram(param, state) {\n  return _Shader_js__WEBPACK_IMPORTED_MODULE_3__[\"Program\"].unsafeGetProgram(param[/* shaderName */0], state);\n}\n\nfunction _changeGameObjectDataArrToRenderDataArr(gameObjectDataArr, gl, state) {\n  return gameObjectDataArr.map((function (gameObjectData) {\n                var materialData = gameObjectData[/* materialData */2];\n                var geometryData = gameObjectData[/* geometryData */1];\n                var match = _getOrCreateVBOs(geometryData, gl);\n                return /* record */[\n                        /* mMatrix */_GameObject_js__WEBPACK_IMPORTED_MODULE_4__[\"Transform\"].getMMatrix(gameObjectData[/* transformData */0]),\n                        /* vertexBuffer */match[0],\n                        /* indexBuffer */match[1],\n                        /* indexCount */_GameObject_js__WEBPACK_IMPORTED_MODULE_4__[\"Geometry\"].getIndices(geometryData).length,\n                        /* color */_GameObject_js__WEBPACK_IMPORTED_MODULE_4__[\"Material\"].getColor(materialData),\n                        /* program */_getProgram(materialData, state)\n                      ];\n              }));\n}\n\nfunction _sendAttributeData(vertexBuffer, program, gl) {\n  var positionLocation = gl.getAttribLocation(program, \"a_position\");\n  var match = positionLocation === -1;\n  if (match) {\n    _utils_Error_js__WEBPACK_IMPORTED_MODULE_0__[\"error\"](\"Failed to get the storage location of a_position\");\n  }\n  gl.bindBuffer(gl.ARRAY_BUFFER, vertexBuffer);\n  gl.vertexAttribPointer(positionLocation, 3, gl.FLOAT, false, 0, 0);\n  gl.enableVertexAttribArray(positionLocation);\n  return /* () */0;\n}\n\nfunction _sendCameraUniformData(param, program, gl) {\n  var vMatrixLocation = gl.getUniformLocation(program, \"u_vMatrix\");\n  var pMatrixLocation = gl.getUniformLocation(program, \"u_pMatrix\");\n  gl.uniformMatrix4fv(vMatrixLocation, false, param[0]);\n  gl.uniformMatrix4fv(pMatrixLocation, false, param[1]);\n  return /* () */0;\n}\n\nfunction _sendModelUniformData(param, program, gl) {\n  var color = param[1];\n  var mMatrixLocation = gl.getUniformLocation(program, \"u_mMatrix\");\n  var colorLocation = gl.getUniformLocation(program, \"u_color\");\n  gl.uniformMatrix4fv(mMatrixLocation, false, param[0]);\n  gl.uniform3f(colorLocation, color[0], color[1], color[2]);\n  return /* () */0;\n}\n\nfunction render(gl, state) {\n  var vMatrix = _Camera_js__WEBPACK_IMPORTED_MODULE_1__[\"unsafeGetVMatrix\"](state);\n  var pMatrix = _Camera_js__WEBPACK_IMPORTED_MODULE_1__[\"unsafeGetPMatrix\"](state);\n  _changeGameObjectDataArrToRenderDataArr(_GameObject_js__WEBPACK_IMPORTED_MODULE_4__[\"getGameObjectDataArr\"](state), gl, state).forEach((function (param) {\n          var program = param[/* program */5];\n          gl.useProgram(program);\n          _sendAttributeData(param[/* vertexBuffer */1], program, gl);\n          _sendCameraUniformData(/* tuple */[\n                vMatrix,\n                pMatrix\n              ], program, gl);\n          _sendModelUniformData(/* tuple */[\n                param[/* mMatrix */0],\n                param[/* color */4]\n              ], program, gl);\n          gl.bindBuffer(gl.ELEMENT_ARRAY_BUFFER, param[/* indexBuffer */2]);\n          gl.drawElements(gl.TRIANGLES, param[/* indexCount */3], gl.UNSIGNED_SHORT, 0);\n          return /* () */0;\n        }));\n  return state;\n}\n\n\n/* No side effect */\n\n\n//# sourceURL=webpack://wd/./lib/es6_global/src/Render.js?");

/***/ }),

/***/ "./lib/es6_global/src/Shader.js":
/*!**************************************!*\
  !*** ./lib/es6_global/src/Shader.js ***!
  \**************************************/
/*! exports provided: GLSL, Program, _compileShader, _linkProgram, _initShader, init */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
eval("__webpack_require__.r(__webpack_exports__);\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"GLSL\", function() { return GLSL; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"Program\", function() { return Program; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"_compileShader\", function() { return _compileShader; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"_linkProgram\", function() { return _linkProgram; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"_initShader\", function() { return _initShader; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"init\", function() { return init; });\n/* harmony import */ var _utils_Error_js__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! ./utils/Error.js */ \"./lib/es6_global/src/utils/Error.js\");\n/* harmony import */ var _utils_ArrayUtils_js__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! ./utils/ArrayUtils.js */ \"./lib/es6_global/src/utils/ArrayUtils.js\");\n/* harmony import */ var _DeviceManager_js__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! ./DeviceManager.js */ \"./lib/es6_global/src/DeviceManager.js\");\n/* harmony import */ var _utils_ImmutableHashMap_js__WEBPACK_IMPORTED_MODULE_3__ = __webpack_require__(/*! ./utils/ImmutableHashMap.js */ \"./lib/es6_global/src/utils/ImmutableHashMap.js\");\n\n\n\n\n\n\n\nfunction createGLSLData(param) {\n  return /* record */[/* glslMap */_utils_ImmutableHashMap_js__WEBPACK_IMPORTED_MODULE_3__[\"createEmpty\"](/* () */0)];\n}\n\nfunction _getGLSLMap(state) {\n  return state[/* glslData */2][/* glslMap */0];\n}\n\nfunction _setGLSLMap(glslMap, state) {\n  return /* record */[\n          /* viewData */state[/* viewData */0],\n          /* deviceManagerData */state[/* deviceManagerData */1],\n          /* glslData : record */[/* glslMap */glslMap],\n          /* programData */state[/* programData */3],\n          /* cameraData */state[/* cameraData */4],\n          /* allGameObjectData */state[/* allGameObjectData */5]\n        ];\n}\n\nfunction addGLSL(shaderName, glslData, state) {\n  return _setGLSLMap(_utils_ImmutableHashMap_js__WEBPACK_IMPORTED_MODULE_3__[\"set\"](shaderName, glslData, state[/* glslData */2][/* glslMap */0]), state);\n}\n\nfunction getAllValidGLSLEntries(state) {\n  return _utils_ImmutableHashMap_js__WEBPACK_IMPORTED_MODULE_3__[\"getValidEntries\"](state[/* glslData */2][/* glslMap */0]);\n}\n\nvar GLSL = {\n  createGLSLData: createGLSLData,\n  _getGLSLMap: _getGLSLMap,\n  _setGLSLMap: _setGLSLMap,\n  addGLSL: addGLSL,\n  getAllValidGLSLEntries: getAllValidGLSLEntries\n};\n\nfunction createProgramData(param) {\n  return /* record */[/* programMap */_utils_ImmutableHashMap_js__WEBPACK_IMPORTED_MODULE_3__[\"createEmpty\"](/* () */0)];\n}\n\nfunction createProgram(gl) {\n  return gl.createProgram();\n}\n\nfunction _getProgramMap(state) {\n  return state[/* programData */3][/* programMap */0];\n}\n\nfunction _setProgramMap(programMap, state) {\n  return /* record */[\n          /* viewData */state[/* viewData */0],\n          /* deviceManagerData */state[/* deviceManagerData */1],\n          /* glslData */state[/* glslData */2],\n          /* programData : record */[/* programMap */programMap],\n          /* cameraData */state[/* cameraData */4],\n          /* allGameObjectData */state[/* allGameObjectData */5]\n        ];\n}\n\nfunction unsafeGetProgram(shaderName, state) {\n  return _utils_ImmutableHashMap_js__WEBPACK_IMPORTED_MODULE_3__[\"unsafeGet\"](shaderName, state[/* programData */3][/* programMap */0]);\n}\n\nfunction setProgram(shaderName, program, state) {\n  return _setProgramMap(_utils_ImmutableHashMap_js__WEBPACK_IMPORTED_MODULE_3__[\"set\"](shaderName, program, state[/* programData */3][/* programMap */0]), state);\n}\n\nvar Program = {\n  createProgramData: createProgramData,\n  createProgram: createProgram,\n  _getProgramMap: _getProgramMap,\n  _setProgramMap: _setProgramMap,\n  unsafeGetProgram: unsafeGetProgram,\n  setProgram: setProgram\n};\n\nfunction _compileShader(gl, glslSource, shader) {\n  gl.shaderSource(shader, glslSource);\n  gl.compileShader(shader);\n  var match = gl.getShaderParameter(shader, gl.COMPILE_STATUS) === false;\n  if (match) {\n    var message = gl.getShaderInfoLog(shader);\n    _utils_Error_js__WEBPACK_IMPORTED_MODULE_0__[\"error\"](\"shader info log: \" + (String(message) + (\"\\n        glsl source: \" + (String(glslSource) + \"\\n        \"))));\n  }\n  return shader;\n}\n\nfunction _linkProgram(program, gl) {\n  gl.linkProgram(program);\n  var match = gl.getProgramParameter(program, gl.LINK_STATUS) === false;\n  if (match) {\n    var message = gl.getProgramInfoLog(program);\n    return _utils_Error_js__WEBPACK_IMPORTED_MODULE_0__[\"error\"](\"link program error: \" + (String(message) + \"\"));\n  } else {\n    return /* () */0;\n  }\n}\n\nfunction _initShader(vsSource, fsSource, gl, program) {\n  var vs = _compileShader(gl, vsSource, gl.createShader(gl.VERTEX_SHADER));\n  var fs = _compileShader(gl, fsSource, gl.createShader(gl.FRAGMENT_SHADER));\n  gl.attachShader(program, vs);\n  gl.attachShader(program, fs);\n  gl.bindAttribLocation(program, 0, \"a_position\");\n  _linkProgram(program, gl);\n  gl.deleteShader(vs);\n  gl.deleteShader(fs);\n  return program;\n}\n\nfunction init(state) {\n  var gl = _DeviceManager_js__WEBPACK_IMPORTED_MODULE_2__[\"unsafeGetGl\"](state);\n  return _utils_ArrayUtils_js__WEBPACK_IMPORTED_MODULE_1__[\"reduceOneParam\"]((function (state, param) {\n                var match = param[1];\n                return setProgram(param[0], _initShader(match[0], match[1], gl, gl.createProgram()), state);\n              }), state, _utils_ImmutableHashMap_js__WEBPACK_IMPORTED_MODULE_3__[\"getValidEntries\"](state[/* glslData */2][/* glslMap */0]));\n}\n\n\n/* No side effect */\n\n\n//# sourceURL=webpack://wd/./lib/es6_global/src/Shader.js?");

/***/ }),

/***/ "./lib/es6_global/src/View.js":
/*!************************************!*\
  !*** ./lib/es6_global/src/View.js ***!
  \************************************/
/*! exports provided: createViewData, unsafeGetCanvas */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
eval("__webpack_require__.r(__webpack_exports__);\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"createViewData\", function() { return createViewData; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"unsafeGetCanvas\", function() { return unsafeGetCanvas; });\n/* harmony import */ var _utils_Option_js__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! ./utils/Option.js */ \"./lib/es6_global/src/utils/Option.js\");\n\n\n\n\nfunction createViewData(param) {\n  return /* record */[/* canvas */undefined];\n}\n\nfunction unsafeGetCanvas(state) {\n  return _utils_Option_js__WEBPACK_IMPORTED_MODULE_0__[\"unsafeGet\"](state[/* viewData */0][/* canvas */0]);\n}\n\n\n/* No side effect */\n\n\n//# sourceURL=webpack://wd/./lib/es6_global/src/View.js?");

/***/ }),

/***/ "./lib/es6_global/src/api/DataAPI.js":
/*!*******************************************!*\
  !*** ./lib/es6_global/src/api/DataAPI.js ***!
  \*******************************************/
/*! exports provided: createState */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
eval("__webpack_require__.r(__webpack_exports__);\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"createState\", function() { return createState; });\n/* harmony import */ var _Data_js__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! ../Data.js */ \"./lib/es6_global/src/Data.js\");\n\n\n\n\nvar createState = _Data_js__WEBPACK_IMPORTED_MODULE_0__[\"createState\"];\n\n\n/* No side effect */\n\n\n//# sourceURL=webpack://wd/./lib/es6_global/src/api/DataAPI.js?");

/***/ }),

/***/ "./lib/es6_global/src/api/DeviceManagerAPI.js":
/*!****************************************************!*\
  !*** ./lib/es6_global/src/api/DeviceManagerAPI.js ***!
  \****************************************************/
/*! exports provided: setClearColor */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
eval("__webpack_require__.r(__webpack_exports__);\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"setClearColor\", function() { return setClearColor; });\n\n\n\nfunction setClearColor(clearColor, state) {\n  var init = state[/* deviceManagerData */1];\n  return /* record */[\n          /* viewData */state[/* viewData */0],\n          /* deviceManagerData : record */[\n            /* gl */init[/* gl */0],\n            /* clearColor */clearColor\n          ],\n          /* glslData */state[/* glslData */2],\n          /* programData */state[/* programData */3],\n          /* cameraData */state[/* cameraData */4],\n          /* allGameObjectData */state[/* allGameObjectData */5]\n        ];\n}\n\n\n/* No side effect */\n\n\n//# sourceURL=webpack://wd/./lib/es6_global/src/api/DeviceManagerAPI.js?");

/***/ }),

/***/ "./lib/es6_global/src/api/DirectorAPI.js":
/*!***********************************************!*\
  !*** ./lib/es6_global/src/api/DirectorAPI.js ***!
  \***********************************************/
/*! exports provided: initAll, loop */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
eval("__webpack_require__.r(__webpack_exports__);\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"initAll\", function() { return initAll; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"loop\", function() { return loop; });\n/* harmony import */ var _Data_js__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! ../Data.js */ \"./lib/es6_global/src/Data.js\");\n/* harmony import */ var _View_js__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! ../View.js */ \"./lib/es6_global/src/View.js\");\n/* harmony import */ var _Render_js__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! ../Render.js */ \"./lib/es6_global/src/Render.js\");\n/* harmony import */ var _Shader_js__WEBPACK_IMPORTED_MODULE_3__ = __webpack_require__(/*! ../Shader.js */ \"./lib/es6_global/src/Shader.js\");\n/* harmony import */ var _DeviceManager_js__WEBPACK_IMPORTED_MODULE_4__ = __webpack_require__(/*! ../DeviceManager.js */ \"./lib/es6_global/src/DeviceManager.js\");\n\n\n\n\n\n\n\n\nfunction initAll(contextParam, state) {\n  return _Shader_js__WEBPACK_IMPORTED_MODULE_3__[\"init\"](_DeviceManager_js__WEBPACK_IMPORTED_MODULE_4__[\"setGl\"](_View_js__WEBPACK_IMPORTED_MODULE_1__[\"unsafeGetCanvas\"](state).getContext(\"webgl\", contextParam), state));\n}\n\nfunction loop(state) {\n  var gl = _DeviceManager_js__WEBPACK_IMPORTED_MODULE_4__[\"unsafeGetGl\"](state);\n  _DeviceManager_js__WEBPACK_IMPORTED_MODULE_4__[\"clearColor\"](gl, state);\n  var _loopBody = function (state) {\n    gl.clear(gl.COLOR_BUFFER_BIT | gl.DEPTH_BUFFER_BIT);\n    _DeviceManager_js__WEBPACK_IMPORTED_MODULE_4__[\"initGlState\"](gl);\n    return _Render_js__WEBPACK_IMPORTED_MODULE_2__[\"render\"](gl, state);\n  };\n  var _loop = function (state) {\n    return requestAnimationFrame((function (time) {\n                  _loop(_loopBody(_Data_js__WEBPACK_IMPORTED_MODULE_0__[\"unsafeGetState\"](/* () */0)));\n                  return /* () */0;\n                }));\n  };\n  _loop(_Data_js__WEBPACK_IMPORTED_MODULE_0__[\"setState\"](state));\n  return /* () */0;\n}\n\n\n/* No side effect */\n\n\n//# sourceURL=webpack://wd/./lib/es6_global/src/api/DirectorAPI.js?");

/***/ }),

/***/ "./lib/es6_global/src/api/GameObjectAPI.js":
/*!*************************************************!*\
  !*** ./lib/es6_global/src/api/GameObjectAPI.js ***!
  \*************************************************/
/*! exports provided: createTriangleGeometryData, _setGameObjectDataArr, addGameObjectData */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
eval("__webpack_require__.r(__webpack_exports__);\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"createTriangleGeometryData\", function() { return createTriangleGeometryData; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"_setGameObjectDataArr\", function() { return _setGameObjectDataArr; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"addGameObjectData\", function() { return addGameObjectData; });\n/* harmony import */ var _utils_ArrayUtils_js__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! ../utils/ArrayUtils.js */ \"./lib/es6_global/src/utils/ArrayUtils.js\");\n/* harmony import */ var _GameObject_js__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! ../GameObject.js */ \"./lib/es6_global/src/GameObject.js\");\n\n\n\n\n\nvar createTriangleGeometryData = _GameObject_js__WEBPACK_IMPORTED_MODULE_1__[\"Geometry\"].createTriangleGeometryData;\n\nfunction _setGameObjectDataArr(gameObjectDataArr, state) {\n  return /* record */[\n          /* viewData */state[/* viewData */0],\n          /* deviceManagerData */state[/* deviceManagerData */1],\n          /* glslData */state[/* glslData */2],\n          /* programData */state[/* programData */3],\n          /* cameraData */state[/* cameraData */4],\n          /* allGameObjectData : record */[/* gameObjectDataArr */gameObjectDataArr]\n        ];\n}\n\nfunction addGameObjectData(mMatrix, param, param$1, state) {\n  return _setGameObjectDataArr(_utils_ArrayUtils_js__WEBPACK_IMPORTED_MODULE_0__[\"push\"](/* record */[\n                  /* transformData */_GameObject_js__WEBPACK_IMPORTED_MODULE_1__[\"Transform\"].createTransformData(mMatrix),\n                  /* geometryData */_GameObject_js__WEBPACK_IMPORTED_MODULE_1__[\"Geometry\"].createGeometryDataWithGeometryPoints(param[0], param[1]),\n                  /* materialData */_GameObject_js__WEBPACK_IMPORTED_MODULE_1__[\"Material\"].createMaterialData(param$1[0], param$1[1])\n                ], _GameObject_js__WEBPACK_IMPORTED_MODULE_1__[\"getGameObjectDataArr\"](state)), state);\n}\n\n\n/* No side effect */\n\n\n//# sourceURL=webpack://wd/./lib/es6_global/src/api/GameObjectAPI.js?");

/***/ }),

/***/ "./lib/es6_global/src/api/MatrixAPI.js":
/*!*********************************************!*\
  !*** ./lib/es6_global/src/api/MatrixAPI.js ***!
  \*********************************************/
/*! exports provided: setTranslation, buildPerspective, setLookAt, createIdentityMatrix4 */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
eval("__webpack_require__.r(__webpack_exports__);\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"setTranslation\", function() { return setTranslation; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"buildPerspective\", function() { return buildPerspective; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"setLookAt\", function() { return setLookAt; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"createIdentityMatrix4\", function() { return createIdentityMatrix4; });\n/* harmony import */ var _utils_Matrix_js__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! ../utils/Matrix.js */ \"./lib/es6_global/src/utils/Matrix.js\");\n\n\n\n\nvar setTranslation = _utils_Matrix_js__WEBPACK_IMPORTED_MODULE_0__[\"setTranslation\"];\n\nvar buildPerspective = _utils_Matrix_js__WEBPACK_IMPORTED_MODULE_0__[\"buildPerspective\"];\n\nvar setLookAt = _utils_Matrix_js__WEBPACK_IMPORTED_MODULE_0__[\"setLookAt\"];\n\nvar createIdentityMatrix4 = _utils_Matrix_js__WEBPACK_IMPORTED_MODULE_0__[\"createIdentityMatrix4\"];\n\n\n/* No side effect */\n\n\n//# sourceURL=webpack://wd/./lib/es6_global/src/api/MatrixAPI.js?");

/***/ }),

/***/ "./lib/es6_global/src/api/ShaderAPI.js":
/*!*********************************************!*\
  !*** ./lib/es6_global/src/api/ShaderAPI.js ***!
  \*********************************************/
/*! exports provided: addGLSL */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
eval("__webpack_require__.r(__webpack_exports__);\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"addGLSL\", function() { return addGLSL; });\n/* harmony import */ var _Shader_js__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! ../Shader.js */ \"./lib/es6_global/src/Shader.js\");\n\n\n\n\nvar addGLSL = _Shader_js__WEBPACK_IMPORTED_MODULE_0__[\"GLSL\"].addGLSL;\n\n\n/* No side effect */\n\n\n//# sourceURL=webpack://wd/./lib/es6_global/src/api/ShaderAPI.js?");

/***/ }),

/***/ "./lib/es6_global/src/api/ViewAPI.js":
/*!*******************************************!*\
  !*** ./lib/es6_global/src/api/ViewAPI.js ***!
  \*******************************************/
/*! exports provided: unsafeGetCanvas, _setCanvas, setCanvasById */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
eval("__webpack_require__.r(__webpack_exports__);\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"unsafeGetCanvas\", function() { return unsafeGetCanvas; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"_setCanvas\", function() { return _setCanvas; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"setCanvasById\", function() { return setCanvasById; });\n/* harmony import */ var _node_modules_bs_platform_lib_es6_caml_option_js__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! ../../../../node_modules/bs-platform/lib/es6/caml_option.js */ \"./node_modules/bs-platform/lib/es6/caml_option.js\");\n/* harmony import */ var _View_js__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! ../View.js */ \"./lib/es6_global/src/View.js\");\n\n\n\n\n\nfunction _setCanvas(canvas, state) {\n  return /* record */[\n          /* viewData : record */[/* canvas */_node_modules_bs_platform_lib_es6_caml_option_js__WEBPACK_IMPORTED_MODULE_0__[\"some\"](canvas)],\n          /* deviceManagerData */state[/* deviceManagerData */1],\n          /* glslData */state[/* glslData */2],\n          /* programData */state[/* programData */3],\n          /* cameraData */state[/* cameraData */4],\n          /* allGameObjectData */state[/* allGameObjectData */5]\n        ];\n}\n\nfunction setCanvasById(canvasId, state) {\n  return _setCanvas(document.querySelector(\"#\" + (String(canvasId) + \"\")), state);\n}\n\nvar unsafeGetCanvas = _View_js__WEBPACK_IMPORTED_MODULE_1__[\"unsafeGetCanvas\"];\n\n\n/* No side effect */\n\n\n//# sourceURL=webpack://wd/./lib/es6_global/src/api/ViewAPI.js?");

/***/ }),

/***/ "./lib/es6_global/src/api/camera/CameraAPI.js":
/*!****************************************************!*\
  !*** ./lib/es6_global/src/api/camera/CameraAPI.js ***!
  \****************************************************/
/*! exports provided: setCameraData */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
eval("__webpack_require__.r(__webpack_exports__);\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"setCameraData\", function() { return setCameraData; });\n/* harmony import */ var _node_modules_bs_platform_lib_es6_caml_option_js__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! ../../../../../node_modules/bs-platform/lib/es6/caml_option.js */ \"./node_modules/bs-platform/lib/es6/caml_option.js\");\n\n\n\n\nfunction setCameraData(param, state) {\n  return /* record */[\n          /* viewData */state[/* viewData */0],\n          /* deviceManagerData */state[/* deviceManagerData */1],\n          /* glslData */state[/* glslData */2],\n          /* programData */state[/* programData */3],\n          /* cameraData : record */[\n            /* vMatrix */_node_modules_bs_platform_lib_es6_caml_option_js__WEBPACK_IMPORTED_MODULE_0__[\"some\"](param[0]),\n            /* pMatrix */_node_modules_bs_platform_lib_es6_caml_option_js__WEBPACK_IMPORTED_MODULE_0__[\"some\"](param[1])\n          ],\n          /* allGameObjectData */state[/* allGameObjectData */5]\n        ];\n}\n\n\n/* No side effect */\n\n\n//# sourceURL=webpack://wd/./lib/es6_global/src/api/camera/CameraAPI.js?");

/***/ }),

/***/ "./lib/es6_global/src/utils/ArrayUtils.js":
/*!************************************************!*\
  !*** ./lib/es6_global/src/utils/ArrayUtils.js ***!
  \************************************************/
/*! exports provided: push, reduceOneParam */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
eval("__webpack_require__.r(__webpack_exports__);\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"push\", function() { return push; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"reduceOneParam\", function() { return reduceOneParam; });\n\n\n\nfunction push(item, arr) {\n  arr.push(item);\n  return arr;\n}\n\nfunction reduceOneParam(func, param, arr) {\n  var mutableParam = param;\n  for(var i = 0 ,i_finish = arr.length - 1 | 0; i <= i_finish; ++i){\n    mutableParam = func(mutableParam, arr[i]);\n  }\n  return mutableParam;\n}\n\n\n/* No side effect */\n\n\n//# sourceURL=webpack://wd/./lib/es6_global/src/utils/ArrayUtils.js?");

/***/ }),

/***/ "./lib/es6_global/src/utils/Error.js":
/*!*******************************************!*\
  !*** ./lib/es6_global/src/utils/Error.js ***!
  \*******************************************/
/*! exports provided: error */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
eval("__webpack_require__.r(__webpack_exports__);\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"error\", function() { return error; });\n/* harmony import */ var _node_modules_bs_platform_lib_es6_js_exn_js__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! ../../../../node_modules/bs-platform/lib/es6/js_exn.js */ \"./node_modules/bs-platform/lib/es6/js_exn.js\");\n\n\n\n\nfunction error(msg) {\n  _node_modules_bs_platform_lib_es6_js_exn_js__WEBPACK_IMPORTED_MODULE_0__[\"raiseError\"](msg);\n  return /* () */0;\n}\n\n\n/* No side effect */\n\n\n//# sourceURL=webpack://wd/./lib/es6_global/src/utils/Error.js?");

/***/ }),

/***/ "./lib/es6_global/src/utils/HashMap.js":
/*!*********************************************!*\
  !*** ./lib/es6_global/src/utils/HashMap.js ***!
  \*********************************************/
/*! exports provided: createEmpty, unsafeGet, _isEmpty, get, entries, _isInMap, getValidEntries, _mutableSet, _createEmpty, copy */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
eval("__webpack_require__.r(__webpack_exports__);\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"createEmpty\", function() { return createEmpty; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"unsafeGet\", function() { return unsafeGet; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"_isEmpty\", function() { return _isEmpty; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"get\", function() { return get; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"entries\", function() { return entries; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"_isInMap\", function() { return _isInMap; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"getValidEntries\", function() { return getValidEntries; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"_mutableSet\", function() { return _mutableSet; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"_createEmpty\", function() { return _createEmpty; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"copy\", function() { return copy; });\n/* harmony import */ var _node_modules_bs_platform_lib_es6_js_dict_js__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! ../../../../node_modules/bs-platform/lib/es6/js_dict.js */ \"./node_modules/bs-platform/lib/es6/js_dict.js\");\n/* harmony import */ var _node_modules_bs_platform_lib_es6_caml_option_js__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! ../../../../node_modules/bs-platform/lib/es6/caml_option.js */ \"./node_modules/bs-platform/lib/es6/caml_option.js\");\n/* harmony import */ var _ArrayUtils_js__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! ./ArrayUtils.js */ \"./lib/es6_global/src/utils/ArrayUtils.js\");\n\n\n\n\n\n\nfunction createEmpty(param) {\n  return { };\n}\n\nfunction unsafeGet(key, map) {\n  return map[key];\n}\n\nfunction _isEmpty(value) {\n  if (value === null) {\n    return true;\n  } else {\n    return value === undefined;\n  }\n}\n\nfunction get(key, map) {\n  var value = map[key];\n  var match = _isEmpty(value);\n  if (match) {\n    return ;\n  } else {\n    return _node_modules_bs_platform_lib_es6_caml_option_js__WEBPACK_IMPORTED_MODULE_1__[\"some\"](value);\n  }\n}\n\nvar entries = _node_modules_bs_platform_lib_es6_js_dict_js__WEBPACK_IMPORTED_MODULE_0__[\"entries\"];\n\nfunction _isInMap(value) {\n  return value !== undefined;\n}\n\nfunction getValidEntries(map) {\n  return _node_modules_bs_platform_lib_es6_js_dict_js__WEBPACK_IMPORTED_MODULE_0__[\"entries\"](map).filter((function (param) {\n                return param[1] !== undefined;\n              }));\n}\n\nfunction _mutableSet(key, value, map) {\n  map[key] = value;\n  return map;\n}\n\nfunction _createEmpty(param) {\n  return { };\n}\n\nfunction copy(map) {\n  return _ArrayUtils_js__WEBPACK_IMPORTED_MODULE_2__[\"reduceOneParam\"]((function (newMap, param) {\n                return _mutableSet(param[0], param[1], newMap);\n              }), { }, _node_modules_bs_platform_lib_es6_js_dict_js__WEBPACK_IMPORTED_MODULE_0__[\"entries\"](map));\n}\n\n\n/* No side effect */\n\n\n//# sourceURL=webpack://wd/./lib/es6_global/src/utils/HashMap.js?");

/***/ }),

/***/ "./lib/es6_global/src/utils/ImmutableHashMap.js":
/*!******************************************************!*\
  !*** ./lib/es6_global/src/utils/ImmutableHashMap.js ***!
  \******************************************************/
/*! exports provided: createEmpty, set, get, unsafeGet, getValidEntries */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
eval("__webpack_require__.r(__webpack_exports__);\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"createEmpty\", function() { return createEmpty; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"set\", function() { return set; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"get\", function() { return get; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"unsafeGet\", function() { return unsafeGet; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"getValidEntries\", function() { return getValidEntries; });\n/* harmony import */ var _HashMap_js__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! ./HashMap.js */ \"./lib/es6_global/src/utils/HashMap.js\");\n\n\n\n\nfunction set(key, value, map) {\n  var newMap = _HashMap_js__WEBPACK_IMPORTED_MODULE_0__[\"copy\"](map);\n  newMap[key] = value;\n  return newMap;\n}\n\nvar createEmpty = _HashMap_js__WEBPACK_IMPORTED_MODULE_0__[\"createEmpty\"];\n\nvar get = _HashMap_js__WEBPACK_IMPORTED_MODULE_0__[\"get\"];\n\nvar unsafeGet = _HashMap_js__WEBPACK_IMPORTED_MODULE_0__[\"unsafeGet\"];\n\nvar getValidEntries = _HashMap_js__WEBPACK_IMPORTED_MODULE_0__[\"getValidEntries\"];\n\n\n/* No side effect */\n\n\n//# sourceURL=webpack://wd/./lib/es6_global/src/utils/ImmutableHashMap.js?");

/***/ }),

/***/ "./lib/es6_global/src/utils/Matrix.js":
/*!********************************************!*\
  !*** ./lib/es6_global/src/utils/Matrix.js ***!
  \********************************************/
/*! exports provided: createIdentityMatrix4, _getEpsilon, setLookAt, buildPerspective, setTranslation */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
eval("__webpack_require__.r(__webpack_exports__);\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"createIdentityMatrix4\", function() { return createIdentityMatrix4; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"_getEpsilon\", function() { return _getEpsilon; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"setLookAt\", function() { return setLookAt; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"buildPerspective\", function() { return buildPerspective; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"setTranslation\", function() { return setTranslation; });\n/* harmony import */ var _Error_js__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! ./Error.js */ \"./lib/es6_global/src/utils/Error.js\");\n/* harmony import */ var _Vector3_js__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! ./Vector3.js */ \"./lib/es6_global/src/utils/Vector3.js\");\n\n\n\n\n\nfunction createIdentityMatrix4(param) {\n  return new Float32Array(/* array */[\n              1,\n              0,\n              0,\n              0,\n              0,\n              1,\n              0,\n              0,\n              0,\n              0,\n              1,\n              0,\n              0,\n              0,\n              0,\n              1\n            ]);\n}\n\nfunction _getEpsilon(param) {\n  return 0.000001;\n}\n\nfunction setLookAt(eye, center, up) {\n  var match = Math.abs(eye[0] - center[0]) < 0.000001 && Math.abs(eye[1] - center[1]) < 0.000001 && Math.abs(eye[2] - center[2]) < 0.000001;\n  if (match) {\n    return createIdentityMatrix4(/* () */0);\n  } else {\n    var z = _Vector3_js__WEBPACK_IMPORTED_MODULE_1__[\"normalize\"](_Vector3_js__WEBPACK_IMPORTED_MODULE_1__[\"sub\"](/* Float */0, eye, center));\n    var x = _Vector3_js__WEBPACK_IMPORTED_MODULE_1__[\"normalize\"](_Vector3_js__WEBPACK_IMPORTED_MODULE_1__[\"cross\"](up, z));\n    var y = _Vector3_js__WEBPACK_IMPORTED_MODULE_1__[\"normalize\"](_Vector3_js__WEBPACK_IMPORTED_MODULE_1__[\"cross\"](z, x));\n    return new Float32Array(/* array */[\n                x[0],\n                y[0],\n                z[0],\n                0,\n                x[1],\n                y[1],\n                z[1],\n                0,\n                x[2],\n                y[2],\n                z[2],\n                0,\n                -_Vector3_js__WEBPACK_IMPORTED_MODULE_1__[\"dot\"](x, eye),\n                -_Vector3_js__WEBPACK_IMPORTED_MODULE_1__[\"dot\"](y, eye),\n                -_Vector3_js__WEBPACK_IMPORTED_MODULE_1__[\"dot\"](z, eye),\n                1\n              ]);\n  }\n}\n\nfunction buildPerspective(param, resultFloat32Arr) {\n  var far = param[3];\n  var near = param[2];\n  var fovy = param[0];\n  var match = Math.sin(Math.PI * fovy / 180 / 2) === 0;\n  if (match) {\n    _Error_js__WEBPACK_IMPORTED_MODULE_0__[\"error\"](\"frustum should not be null\");\n  }\n  var fovy$1 = Math.PI * fovy / 180 / 2;\n  var s = Math.sin(fovy$1);\n  var rd = 1 / (far - near);\n  var ct = Math.cos(fovy$1) / s;\n  resultFloat32Arr[0] = ct / param[1];\n  resultFloat32Arr[1] = 0;\n  resultFloat32Arr[2] = 0;\n  resultFloat32Arr[3] = 0;\n  resultFloat32Arr[4] = 0;\n  resultFloat32Arr[5] = ct;\n  resultFloat32Arr[6] = 0;\n  resultFloat32Arr[7] = 0;\n  resultFloat32Arr[8] = 0;\n  resultFloat32Arr[9] = 0;\n  resultFloat32Arr[10] = -(far + near) * rd;\n  resultFloat32Arr[11] = -1;\n  resultFloat32Arr[12] = 0;\n  resultFloat32Arr[13] = 0;\n  resultFloat32Arr[14] = -2 * far * near * rd;\n  resultFloat32Arr[15] = 0;\n  return resultFloat32Arr;\n}\n\nfunction setTranslation(param, resultFloat32Arr) {\n  resultFloat32Arr[12] = param[0];\n  resultFloat32Arr[13] = param[1];\n  resultFloat32Arr[14] = param[2];\n  return resultFloat32Arr;\n}\n\n\n/* No side effect */\n\n\n//# sourceURL=webpack://wd/./lib/es6_global/src/utils/Matrix.js?");

/***/ }),

/***/ "./lib/es6_global/src/utils/Option.js":
/*!********************************************!*\
  !*** ./lib/es6_global/src/utils/Option.js ***!
  \********************************************/
/*! exports provided: unsafeGet */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
eval("__webpack_require__.r(__webpack_exports__);\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"unsafeGet\", function() { return unsafeGet; });\n/* harmony import */ var _node_modules_bs_platform_lib_es6_js_option_js__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! ../../../../node_modules/bs-platform/lib/es6/js_option.js */ \"./node_modules/bs-platform/lib/es6/js_option.js\");\n\n\n\n\nvar unsafeGet = _node_modules_bs_platform_lib_es6_js_option_js__WEBPACK_IMPORTED_MODULE_0__[\"getExn\"];\n\n\n/* No side effect */\n\n\n//# sourceURL=webpack://wd/./lib/es6_global/src/utils/Option.js?");

/***/ }),

/***/ "./lib/es6_global/src/utils/Vector3.js":
/*!*********************************************!*\
  !*** ./lib/es6_global/src/utils/Vector3.js ***!
  \*********************************************/
/*! exports provided: dot, sub, scale, cross, normalize, lengthSq, length */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
eval("__webpack_require__.r(__webpack_exports__);\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"dot\", function() { return dot; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"sub\", function() { return sub; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"scale\", function() { return scale; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"cross\", function() { return cross; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"normalize\", function() { return normalize; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"lengthSq\", function() { return lengthSq; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"length\", function() { return length; });\n\n\n\nfunction dot(param, param$1) {\n  return param[0] * param$1[0] + param[1] * param$1[1] + param[2] * param$1[2];\n}\n\nfunction sub(kind, param, param$1) {\n  return /* tuple */[\n          param[0] - param$1[0],\n          param[1] - param$1[1],\n          param[2] - param$1[2]\n        ];\n}\n\nfunction scale(kind, scalar, param) {\n  return /* tuple */[\n          param[0] * scalar,\n          param[1] * scalar,\n          param[2] * scalar\n        ];\n}\n\nfunction cross(param, param$1) {\n  var z2 = param$1[2];\n  var y2 = param$1[1];\n  var x2 = param$1[0];\n  var z1 = param[2];\n  var y1 = param[1];\n  var x1 = param[0];\n  return /* tuple */[\n          y1 * z2 - y2 * z1,\n          z1 * x2 - z2 * x1,\n          x1 * y2 - x2 * y1\n        ];\n}\n\nfunction normalize(param) {\n  var z = param[2];\n  var y = param[1];\n  var x = param[0];\n  var d = Math.sqrt(x * x + y * y + z * z);\n  var match = d === 0;\n  if (match) {\n    return /* tuple */[\n            0,\n            0,\n            0\n          ];\n  } else {\n    return /* tuple */[\n            x / d,\n            y / d,\n            z / d\n          ];\n  }\n}\n\nfunction lengthSq(param) {\n  var z = param[2];\n  var y = param[1];\n  var x = param[0];\n  return x * x + y * y + z * z;\n}\n\nfunction length(vec) {\n  return Math.sqrt(lengthSq(vec));\n}\n\n\n/* No side effect */\n\n\n//# sourceURL=webpack://wd/./lib/es6_global/src/utils/Vector3.js?");

/***/ }),

/***/ "./node_modules/bs-platform/lib/es6/caml_exceptions.js":
/*!*************************************************************!*\
  !*** ./node_modules/bs-platform/lib/es6/caml_exceptions.js ***!
  \*************************************************************/
/*! exports provided: caml_set_oo_id, caml_fresh_oo_id, create, caml_is_extension */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
eval("__webpack_require__.r(__webpack_exports__);\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"caml_set_oo_id\", function() { return caml_set_oo_id; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"caml_fresh_oo_id\", function() { return caml_fresh_oo_id; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"create\", function() { return create; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"caml_is_extension\", function() { return caml_is_extension; });\n\n\n\nvar id = /* record */[/* contents */0];\n\nfunction caml_set_oo_id(b) {\n  b[1] = id[0];\n  id[0] += 1;\n  return b;\n}\n\nfunction caml_fresh_oo_id(param) {\n  id[0] += 1;\n  return id[0];\n}\n\nfunction create(str) {\n  var v_001 = caml_fresh_oo_id(/* () */0);\n  var v = /* tuple */[\n    str,\n    v_001\n  ];\n  v.tag = 248;\n  return v;\n}\n\nfunction caml_is_extension(e) {\n  if (e === undefined) {\n    return false;\n  } else if (e.tag === 248) {\n    return true;\n  } else {\n    var slot = e[0];\n    if (slot !== undefined) {\n      return slot.tag === 248;\n    } else {\n      return false;\n    }\n  }\n}\n\n\n/* No side effect */\n\n\n//# sourceURL=webpack://wd/./node_modules/bs-platform/lib/es6/caml_exceptions.js?");

/***/ }),

/***/ "./node_modules/bs-platform/lib/es6/caml_js_exceptions.js":
/*!****************************************************************!*\
  !*** ./node_modules/bs-platform/lib/es6/caml_js_exceptions.js ***!
  \****************************************************************/
/*! exports provided: $$Error, internalToOCamlException, caml_as_js_exn */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
eval("__webpack_require__.r(__webpack_exports__);\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"$$Error\", function() { return $$Error; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"internalToOCamlException\", function() { return internalToOCamlException; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"caml_as_js_exn\", function() { return caml_as_js_exn; });\n/* harmony import */ var _caml_option_js__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! ./caml_option.js */ \"./node_modules/bs-platform/lib/es6/caml_option.js\");\n/* harmony import */ var _caml_exceptions_js__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! ./caml_exceptions.js */ \"./node_modules/bs-platform/lib/es6/caml_exceptions.js\");\n\n\n\n\n\nvar $$Error = _caml_exceptions_js__WEBPACK_IMPORTED_MODULE_1__[\"create\"](\"Caml_js_exceptions.Error\");\n\nfunction internalToOCamlException(e) {\n  if (_caml_exceptions_js__WEBPACK_IMPORTED_MODULE_1__[\"caml_is_extension\"](e)) {\n    return e;\n  } else {\n    return [\n            $$Error,\n            e\n          ];\n  }\n}\n\nfunction caml_as_js_exn(exn) {\n  if (exn[0] === $$Error) {\n    return _caml_option_js__WEBPACK_IMPORTED_MODULE_0__[\"some\"](exn[1]);\n  }\n  \n}\n\n\n/* No side effect */\n\n\n//# sourceURL=webpack://wd/./node_modules/bs-platform/lib/es6/caml_js_exceptions.js?");

/***/ }),

/***/ "./node_modules/bs-platform/lib/es6/caml_option.js":
/*!*********************************************************!*\
  !*** ./node_modules/bs-platform/lib/es6/caml_option.js ***!
  \*********************************************************/
/*! exports provided: nullable_to_opt, undefined_to_opt, null_to_opt, valFromOption, some, option_get, option_get_unwrap */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
eval("__webpack_require__.r(__webpack_exports__);\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"nullable_to_opt\", function() { return nullable_to_opt; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"undefined_to_opt\", function() { return undefined_to_opt; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"null_to_opt\", function() { return null_to_opt; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"valFromOption\", function() { return valFromOption; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"some\", function() { return some; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"option_get\", function() { return option_get; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"option_get_unwrap\", function() { return option_get_unwrap; });\n\n\n\nvar undefinedHeader = /* array */[];\n\nfunction some(x) {\n  if (x === undefined) {\n    var block = /* tuple */[\n      undefinedHeader,\n      0\n    ];\n    block.tag = 256;\n    return block;\n  } else if (x !== null && x[0] === undefinedHeader) {\n    var nid = x[1] + 1 | 0;\n    var block$1 = /* tuple */[\n      undefinedHeader,\n      nid\n    ];\n    block$1.tag = 256;\n    return block$1;\n  } else {\n    return x;\n  }\n}\n\nfunction nullable_to_opt(x) {\n  if (x === null || x === undefined) {\n    return ;\n  } else {\n    return some(x);\n  }\n}\n\nfunction undefined_to_opt(x) {\n  if (x === undefined) {\n    return ;\n  } else {\n    return some(x);\n  }\n}\n\nfunction null_to_opt(x) {\n  if (x === null) {\n    return ;\n  } else {\n    return some(x);\n  }\n}\n\nfunction valFromOption(x) {\n  if (x !== null && x[0] === undefinedHeader) {\n    var depth = x[1];\n    if (depth === 0) {\n      return ;\n    } else {\n      return /* tuple */[\n              undefinedHeader,\n              depth - 1 | 0\n            ];\n    }\n  } else {\n    return x;\n  }\n}\n\nfunction option_get(x) {\n  if (x === undefined) {\n    return ;\n  } else {\n    return valFromOption(x);\n  }\n}\n\nfunction option_get_unwrap(x) {\n  if (x === undefined) {\n    return ;\n  } else {\n    return valFromOption(x)[1];\n  }\n}\n\n\n/* No side effect */\n\n\n//# sourceURL=webpack://wd/./node_modules/bs-platform/lib/es6/caml_option.js?");

/***/ }),

/***/ "./node_modules/bs-platform/lib/es6/js_dict.js":
/*!*****************************************************!*\
  !*** ./node_modules/bs-platform/lib/es6/js_dict.js ***!
  \*****************************************************/
/*! exports provided: get, unsafeDeleteKey, entries, values, fromList, fromArray, map */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
eval("__webpack_require__.r(__webpack_exports__);\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"get\", function() { return get; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"unsafeDeleteKey\", function() { return unsafeDeleteKey; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"entries\", function() { return entries; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"values\", function() { return values; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"fromList\", function() { return fromList; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"fromArray\", function() { return fromArray; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"map\", function() { return map; });\n/* harmony import */ var _caml_option_js__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! ./caml_option.js */ \"./node_modules/bs-platform/lib/es6/caml_option.js\");\n\n\n\n\nfunction get(dict, k) {\n  if ((k in dict)) {\n    return _caml_option_js__WEBPACK_IMPORTED_MODULE_0__[\"some\"](dict[k]);\n  }\n  \n}\n\nfunction unsafeDeleteKey (dict,key){\n     delete dict[key];\n     return 0\n  };\n\nfunction entries(dict) {\n  var keys = Object.keys(dict);\n  var l = keys.length;\n  var values = new Array(l);\n  for(var i = 0 ,i_finish = l - 1 | 0; i <= i_finish; ++i){\n    var key = keys[i];\n    values[i] = /* tuple */[\n      key,\n      dict[key]\n    ];\n  }\n  return values;\n}\n\nfunction values(dict) {\n  var keys = Object.keys(dict);\n  var l = keys.length;\n  var values$1 = new Array(l);\n  for(var i = 0 ,i_finish = l - 1 | 0; i <= i_finish; ++i){\n    values$1[i] = dict[keys[i]];\n  }\n  return values$1;\n}\n\nfunction fromList(entries) {\n  var dict = { };\n  var _param = entries;\n  while(true) {\n    var param = _param;\n    if (param) {\n      var match = param[0];\n      dict[match[0]] = match[1];\n      _param = param[1];\n      continue ;\n    } else {\n      return dict;\n    }\n  };\n}\n\nfunction fromArray(entries) {\n  var dict = { };\n  var l = entries.length;\n  for(var i = 0 ,i_finish = l - 1 | 0; i <= i_finish; ++i){\n    var match = entries[i];\n    dict[match[0]] = match[1];\n  }\n  return dict;\n}\n\nfunction map(f, source) {\n  var target = { };\n  var keys = Object.keys(source);\n  var l = keys.length;\n  for(var i = 0 ,i_finish = l - 1 | 0; i <= i_finish; ++i){\n    var key = keys[i];\n    target[key] = f(source[key]);\n  }\n  return target;\n}\n\n\n/* No side effect */\n\n\n//# sourceURL=webpack://wd/./node_modules/bs-platform/lib/es6/js_dict.js?");

/***/ }),

/***/ "./node_modules/bs-platform/lib/es6/js_exn.js":
/*!****************************************************!*\
  !*** ./node_modules/bs-platform/lib/es6/js_exn.js ***!
  \****************************************************/
/*! exports provided: $$Error, raiseError, raiseEvalError, raiseRangeError, raiseReferenceError, raiseSyntaxError, raiseTypeError, raiseUriError */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
eval("__webpack_require__.r(__webpack_exports__);\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"$$Error\", function() { return $$Error$1; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"raiseError\", function() { return raiseError; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"raiseEvalError\", function() { return raiseEvalError; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"raiseRangeError\", function() { return raiseRangeError; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"raiseReferenceError\", function() { return raiseReferenceError; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"raiseSyntaxError\", function() { return raiseSyntaxError; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"raiseTypeError\", function() { return raiseTypeError; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"raiseUriError\", function() { return raiseUriError; });\n/* harmony import */ var _caml_js_exceptions_js__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! ./caml_js_exceptions.js */ \"./node_modules/bs-platform/lib/es6/caml_js_exceptions.js\");\n\n\n\n\nfunction raiseError(str) {\n  throw new Error(str);\n}\n\nfunction raiseEvalError(str) {\n  throw new EvalError(str);\n}\n\nfunction raiseRangeError(str) {\n  throw new RangeError(str);\n}\n\nfunction raiseReferenceError(str) {\n  throw new ReferenceError(str);\n}\n\nfunction raiseSyntaxError(str) {\n  throw new SyntaxError(str);\n}\n\nfunction raiseTypeError(str) {\n  throw new TypeError(str);\n}\n\nfunction raiseUriError(str) {\n  throw new URIError(str);\n}\n\nvar $$Error$1 = _caml_js_exceptions_js__WEBPACK_IMPORTED_MODULE_0__[\"$$Error\"];\n\n\n/* No side effect */\n\n\n//# sourceURL=webpack://wd/./node_modules/bs-platform/lib/es6/js_exn.js?");

/***/ }),

/***/ "./node_modules/bs-platform/lib/es6/js_option.js":
/*!*******************************************************!*\
  !*** ./node_modules/bs-platform/lib/es6/js_option.js ***!
  \*******************************************************/
/*! exports provided: some, isSome, isSomeValue, isNone, getExn, equal, andThen, map, getWithDefault, $$default, default, filter, firstSome */
/***/ (function(module, __webpack_exports__, __webpack_require__) {

"use strict";
eval("__webpack_require__.r(__webpack_exports__);\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"some\", function() { return some; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"isSome\", function() { return isSome; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"isSomeValue\", function() { return isSomeValue; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"isNone\", function() { return isNone; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"getExn\", function() { return getExn; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"equal\", function() { return equal; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"andThen\", function() { return andThen; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"map\", function() { return map; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"getWithDefault\", function() { return getWithDefault; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"$$default\", function() { return $$default; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"default\", function() { return $$default; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"filter\", function() { return filter; });\n/* harmony export (binding) */ __webpack_require__.d(__webpack_exports__, \"firstSome\", function() { return firstSome; });\n/* harmony import */ var _caml_option_js__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! ./caml_option.js */ \"./node_modules/bs-platform/lib/es6/caml_option.js\");\n\n\n\n\nfunction some(x) {\n  return _caml_option_js__WEBPACK_IMPORTED_MODULE_0__[\"some\"](x);\n}\n\nfunction isSome(param) {\n  return param !== undefined;\n}\n\nfunction isSomeValue(eq, v, x) {\n  if (x !== undefined) {\n    return eq(v, _caml_option_js__WEBPACK_IMPORTED_MODULE_0__[\"valFromOption\"](x));\n  } else {\n    return false;\n  }\n}\n\nfunction isNone(param) {\n  return param === undefined;\n}\n\nfunction getExn(x) {\n  if (x !== undefined) {\n    return _caml_option_js__WEBPACK_IMPORTED_MODULE_0__[\"valFromOption\"](x);\n  } else {\n    throw new Error(\"getExn\");\n  }\n}\n\nfunction equal(eq, a, b) {\n  if (a !== undefined) {\n    if (b !== undefined) {\n      return eq(_caml_option_js__WEBPACK_IMPORTED_MODULE_0__[\"valFromOption\"](a), _caml_option_js__WEBPACK_IMPORTED_MODULE_0__[\"valFromOption\"](b));\n    } else {\n      return false;\n    }\n  } else {\n    return b === undefined;\n  }\n}\n\nfunction andThen(f, x) {\n  if (x !== undefined) {\n    return f(_caml_option_js__WEBPACK_IMPORTED_MODULE_0__[\"valFromOption\"](x));\n  }\n  \n}\n\nfunction map(f, x) {\n  if (x !== undefined) {\n    return _caml_option_js__WEBPACK_IMPORTED_MODULE_0__[\"some\"](f(_caml_option_js__WEBPACK_IMPORTED_MODULE_0__[\"valFromOption\"](x)));\n  }\n  \n}\n\nfunction getWithDefault(a, x) {\n  if (x !== undefined) {\n    return _caml_option_js__WEBPACK_IMPORTED_MODULE_0__[\"valFromOption\"](x);\n  } else {\n    return a;\n  }\n}\n\nfunction filter(f, x) {\n  if (x !== undefined) {\n    var x$1 = _caml_option_js__WEBPACK_IMPORTED_MODULE_0__[\"valFromOption\"](x);\n    if (f(x$1)) {\n      return _caml_option_js__WEBPACK_IMPORTED_MODULE_0__[\"some\"](x$1);\n    } else {\n      return ;\n    }\n  }\n  \n}\n\nfunction firstSome(a, b) {\n  if (a !== undefined) {\n    return a;\n  } else if (b !== undefined) {\n    return b;\n  } else {\n    return ;\n  }\n}\n\nvar $$default = getWithDefault;\n\n\n/* No side effect */\n\n\n//# sourceURL=webpack://wd/./node_modules/bs-platform/lib/es6/js_option.js?");

/***/ })

/******/ });
});