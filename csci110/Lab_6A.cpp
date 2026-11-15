/*
Prolog
   a. 	Program Description: Babynames
   b. 	Author: George Hanna
   c. 	Date: 07/28/22
   d. 	Input variables: babynames.txt
   e. 	Process Flow: File IO
   f. 	Output variables: output file
*/
#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;
/**
   Reads name information, prints the name if total >= 0, and adjusts the total.
   @param in_file the input stream
   @param total the total percentage that should still be processed
*/
void process_name(ifstream& in_file, ofstream& output_file, double& total)
{
   string name;
   int count;
   double percent;
   in_file >> name >> count >> percent;
   if (in_file.fail()) 
   { 
      return; 
   } // Check for failure after each input
   if (total > 0)
   { 
       output_file << name << " "; 
   }
   total = total - percent;
}
int main()
{  
   ifstream in_file;
   ofstream out_file;
   out_file.open("output.txt");
   in_file.open("babynames.txt");
   if (in_file.fail())
   { 
      return 0; 
   } // Check for failure after opening
   double boy_total = 50;
   double girl_total = 50;
   int record_count = 0;
   while (boy_total > 0 || girl_total > 0)
   {
      int rank;
      in_file >> rank;
      if (in_file.fail()) 
      { 
         return 0; 
      } 
      out_file << rank << " ";
      if (girl_total > 0 || boy_total > 0)
      {
         record_count++;
      }
      process_name(in_file, out_file, boy_total);
      process_name(in_file, out_file, girl_total);
      out_file << endl;
   }
   cout << "Number of records processed: " << record_count << endl;
   in_file.close();
   out_file.close();
   return 0;
}