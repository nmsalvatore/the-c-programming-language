#include <stdio.h>
#include "who.h"

void sayHello(const char* name);

int main() {
    sayHello(name);
	return 0;
}

void sayHello(const char* name) {
    printf("Hello, %s!\n", name);
}
