#include <iostream>
#include <ctime>
#include <csignal>
#include <unistd.h>
#include <iomanip>

using namespace std;

float p_p_g = 0;
bool stoprequest = false;

void shutdown();
void clear_screen();
void beep();
void begin();
void showmethemoney();
void transaction_cancelled();
void transaction_approved();
void pumping();
void calculate();
void replace_pump();
void timeout();
void wait();
void emergency();
void stopgas(int i);

int main() {
    begin();
}

void clear_screen() {
    cout << "\033[2J\033[1;1H"; //Yeah, I don't know either, I just got it from stack overflow
}

void beep() { // annoying beep
    clear_screen();
    cout << "********************************************************\n";
    cout << "*                                                  	*\n";
    cout << "*                                                  	*\n";
    cout << "*      	BEEP! That is not a valid option.       	*\n";
    cout << "*                                                  	*\n";
    cout << "*                                                  	*\n";
    cout << "********************************************************\n";
    usleep(1500000);
    wait();
    clear_screen();
}

void emergency() { // for those unexpected moments
    clear_screen();
    cout << "********************************************************\n";
    cout << "*                                                  	*\n";
    cout << "*                                                  	*\n";
    cout << "*          	FAILURE OR HAZARD DETECTED          	*\n";
    cout << "*                                                  	*\n";
    cout << "*                                                  	*\n";
    cout << "********************************************************\n";
    usleep(1000000);
}

void stopgas(int i) {
    stoprequest = true;
}

void shutdown() {
    clear_screen();
    cout << "********************************************************\n";
    cout << "*                                                  	*\n";
    cout << "*                                                  	*\n";
    cout << "*              	PUMP SHUTTING DOWN              	*\n";
    cout << "*                                                  	*\n";
    cout << "*                                                  	*\n";
    cout << "********************************************************\n\n\n";
    usleep(1000000);
}

void begin() { // initial state
    while (true) {
   	 clear_screen();
   	 cout << "********************************************************\n";
   	 cout << "*                                                  	*\n";
   	 cout << "*             	WELCOME TO KERNEY GAS!           	*\n";
   	 cout << "*            	Insert card (i) to begin          	*\n";
   	 cout << "*                                                  	*\n";
   	 cout << "*                                                  	*\n";
   	 cout << "********************************************************\n";
   	 string str = "";
   	 cin >> str;
   	 char a = str.at(0);
   	 a = tolower(a);
   	 if (a == 'e') {
   		 emergency();
   		 shutdown();
   		 break;
   	 } else if (a == 'i') {
   		 showmethemoney();
   	 } else {
   		 beep();
   		 begin();
   	 }
    }

}

void transaction_cancelled() { // transitional state
    clear_screen();
    cout << "********************************************************\n";
    cout << "*                                                  	*\n";
    cout << "*                                                  	*\n";
    cout << "*            	Transaction cancelled.            	*\n";
    cout << "*                                                  	*\n";
    cout << "*                                                  	*\n";
    cout << "********************************************************\n";
    usleep(1000000);
    wait();
}

void showmethemoney() { // state
    string str = " ";
    char money = ' ';
    string pin = "", zip = "";
    clear_screen();
    cout << "********************************************************\n";
    cout << "*                                                  	*\n";
    cout << "*                                                  	*\n";
    cout << "*    	Press 'd' for debit or 'c' for credit     	*\n";
    cout << "*                                                  	*\n";
    cout << "*                                                  	*\n";
    cout << "********************************************************\n";
    cin >> str;
    money = str.at(0);
    money = tolower(money);
    if (money == 'd') {
   	 clear_screen();
   	 cout << "********************************************************\n";
   	 cout << "*                                                  	*\n";
   	 cout << "*                                                  	*\n";
   	 cout << "*      	Please enter your pin(hint: 1234)       	*\n";
   	 cout << "*                                                  	*\n";
   	 cout << "*                                                  	*\n";
   	 cout << "********************************************************\n";
   	 cin >> pin;
   	 if (pin == "1234") {
   		 wait();
   		 transaction_approved();
   	 } else {
   		 wait();
   		 clear_screen();
   		 cout << "********************************************************\n";
   		 cout << "*                                                  	*\n";
   		 cout << "*                                                  	*\n";
   		 cout << "*               	Incorrect pin.                 	*\n";
   		 cout << "*                                                  	*\n";
   		 cout << "*                                                  	*\n";
   		 cout << "********************************************************\n";
   		 wait();
   		 transaction_cancelled();
   		 begin();
   	 }
    } else if (money == 'c') {
   	 clear_screen();
   	 cout << "********************************************************\n";
   	 cout << "*                                                  	*\n";
   	 cout << "*                                                  	*\n";
   	 cout << "*   	Please enter your zip code(hint: 93730)    	*\n";
   	 cout << "*                                                  	*\n";
   	 cout << "*                                                  	*\n";
   	 cout << "********************************************************\n";
   	 cin >> zip;
   	 if (zip == "93730") {
   		 wait();
   		 clear_screen();
   		 transaction_approved();
   	 } else {
   		 clear_screen();
   		 cout << "********************************************************\n";
   		 cout << "*                                                  	*\n";
   		 cout << "*                                                  	*\n";
   		 cout << "*            	Incorrect zip code.               	*\n";
   		 cout << "*                                                  	*\n";
   		 cout << "*                                                  	*\n";
   		 cout << "********************************************************\n";
   		 wait();
   		 transaction_cancelled();
   		 wait();
   		 begin();
   	 }
    } else {
   	 beep();
   	 transaction_cancelled();
   	 begin();
    }
}

void transaction_approved() { // state
    int octane = 0;
    while (true) {

   	 clear_screen();
   	 cout << "********************************************************\n";
   	 cout << "*           	Transaction approved.              	*\n";
   	 cout << "*  	Maximum is 25 gallons. Please select grade: 	*\n";
   	 cout << "*  	Select 1 for 87 octane at $1.87 per gallon  	*\n";
   	 cout << "*  	Select 2 for 89 octane at $2.47 per gallon  	*\n";
   	 cout << "*  	Select 3 for 91 octane at $3.20 per gallon  	*\n";
   	 cout << "********************************************************\n";
   	 cin >> octane;
   	 if (octane == 1) {
   		 clear_screen();
   		 cout << "********************************************************\n";
   		 cout << "*                                                  	*\n";
   		 cout << "*                                                  	*\n";
   		 cout << "*         	You have selected 87 octane.         	*\n";
   		 cout << "*                                                  	*\n";
   		 cout << "*                                                  	*\n";
   		 cout << "********************************************************\n";
   		 p_p_g = 1.87;
   		 usleep(2000000);
   		 wait();
   		 pumping();
   	 } else if (octane == 2) {
   		 clear_screen();
   		 cout << "********************************************************\n";
   		 cout << "*                                                  	*\n";
   		 cout << "*                                                  	*\n";
   		 cout << "*         	You have selected 89 octane.         	*\n";
   		 cout << "*                                                  	*\n";
   		 cout << "*                                                  	*\n";
   		 cout << "********************************************************\n";
   		 p_p_g = 2.47;
   		 usleep(2000000);
   		 wait();
   		 pumping();
   	 } else if (octane == 3) {
   		 clear_screen();
   		 cout << "********************************************************\n";
   		 cout << "*                                                  	*\n";
   		 cout << "*                                                  	*\n";
   		 cout << "*         	You have selected 91 octane.         	*\n";
   		 cout << "*                                                  	*\n";
   		 cout << "*                                                  	*\n";
   		 cout << "********************************************************\n";
   		 p_p_g = 3.20;
   		 usleep(1000000);
   		 wait();
   		 pumping();
   	 } else {
   		 beep();
   		 transaction_cancelled();
   		 begin();
   	 }
    }
}

void pumping() { //state
    char n = ' ';
    while (true) {
   	 clear_screen();
   	 cout << "********************************************************\n";
   	 cout << "*                                                  	*\n";
   	 cout << "*       	Press 'p' to begin pumping gas         	*\n";
   	 cout << "*        	or 't' to cancel transaction.         	*\n";
   	 cout << "*                                                  	*\n";
   	 cout << "*                                                  	*\n";
   	 cout << "********************************************************\n";
   	 cin >> n;
   	 n = tolower(n);
   	 if (n == 't') {
   		 transaction_cancelled();
   	 } else if (n == 'p') {
   		 calculate();
   	 } else {
   		 beep();
   	 }
    }
}

void calculate() { //state

    signal(SIGINT, stopgas); //Catch ctrl-c
    stoprequest = false;

    clear_screen();
    cout << "********************************************************\n";
    cout << "*                                                  	*\n";
    cout << "*       	Press Ctrl+C to stop the pump          	*\n";
    cout << "*        	when your gas tank is full.           	*\n";
    cout << "*                                                  	*\n";
    cout << "*                                                  	*\n";
    cout << "********************************************************\n";
    for (int i = 0; i <= 25; i++) {
   	 usleep(2000000);
   	 clear_screen();
   	 cout << "********************************************************\n";
   	 cout << "*                                                  	*\n";
   	 cout << "*            	Gallons:  " << cout.width(2) << i << "                      	*\n";
   	 cout.setf(ios::fixed);
   	 cout.setf(ios::showpoint);
   	 cout << "*            	Total:  $" << setw(5) << setprecision(2) << i * p_p_g << "                    	*\n";
   	 cout << "*                                                  	*\n";
   	 cout << "*                                                  	*\n";
   	 cout << "********************************************************\n";
   	 if (stoprequest) {
   		 wait();
   		 clear_screen();
   		 cout << "********************************************************\n";
   		 cout << "*                                                  	*\n";
   		 cout << "*                                                  	*\n";
   		 cout << "*              	Pump stopped.                   	*\n";
   		 cout << "*                                                  	*\n";
   		 cout << "*                                                  	*\n";
   		 cout << "********************************************************\n";
   		 usleep(1000000);
   		 break;
   	 }
   	 if (i == 25) {
   		 wait();
   		 clear_screen();
   		 cout << "********************************************************\n";
   		 cout << "*                                                  	*\n";
   		 cout << "*                                                  	*\n";
   		 cout << "*    	25 gallons maximum.  Pumping stopped.     	*\n";
   		 cout << "*                                                  	*\n";
   		 cout << "*                                                  	*\n";
   		 cout << "********************************************************\n";
   		 usleep(1000000);
   		 break;

   	 }
    }


    wait();
    replace_pump();
}


void replace_pump() { //state
    clear_screen();
    string hose = "", paper = "";
    clear_screen();
    cout << "********************************************************\n";
    cout << "*                                                  	*\n";
    cout << "*           	Press 'r' to replace pump.         	*\n";
    cout << "*                                                  	*\n";
    cout << "*         	(!r will assume you drove off        	*\n";
    cout << "*        	with the hose still in your car)      	*\n";
    cout << "********************************************************\n";
    cin >> hose;
    char replace = hose.at(0);
    if (replace != 'r') {
   	 clear_screen();
   	 usleep(2000000);
   	 cout << "********************************************************\n";
   	 cout << "*                                                  	*\n";
   	 cout << "*                                                  	*\n";
   	 cout << "*           	HOSE REMOVED FROM PUMP             	*\n";
   	 cout << "*                                                  	*\n";
   	 cout << "*                                                  	*\n";
   	 cout << "********************************************************\n";
   	 usleep(2000000);
   	 emergency();
   	 shutdown();
   	 exit(0);
    } else {
   	 clear_screen();
   	 cout << "********************************************************\n";
   	 cout << "*                                                  	*\n";
   	 cout << "*                                                  	*\n";
   	 cout << "*       	Would you like a receipt? (y/n)        	*\n";
   	 cout << "*                                                  	*\n";
   	 cout << "*                                                  	*\n";
   	 cout << "********************************************************\n";
   	 cin >> paper;
   	 char receipt = paper.at(0);
   	 if (receipt == 'y') {
   		 wait();
   		 clear_screen();
   		 cout << "********************************************************\n";
   		 cout << "*                                                  	*\n";
   		 cout << "*                                                  	*\n";
   		 cout << "*      	Receipt printed. Have a nice day.       	*\n";
   		 cout << "*                                                  	*\n";
   		 cout << "*                                                  	*\n";
   		 cout << "********************************************************\n";
   		 usleep(1000000);
   		 wait();
   		 begin();
   	 } else if (receipt == 'n') {
   		 wait();
   		 clear_screen();
   		 cout << "********************************************************\n";
   		 cout << "*                                                  	*\n";
   		 cout << "*                                                  	*\n";
   		 cout << "*              	Have a nice day.                	*\n";
   		 cout << "*                                                  	*\n";
   		 cout << "*                                                  	*\n";
   		 cout << "********************************************************\n";
   		 usleep(1000000);
   		 wait();
   		 begin();
   	 } else {
   		 beep();
   	 }
    }
}
void timeout() {
    clock_t start = clock();
    while ((clock() - start) / CLOCKS_PER_SEC < 10)
   	 ;
}

void wait() {
    clear_screen();
    cout << "********************************************************\n";
    cout << "*                                                  	*\n";
    cout << "*                                                  	*\n";
    cout << "*               	Please wait...                 	*\n";
    cout << "*                                                  	*\n";
    cout << "*                                                  	*\n";
    cout << "********************************************************\n";
    clock_t start = clock();
    while ((clock() - start) / CLOCKS_PER_SEC < 2)
   	 ;
}
