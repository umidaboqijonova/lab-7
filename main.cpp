#include <iostream>
using namespace std;
//problem 14 lab 6

// void welcomeMessage() {
//     cout<<"Welcome to the C++ programming world!";
// }
//
//     int main() {
//         welcomeMessage();
//     }



//class problem 1

//const double PI=3.141592653589793;
// double area(double r) {
//     return 3.14 * r * r;
// }
// double circumference(double r) {
//     return 2 * 3.14 * r;
// }
// double volume(double r) {
//     return 4.0/3.0 * 3.14 * r*r*r;
// }
//
// int main() {
//     double r;
//     cin>>r;
//     cout<<"area of circle: "<<area(r)<<endl;
//     cout<<"circumference: "<<circumference(r)<<endl;
//     cout<<"volume: "<<volume(r);
// }

//class problem 2

// void incrementByValue(int a) {
//     a += 1;
// }
// void incrementByReference(int &a) {
//     a += 1;
// }
// int main() {
//     int num;
//     cin >> num;
//     incrementByValue(num);
//     cout<<"after call by value: "<<num<<endl;
//     incrementByReference(num);
//     cout<<"after call by reference: "<<num<<endl;
// }

//problem 1 lab 7

// void menu() {
//     cout<<"==== Restaurant Menu ====\n1. Pizza ($10)\n2. Burger ($8)\n3. Salad ($5)\n";
// }
// int cost(int price, int quantity) {
//     return price * quantity;
// }
// int main() {
//     int total_bill=0;
//     char orderMore;
//     int choice, price, quantity;
//     do {
//         menu();
//         cout<<"Enter you choice (1-3): ";
//         cin>>choice;
//         switch(choice) {
//             case 1:
//                 price=10;
//                 cout<<"Enter quantity for Pizza: ";
//             cin>>quantity;
//             break;
//             case 2:
//                 price=8;
//                 cout<<"Enter quantity for Burger: ";
//             cin>>quantity;
//             break;
//             case 3:
//                 price=5;
//                 cout<<"Enter quantity for Salad: ";
//             cin>>quantity;
//             break;
//             default:
//                 cout<<"Invalid choice, please try again";
//             continue;
//
//         }
//         int bill = cost(price, quantity);
//         total_bill+=bill;
//             cout<<"Cost for this order: $"<<bill<<endl;
//         cout<<"Running total: "<<total_bill<<endl;
//         cout<<"Do you want to order more? (y/n):";
//         cin>>orderMore;
//     }while(orderMore=='y' || orderMore=='Y');
//     cout<<"\nTotal cost is $"<<total_bill;
//     return 0;
// }


//problem 2

// double parkingFee(double hours) {
//     double totalFee=0;
//     if (hours>2) {
//         if (hours<=5) {
//             totalFee=(hours-2)*2;
//         } else {
//             totalFee=6+(hours-5)*5;
//         }
//     }
//     return (totalFee);
// }
// int main() {
//     double hours, price;
//     char choice;
//     do {
//         cout<<"Hours"; cin>>hours;
//         price=parkingFee(hours);
//         cout<<"Fee is $"<<price;
//         cout<<"\nIs there any other user? (y/n)"; cin>>choice;
//     }while (choice=='y' || choice=='Y');
// }

//problem 3
//deposit is adding; withdrawal is removing; balance inquiry is current balance;
// double balance =500;
// void deposit(double amount) {
//     balance += amount;
// }
// void withdrawal(double amount) {
//     if (balance >= amount) {
//         balance -= amount;
//     }else {
//         cout<<"Insufficient funds\n";
//     }
// }
// int main() {
//     char choice;
//     do{
//         double amount = 0;
//         cout<<"=== Banking System ===\nChoose operation:\n1. Deposit\n2. Withdraw\n3.Check Balance\n4. Finish";
//         cin>>choice;
//         switch (choice) {
//             case '1':
//                 cout<<"Enter amount to deposit:"; cin>>amount;
//                 deposit(amount);
//             cout<<"Balance: $"<<balance<<endl;
//             break;
//             case '2':
//                 cout<<"Enter amount to withdrawal:"; cin>>amount;
//                 withdrawal(amount);
//             cout<<"Balance: $"<<balance<<endl;
//             break;
//             case '3':
//                 cout<<"Your Balance is $"<<balance<<endl;
//             break;
//             case '4':
//                 cout<<"Exiting...";
//                 break;
//             default:
//                 cout<<"Invalid Choice";
//         }
//     }while (choice!='4');
// }

//problem 4
//
// void movie() {
//     cout<<"=== Movie Tickets ===\n1. Movie A: $8\n2. Movie B: $10\n3. Movie C: $12\n";
// }
// int cost(int price, int quantity){
//         return price*quantity;
//     }
// int main() {
//     int total_bill=0;
//     char orderMore;
//     int choice, price, quantity;
//     do {
//         movie();
//         cout<<"Enter you choice (1-3): ";
//         cin>>choice;
//         switch(choice) {
//             case 1:
//                 price=8;
//                 cout<<"Enter number of tickets: ";
//             cin>>quantity;
//             break;
//             case 2:
//                 price=10;
//                 cout<<"Enter number of tickets: ";
//             cin>>quantity;
//             break;
//             case 3:
//                 price=12;
//                 cout<<"Enter number of tickets: ";
//             cin>>quantity;
//             break;
//             default:
//                 cout<<"Invalid choice, please try again";
//             continue;
//
//         }
//         int bill = cost(price, quantity);
//         total_bill+=bill;
//             cout<<"Total cost: $"<<bill<<endl;
//         cout<<"Running total: "<<total_bill<<endl;
//         cout<<"Do you want to buy more? (y/n):";
//         cin>>orderMore;
//     }while(orderMore=='y' || orderMore=='Y');
//     cout<<"\nTotal cost is $"<<total_bill;
//     return 0;
// }

//problem 5
//
// void train() {
//     cout<<"=== Available Trains ===\n1. Train X: $15\n2. Train Y: $20\n3. Train Z: $25\n4. Finish\n";
// }
// int cost(int price, int quantity) {
//     return price * quantity;
// }
// int main() {
//     int price=0, quantity=0, totalValue=0, fee=0, choice;
//     char a, b, order;
//     cout<<"From which city are you going?"; cin>>b;
//     cout<<"Where are you going?"; cin>>a;
//     do {
//         train();
//         cout<<"Enter a choice (1-3): "; cin>>choice;
//         switch(choice) {
//             case 1:
//                 price=15;
//             cout<<"Enter number of tickets: "; cin>>quantity;
//             fee=cost(price, quantity);
//             break;
//             case 2:
//                 price=20;
//             cout<<"Enter number of tickets: "; cin>>quantity;
//             fee=cost(price, quantity);
//             break;
//             case 3:
//                 price=25;
//             cout<<"Enter number of tickets: "; cin>>quantity;
//             fee=cost(price, quantity);
//             break;
//             case 4:
//                 cout<<"Exiting...";
//             order = 'n';
//             break;
//             default:
//                 cout<<"Enter valid choice"<<endl;
//         }
//             totalValue += fee;
//             cout << "Running cost: $" << fee << endl;
//         cout << "Total Value: $" << totalValue << endl;
//             cout << "Do you want to buy more? (y/n): ";
//             cin >> order;
//     }while (order == 'y' || order == 'Y');
//     cout<<"Total Value: $"<<totalValue<<endl;
// }
// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.