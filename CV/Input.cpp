#include "Input.h"
#include <iostream>


Mat ReadImage(string name)
{
	Mat src=imread(name); //image path
	
		if (src.empty()) 
		{
			cout << "Cannot load image!" << endl;
		}
		return src;
}