#pragma once

#include <string>
#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
#include <exception>

class Base {
 public:
  virtual ~Base();
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

Base *generate(void);
void identify(Base *p);
void identify(Base &p);