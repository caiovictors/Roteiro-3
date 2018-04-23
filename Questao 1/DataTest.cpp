#include <iostream>
#include "Data.h"

using namespace std;

int main(){
	Data hoje(16,4,2018);

	cout << "Data de hoje: " << hoje.getDia()
			<< "\\" << hoje.getMes()
			<< "\\" << hoje.getAno() << endl;

    hoje.avancarDia();

    cout << "Data de amanha: " << hoje.getDia()
			<< "\\" << hoje.getMes()
			<< "\\" << hoje.getAno() << endl;

}
