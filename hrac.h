/*
 * hrac.h
 *
 *  Created on: Jan 21, 2019
 *      Author: zetrax
 */


#ifndef SRC_HRAC_H_
#define SRC_HRAC_H_
#include "Karta.h"

class hrac {

private:


	int n_kariet;
	Karta **zoznam ;


public:

//	void vytvor_karty;

	hrac(int n);
	void v_kartu(int poradie);

};

#endif /* SRC_HRAC_H_ */
