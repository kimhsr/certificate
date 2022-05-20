#include <stdio.h>
int main(void)
{
	int i = 10;
	switch (1) 
	{
	case 1: i += 3; 
	case 2:  i++;   // 
	case 3: i = 20;
	case 4: i -= 5;
	case 5: i += 2;
	case 6: i *= 2;
	case 7: i /= 5;
	default: ++i;
	}

		printf("%d", i);

	}