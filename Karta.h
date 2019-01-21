/*
 * Karta.h
 *
 *  Created on: Jan 21, 2019
 *      Author: zetrax
 */

#ifndef SRC_KARTA_H_
#define SRC_KARTA_H_

class Karta {

private:
	int cislo;
	char znak;

public:
	char get_znak();
	int get_cislo();
	void set_c(char c);
	void set_i(int i);
	Karta(int cislo , char znak);
};

#endif /* SRC_KARTA_H_ */
