#include <stdio.h>
//By Lucas Frias
int main(){
	//this one is weird
	printf("Enter integer:");
	int temp;//okay here's our int
	int* ptrtemp = &temp;//here is the POINTER (with &) that becomes DEREFERRENCED (that's what * means);
			     //basically we have no idea of knowing if ptrtemp is actually where ptrtemp needs to be
			     //because it's not the real value
	scanf("%d", &temp);//scan the input and cast it in
	printf("cool");
	//temp's value
	printf("%d\n", temp);
	//derefenced pointer's value of temp
	printf("%d\n", *ptrtemp);
	//referenced value of temp
	printf("%p\n", &temp);//notice it's referrenced because &var will always be the true, referenced location
			      //that the variable occupies. if it changes, c will keep up unless we explicitly
			      //dereference the value with *
	//derefenced value of temp
	printf("%p\n", ptrtemp);
	return 0;
}
