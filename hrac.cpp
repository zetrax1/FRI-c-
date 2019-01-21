/*
 * hrac.cpp
 *
 *  Created on: Jan 21, 2019
 *      Author: zetrax
 */

#include "hrac.h"
#include<stdio.h>

hrac::hrac(int n) {
	this->n_kariet=n;
	zoznam = new Karta*;

	for(int i=0;i<n;i++){

	zoznam[i] = new Karta(i,'A');

	}


}


void hrac::v_kartu(int poradie){

	printf("%d %c \n",zoznam[poradie]->get_cislo(),zoznam[poradie]->get_znak());
}
