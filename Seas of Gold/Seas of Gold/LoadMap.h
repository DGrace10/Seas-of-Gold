#pragma once
#include "Common.h"
enum MapID
{
	Map_England = 0,
	Map_India = 1,
	Map_Africa = 2
};
const int MAP_COUNT = 3;
struct MapData
{
	irrstring* MapFiles = new irrstring[MAP_COUNT];
	irrstring* MapAssets = new irrstring[MAP_COUNT];
	irrstring* MapMerchants = new irrstring[MAP_COUNT];
	irrstring* MapVendorTable = new irrstring[MAP_COUNT];
	irrstring* MapCraftingTable = new irrstring[MAP_COUNT];
	
	void Initialize()
	{
		MapFiles[Map_England] = "Assets/enmapcoll.3ds";
		MapAssets[Map_England] = "Assets/trees_en.3ds";
		MapMerchants[Map_England] = "Assets/enMerch.x";
		MapVendorTable[Map_England] = "Assets/vndrTble.3ds";
		MapCraftingTable[Map_England] = "Assets/crftTble.3ds";

		MapFiles[Map_India] = "Assets/indMap.3ds";
		MapAssets[Map_India] = "Assets/trees_in.3ds";
		MapMerchants[Map_India] = "Assets/inMerch.x";
		MapVendorTable[Map_India] = "Assets/vndrTble.3ds";
		MapCraftingTable[Map_India] = "Assets/crftTble.3ds";

		MapFiles[Map_Africa] = "Assets/afMap.3ds";
		MapAssets[Map_Africa] = "Assets/trees_in.3ds";
		MapMerchants[Map_Africa] = "Assets/inMerch.x";
		MapVendorTable[Map_Africa] = "Assets/vndrTble.3ds";
		MapCraftingTable[Map_Africa] = "Assets/crftTble.3ds";
	}
};

class LoadMap
{
	MapData mapData;
public:
	IMeshSceneNode* seasNode;
	void Load(ISceneManager* smgr, IrrlichtDevice *device, int map);
	LoadMap()
	{
		mapData.Initialize();
	}


};