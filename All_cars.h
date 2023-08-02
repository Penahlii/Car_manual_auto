#pragma once

class Bmw : public Automatic
{
	bool xdrive;
	bool M_model;

public:

	// Constructors;

	Bmw() : Automatic() {}
	Bmw(const string brand, const string model, Engine engine, bool DualClutchTransmission, bool AutomaticParkingSystem, bool AutomaticLightSystem, bool AutomaticBrakingSystem, bool CruiseControl, bool xdrive, bool M_model)
		: Automatic(brand, model, engine, DualClutchTransmission, AutomaticParkingSystem, AutomaticLightSystem, AutomaticBrakingSystem, CruiseControl)
	{
		this->xdrive = xdrive;
		this->M_model = M_model;
	}

	// Get 

	inline bool get_x_drive() const { return this->xdrive; }
	inline bool get_m_model() const { return this->M_model; }

	// Show

	void show() const override
	{
		cout << "ID: " << this->get_id() << endl;
		cout << "Brand: " << this->get_brand() << endl;
		cout << "Model: " << this->get_model() << endl;
		cout << this->get_engine();
		cout << "Dual Clutch Transmission: " << (this->get_dual_clutch_transmission() ? "Exist" : "Not exist") << endl;
		cout << "Automatic Parking System: " << (this->get_automatic_parking_system() ? "Exist" : "Not exist") << endl;
		cout << "Automatic Light System: " << (this->get_automatic_light_system() ? "Exist" : "Not exist") << endl;
		cout << "Automatic Braking System: " << (this->get_automatic_braking_system() ? "Exist" : "Not exist") << endl;
		cout << "Cruise Control: " << (this->get_cruise_control() ? "Exist" : "Not exist") << endl;
		cout << "Xdrive: " << (this->xdrive ? "Exist" : "Not exist") << endl;
		cout << "M model: " << (this->M_model ? "Yes" : "No") << endl;
	}

	// cout

	friend ostream& operator<<(ostream& os, const Bmw& bmw);
	friend ostream& operator<<(ostream& os, const Bmw* bmw);
};

// cout

ostream& operator<<(ostream& os, const Bmw& bmw)
{
	os << " ID: " << bmw.get_id() << endl;
	os << "Brand: " << bmw.get_brand() << endl;
	os << "Model: " << bmw.get_model() << endl;
	os << bmw.get_engine();
	os << "Dual Clutch Transmission: " << (bmw.get_dual_clutch_transmission() ? "Exist" : "Not exist") << endl;
	os << "Automatic Parking System: " << (bmw.get_automatic_parking_system() ? "Exist" : "Not exist") << endl;
	os << "Automatic Light System: " << (bmw.get_automatic_light_system() ? "Exist" : "Not exist") << endl;
	os << "Automatic Braking System: " << (bmw.get_automatic_braking_system() ? "Exist" : "Not exist") << endl;
	os << "Cruise Control: " << (bmw.get_cruise_control() ? "Exist" : "Not exist") << endl;
	os << "Xdrive: " << (bmw.xdrive ? "Exist" : "Not exist") << endl;
	os << "M model: " << (bmw.M_model ? "Yes" : "No") << endl;

	return os;
}

ostream& operator<<(ostream& os, const Bmw* bmw)
{
	os << *(bmw);

	return os;
}

class Mercedes : public Automatic
{
	bool amg_model;
	bool four_matic;

public:

	// Constructors

	Mercedes() : Automatic() {}
	Mercedes(const string brand, const string model, Engine engine, bool DualClutchTransmission, bool AutomaticParkingSystem, bool AutomaticLightSystem, bool AutomaticBrakingSystem, bool CruiseControl, bool amg_model, bool four_matic)
		: Automatic(brand, model, engine, DualClutchTransmission, AutomaticParkingSystem, AutomaticLightSystem, AutomaticBrakingSystem, CruiseControl)
	{
		this->amg_model = amg_model;
		this->four_matic = four_matic;
	}

	// Get Methods

	inline bool get_amg_model() const { return this->amg_model; }
	inline bool get_four_matic() const { return this->four_matic; }

	// Show

	void show() const override
	{
		cout << "ID: " << this->get_id() << endl;
		cout << "Brand: " << this->get_brand() << endl;
		cout << "Model: " << this->get_model() << endl;
		cout << this->get_engine();
		cout << "Dual Clutch Transmission: " << (this->get_dual_clutch_transmission() ? "Exist" : "Not exist") << endl;
		cout << "Automatic Parking System: " << (this->get_automatic_parking_system() ? "Exist" : "Not exist") << endl;
		cout << "Automatic Light System: " << (this->get_automatic_light_system() ? "Exist" : "Not exist") << endl;
		cout << "Automatic Braking System: " << (this->get_automatic_braking_system() ? "Exist" : "Not exist") << endl;
		cout << "Cruise Control: " << (this->get_cruise_control() ? "Exist" : "Not exist") << endl;
		cout << "Amg Model: " << (this->amg_model ? "Yes" : "No") << endl;
		cout << "Four Matic: " << (this->four_matic ? "Yes" : "No") << endl;
	}

	// cout

	friend ostream& operator<<(ostream& os, const Mercedes& mercedes);
	friend ostream& operator<<(ostream& os, const Mercedes* mercedes);
};

// cout

ostream& operator<<(ostream& os, const Mercedes& mercedes)
{
	os << "ID: " << mercedes.get_id() << endl;
	os << "Brand: " << mercedes.get_brand() << endl;
	os << "Model: " << mercedes.get_model() << endl;
	os << mercedes.get_engine();
	os << "Dual Clutch Transmission: " << (mercedes.get_dual_clutch_transmission() ? "Exist" : "Not exist") << endl;
	os << "Automatic Parking System: " << (mercedes.get_automatic_parking_system() ? "Exist" : "Not exist") << endl;
	os << "Automatic Light System: " << (mercedes.get_automatic_light_system() ? "Exist" : "Not exist") << endl;
	os << "Automatic Braking System: " << (mercedes.get_automatic_braking_system() ? "Exist" : "Not exist") << endl;
	os << "Cruise Control: " << (mercedes.get_cruise_control() ? "Exist" : "Not exist") << endl;
	os << "Amg Model: " << (mercedes.amg_model ? "Yes" : "No") << endl;
	os << "Four Matic: " << (mercedes.four_matic ? "Yes" : "No") << endl;

	return os;
}

ostream& operator<<(ostream& os, const Mercedes* mercedes)
{
	os << *(mercedes);

	return os;
}

class Vaz : public Manual
{
	bool peredok;
	bool amerikanka;
	bool sport_shock_absorber;

public:

	// Constructors

	Vaz() : Manual() {}
	Vaz(const string brand, const string model, Engine engine, bool ClutchPedal, string FuelEfficiency, bool peredok, bool amerikanka, bool sport_shock_absorber)
		: Manual(brand, model, engine, ClutchPedal , FuelEfficiency)
	{
		this->peredok = peredok;
		this->amerikanka = amerikanka;
		this->sport_shock_absorber = sport_shock_absorber;
	}

	// Get Methods

	inline bool get_peredok() const { return this->peredok; }
	inline bool get_amerikanka() const { return this->amerikanka; }
	inline bool get_sport_shock_absorber() const { return this->sport_shock_absorber; }

	// Show

	void show() const override
	{
		cout << "ID: " << this->get_id() << endl;
		cout << "Brand: " << this->get_brand() << endl;
		cout << "Model: " << this->get_model() << endl;
		cout << this->get_engine();
		cout << "Clutch Pedal: " << (this->get_clucth_pedal() ? "Exist" : "Not exist") << endl;
		cout << "Fuel Efficiency: " << this->get_fuel_efficiency() << endl;
		cout << "Peredok: " << (this->peredok ? "Exist" : "Not exist") << endl;
		cout << "Amerikanka: " << (this->amerikanka ? "Exist" : "Not Exist") << endl;
		cout << "Sport Shock Absorber: " << (this->sport_shock_absorber ? "Exist" : "Not exist") << endl;
	}

	// cout

	friend ostream& operator<<(ostream& os, const Vaz& vaz);
	friend ostream& operator<<(ostream& os, const Vaz* vaz);
};

// cout

ostream& operator<<(ostream& os, const Vaz& vaz)
{
	os << "ID: " << vaz.get_id() << endl;
	os << "Brand: " << vaz.get_brand() << endl;
	os << "Model: " << vaz.get_model() << endl;
	os << vaz.get_engine();
	os << "Clutch Pedal: " << (vaz.get_clucth_pedal() ? "Exist" : "Not exist") << endl;
	cout << "Fuel Efficiency: " << vaz.get_fuel_efficiency() << endl;
	os << "Peredok: " << (vaz.peredok ? "Exist" : "Not exist") << endl;
	os << "Amerikanka: " << (vaz.amerikanka ? "Exist" : "Not Exist") << endl;
	os << "Sport Shock Absorber: " << (vaz.sport_shock_absorber ? "Exist" : "Not exist") << endl;

	return os;
}

ostream& operator<<(ostream& os, const Vaz* vaz)
{
	os << *(vaz);

	return os;
}

class Audi : public Automatic
{
	bool W_cylinder_system;
	bool tt;

public:

	// Constructors

	Audi() : Automatic() {}
	Audi(const string brand, const string model, Engine engine, bool DualClutchTransmission, bool AutomaticParkingSystem, bool AutomaticLightSystem, bool AutomaticBrakingSystem, bool CruiseControl, bool W_cylinder_system, bool tt)
		: Automatic(brand, model, engine, DualClutchTransmission, AutomaticParkingSystem, AutomaticLightSystem, AutomaticBrakingSystem, CruiseControl)
	{
		this->W_cylinder_system = W_cylinder_system;
		this->tt = tt;
	}

	// Get Methods

	inline bool get_w_cylinder_system() const { return this->W_cylinder_system; }
	inline bool get_tt() const { return this->tt; }

	// Show

	void show() const override
	{
		cout << "ID: " << this->get_id() << endl;
		cout << "Brand: " << this->get_brand() << endl;
		cout << "Model: " << this->get_model() << endl;
		cout << this->get_engine();
		cout << "Dual Clutch Transmission: " << (this->get_dual_clutch_transmission() ? "Exist" : "Not exist") << endl;
		cout << "Automatic Parking System: " << (this->get_automatic_parking_system() ? "Exist" : "Not exist") << endl;
		cout << "Automatic Light System: " << (this->get_automatic_light_system() ? "Exist" : "Not exist") << endl;
		cout << "Automatic Braking System: " << (this->get_automatic_braking_system() ? "Exist" : "Not exist") << endl;
		cout << "Cruise Control: " << (this->get_cruise_control() ? "Exist" : "Not exist") << endl;
		cout << "W Cylinder System: " << (this->W_cylinder_system ? "Exist" : "Not exist") << endl;
		cout << "TT: " << (this->tt ? "Exist" : "Not exist") << endl;
	}

	// cout

	friend ostream& operator<<(ostream& os, const Audi& audi);
	friend ostream& operator<<(ostream& os, const Audi* audi);
};

// cout

ostream& operator<<(ostream& os, const Audi& audi)
{
	os << "ID: " << audi.get_id() << endl;
	os << "Brand: " << audi.get_brand() << endl;
	os << "Model: " << audi.get_model() << endl;
	os << audi.get_engine();
	os << "Dual Clutch Transmission: " << (audi.get_dual_clutch_transmission() ? "Exist" : "Not exist") << endl;
	os << "Automatic Parking System: " << (audi.get_automatic_parking_system() ? "Exist" : "Not exist") << endl;
	os << "Automatic Light System: " << (audi.get_automatic_light_system() ? "Exist" : "Not exist") << endl;
	os << "Automatic Braking System: " << (audi.get_automatic_braking_system() ? "Exist" : "Not exist") << endl;
	os << "Cruise Control: " << (audi.get_cruise_control() ? "Exist" : "Not exist") << endl;
	os << "W Cylinder System: " << (audi.W_cylinder_system ? "Exist" : "Not exist") << endl;
	os << "TT: " << (audi.tt ? "Exist" : "Not exist") << endl;

	return os;
}

ostream& operator<<(ostream& os, const Audi* audi)
{
	os << *(audi);

	return os;
}