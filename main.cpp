//
// Created by ...
//
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    cout << "PROBLEM 1\n";
    for ( int  i = 1 ; i < 11 ; i++) {
        cout << i << " " << endl ;
    }
    cout << "PROBLEM 2\n";
    int sum = 0 ;
    for ( int i=1 ;  i <11 ; i++ )  {
        sum = sum +i ;
        cout << i << " " ;
    }
    cout << " sum is " << sum<< endl;
    cout << "PROBLEM 3\n";
    for ( int i=1 ; i <=100 ; i++ ) {
        if ( i  % 5 != 0) {
            cout << i << " " << endl ;
        }
    }

    cout << "Problem 4\n";
    int val3;
    cin >> val3;
    for (int i3 = 1; i3 <= val3; ++i3) {
        if (i3 % 10 == 0) {
            cout << i3 << " ";
        }
    } cout << endl << endl;

    cout << "PROBLEM 5\n";
    char count =0 ;
    for ( char i='A' ; i <= 'Z' ; i ++) {
        cout << i << " ";
        if ( count % 5 == 0) {
            cout << endl;
        }
        count++ ;
    }

    cout << "PROBLEM 6\n";
    int credit ;
    float grade ;
    float score = 0 ;
    int  total_credits= 0;
    int number_classes;
    float total_GPA;
    cin >> number_classes;
    for ( int i=0 ; i < number_classes ; i++) {
        cin>> credit>> score ;
        score= score + ( credit*grade) ;
        total_credits = total_credits+credit;
        cout << " score: " << score<< endl;
        cout << " total_credits: " << total_credits<< endl;

    }
    total_GPA=score/total_credits;
    cout << total_GPA << endl;

    cout << "PROBLEM 7\n";
    int number_1;
    cout << " ENter the number for 'number': " ;
    cin >> number_1;
    if ( number_1 <=1) {
        cout << " Number is not prime" << endl;
    }
    double limit= sqrt(number_1);
    for ( int i=2 ; i <=limit; ++i) {
        if (number_1 %  i == 0) {
            cout << " Number is not prime " << endl;
            return 0;
        }
    }
    cout << " Number is prime" << endl;;
    cout << "PROBLEM 8\n";
    int example;
    cout << " Enter the number whatever you wish: ";
    cin >> example;
    int inverse=0;
    while ( example !=0 ) {
        int digit= example%10;
        cout<< digit;
        example = example/10 ;
    }
    cout << endl;
    cout << "PROBLEM 9\n";
    int n =0 ;
    int i=0;
    cout << " Enter the number for 'n': " ;
    cin >> n;
    for ( int i=1 ; i <= n ; ++i) {
        cout<<i<< "*"<< i <<"=" << i*i<<endl;

    }
    cout << "PROBLEM 10\n";
    int n_1;
    cout << " Enter the number for 'n_1': " ;
    cin >> n_1 ;
    int max =n_1 ;
    while ( n_1 != 0) {
        cin >> n_1;
        if ( n_1> max) {
            max =n_1;
        }
    }
    cout << "The maximum number is " << max<< endl;


    cout << "PROBLEM 11\n";
    int n_2;
    int positive= 0;
    int negative =  0;
    int total = 0;
    int sum_4= 0;
    while ( true) {
        cout << " Enter the number for 'n_2' : " ;
        cin >> n_2;
        if ( n_2 ==0) {
            break;
        }
        total= total +1 ;
        sum_4 = sum_4+n_2;

        if ( n_2 >0) {
            positive = positive+1;
        } else if ( n_2< 0) {
            negative = negative+1 ;
        }
    }
    double average;
    average = sum_4/ total;

    cout << " The postive number is : " << positive << endl  ;
    cout << " The negative number is: " << negative << endl;
    cout << " The total number is: " << total << endl ;
    cout << " The average number is: "<< average<< endl;

    cout << "PROBLEM 12\n";

    char symbol12 = '*';
    int size12;
    cin >> size12;
    for (int
                 i = 0; i < size12; ++i) {
        for (int j = 0; j < size12; ++j) {
            cout << symbol12;
        }
        cout << endl << endl;
    }

    cout << "PROBLEM 13\n";
    char symbol= '*';
    int n_3;
    cout << " Enter the number for 'n_3': ";
    cin >> n_3 ;
    for ( int i=0 ; i < n_3; i++) {
        for (int j = 0; j < i+1; j++) {
            cout << symbol;
        }
        cout << endl;
    }
    cout << "PROBLEM 14\n";
    int number;
    cout << " Enter the number  for 'number'";
    cin >> number;
    for ( int i=0 ; i < number; i ++) {
        for ( int j=0 ;  j < ( i+1) ; j ++ ) {
            cout << i+1;
        }
        cout << endl;
    }

    cout << "PROBLEM 15\n";
    int n_4;
    cout << " Enter the number for 'n_4': " ;
    cin >> n_4;
    double sum_1 = 0;

    for ( int i=1; i <=n_4 ; ++i) {
        cout << 1<<"/" <<i ;
        if ( i !=n_4) {
            cout << " +" ;
        }
        sum_1 += 1/static_cast<double>(i);

    }
    cout << " The sum is: "<< sum_1 << endl;

    cout << "PROBLEM 16\n";
    double rent = 1000;
    double total_rent = 0;
    for (int i = 1; i <=5; ++i) {
        cout << "For year number " << i << " rent is " << rent << endl;
        cout << "The total for year " << i << " is " << rent * 12<< endl;
        rent += rent * static_cast<double>(0.03);
        total_rent += rent * 12;
    } cout << "For all 5 years total rent is " << total_rent<<endl <<endl;

    cout << "PROBLEM 17\n";
    int n_5;
    cout << " Enter the number for 'n_5':   ";
    cin >> n_5;
    double sum_2;
    while ( n_5 !=0) {
        sum_2 += n_5%10;
        n_5= n_5/10 ;
    }
    cout << " The sum is : " <<  sum_2 << endl;

    cout << "PROBLEM 18\n";
    int n_6 ;
    cout << "Enter a binary number for 'n_6': " ;
    cin >> n_6 ;
    double sum_3=0;
    int base=1;
    while ( n_6 > 0) {
        int the_last=  n_6 % 10;
        n_6 = n_6 /10 ;
        sum_3 += the_last * base ;
        base *= 2;
    }
    cout << " The decimal number is: " << sum_3 << endl;

    cout << "PROBLEM 19\n";
    int n_7;
    cout << " Enter the number for  'n_7': " ;
    cin >> n_7;
    for (int i = 2; i <= n_7; i++) {
        while (n_7 % i == 0) {
            std::cout << i << " ";
            n_7 /= i;
        }
    } cout <<endl;
    cout << "PROBLEM 20\n";
    int n_8;
    cout << " Enter the number for 'n_8'" ;
    cin >> n_8;
    double pi = 0;
    for (int i = 1; i <= n_8; ++i) {
        pi += 4 * (pow(-1, i + 1) / (2 * i - 1));
    }
    cout << pi << endl;

    cout << "PROBLEM 21\n";
    int n_9;
    cout << "Enter the number of seconds: ";
    cin >> n_9;
    for (n_9 <= 1; --n_9;) {
        cout << n_9 << " seconds are the same" << endl;
    } cout << "Stopped" << endl << endl;

    cout << "PROBLEM 22\n";
    int kilometers = 0;
    cout << " Miles or Kilometers " << endl;
    for (int i = 1; i <= 10; i++) {
        cout << " " << i << " | " << static_cast<float>(i) * 1.609 << "" << endl;
    } cout << endl;

    cout << "PROBLEM 23\n";
    int n_10 = 0;
    while (pow (2, n_10) < 30000) {
        ++n_10;
    }
    --n_10;
    cout << " The largest n such that 2^n < 30,000is : " << n_10 <<
         endl << endl;

    cout << "PROBLEM 24\n";
    int n_11_odd = 0;
    int n_11_even = 0;
    srand((time(0)));
    for (int i = 0; i <= 100000; ++i) {
        int num24 = rand();
        if (num24 % 2 == 0) {
            ++n_11_even;
        } else {
            ++n_11_odd;
        }
    }
    cout << "Total even numbers: " << n_11_even << endl;
    cout << "Total odd numbers: " << n_11_odd <<endl;
    cout << "PROBLEM 25\n";

    int year, first_day;
    cout << "Enter the year: ";
    cin >> year;
    cout << "Enter the first day of the year (0 for Monday, 1 for Tuesday, ..., 6 for Sunday): ";
    cin >> first_day;
    for (int month = 1; month <= 12; ++month) {
        struct tm timeinfo = {0};
        timeinfo.tm_year = year - 1900;
        timeinfo.tm_mon = month - 1;
        timeinfo.tm_mday = 1;
        mktime(&timeinfo);
        int actual_first_day = (timeinfo.tm_wday + first_day) % 7;
        const char* month_names[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
        string month_name = month_names[month - 1];
        const char* day_names[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
        string day_name = day_names[actual_first_day];
        cout << month_name << " 1, " << year << " is " << day_name << endl;
    }
    return 0;
}


