#pragma once
#include <string>
using namespace std;

struct VideoCart 
{
	char Modele[50];
	char Architecture[50];
	int CoreFrequncy;
	int VideoMemoryFrency;
	int VideoMemory;
	int MemoryBusBitsize;
	int Energy;
};
struct TestGame 
{
	char NemeGame[50];
	int CodGame;
	char SettingsGame[50];
	int Minimal_FPS;
	int Average_FPS;
	int Maximum_FPS;
};