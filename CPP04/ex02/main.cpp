#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

//여기서도 포인터, 생성&소멸, 동적할당에 대해 배웠음! 밑에 주석 참고!

int main(void)
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	// ISpaceMarine* bob2(bob);
    // bob2->battleCry();		//인터페이스 객체 생성 XXX

	ISquad* vlc = new Squad;
	// ISquad vlc2(*vlc); 		//객체 만들려는 시도 자체를 하지마
    // ISquad* vlc3 = new Squad(*(Squad *)vlc); //다운캐스팅 관련
	// std::cout<<"vlc2 : "<<vlc->getCount()<<", "<<vlc->getUnit(0)<<std::endl;

	vlc->push(bob);
	vlc->push(jim);
	std::cout<<vlc->push(bob)<<std::endl; //중복확인! 2가 나오는게 맞음!

    ISquad* vlc3 = new Squad(*(Squad *)vlc); //다운캐스팅 //복사 보여주려고

	std::cout<<"----------vlc----------"<<std::endl;
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	std::cout<<"----------vlc3----------"<<std::endl;
    for (int i = 0; i < vlc3->getCount(); ++i)
	{
		ISpaceMarine* cur2 = vlc3->getUnit(i);
		cur2->battleCry();
		cur2->rangedAttack();
		cur2->meleeAttack();
	}

	std::cout<<"------------------------"<<std::endl;
    
    // delete bob;
    // delete jim; squad 소멸자에서 다 해제시키기 때문에 필요없음!!
    delete vlc;
    // delete vlc2;
    delete vlc3;

	// std::cout<<"\n------------------------\n"<<std::endl;



	// ISpaceMarine* bob2 = new TacticalMarine;
	// ISpaceMarine* jim2 = new AssaultTerminator;

	// Squad sq;
	// sq.push(bob2);
	// sq.push(jim2);
	// Squad sq2(sq);

	// std::cout<<"----------sq2----------"<<std::endl;
    // for (int i = 0; i < sq.getCount(); ++i)
	// {
	// 	ISpaceMarine* cur3 = sq.getUnit(i);
	// 	cur3->battleCry();
	// 	cur3->rangedAttack();
	// 	cur3->meleeAttack();
	// }
	// std::cout<<"------------------------"<<std::endl;

	return (0);
}