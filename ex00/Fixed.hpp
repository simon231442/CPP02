#ifndef	FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed{
	private:
		int					fixedPointValue_;
		static const int	fractionnalBits_ = 8;
	public:
		Fixed();
		Fixed(const Fixed& source);
		Fixed &operator=(const Fixed& source);			// Operateur d'assignation
		~Fixed();
		int					getRawBits(void) const; 	// const --> Read-only: returns the raw value without modifying the object
		void				setRawBits(int const raw);	// const --> parameter 'raw' is read-only
		};

#endif
