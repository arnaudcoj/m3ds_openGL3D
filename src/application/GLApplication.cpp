#include "GLApplication.h"

#include <iostream>

using namespace std;
using namespace p3d;

GLApplication::~GLApplication() {
}

GLApplication::GLApplication() {

  _lightPosition.set(0,0,0);

  _basicMesh.initTetrahedron();

  _angle=0.0;

    // Q11 _projection de classe Matrix4 (déclaré dans GLApplication.h)
//  _projection.setOrtho(-20,20,-20,20,5,100); // cf calcul de la matrice dans le cours


    //Q13.1
//  _projection.setOrtho(-18,22,-10,30,5,100);

    //Q13.2
//  _projection.setOrtho(-5,2,-10,10,5,100);


    //Q14
//   _projection.setOrtho(-20,20,-20,20,5,1e8);

   _projection.setOrtho(-20,20,-20,20,5,100);
}




/** ********************************************************************** **/
void GLApplication::initialize() {
  // appelée 1 seule fois à l'initialisation du contexte
  // => initialisations OpenGL
  glClearColor(1,1,1,1);

//  glLineWidth(2.0);
  glPolygonMode(GL_FRONT_AND_BACK,GL_FILL);

  //Q8 et suite

  glEnable(GL_DEPTH_TEST);
  glDepthFunc(GL_LESS);
  glClearDepth(1.0);


  //Q9
  /*
  glEnable(GL_DEPTH_TEST);
  glDepthFunc(GL_GREATER);
  glClearDepth(0.);
  */

  _shader.attribute("position",0);
  _shader.attribute("color",1);
  _shader.read("openGL3D");



  _basicMesh.initDraw();
}

void GLApplication::resize(int width,int height) {
  // appelée à chaque dimensionnement du widget OpenGL
  // (inclus l'ouverture de la fenêtre)
  // => réglages liés à la taille de la fenêtre
  glViewport(0,0,width,height);
  // ...
}

void GLApplication::update() {
  // appelée toutes les 20ms (60Hz)
  // => mettre à jour les données de l'application
  // avant l'affichage de la prochaine image (animation)
  // ...

  _angle+=0.2;


  _transform.setTranslation(0,0,-15);
  _transform.rotate(_angle,Vector3(1,0.2,0));
  _transform.translate(0,0,15);
}

void GLApplication::draw() {
  // appelée après chaque update
  // => tracer toute l'image

  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


  glUseProgram(_shader.id());

  //Q11

  _shader.uniform("projection",_projection); // utilisation de la classe shader
                                             // qui permet d'alléger la syntaxe OpenGL

  //Q15

  _shader.uniform("transform",_transform); // utilisation de la classe shader
                                             // qui permet d'alléger la syntaxe OpenGL

  _basicMesh.draw();
  glUseProgram(0);

  snapshot(); // capture opengl window if requested
}

/** ********************************************************************** **/
/** i = button number, s = button text
 */
void GLApplication::leftPanel(int i,const std::string &s) {
  cout << "GLApplication : button clicked " << i << " " << s << endl;
  /*
  switch (i) {
    case 0:menu0();break;
    case 1:menu1();break;
  }
  */
}

/** *********************************************************** **/




