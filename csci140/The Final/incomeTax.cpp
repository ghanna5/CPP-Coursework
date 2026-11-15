/*  Program: Income Tax  
    Author: George Hanna
    Class: CSCI 140
    Date: 06 June 2023
    Description: 
    I certify that the code below is my own work.
    Exception(s): N/A
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Calculate AGI and repair any negative values
int CalcAGI(int wages, int interest, int unemployment) 
{
    int sum = 0;
   
    if(wages < 0)
        wages = abs(wages);
      
    if(interest < 0)
        interest = abs(interest);
      
    if(unemployment < 0)
        unemployment = abs(unemployment);
   
    sum = wages + interest + unemployment;

    return sum;
}

// Calculate deduction depending on single, dependent or married
int GetDeduction(int status) 
{
    if(status == 0)
        return 6000;
      
    else if(status == 1)
        return 12000;
      
    else if(status == 2)
        return 24000;

    return 6000;
}

// Calculate taxable but not allow negative results
int CalcTaxable(int agi, int deduction) 
{
    int tax;
   
    tax = agi - deduction;
   
    if(tax < 0)
        tax = 0;

    return tax;
}

// Calculate tax for single or dependent
int CalcTax(int status, int taxable) 
{
    double tax = 0;
    int taxes = 0;

    if((taxable >= 0 && taxable <= 10000 && (status == 0 || status == 1)))
        tax = (taxable * 0.10);
    
    else if((taxable >= 10001 && taxable <= 40000 && (status == 0 || status == 1)))
        tax = ((taxable - 10000) * 0.12 + 1000);

    else if((taxable >= 40001 && taxable <= 85000 && (status == 0 || status == 1)))
        tax = ((taxable - 40000) * 0.22 + 4600);
   
    else if((taxable >= 85001 && taxable <= 150000 && (status == 0 || status == 1)))
        tax = ((taxable - 85000) * 0.24 + 14500);

    else if(taxable > 150000)
        tax = ((taxable - 150000) * 0.30 + 30100);
   
    else if((taxable >= 0 && taxable <= 20000 && status == 2))
        tax = taxable * 0.10;
   
    else if((taxable >= 20001 && taxable <= 80000 && status == 2))
        tax = ((taxable - 20000) * 0.12 + 2000);

    else if((taxable >= 80001 && taxable <= 160000 && status == 2))
        tax = ((taxable - 160000) * 0.22 + 9200);
   
    else if((taxable > 160000 && status == 2))
        tax = ((taxable - 160000) * 0.27 + 26800);

    tax = round(tax);
    taxes = static_cast<int>(tax);
   
    return taxes;
}

// Calculate tax due and check for negative withheld
int CalcTaxDue(int tax, int withheld) 
{
    int taxDue = 0;
   
    if(withheld < 0)
        withheld = 0;
   
    taxDue = tax - withheld;

    return taxDue;
}

int main() 
{
    int wages, interest, unemployment,status, withheld;
    int tax, agi, due, deduction, taxable;

    // Step #1: Input information
    cin >> wages >> interest >> unemployment >> status >> withheld;
    // Step #2: Calculate AGI
    agi = CalcAGI(wages, interest, unemployment);
    cout << "AGI: $" << agi << endl;
   
    deduction = GetDeduction(status);
    cout << "Deduction: $" << deduction << endl;
   
    taxable = CalcTaxable(agi, deduction);
    cout << "Taxable income: $" << taxable << endl;
   
    tax = CalcTax(status, taxable);
    cout << "Federal tax: $" << tax << endl;
   
    due = CalcTaxDue(tax, withheld);
    cout << "Tax due: $" << due << endl;

    return 0;
}