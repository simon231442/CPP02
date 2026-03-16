#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed{
	private:
		int					integer_;
		static const int	fractional_ = 8;
	public:
		Fixed();
		Fixed(const Fixed& source);
		Fixed &operator=(const Fixed& source);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	};

#endif
