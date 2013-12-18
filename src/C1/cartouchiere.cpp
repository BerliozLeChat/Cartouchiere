#include <iostream>

#include "../genericite.h"
#include "cartouchiere.h"
#include "../SDAcartouchiere.h"

using namespace std;

void cart_init(cartouchiere & c, int n ){ 
	c = new T_ELT*[n];
	for(int i=0;i<n;++i)
		c[i]=NULL;

}

bool estLibre(const cartouchiere & c, int p){
	if(c[p]==NULL)
		return true;
	else
		return false;
}

int ajout(cartouchiere & c,T_ELT t){
	int i=0;
	while(!estLibre(c,i)){
		i++;
	}
	c[i] = &t;
	cout << i<<":"<<*c[i]<<endl;
	return i;
}

void vider(cartouchiere & c,int p){
	c[p]=NULL;
	
}

T_ELT valeurEn(const cartouchiere & c,int p){
	return *c[p];
}


