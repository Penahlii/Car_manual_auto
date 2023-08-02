#pragma once

class Car
{
	int id;
	string brand;
	string model;
	Engine engine;

protected:

	// Constructor

	Car() { this->id = global_id++; }
	Car(const string brand, const string model, Engine engine)
	{
		this->id = global_id++;
		this->engine = engine;
		this->set_marka(brand);
		this->set_model(model);
	}

public:

	// Set Methods

	void set_marka(const string brand)
	{
		if (brand.length() >= 3 && brand.length() <= 18)
			this->brand = brand;
		else
			assert(!"Brand is not correct !!!");
	}

	void set_model(const string model)
	{
		if (model.length() >= 3 && model.length() <= 18)
			this->model = model;
		else
			assert(!"Model is not correct !!!");
	}

	// Get Methods

	inline int get_id() const { return this->id; }
	inline const string get_brand() const { return this->brand; }
	inline const string get_model() const { return this->model; }
	inline Engine get_engine() const { return this->engine; }

	// Show

	virtual void show() const
	{
		cout << "Id: " << this->id << endl;
		cout << "Brand: " << this->brand << endl;
		cout << "Model: " << this->model << endl;
		cout << this->engine;
	}

	// cout

	friend ostream& operator<<(ostream& os, const Car& car);
	friend ostream& operator<<(ostream& os, const Car* car);
};

// cout

ostream& operator<<(ostream& os, const Car& car)
{
	os << "ID: " << car.id << endl;
	os << "Brand: " << car.brand << endl;
	os << "Model: " << car.model << endl;
	os << car.engine << endl;

	return os;
}
ostream& operator<<(ostream& os, const Car* car)
{
	os << *(car);

	return os;
}