#include "index.h"
#include <fmt/core.h>
#include <iostream>
#include <ostream>

void baz();

void bar() { baz(); }
void baz() { bar(); }
int main() { bar(); }
