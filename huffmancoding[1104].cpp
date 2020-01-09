#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main()
{
    int count_t=0,count_h=0,count_f=0,count_k=0,count_p=0,count_x=0;
    char ch, ch1;
    fstream fout;
    fstream myfile;
    fstream myfile1;
    fout.open("xyz.txt");
    fout<<"thpppkkkffxxxxx";
    fout.close();
    myfile.open("xyz.txt");
    myfile1.open("xyz1.txt");
    ch=myfile.get();
    while(!myfile.eof())
    {
        if(ch=='t' || ch=='T'||ch=='h' || ch=='H'||ch=='f' || ch=='F'||ch=='k' || ch=='K'||ch=='p' || ch=='P'||ch=='x' || ch=='X')
        {
            myfile1<<ch;
        }    
        
    }

    myfile.close();
    //File 1 is closed
    ch1=myfile1.get();
    while(!myfile1.eof())
    {
        if(ch1=='t'||ch1=='T')
            count_t++;
        if(ch1=='h'||ch1=='H')
            count_h++;
        if(ch1=='f'||ch1=='F')
            count_f++;
        if(ch1=='k'||ch1=='K')
            count_k++;
        if(ch1=='p'||ch1=='P')
            count_p++;
        if(ch1=='x'||ch1=='X')
            count_x++;

    }
    myfile1.close();
}
