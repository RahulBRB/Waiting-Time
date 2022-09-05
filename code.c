#include <stdio.h>

int main(void) {
	
	int t;
	scanf("%d", &t);
	
	int k,x; // k=Weeks. x=no.of days
	while(t--){
	    scanf("%d%d", &k,&x);
	    
	    int days, rem_days;
	    days=7*k;
	    rem_days=days-x;
	    printf("%d \n", rem_days);
	    
	    
	}
	return 0;
}
