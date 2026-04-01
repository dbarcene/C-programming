/**
 * File              : cube.c
 * Author            : David Barcene <dbarcene@indicasat.org.pa>
 * Date              : 01.04.2026
 * Last Modified Date: 01.04.2026
 * Last Modified By  : David Barcene <dbarcene@indicasat.org.pa>
 */
#include <math.h>
#include <stdio.h>

float A, B, C;

float positionX(int i, int j, int k) {
        return sin(C) * (j * cos(A) + k * sin(A)) + cos(C) * (-sin(B) * (k * cos(A) - j * sin(A) + i * cos(B) );
}

float positionY(int i, int j, int k) {
        return cos(C) * (j * cos(A) + k * sin(A)) - sin(C) * (-sin(B) * (k * cos(A) - j * sin(A) + i * cos(B) );
}

float positionZ(int i, int j, int k) {
  return cos(B) * (k * cos(A) - j * sin(A) + i * sin(B));
}

void calculateForSurface(float cubeX, float cubeY, float cubeZ, int ch) {
  x = positionX(cubeX, cubeY, cubeZ);
  y = positionY(cubeX, cubeY, cubeZ);
  z = positionZ(cubeX, cubeY, cubeZ);

  u = (x / z) * scale + offset;
  v = (y / z) * scale + offset;
}

int main {
  printf("\x1b[H");
  return 0;
}
