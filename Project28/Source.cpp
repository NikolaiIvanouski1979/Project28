# include <iostream>
using namespace std;

class smalobj
{
private:
	int somedata;
public:
	void setdata(int d)
	{
		somedata = d;
	}
	void showdata()
	{
		cout << "value equal to: " << somedata << endl;
	}
};
int main()
{
	smalobj s1, s2;
	s1.setdata(1066);
	s2.setdata(1776);
	s1.showdata();
	s2.showdata();
	system("pause");
	return 0;

}