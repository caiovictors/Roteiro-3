/*
 * Data.h
 *
 *  Created on: 11/04/2018
 *      Author: tiagomaritan
 */

#ifndef DATA_H_
#define DATA_H_

class Data {
	private:
		int dia;
		int mes;
		int ano;
	public:
		Data();
		Data(int, int, int);
		virtual ~Data();
		int getDia();
		int getMes();
		int getAno();
		void setDia(int);
		void setMes(int);
		void setAno(int);
		bool verificaData();
		void avancarDia();
};

#endif /* DATA_H_ */
