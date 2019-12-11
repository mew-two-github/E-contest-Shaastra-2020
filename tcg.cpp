#include<fstream>
#include<sstream>
#include<iostream>
#include<string>

using namespace std;


int main()
{
	ofstream f,f2;
	int i,j;
	string fp = "C:\\Users\\HP\\Documents\\CnL\\E-Contest\\Q5\\tc",s;
	for(i=0;i<10;++i)
	{
		for(j=i;j<10;++j)
		{
			
			ostringstream str1;
			str1<<i+j;
			s=str1.str();
			string fp2 = fp+ s+ ".txt",fp3 = "C:\\Users\\HP\\Documents\\CnL\\E-Contest\\Q5\\output-"+s+".txt";
			f2.open(fp3);
			f.open(fp2);
			s = char(i) + '0';
			s = s +  " ";
			s= s+" ";
			s[2]=char(j) + '0';
			f<<(s);
			f2<<((j-i-1)>=0)?(j-i-1):0;
			f.close();
			f2.close();
		}
	}
	return 0;
}