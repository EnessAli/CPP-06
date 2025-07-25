#ifndef A_HPP
# define A_HPP

# include "Base.hpp"

class A : public Base
{
public:
    A(void);
    A(const A& src);
    A& operator=(const A& src);
    virtual ~A(void);
};

#endif
