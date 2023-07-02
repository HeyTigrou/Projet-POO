#pragma once
class CLpoint
{
private:
	double dist;
	void ini_obj(double, double);
	double x;
	double y;

public:
	CLpoint(void);
	CLpoint(double, double);
	CLpoint(CLpoint&);
	void setX(double);
	void setY(double);
	double getX();
	double getY();
};