#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>() {}
		MutantStack(const MutantStack<T> &ref) : std::stack<T>(ref) {}
		virtual ~MutantStack() {}
		MutantStack& operator=(const MutantStack<T> &ref)
		{
			std::stack<T>::operator=(ref);
		}

		//Stack은 컨테이너 어댑터로, 기존 컨테이너의 또 다른 기능 제공
		//(기존 컨테이너의 인터페이스를 제한하여 만든 기능 제한, 변형된 컨테이너)
		//(각각의 기초가 되는 클래스의 인터페이스를 제한하여, 특정 형태의 동작만을 수행토록)

		// 기초가 되는 컨테이너(deque)를 protected로 가지고 있다! (member objects)
		// -> stack을 상속 받으면 deque(c)의 멤버변수, 멤버함수를 사용할 수 있다!
		// deque에 있는 iteraotr를 이용할거임!!!

		// 하면서 의존 이름(dependent name)을 공부했음!!
		// typename을 써야하는 이유 
		// : 클래스의 내부변수가 아니라 타입(type)이라는 것을 알려주기 위함!
		// typedef로 재정의
		// typedef 는 c 구조체에서 썼듯이, 타입의 새로운 별칭을 정의!
		// 즉, typename std::stack<T>::container_type::iterator 를
		// iterator 라고 별칭하고 이 이름으로 쓰겠다!

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
		iterator begin() {return this->c.begin();}
		iterator end() {return this->c.end();}
		const_iterator begin() const {return this->c.begin();}
		const_iterator end() const {return this->c.end();}

		reverse_iterator rbegin() {return this->c.rbegin();}
		reverse_iterator rend() {return this->c.rend();}
		const_reverse_iterator rbegin() const {return this->c.rbegin();}
		const_reverse_iterator rend() const {return this->c.rend();}
};

#endif