#include <iostream>

using namespace std;

class Gadget
{
private:
    double price;
    int quantity;
    string company;
    double capital;
public:

    void SetGadget(double Inputprice, int InputQuantity, string InputCompany)
    {
        price = Inputprice;
        quantity = InputQuantity;
        company = InputCompany;
    }

    double Capital()
    {
        capital = price * quantity;
        return 0;
    }

    void GetGadget()
    {
        cout << "Компания производитель - " << company << endl;
        cout << "Количество на складе - " << quantity << endl;
        cout << "Цена за штуку - " << price << endl;
        cout << "Капитализация этого товара - " << capital << endl<<endl;
    }
};

class Laptop : public Gadget
{
private:
    string type = "Ноутбук";
    double diagonal;
    string model;
public:

    void SetLaptop(string InputModel, double InputDiagonal)
    {
        model = InputModel;
        diagonal = InputDiagonal;
    }

    void GetLaptop()
    {
        cout << "Тип товара - " << type << endl;
        cout << "Диагональ - " << diagonal << endl;
        cout << "Модель - " << model << endl;
    }
};

class SmartPhone : public Gadget
{
private:
    string type = "Смарфон";
    double diagonal;
    string model;
    int memory;
public:

    void SetSmartPhone(string InputModel, double InputDiagonal, int InputMemory)
    {
        model = InputModel;
        diagonal = InputDiagonal;
        memory = InputMemory;
    }

    void GetSmartPhone()
    {
        cout << "Тип товара - " << type << endl;
        cout << "Диагональ - " << diagonal << endl;
        cout << "Количество памяти - " << memory << endl;
        cout << "Модель - " << model << endl;

    }
};

int main()
{
    system("chcp 1251");
    system("cls");

    Laptop a;
    SmartPhone b;

    a.SetLaptop("IdeaPad 1", 15.6);
    a.SetGadget(19393, 3, "lenova");
    a.Capital();
    b.SetSmartPhone("iphone 6s", 4.7, 8);
    b.SetGadget(1399, 5, "apple");
    b.Capital();
    a.GetLaptop();
    a.GetGadget();
    b.GetSmartPhone();
    b.GetGadget();
}
