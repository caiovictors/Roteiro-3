#ifndef INVOICE_H_INCLUDED
#define INVOICE_H_INCLUDED
#include <string>

using namespace std;

class Invoice{
    private:
        int num;
        string desc;
        int quant;
        double preco;
    public:
        Invoice();
        Invoice(int, string, int, double);
        int getNum();
        string getDesc();
        int getQuant();
        double getPreco();
        void setNum(int);
        void setDesc(string);
        void setQuant(int);
        void setPreco(double);
        double getInvoiceAmount(int, double);
        void Verifica(int, double);


};

#endif // INVOICE_H_INCLUDED
