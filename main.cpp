/*
 * main.cpp
 *
 *  Created on: Jan 21, 2019
 *      Author: zetrax
 *
 */
#include<stdio.h>
#include <iostream>
#include "hrac.h"
#include <cstdlib>
#include <ctime>
#include<stdlib.h>
#include<string.h>


int randomFunkcia(int i ){
	srand(i);
	//printf("%d\n",(rand() % 32));
	return (rand() % 32);

}

int over(int tmp,int *pole, int i){
	int zhoda =0;
	for(int j=0;j<i;j++){
		if(pole[j]==tmp){
			zhoda =1;
		}
	}
	return zhoda;
}

int main(int argv, char *argc[]){

	FILE *fr;
	unsigned long int len = 0;


	//printf("%s",argc[1]);

	fr = fopen(argc[1],"r");

	char **line ;
	getline(&line[0],&len,fr);
	getline(&line[1],&len,fr);

	printf("%s",line[1]);
	fclose(fr);

	fr = fopen(argc[1],"w");

	fprintf(fr,"blabla");


/*
 // hrac *hrac1 = new hrac(32);
	int pole[20];
	int tmp,k=0;
	for(int i = 0; i<16;i++){
		k++;

		tmp = randomFunkcia(k);

		if(over(tmp,pole,16) == 1){
			printf("zhoda \n");
			i=i-1;


		}else{

		pole[i]=tmp;
		}
		printf("%d\n",tmp);
	}

	printf("\n\n");

	for(int i = 0; i<16;i++){
		printf("%d\n",pole[i]);
	}
*/

}
