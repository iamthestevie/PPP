#include "../std_lib_facilities.h"

// constants
constexpr double m_to_cm = 100.0;   
constexpr double in_to_cm = 2.54;
constexpr double ft_to_in = 12.0;

// function declarations:
void compare_two_doubles(double d1, double d2);
double convert_to_meters(double d1, string units);

int main()
{
    // read in two ints using a while loop. When '|' is entered, exit the loop.
    double d1 = 0.0;                    // to store the value input by the user
    double d1_in_m = 0.0;               // to store d1 after converting it to meters
    double largest = 0.0;               // to store the largest value encountered
    double smallest = 0.0;              // to store the smallest value encountered
    string unit = "";                   // to store the units
    char cont = '?';                    // to store the continue variable
    double sum_in_meters = 0.0;                   // to store the sum of values in METERS
    int count = 0;                      // to store the count of values encountered
    vector<double> values_in_meters;    // to store all the values entered converted into meters

    while (cont != '|')
    {
        cout << "Enter one double followed by a unit ('cm', 'm', 'in', 'ft'): ";
        while(cin >> d1 >> unit)
        {
            if (unit == "cm" || unit == "m" || unit == "in" || unit == "ft")
            {
                break;
            }
            else
            {
                cout << "Enter one double followed by a unit ('cm', 'm', 'in', 'ft'): ";
            }
        }

        d1_in_m = convert_to_meters(d1, unit);
        
        if (d1_in_m > largest)
        {
            largest = d1_in_m;
        }
        if (d1_in_m < smallest || count == 0) // if count == 0 we are on our first pass
        {
            smallest = d1_in_m;
        }
        
        // increment the counter
        ++count;

        // add the value to the sum
        sum_in_meters += d1_in_m;

        // add the value to the vector
        values_in_meters.push_back(d1_in_m);

        //compare_two_doubles(d1, d2);
        cout << "Press '|' to quit (any other key will continue): ";
        cin >> cont;
    }

    cout    << "\nSmallest value:\t" << smallest
            << "\nLargest value:\t" << largest
            << "\nNumber of values:\t" << count
            << "\nSum of values:\t" << sum_in_meters
            << '\n';

    sort(values_in_meters);

    int i = 0;
    for (double value : values_in_meters)
    {
        cout << "values_in_meters[" << i << "] == " << value << '\n';
        ++i;
    }

    return 0;
}

void compare_two_doubles(double d1, double d2)
{
    constexpr double smalldiff = 1.0/100;
    double difference = 0.0;

    if (d1 > d2) 
    {
        cout << "the smaller value is: " << d2
            << "\nthe larger value is: " << d1 << '\n';
        
        difference = round((d1-d2) * 100) / 100.0;

        if (difference <= smalldiff)
            cout << "the numbers are almost equal\n";
    }
    else if (d1 < d2)
    {
        cout << "the smaller value is: " << d1
            << "\nthe larger value is: " << d2 << '\n';

        difference = round((d2-d1) * 100) / 100.0;

        if (difference <= smalldiff)
            cout << "the numbers are almost equal\n";
    }    
    else if (d1 == d2)
    {
            cout << "the numbers are equal\n";
    }    
}

double convert_to_meters(double d1, string units)
{
    double conversion;
    if (units == "cm")
    {
        conversion = d1 / m_to_cm;
    }
    else if (units == "m")
    {
        conversion = d1;
    }
    else if (units == "in")
    {
        conversion = (d1 * in_to_cm) / m_to_cm;
    }
    else if (units == "ft")
    {
        conversion = ((d1 * ft_to_in) * in_to_cm) / m_to_cm;
    }
    else
    {
        cout << "Incompatible units: " << units << '\n';
        return 0.0;
    }
       
    
    return conversion;
}