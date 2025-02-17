#include <stdio.h>

#define MAX_PERSONS 1024
#define DEBUG

// global scope
int g_NumPersons = 0;

int some_other_function(){
	int personID = 1;
}

int main(int argc, char const *argv[])
{
	#ifdef DEBUG
	printf("WE ARE IN DEBUG MODE: %s:%d", __FILE__, __LINE__);
	#endif
	// type name = initial_value;
	// descriptive variable name
	int personID = 0;
	int person2ID = personID + 1;
	// char
	// float
	{
		int personID = 0;
		personID += 1;
	}
	return 0;
}
