// Write a program to calculate the discount applicable to a customer. The customer is eligible for a discount if his purchase is over 2000. If the customer is a regular customer (indicated by R) and the payment is made in cash (indicated by C) the discount applicable is 20%. If the customer is a regular customer and the payment is made with credit card (indicated by D) the discount applicable is 15%. 
// If the customer is not a regular customer, the payment must be made in cash only and the discount applicable is 10%. Calculate and display the total amount payable by the customer






#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
 float purchaseAmount, discount = 0, payableAmount;
 char customerType, paymentMethod;

 // Input customer details
 cout << "Enter purchase amount: ₹";
 cin >> purchaseAmount;

 cout << "Is customer regular? (R for Regular, N for Not Regular): ";
 cin >> customerType;

 // Validate customer type input
 while (toupper(customerType) != 'R' && toupper(customerType) != 'N')
 {
  cout << "Invalid input! Enter R for Regular or N for Not Regular: ";
  cin >> customerType;
 }

 cout << "Payment method (C for Cash, D for Credit Card): ";
 cin >> paymentMethod;

 // Validate payment method input
 while (toupper(paymentMethod) != 'C' && toupper(paymentMethod) != 'D')
 {
  cout << "Invalid input! Enter C for Cash or D for Credit Card: ";
  cin >> paymentMethod;
 }

 // Check eligibility and calculate discount
 if (purchaseAmount > 2000)
 {
  if (toupper(customerType) == 'R')
  {
   if (toupper(paymentMethod) == 'C')
   {
    discount = 0.20; // 20% discount
   }
   else
   {
    discount = 0.15; // 15% discount
   }
  }
  else
  {
   if (toupper(paymentMethod) == 'C')
   {
    discount = 0.10; // 10% discount
   }
   else
   {
    cout << "\nNon-regular customers can only get discount with cash payment!" << endl;
   }
  }
 }
 else
 {
  cout << "\nNo discount applicable (purchase must be over ₹2000)" << endl;
 }

 // Calculate payable amount
 payableAmount = purchaseAmount - (purchaseAmount * discount);

 // Display results
 cout << fixed << setprecision(2);
 cout << "\n----- BILL DETAILS -----" << endl;
 cout << "Purchase Amount: ₹" << purchaseAmount << endl;
 cout << "Customer Type: " << (toupper(customerType) == 'R' ? "Regular" : "Not Regular") << endl;
 cout << "Payment Method: " << (toupper(paymentMethod) == 'C' ? "Cash" : "Credit Card") << endl;

 if (discount > 0)
 {
  cout << "Discount Applied: " << (discount * 100) << "%" << endl;
  cout << "Discount Amount: ₹" << (purchaseAmount * discount) << endl;
 }

 cout << "Total Payable: ₹" << payableAmount << endl;
 cout << "-----------------------" << endl;

 return 0;
}