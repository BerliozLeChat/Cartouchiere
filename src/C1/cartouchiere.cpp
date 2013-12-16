#include <iostream>

#include "../genericite.h"
#include "cartouchiere.h"
#include "../SDAcartouchiere.h"

using namespace std;

void cart_init(cartouchiere & c, int n ){ 
	c = new T_ELT[n];
	for(int i=0;i<n;++i)
		c[i]=0.0;

}

bool estLibre(const cartouchiere & c, int p){
	if(c[p]==0.0)
		return true;
	else
		return false;
}

int ajout(cartouchiere & c,T_ELT t){
	int i=0;
	while(!estLibre(c,i)){
		cout<<i<<c[i]<<endl;
		i++;
	}
	
	c[i] = t;
	return i;
}

void vider(cartouchiere & c,int p){
	c[p]=0.0;
	
}

T_ELT valeurEn(const cartouchiere & c,int p){
	return c[p];
}


