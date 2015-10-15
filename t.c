#include <stdio.h>
#define INSNLEN 8

#define SHIFT(n) (64 - (n))
int main()
{
	unsigned long long int op[3] = {0x78480405ffffff63, 0x1840041000000002, 0x08c00001ffffff5a};
	unsigned long long int res;
	int i;
  unsigned long long int delta = 0x9999999999999999;
  unsigned long long int delta1;
  delta1 = (delta << SHIFT(33)) >> SHIFT(33);
  printf ("delta %Lx\n", delta1);
  delta1 = (delta &0x1ffffffff);
  printf ("delta %Lx\n", delta1);

	for (i=0; i<3; i++ ) {
		res = (op[i]>>48) & 0xffff;
		printf ("%Lx %Lx\n", op[i], res);
		if ( res == 0x08c0 ) {
			printf ("yes\n");
		}
			
	}
}
