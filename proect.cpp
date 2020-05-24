#define _USE_MATH_DEFINES
#include <cmath>
#include <limits>
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include "1.h"
#include "2.h"
#include "3.h"
#include "4.h"
#include "5.h"

using namespace std;

int main() {
	Methods met;
	vector<Sphere> spheres;
	vector<Light> lights;
	
	Skin one(V(0.1, 0.9, 0.7));
	Skin two(V(0.3, 0.2, 0.8));
	
	spheres.push_back(Sphere(V(5, 0, -10), 1.5, one));
	spheres.push_back(Sphere(V(-3, 0, -13), 2, two));
	lights.push_back(Light(V(3, 15, 15), 4));

	met.render(spheres, lights);
	
	cout <<endl<<"Done!";
	
	return 0;
}
