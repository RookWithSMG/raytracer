#ifndef __vec_h__
#define __vec_h__

#include <math.h>	// for sqrt

class vec
{
	public:
	double i,j,k;
	double Z;
	vec();
	vec(double,double,double);
	friend std::ostream& operator<<(std::ostream&, vec);
};

/* Constructors */
vec::vec() { i = 0.0; j=0.0; k=0.0; Z=0.0;}
vec::vec(double a, double b, double c){
	i=a; j=b; k=c;
	Z=sqrt(i*i+j*j+k*k);
}
/* Printing */
std::ostream& operator<<(std::ostream& out, vec v){
	out << "[ " << v.i << ", " << v.j << ", " << v.k << " ]";
	return out;
} 
/* Convert to unit vector */
void norm(vec v){
	v.i/=v.Z; v.j/=v.Z; v.k/=v.Z;
	v.Z=sqrt(v.i*v.i+v.j*v.j+v.k*v.k);
}
/* Dot product */
double dot(vec u,vec v){
	return (u.i*v.i + u.j*v.j + u.k*v.k);
}
/* Cross product */
void cross(vec u, vec v, vec& r)
{
	r.i = u.j*v.k - u.k*v.j;
	r.j = -u.i*v.k + u.k*v.i;
	r.k = u.i*v.j - u.j*v.i;
	r.Z = sqrt(r.i*r.i+r.j*r.j+r.k*r.k);
}

#endif
