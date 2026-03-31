#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string name;
    string category;
    double price;
    double weight;
    int stock;
    int warranty_months;

public:
    Product() {
        name = "Ismeretlen";
        category = "Egyéb";
        price = 0.0;
        weight = 0.0;
        stock = 0;
        warranty_months = 12;
    }

    Product(string n, string c, double p, double w, int s, int wm)
        : name(n), category(c), price(p), weight(w), stock(s), warranty_months(wm) {}

    ~Product() {}

    void setName(string n) { name = n; }
    void setCategory(string c) { category = c; }
    void setPrice(double p) { price = p; }
    void setWeight(double w) { weight = w; }
    void setStock(int s) { stock = s; }
    void setWarrantyMonths(int wm) { warranty_months = wm; }

    bool isInStock() const {
        return stock > 0;
    }

    void discount(double percent) {
        price *= (1 - percent / 100);
    }

    int calculateShippingCost() const {
        if (weight <= 0.5) return 1000;
        else if (weight <= 2) return 2000;
        else return 3000;
    }

    void printInvoice() const {
        int shipping = calculateShippingCost();
        double total = price + shipping;
        cout << "Termék: " << name << " (" << category << ")" << endl;
        cout << "Ár: " << price << " Ft, Szállítás: " << shipping << " Ft, Összesen: " << total << " Ft" << endl;
        cout << "Garancia: " << warranty_months << " hónap" << endl;
        cout << (isInStock() ? "Raktáron van" : "Nincs készleten") << endl << endl;
    }
};

int main() {
    Product iphone("iPhone 14 Pro", "Okostelefon", 529990, 0.24, 10, 24);
    Product iphoneMini("iPhone SE", "Okostelefon", 329990, 0.2, 0, 12);
    Product ipad("iPad Air", "Tablet", 379990, 0.6, 5, 12);

    iphone.discount(5); // 5% kedvezmény
    ipad.discount(10);  // 10% kedvezmény

    iphone.printInvoice();
    iphoneMini.printInvoice();
    ipad.printInvoice();

    return 0;
}
