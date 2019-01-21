/*
 * Karta.cpp
 *
 *  Created on: Jan 21, 2019
 *      Author: zetrax
 */

#include "Karta.h"

Karta::Karta(int cislo,char znak) {
	this->cislo =cislo;
	this->znak = znak;

	// TODO Auto-generated constructor stub

}

int Karta::get_cislo(){
	return this->cislo;
}

char Karta::get_znak(){
	return this->znak;
}

void Karta::set_c(char c){
	this->znak=c;

}
void Karta::set_i(int i){
	this->cislo=i;

}
