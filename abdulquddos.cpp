#include <iostream>
#include <string>
using namespace std;

// Define a class for representing Invoices
class Invoice {
private:
    string partNumber;          // Part number of the invoice
    string partDescription;     // Description of the part
    int quantity;               // Quantity of the part
    int pricePerItem;           // Price per item

public:
    // Constructor to initialize the Invoice with default or provided values
    Invoice(const string& number = "", const string& description = "", int qty = 0, int price = 0): partNumber(number), partDescription(description), quantity(qty), pricePerItem(price) {}

    // Setters and Getters for data members

    // Setter for partNumber
    void setPartNumber(const string& number) {
        partNumber = number;
    }

    // Getter for partNumber
    string getPartNumber() const {
        return partNumber;
    }

    // Setter for partDescription
    void setPartDescription(const string& description) {
        partDescription = description;
    }

    // Getter for partDescription
    string getPartDescription() const {
        return partDescription;
    }

    // Setter for quantity with validation
    void setQuantity(int qty) {
        if (qty > 0) {
            quantity = qty;
        } else {
            quantity = 0;
        }
    }

    // Getter for quantity
    int getQuantity() const {
        return quantity;
    }

    // Setter for pricePerItem with validation
    void setPricePerItem(int price) {
        if (price > 0) {
            pricePerItem = price;
        } else {
            pricePerItem = 0;
        }
    }

    // Getter for pricePerItem
    int getPricePerItem() const {
        return pricePerItem;
    }

    // Function to calculate the total invoice amount
    int getInvoiceAmount() const {
        return quantity * pricePerItem;
    }
};

// Main function
int main() {
    // Create an Invoice object 'y' with default values
    Invoice y;

    // Set values for 'y'
    y.setPartNumber("hw5678");
    y.setPartDescription("Wire cripper");
    y.setQuantity(10);
    y.setPricePerItem(70);

    // Display the invoice amount for 'y'
    cout << "Invoice amount for y: " << y.getInvoiceAmount() << endl;

    // Create an Invoice object 'f' with specified values
    Invoice f("hw7890", "screw driver", 2, 100);

    // Copy the values of 'f' to 't'
    Invoice t = f;

    // Display the invoice amount for 't' (copied from 'f')
    cout << "Invoice amount for t (copied from f): " << t.getInvoiceAmount() << endl;

    // Create an Invoice object 'm' with default values
    Invoice m;

    // Display the invoice amount for 'm' (default values)
    cout << "Invoice amount for m (default values): " << m.getInvoiceAmount() << endl;

    // Return 0 to indicate successful execution
    return 0;
}
