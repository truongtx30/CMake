#ifndef MODULE_3_H
#define MODULE_3_H

typedef enum 
{
	DASH = 1,
	SOLID  2
}EType;

class Line
{
public:
	Line();
	virtual ~Line();
private:
	int m_distance;
	EType m_type;		
}

#endif
