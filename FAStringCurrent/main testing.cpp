#include <iostream>
#include "FAString.h"

int main() {
	FAString str1 = "poggers";
	FAString str2 = "poggers";

	if (str1 == str2) {
		std::cout << "true";
	}
	else {
		std::cout << "false";
	}
}