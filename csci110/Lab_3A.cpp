// CSCI Lab 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Prolog
	a.Program Description - calculating volume and sphere for different shapes
	b.Author - George Hanna
	c.Date - 07/18/2022
	d.Input Variables - radius and height
	e.Process Flow - order of operations
	f.Output Variables - table
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <algorithm>

using namespace std;

    double sphere_volume(double r)
    {
        double sphere_vol = (3.14 * pow(r , 3)) * 4 / 3;
        return sphere_vol;
    }
    double sphere_surface(double r)
    {
        double sphere_sa = (4 * 3.14) * pow(r , 2);
        return sphere_sa;
    }
    double cylinder_volume(double r, double h)
    {
        double cylinder_vol = (3.14 * h) * pow(r , 2);
        return cylinder_vol;
    }
    double cylinder_surface(double r, double h)
    {
        double cylinder_sa = (2 * 3.14 * h * r) + (2 * 3.14 * r * r);
        return cylinder_sa;
    }
    double cone_volume(double r, double h)
    {
        double cone_vol = (3.14 * r * r) * (h / 3);
        return cone_vol;
    }
    double cone_surface(double r, double h)
    {
        double cone_sa = (3.14 * r) * (r + sqrt(pow((double)h, 2) + pow((double)r, 2)));
        return cone_sa;
    }
int main()
{
    int radius;
    int height;
    string answer;
    
    cout << "Please enter the radius: ";
    cin >> radius;

    while (radius <= 0)
    {
        cout << "Error: Positive integers only." << endl;
        cout << "Would you like to continue? (y/n): ";
        cin >> answer;
        if (answer == "y")
        {
            cout << "Please enter the radius: ";
            cin >> radius;     
        }
        else
        {
            cout << "Exit!" << endl;
            return 0;
        }
    }
    cout << "Please enter the height: ";
    cin >> height;
    while (height <= 0)
    {
        cout << "Error: Positive integers only." << endl;
        cout << "Would you like to continue? (y/n): ";
        cin >> answer;
        if (answer == "y")
        {
            cout << "Please enter the height: ";
            cin >> height; 
        }
        else
        {
            cout << "Exit!" << endl;
            return 0;
        }
    }
        double sphere_vol = sphere_volume(radius);
        double sphere_sa = sphere_surface(radius);
        double cylinder_vol = cylinder_volume(radius, height);
        double cylinder_sa = cylinder_surface(radius, height);
        double cone_vol = cone_volume(radius, height);
        double cone_sa = cone_surface(radius, height);
    
        cout << "          Volume           Surface" << endl;
        cout << fixed << setprecision(2) << "Sphere    " << sphere_vol << "           " << sphere_sa << endl;
        cout << fixed << setprecision(2) << "Cylinder  " << cylinder_vol << "           " << cylinder_sa << endl;
        cout << fixed << setprecision(2) << "Cone      " << cone_vol << "           " << cone_sa << endl;
        
        cout << "\nWould you like to continue? (y/n): ";
        cin >> answer;
        if (answer != "y")
        {
            cout << "Exit!" << endl;
        }
        else
        {
            return 0;
        }
    system("pause");
    return 0;
}