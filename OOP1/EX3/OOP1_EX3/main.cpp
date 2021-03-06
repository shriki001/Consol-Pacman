// OOP1_EX3 : POLYNOMS

#include "Poly.h"
#include <iostream>
#include <vector>
#include <vld.h>

using std::cout;
using std::cin;
using std::endl;


int main()
{
	VLDEnable();
	std::vector<double> coeffs1 = { 14,0,0,0,5,7,-88.5 };
	Poly p1(coeffs1);
	
	std::vector<double> coeffs2 = { 28,0,0,-15,0,2.4,-3,0,1,0,77.21 };
	Poly p2(coeffs2);

	cout << "p1= \t";
	cout << p1 << endl;

	cout << "p1.m_poly[0] = " <<p1.at(0) <<endl;
	cout << "p1 A*x^0 , A= " <<p1[0] <<endl;
	cout << "x=1 : " <<p1(1) << endl;
	cout << "p2= \t";
	cout << p2 << endl;
	

	Poly PolyA(std::vector<double>{1, 0, 6, 0, 2});
	Poly PolyB(std::vector<double>{1, 0, 5});
	cout << PolyA << endl;
	cout << "----------------  = "<< PolyA/PolyB <<"(" <<PolyA % PolyB <<")\n";
	cout << PolyB << endl;
	cout << "\n";
	cout << PolyB << endl;
	cout << "----------------  = " << PolyB / PolyA << "(" << PolyB % PolyA << ")\n";
	cout << PolyA << endl;
	
	Poly p3;
	

	p3 = p1 + p2;

	cout << "Array after merging" << endl;
	cout << "p3= \n";
	cout << p3 <<endl;


	cout << "-p3= \n";
	Poly p4 = -p3;
	cout << p4 << endl;

	cout << "p3= \n";
	cout << p3 << endl;

	cout << "--p3= \n";
	Poly p5 = -p4;
	cout << p5 << endl;

	cout << "p3= \n";
	cout << p3 << endl;

	cout << "p1==p2 ? \t" << (p1 == p2) <<endl;
	cout << "p2!=p3 ? \t" << (p2 != p3) << endl;
	cout << "p5==p3 ? \t" << (p5 == p3) << endl;

	
	
	Poly p2_a;
	cout << "p2_a = " << p2_a << endl;
	cout << "p2_a Maxdeg = " << p2_a.deg() << endl;
	cout << "p1 Maxdeg = " << p1.deg() << endl;
	cout << endl;
	p1.at(0) = Monom(9); //? NOT WORKING :))
	cout << "p1*2 = " << p1 * 2 << endl;
	cout << "3 * p1 = " << 3 * p1 << endl;
	//TEST:

//	Monom m1(3, 2);
//	cout << "3x^2 * p1 = " << p1 * m1 << endl;

	Poly tmp1(std::vector<double>{3, 1, 0});
	Poly tmp2(std::vector<double>{8 ,0, 1, 0});
	cout << "tmp1 = " << tmp1 << endl
		<< "tmp2 = " << tmp2 << endl;
	cout << "tmp1 * tmp2 = " << tmp1 * tmp2 << endl;
	cout << "tmp2 * tmp1 = " << tmp2 * tmp1 << endl;
	
	Poly pol_3(5.6);
	cout  <<"POLY = " <<pol_3 << endl; 


	Poly pol_4(100, 7.8);
	cout << "POLY2 = " << pol_4 << endl;

/**		***************/

	Poly p5_a(std::vector<double>{1, 0, 1});
	Poly p5_b(std::vector<double>{1,0, -4, 7});
	cout << "p5_a = " << p5_a << endl
		<< "p5_b = " << p5_b << endl;
	Poly gcdAB = gcd(p5_b, p5_a);
	cout << "gcd(b,a) = " << gcdAB << endl;
	cout << endl; 
	return EXIT_SUCCESS;
}

