/* 
 * File:   cartouchiere.h
 * Author: didierrobbes
 *
 * Created on 7 novembre 2013, 16:06
 */

#ifndef CARTOUCHIERE_H
#define	CARTOUCHIERE_H

typedef struct maillon maillon;
struct maillon{
	T_ELT * elt;
	maillon * suivant;
};

struct cartouchiere{
	maillon * tete;
	int max;
};


#endif	/* CARTOUCHIERE_H */

