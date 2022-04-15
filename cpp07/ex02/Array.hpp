#ifndef ARRAY_HPP
#define ARRAY_HPP

# include <iostream>
# include <stdexcept>

template < typename T>
class Array
{
    public:
        Array() : _size(0), _array(NULL) 
        {
            std::cout << "Default Constructor" << std::endl;
        }
        Array<T>(unsigned int n) : _size(n)
        {
            _array = new T[_size];
            for (unsigned int i = 0; i < _size; i++)
            {
                _array[i] = 0;
            }
            std::cout << "Sized Constructor" << std::endl;
        }
        Array(Array const & src) 
        {
            std::cout << "Copy Constructor" << std::endl;

            *this = src; 
            return  ;
        }
        virtual ~Array()
        {
            delete [] _array;
        };

        Array& operator=(Array const & var)
        {
            std::cout << "Assignation operator" << std::endl;

            if (this != &var)
            {
                _size = var.size();
                _array = new T[_size];
                for (unsigned int i = 0; i < _size; i++)
                {
                    _array[i] = var._array[i];
                }
            }
            return (*this);
        }
        T& operator[](unsigned int index)
        {
            if (_size <= index)
                throw badindex;
            return (_array[index]);
        }
        unsigned int size()const {return (_size);}
        class BadIndexException : public std::exception
        {
            public :
                virtual const char *what() const throw()
                {
                    return ("Wrong index, out of array's range");
                }
        } badindex;
    private:

        unsigned int     _size;
        T   *_array;
};

#endif
