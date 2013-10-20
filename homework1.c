#include <stdio.h>

typedef unsigned int uint;

uint to_graycode (uint input);

void main(int argc, char * argv[])
{
	uint test = 0xd4;
	uint out;
	int i;
	
	if (argc > 1) {
		test = atoi(argv[1]);
	} else {
		printf("Gray code converter: \n Usage\n");	
		printf(" %s <uint16> \n", argv[0] ); 
		printf("Example %s %d \n", argv[0], test ); 
	}
		

	printf("in 0x%x\n", (int) test);
	out = to_graycode(test);
	printf("Out 0x%x\n", out);

}

uint to_graycode (uint input)
{
	uint out;
	uint shiftedBy1;
	
	shiftedBy1 = (input >> 1);

	out = shiftedBy1 ^ input;

	return out;
}
