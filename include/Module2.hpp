#ifndef MODULE_2_H
#define MODULE_2_H

class Point
{
public:
	Point();
	virtual ~Point();
	void setX(int x);
	void setY(int x);
	int getX();
	int getY();
	
private:
	int m_x;
	int m_y;
}


#endif
