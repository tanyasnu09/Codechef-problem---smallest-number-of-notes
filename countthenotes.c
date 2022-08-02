#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	int n;
	for(int i=0;i<t;i++)
	{
	    scanf("%d", &n);
	    int notes =0;
	    int j = 0;
	    int cur[6] ={100, 50, 10, 5, 2, 1};
	    while(j<6)
	    {
	        notes += n / cur[j];
	        n = n % cur[j];
	        j++;
	    }
	    printf("%d\n", notes);
	}
	return 0;
}

