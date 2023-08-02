#pragma once

class Automatic : virtual public Car
{
	bool DualClutchTransmission;
	bool AutomaticParkingSystem;
	bool AutomaticLightSystem;
	bool AutomaticBrakingSystem;
	bool CruiseControl;

protected:

	// Constructors

	Automatic() : Car() {}
	Automatic(const string brand, const string model, Engine engine, bool DualClutchTransmission, bool AutomaticParkingSystem, bool AutomaticLightSystem, bool AutomaticBrakingSystem, bool CruiseControl)
		: Car(brand, model, engine)
	{
		this->DualClutchTransmission = DualClutchTransmission;
		this->AutomaticParkingSystem = AutomaticParkingSystem;
		this->AutomaticLightSystem = AutomaticLightSystem;
		this->AutomaticBrakingSystem = AutomaticBrakingSystem;
		this->CruiseControl = CruiseControl;
	}

public:

	// Get Methods

	inline bool get_dual_clutch_transmission() const { return this->DualClutchTransmission; }
	inline bool get_automatic_parking_system() const { return this->AutomaticBrakingSystem; }
	inline bool get_automatic_light_system() const { return this->AutomaticLightSystem; }
	inline bool get_automatic_braking_system() const { return this->AutomaticBrakingSystem; }
	inline bool get_cruise_control() const { return this->CruiseControl; }

	// cout

	friend ostream& operator<<(ostream& os, const Automatic& automatic);
	friend ostream& operator<<(ostream& os, const Automatic* automatic);
};

// cout

ostream& operator<<(ostream& os, const Automatic& automatic)
{
	os << "ID: " << automatic.get_id() << endl;
	os << "Brand: " << automatic.get_brand() << endl;
	os << "Model: " << automatic.get_model() << endl;
	os << automatic.get_engine();
	os << "Dual Clutch Transmission: " << (automatic.DualClutchTransmission ? "Exist" : "Not exist") << endl;
	os << "Automatic Parking System: " << (automatic.AutomaticParkingSystem ? "Exist" : "Not exist") << endl;
	os << "Automatic Light System: " << (automatic.AutomaticLightSystem ? "Exist" : "Not exist") << endl;
	os << "Automatic Braking System: " << (automatic.AutomaticBrakingSystem ? "Exist" : "Not exist") << endl;
	os << "Cruise Control: " << (automatic.CruiseControl ? "Exist" : "Not exist") << endl;

	return os;
} 

ostream& operator<<(ostream& os, const Automatic* automatic)
{
	os << *(automatic);

	return os;
}