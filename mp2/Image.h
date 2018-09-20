/**
 * @file Image.h
 * Contains your declaration of the interface for the Image class.
 */

#pragma once

#include <string>
#include "cs225/PNG.h"
#include "cs225/HSLAPixel.h"

using namespace cs225;

class Image : public PNG {

	public:
		Image();

		void lighten();
		void lighten(double amount);
		void darken();
		void darken(double amount);
		void saturate();
		void saturate(double amount);
		void desaturate();
		void desaturate(double amount);
		void grayscale();
		void grayscale(double amount);
		void rotateColor(double degrees);
		void illinify();
		void scale(double factor);
		void scale(unsigned x, unsigned y);
		void setCoords(unsigned x, unsigned y);
		unsigned getX();
		unsigned getY();
	
	private:
		unsigned xCoord_;
		unsigned yCoord_;
};