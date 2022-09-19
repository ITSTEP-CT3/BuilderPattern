#pragma once
// Класс строителя.Умеет создавать планеры
#include "AircraftBuilder.h"

class GliderBuilder : public AircraftBuilder
{
public:
	GliderBuilder() {
		aircraft = new Aircraft("Glider");
	}
	virtual ~GliderBuilder() {
		delete aircraft;
	}
public:
	void BuildFrame();
	void BuildEngine();
	void BuildWheels();
	void BuildDoors();
	void BuildWings();
};

void GliderBuilder::BuildFrame() {
	aircraft->SetPart("frame", "Glider frame");
}
void GliderBuilder::BuildEngine() {
	aircraft->SetPart("engine", "no engine");
}
void GliderBuilder::BuildWheels() {
	aircraft->SetPart("wheels", "1");
}
void GliderBuilder::BuildDoors() {
	aircraft->SetPart("doors", "1");
}
void GliderBuilder::BuildWings() {
	aircraft->SetPart("wings", "2");
}
