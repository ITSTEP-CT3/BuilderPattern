#pragma once
#include "AircraftBuilder.h"
class HangGliderBuilder :public AircraftBuilder
{
public:
	HangGliderBuilder();
	virtual ~HangGliderBuilder();
public:
	void BuildFrame();
	void BuildEngine();
	void BuildWheels();
	void BuildDoors();
	void BuildWings();
};
HangGliderBuilder::HangGliderBuilder()
{
	aircraft = new Aircraft("Hang Glider");
}
HangGliderBuilder::~HangGliderBuilder()
{
	delete aircraft;
}
void HangGliderBuilder::BuildFrame() {
	aircraft->SetPart("frame", "Hang glider frame");

}
void HangGliderBuilder::BuildEngine() {
	aircraft->SetPart("engine", "no engine");
}
void HangGliderBuilder::BuildWheels() {
	aircraft->SetPart("wheels", "no wheels");
}
void HangGliderBuilder::BuildDoors() {
	aircraft->SetPart("doors", "no doors");
}
void HangGliderBuilder::BuildWings() {
	aircraft->SetPart("wings", "1");
}