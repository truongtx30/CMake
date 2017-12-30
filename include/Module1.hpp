#ifndef MODULE_1
#define MODULE_1

#include <iostream>
#include <map>
#include <iterator>

using namespace std;

extern int iCount;
typedef struct
{
	int ID;
	char *name;
	short score;
}Student;

typedef enum
{
	ERROR = 1,
	READ = 2,
	WRITE = 3,
	PRINT = 4

}EResult;

extern std::map<int, Student> g_list;
// use map in c++
void init();
EResult addStudent(Student *);
EResult removeStudent(int ID);
EResult printStudent();



#endif
