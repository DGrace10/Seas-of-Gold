/*#include "CraftingSystem.h"

void CSInputItems::AddItem(irrstring Name, int Amnt)
{
	//itemNames.push_back(Name);
	//amnts.push_back(Amnt);
}

void CSOutputItems::AddItem(irrstring Name, std::vector<irrstring> Icomponents, std::vector<int>  Amnt)
{
	/*CSOutputItem temp;
	temp.Name = Name;
	temp.components = Icomponents;
	temp.amnts = Amnt;

	items.push_back(temp);
}

CraftingSystem::CraftingSystem()
{
	/*std::fstream file;
	file.open("./Scripts/crafting.scpt");
	bool listening = false;

	CraftableItem tempCI;
	std::string line;
	irrstring tempS = "";

	while (getline(file,line))
	{
		if (listening == true)
		{
			if (line[0] == 'n')
			{
				for (int i = 7; i < line.size(); i++)
				{
					tempS += line[i];
				}
				tempCI.itemName = tempS;
				tempS = "";
			}
			if (line[0] == 'c')
			{
				for (int i = 7; i < line.size(); i++)
				{
					tempS += line[i];
				}
				tempCI.components.push_back(tempS);
				tempCI.amnts.push_back(0);
				tempS = "";
			}
			if (line[0] == 'a')
			{
				for (int i = 7; i < line.size(); i++)
				{
					tempS += line[i];
				}
				int tempI = std::stoi(std::string(tempS.c_str()));
				tempCI.amnts[tempCI.amnts.size() - 1] = tempI;
				tempS = "";
			}
			if (line[0] == 'e')
			{
				listening = false;
				CraftableItems.push_back(tempCI);
				tempCI.amnts.clear();
				tempCI.components.clear();
				tempCI.itemName = "";
			}
		}
		else
		{
			if (line[0] == 'i')
			{
				listening = true;
			}
		}		
	}
	file.close();
}

CSOutputItems CraftingSystem::InitializeCraftables()
{

}


//set up crafting "inventories"*/
