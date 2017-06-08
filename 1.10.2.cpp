int main()
{
//part1
	char hi='hi';
	char *p1 = &hi;
	int array_integer[10];
	int *p2 = &array_integer[10];
	char hello[2]={'a','b'};
	char *p3 = &hello;
	char **p4 = &p1;
	const int constant=0;
	int p5 = &constant;
	int integer;
	const int *p6 = &integer;
//part2	
	int stack_array[3] = {1,2,3};
	int *array = new int[3];
	for (int i=0; i<3;i++){
	array[i] = i;
	}	
	delete[] array;
}

