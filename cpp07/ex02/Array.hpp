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

        Array(Array const & src) : _size(0), _array(NULL)
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
                if (_size > 0)
                    delete [] _array;
                _size = var.size();
                _array = new T[_size];
                for (unsigned int i = 0; i < _size; i++)
                {
                    _array[i] = var._array[i];
                }
            }
            return (*this);
        }
        
        const T &operator[](unsigned int index) const
        {
            if (_size <= index)
                throw std::out_of_range("wrong index");
            return (_array[index]);
        }
        
        T &operator[](unsigned int index)
        {
            if (_size <= index)
                throw std::out_of_range("wrong index");
            return (_array[index]);
        }
        unsigned int size()const {return (_size);}
        
    private:

        unsigned int    _size;
        T               *_array;
};

#endif
