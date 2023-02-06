#pragma once

namespace mapStore {

	const int plainNum=0,swampNum=1,mountainNum=2,cityNum=3,generalNum=4; //type to number

	const int changeOnX[4] = { 1,0,-1,0 }; //standard direction change
	const int changeOnY[4] = { 0,1,0,-1 };

	int mapWidth, MapHeight;

	int countPlayer, countBot;

	struct operationStore{
		int playerId;
		int startX, startY;
		int directionTo;
	};

	struct mapNode {
		int armyOn;//the number of army on it
		int Team;// team this block belongs to
		int typeOfBlock; //type of the Block
		bool changeMadeOnNum; //If change is made only on the number
		bool changeMadeOnColor; //If change is made on the color of the Block
	}gameMap[105][105]; 

	void settingsInit();//Input settings
	void ranklistOutput();//Output Ranklist (less fps)
	void gameMessageOutput();//GameMessage Output (less fps)
	operationStore getPlayerOperation();//get the operation from keyboard and mouse
	operationStore getBotOperation();//get the operation from bots
}

namespace LGlocal{
}
namespace LGserver{}
namespace LGclient{}

#include "LGmaps.h"
#include "LGgraphs.h"
#include "LGlib.h"
#include "LGweb.h"
#include "LGgame.h"