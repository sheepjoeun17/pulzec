#include <stdio.h>
int main()
{
	FLIE*out;
	int i;
	out=fopen("output.txt","w");
	for(i=0;i<100;i++);
	fprintf(out,"%d\n",i);
	fclose(out);
	return 0;
}
