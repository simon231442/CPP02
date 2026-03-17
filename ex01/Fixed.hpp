#ifndef	FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed{
	private:
		int					fixedPointValue_;
		static const int	fractionnalBits_ = 8;
	public:
		Fixed();
		Fixed(int const integer);
		Fixed(float const floatPoint);
		Fixed(const Fixed& source);
		Fixed &operator=(const Fixed& source);			// Operateur d'assignation
		~Fixed();
		int					getRawBits(void) const; 	// const --> Read-only: returns the raw value without modifying the object
		void				setRawBits(int const raw);	// const --> parameter 'raw' is read-only
		float				toFloat(void) const;
		int					toInt(void) const;
		};

std::ostream&	operator<<(std::ostream& o, Fixed const& i);

#endif

/* to add :
/  fixed(int const integer) 	: constructeur prennant un entier en parametre et le convertit en fixed point
/  fixed(float const floatPoint): constructeur prennant un nb a virgule floatante en parametre et le converti en fixed point
/  float	toFloat(void) 		: fonction membre qui converti le fixed point en float et le renvoie
/  int		toInt() 			: fonction membre qui converti le fixed point en int et le renvoie
*/
