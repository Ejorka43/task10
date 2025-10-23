#include <iostream>
template<typename Z>
class HSE_student
{
public:
	Z price_of_education;
	Z morale;
	HSE_student(Z okolo_8000_banok_GorillbI, Z studentu_vpadlu) :
		price_of_education(okolo_8000_banok_GorillbI),
		morale(studentu_vpadlu)
	{
	}
};

class Sigma_True_Hardkorshik
{
public:
	std::string thought;
	Sigma_True_Hardkorshik(std::string thought) : thought(thought) {}
};
template<typename Z>
void Doroga_Happy_Bomja_or_Titul_Kripa(HSE_student<Z> Sigma)
{
	Z Keff_Potnarya = Sigma.morale * Sigma.price_of_education;
	Z Mindset_O4erednyarbI = 100;
	Z Average_Price_of_Higher_Education = 300'000;
	Z Keff_Normisa = Mindset_O4erednyarbI * Average_Price_of_Higher_Education;

	if (Keff_Potnarya > Keff_Normisa)
		throw Sigma_True_Hardkorshik("Захавал перки");
	else if (Keff_Potnarya <= Keff_Normisa)
		std::cout << "А что такое перки?" << std::endl;
}

int main()
{
	setlocale(0, "");
	HSE_student<unsigned> Egor_S(800'000, 52);
	try
	{
		Doroga_Happy_Bomja_or_Titul_Kripa(Egor_S);
	}
	catch (const Sigma_True_Hardkorshik& Ya_Legenda)
	{
		std::cout << Ya_Legenda.thought << std::endl;
		std::cout << (Ya_Legenda.thought).size() / 2 << std::endl;
	}
}