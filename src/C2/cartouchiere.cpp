#include <iostream>

#include "../genericite.h"
#include "cartouchiere.h"
#include "../SDAcartouchiere.h"

using namespace std;

void cart_init(cartouchiere & c, int n ){ 
	c.max=n;
	maillon * tete;
	tete->elt = NULL;
	tete->suivant = NULL;
	c.tete = tete;
	if(n>1){
		int i = 1;
		maillon * ptr = tete;
		while(i<n){
			maillon * mm;
			mm->elt = NULL;
			mm->suivant = NULL;
			ptr->suivant =mm;
			ptr=mm;
			++i;
		}
	}

}

bool estLibre(const cartouchiere & c, int p){
	
	if(p>=c.max)
		return false;
	maillon * ptr = c.tete;
	if(p==0){
		if(ptr->elt==NULL)
			return true;
		else{
			cout << ptr->elt<<endl;
			return false;
		}	
	}	
		
	int i = 0;
	while(i<p){
		ptr = ptr->suivant;
		++i;
	}
	if(ptr->elt==NULL)
		return true;
	else
		return false;
}

int ajout(cartouchiere & c,T_ELT t){
	int i=0;
	while(!estLibre(c,i)){
		++i;
		cout << "test"<<endl;
	}
	cout << "ok "<<endl;
	maillon * ptr = c.tete;
	if(i==0){
		ptr->elt=&t;
	}
	else{
		int p = 0;
		while(p<i){
			ptr = ptr->suivant;
			++p;
		}
		ptr->elt=&t;
	}
	return i;
}

void vider(cartouchiere & c,int p){
	
	if(p<=c.max-1){
	maillon ptr = *(c.tete);
		if(p==0){
			ptr.elt=NULL;	
		}
		else{

			int i = 0;
			while(i<p){
				ptr = *(ptr.suivant);
				++i;
			}
			ptr.elt=NULL;
		}	
	}
	
}

T_ELT valeurEn(const cartouchiere & c,int p){

	maillon ptr = *(c.tete);
	if(p==0){
		return *(ptr.elt);	
	}
	else{
		int i = 0;
		while(i<p){
		ptr = *(ptr.suivant);
			++i;
		}
		return *(ptr.elt);
	}	
}


