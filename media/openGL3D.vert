#version 130

in vec3 position;
in vec3 color;

out vec3 fColor;

//Q11
uniform mat4 projection;
uniform mat4 transform;

void main() {
  //vec4 clipPosition=vec4(position,1);

  //Q11
/*
  vec4 eyePosition=vec4(position,1); // passage en coordonnées homogènes
  vec4 clipPosition = projection * eyePosition; // transformation par la matrice de projection
*/
  //Q15

  vec4 eyePosition=vec4(position,1); // passage en coordonnées homogènes
  eyePosition = transform*eyePosition; // application de la rotation
  vec4 clipPosition = projection*eyePosition; // puis application de la matrice de projection

  fColor=color;

  gl_Position=clipPosition;
}
