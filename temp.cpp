#include <iostream>

using namespace std;

double calculateCarbonFootprint() {
    int numPeople;
    double electricityUsed, naturalGasUsed, heatingOilUsed, coalUsed, lpgUsed, propaneUsed;
    string travelFrequency;

    cout << "Enter the number of people in the house: ";
    cin >> numPeople;

    cout << "Enter electricity consumption in kWh: ";
    cin >> electricityUsed;

    cout << "Enter natural gas consumption in kWh: ";
    cin >> naturalGasUsed;

    cout << "Enter heating oil consumption in liters: ";
    cin >> heatingOilUsed;

    cout << "Enter coal consumption in metric tons: ";
    cin >> coalUsed;

    cout << "Enter LPG consumption in liters: ";
    cin >> lpgUsed;

    cout << "Enter propane consumption in liters: ";
    cin >> propaneUsed;

    cout << "Enter your travel frequency (normal/heavy/light): ";
    cin >> travelFrequency;

    const double electricityFactor = 0.5;
    const double gasFactor = 2.0;
    const double oilFactor = 2.5;
    const double coalFactor = 3.0;
    const double lpgFactor = 1.5;
    const double propaneFactor = 1.8;
    const double normalTravelFactor = 5.0;
    const double heavyTravelFactor = 8.0;
    const double lightTravelFactor = 3.0;

    double carbonFootprint = numPeople * (electricityUsed * electricityFactor +
                                          naturalGasUsed * gasFactor +
                                          heatingOilUsed * oilFactor +
                                          coalUsed * coalFactor +
                                          lpgUsed * lpgFactor +
                                          propaneUsed * propaneFactor);

    if (travelFrequency == "normal") {
        carbonFootprint += numPeople * normalTravelFactor;
    } else if (travelFrequency == "heavy") {
        carbonFootprint += numPeople * heavyTravelFactor;
    } else if (travelFrequency == "light") {
        carbonFootprint += numPeople * lightTravelFactor;
    }

    cout << "The estimated carbon footprint is " << carbonFootprint << " kg CO2 per year." << endl;

    return carbonFootprint;
}

int main() {
    calculateCarbonFootprint();

    return 0;
}