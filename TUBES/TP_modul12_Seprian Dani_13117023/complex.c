struct  {
	double real;
	double imag;
}bilangan1;

struct  {
	double real;
	double imag;
}bilangan2;


struct  {
	double real;
	double imag;
}data;
	int tambah (double real, double imag)
	{
		data.real=bilangan1.real+bilangan2.real;
		data.imag=bilangan1.imag+bilangan2.imag;
	}
    int kurang (double real, double imag)
	{
		data.real=bilangan1.real-bilangan2.real;
		data.imag=bilangan1.imag-bilangan2.imag;
	}

    int kali (double real, double imag)
	{
		data.real=(bilangan1.real*bilangan2.real)-(bilangan1.imag*bilangan2.imag);
		data.imag=(bilangan1.imag*bilangan2.real)+(bilangan1.real*bilangan2.imag);
	}
    int bagi (double real, double imag)
	{
		data.real=(bilangan1.real*bilangan2.real)+(bilangan1.imag*bilangan2.imag)/((bilangan2.real)*(bilangan2.real))+((bilangan2.imag)*(bilangan2.imag));
		data.imag=(bilangan1.imag*bilangan2.real)-(bilangan1.real*bilangan2.imag)/((bilangan2.real)*(bilangan2.real))+((bilangan2.imag)*(bilangan2.imag));

	}


    double fasa (double real, double imag)
	{
		double a,hasil,hs;
		a=imag/real;
		hasil= atanf(a);
		hs=(hasil*180)/3.14;
		return hs;
	}

    double mag (double real, double imag)
    {
        double hasil,a,b,c;
        a=pow(real,2);
        b=pow(imag,2);
        c=a+b;
        hasil=sqrt(c);
        return hasil;
    }

