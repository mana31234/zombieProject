#ifndef __PLAYER_INFO_SINGLETON__H__
#define __PLAYER_INFO_SINGLETON__H__
#include "cocos2d.h"


// Player 정보와 무기들의 정보를 가지고 있는 싱글톤 클래스
class PlayerInfoSingleTon {
private:
	static PlayerInfoSingleTon *m_pInstance;
	PlayerInfoSingleTon();

public:
	static PlayerInfoSingleTon *getInstance();

	int hp = 100;

};

#endif