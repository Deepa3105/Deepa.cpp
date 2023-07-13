// weather App
// Name : Deepa
// College name : Vivekanandha college of engineering for women 

// Data used : location
//methods used : class,objects,functions,oops concept,condition statements.
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function to get user input for the location
string getUserLocation() {
    string location;
    cout << "Please enter your location: ";
    getline(cin, location);
    return location;
}

// Function to get user input for the day of the week
string getDayOfWeek() {
    while (true) {
        string day;
        cout << "Which day's weather report would you like? Please enter the day of the week (e.g., Sunday): ";
        getline(cin, day);

        // Convert the input to lowercase for comparison
        for (char& c : day) {
            c = tolower(c);
        }

        if (day == "sunday" || day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday" || day == "saturday") {
            return day;
        } else {
            cout << "Invalid input. Please enter a valid day of the week." << endl;
        }
    }
}

// Function to get user input for the desired weather report
string getReportType() {
    while (true) {
        string reportType;
        cout << "Which weather report would you like? (Today/Tomorrow/Week/Year): ";
        getline(cin, reportType);

        // Convert the input to lowercase for comparison
        for (char& c : reportType) {
            c = tolower(c);
        }

        if (reportType == "today" || reportType == "tomorrow" || reportType == "week" || reportType == "year") {
            return reportType;
        } else {
            cout << "Invalid input. Please enter a valid weather report type." << endl;
        }
    }
}

// Function to generate random climate
string generateRandomClimate() {
    string climates[] = { "Sunny", "Cloudy", "Rainy", "Snowy" };
    int index = rand() % 4;
    return climates[index];
}

// Function to generate random temperature
double generateRandomTemperature() {
    double minTemp = -10.0;
    double maxTemp = 40.0;
    return minTemp + (maxTemp - minTemp) * (double)rand() / RAND_MAX;
}

// Function to generate random humidity
int generateRandomHumidity() {
    int minHumidity = 0;
    int maxHumidity = 100;
    return minHumidity + rand() % (maxHumidity - minHumidity + 1);
}

// Function to generate random rain possibility
bool generateRandomRain() {
    int rainChance = rand() % 100;
    return rainChance < 50; // 50% chance of rain
}

int main() {
    srand(time(0)); // Seed the random number generator

    string location = getUserLocation();
    string dayOfWeek = getDayOfWeek();
    string reportType = getReportType();

    string climate;
    double temperature;
    int humidity;
    bool isRaining;

    if (reportType == "today") {
        climate = generateRandomClimate();
        temperature = generateRandomTemperature();
        humidity = generateRandomHumidity();
        isRaining = generateRandomRain();
    } else if (reportType == "tomorrow") {
        climate = generateRandomClimate();
        temperature = generateRandomTemperature();
        humidity = generateRandomHumidity();
        isRaining = generateRandomRain();
    } else if (reportType == "week") {
        // Implement logic to generate weather data for the entire week
    } else if (reportType == "year") {
        // Implement logic to generate weather data for the entire year
    }

    string name, dateOfBirth, profession;
    cout << "Please provide the following information:" << endl;
    cout << "Name: ";
    getline(cin, name);
    cout << "Date of Birth: ";
    getline(cin, dateOfBirth);
    cout << "Profession: ";
    getline(cin, profession);

    cout << endl;
    cout << "---------- Weather Report ----------" << endl;
    cout << "Location: " << location << endl;
    cout << "User Information:" << endl;
    cout << "Name: " << name << endl;
    cout << "Date of Birth: " << dateOfBirth << endl;
    cout << "Profession: " << profession << endl;
    cout << "------------------------------------" << endl;
    cout << endl;
    cout << "Weather report for " << dayOfWeek << ":" << endl;
    cout << "Climate: " << climate << endl;
    cout << "Temperature: " << temperature << " degrees Celsius" << endl;
    cout << "Humidity: " << humidity << "%" << endl;
    cout << "Possibility of rain: " << (isRaining ? "Yes" : "No") << endl;

    return 0;
}