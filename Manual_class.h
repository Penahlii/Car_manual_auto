#pragma once

class Manual : virtual public Car
{
	bool ClutchPedal;
	string FuelEfficiency;

public:

	// Constructors

	Manual() : Car() {}
	Manual(const string brand, const string model, Engine engine, bool ClutchPedal, string FuelEfficiency)
		: Car(brand, model, engine)
	{
		this->ClutchPedal = ClutchPedal;
		this->set_FuelEfficiency(FuelEfficiency);
	}

	// Set Method

	void set_FuelEfficiency(string FuelEfficiency)
	{
		if (FuelEfficiency.length() >= 2 && FuelEfficiency.length() <= 10)
			this->FuelEfficiency = FuelEfficiency;
		else
			assert(!"Fuel Efficiency is wrong !!!");
	}

	// Get Methods

	inline bool get_clucth_pedal() const { return this->ClutchPedal; }
	inline const string get_fuel_efficiency() const { return this->FuelEfficiency; }

	// cout

	friend ostream& operator<<(ostream& os, const Manual& manual);
	friend ostream& operator<<(ostream& os, const Manual* manual);
};

// cout

ostream& operator<<(ostream& os, const Manual& manual)
{
	os << "ID: " << manual.get_id() << endl;
	os << "Brand: " << manual.get_brand() << endl;
	os << "Model: " << manual.get_model() << endl;
	os << manual.get_engine();
	os << "Clutch Pedal: " << (manual.ClutchPedal ? "Exist" : "Not exist") << endl;
	os << "Fuel Efficiency: " << manual.FuelEfficiency << endl;

	return os;
}

ostream& operator<<(ostream& os, const Manual* manual)
{
	os << *(manual);

	return os;
}