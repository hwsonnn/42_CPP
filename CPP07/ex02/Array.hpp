#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <exception>

template <typename T>
class Array
{
	private:
		T *arr;
		unsigned int _size;
	public:
		Array()
		{
			arr = new T[0];
			_size = 0;
		}
		Array(unsigned int n)
		{
			arr = new T[n];
			_size = n;
		}
		// *this = ref로 하려 했으나 애초에 할당된게 없기 때문에 o
		// perator에 있는 delete를 하면 abort가 뜸
		Array(const Array &ref) 
		{
			_size = ref.size();
			arr = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				arr[i] = ref.arr[i];
		}
		~Array()
		{
			delete[] arr;
		}
		Array& operator=(const Array &ref)
		{
			if (this == &ref)
				return (*this);

			delete[] arr;
			_size = ref.size();
			arr = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				arr[i] = ref.arr[i];
		
			return (*this);
		}

		T& operator[](unsigned int i)
		{
			if (i >= _size)
				throw OutOfLimit();
			else
				return (arr[i]);
		}

		unsigned int size() const
		{
			return (_size);
		}

		class OutOfLimit : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Out of Limit!\n");
				}
		};
};

#endif