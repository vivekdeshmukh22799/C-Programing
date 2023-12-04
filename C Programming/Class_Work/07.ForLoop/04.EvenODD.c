#include <stdio.h>
void main(){
	int i;
	for (i=0; i<=100; i++){
		if(i%2==0){
			printf("\n%d EVEN number",i);
		}
		else {
			printf("\n                %d ODD number",i);
		}
	}
}
