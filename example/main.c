/*
 * main.c
 *
 *  Created on: 09.05.2019
 *      Author: Admin
 */

#include "println.h"


int main(int argc, char **argv) {

  println("Servus");

  println("");

  for (int i = 0; i < argc; ++i) 
  {
    println(argv[i]);
  }

  return 0;
}

