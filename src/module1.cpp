#include "Module1.hpp"

int iCount;
std::map <int, Student> g_list;

void init()
{
	iCount = 0;
	std::cout << "Initialize list... \n";
}

EResult addStudent(Student *pStudent){
	//g_list.insert(pair <int, pStudent> (iCount++, *pStudent); 
	g_list[iCount++] = *pStudent;
	std::cout << "Added a student  item \n";
	return WRITE;
}

EResult removeStudent(int ID){
	std::map <int, Student>::iterator itr;
	for(itr = g_list.begin(); itr != g_list.end(); ++itr)
	{
		if(itr->first == ID){
			iCount--;
			//g_list.earse(ID);
			std::cout << "deleted a student a item \n";
		}		
	}
	return READ;
}

EResult  printStudent()
{
	std::map <int, Student>::iterator itr;
        for(itr = g_list.begin(); itr != g_list.end(); itr++)
	{
        	std::cout << '\t' << itr->first << '\n';      
        }
	return PRINT;
}
