#include "color.h"
#include "vec3.h"
#include <iostream>

int main (){

	//img

	int img_width = 256;
	int img_height = 256;

	//render w ppm header
	std::cout << "P3\n" << img_width << ' ' << img_height << "\n255\n";

	for (int j = 0; j < img_height; j++){
        std::clog << "\rScanlines remaining: " << (img_height - j) << ' ' << std::flush;
		
		for (int i = 0; i < img_width; i++){
            		auto pixel_color = color(double(i)/(img_width-1), double(j)/(img_height-1), 0);
            		write_color(std::cout, pixel_color);
			
			//auto r = double(i) / (img_width-1);
			//auto g = double(j) / (img_height-1);
			//auto b = 0.0;
			//
			//int ir = int(255.999*r);
			//int ig = int(255.999*g);
			//int ib = int(255.999*b);
			//
			//std::cout << ir << ' ' << ig << ' ' << ib << '\n';
		}
	}
    std::clog << "\rDone.                 \n";
}




