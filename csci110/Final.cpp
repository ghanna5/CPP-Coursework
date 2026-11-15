#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
string inputfile,outputfile,strings[1000];
ifstream in;
ofstream out;
cout<<"Enter input file name : ";
cin>>inputfile;
cout<<"Enter output file name : ";
cin>>outputfile;

in.open(inputfile);
out.open(outputfile);
int count=0;

while(getline(in,strings[count]))
count++;

for(int i = count-1;i>=0;i--)
out<<strings[i]<<endl;

in.close();
out.close();
return 0;
}