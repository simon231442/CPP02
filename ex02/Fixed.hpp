#ifndef	FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed{
	private:
		int					FixedPointValue_;
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

		bool				operator>(Fixed const& b);
		bool				operator<(Fixed const& b);
		bool				operator>=(Fixed const& b);
		bool				operator<=(Fixed const& b);
		bool				operator==(Fixed const& b);
		bool				operator!=(Fixed const& b);

		bool				operator+(Fixed const& b);
		bool				operator-(Fixed const& b);
		bool				operator*(Fixed const& b);
		bool				operator/(Fixed const& b);

		static Fixed		&minConstGet(Fixed& b, Fixed& c);
		static Fixed const	&minConstGet(Fixed const& b, Fixed const& c);

		static Fixed		&maxConstGet(Fixed& b, Fixed& c);
		static Fixed const	&maxConstGet(Fixed const& b, Fixed const& c);
		};

std::ostream&	operator<<(std::ostream& o, Fixed const& i);


#endif

/* to add :
/  Fixed(int const integer) 	: constructeur prennant un entier en parametre et le convertit en Fixed point
/  Fixed(float const floatPoint): constructeur prennant un nb a virgule floatante en parametre et le converti en Fixed point
/  float	toFloat(void) 		: fonction membre qui converti le Fixed point en float et le renvoie
/  int		toInt() 			: fonction membre qui converti le Fixed point en int et le renvoie
*/
