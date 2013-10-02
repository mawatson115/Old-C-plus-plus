#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	ifstream in;
	ofstream out;
	string a, b, g, h, k, l;
	double c, d, e, f, i, j, m, n, o, p, q, r;

	in.open("C://Users//mwatson144972//Desktop//HW2Prob6_input.txt");
	out << fixed << showpoint;
	out << setprecision(2);
	in >> a >> b >> c >> d;
	in >> g >> h >> i >> j;
	in >> k >> l >> m >> n;

	e = ((d*.01)*c);
	f = e+c;

	o = ((j*.01)*i);
	p = o+i;

	q = ((n*.01)*m);
	r = q+n;
    


    out.open("C://Users//mwatson144972//Desktop//HW2Prob6_output.txt");

	
	out << a << "  " << b << "  " << f << endl;
	out << g << "  " << h << "  " << p << endl;
	out << k << "  " << l << "  " << r << endl;

	


	in.close();
	out.close();




return 0;
}
