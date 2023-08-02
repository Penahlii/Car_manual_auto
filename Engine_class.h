#pragma once

class Engine
{
	string engine_no;
	string company;
	float value;

public:

	// All constructors

	Engine() {}
	Engine(const string engine_no, const string company, float value)
	{
		this->set_engine_no(engine_no);
		this->set_company(company);
		this->set_value(value);
	}

	// Set Methods

	void set_engine_no(const string engine_no)
	{
		if (engine_no.length() >= 6 && engine_no.length() <= 12)
			this->engine_no = engine_no;
		else
			assert(!"Engine No is not correct !!!");
	}

	void set_company(const string company)
	{
		if (company.length() >= 3 && company.length() <= 32)
			this->company = company;
		else
			assert(!"Company is not correct !!!");
	}

	void set_value(float value)
	{
		if (value >= 0.0)
			this->value = value;
		else
			assert(!"Engine value is not correct !!!");
	}

	// Get Methods

	inline const string get_engine_no() { return this->engine_no; }
	inline const string get_company() { return this->company; }
	inline float get_value() { return this->value; }

	// Cout

	friend ostream& operator<<(ostream& os, const Engine& engine);
};

// Cout

ostream& operator<<(ostream& os, const Engine& engine)
{
	os << "Engine No: " << engine.engine_no << endl;
	os << "Company: " << engine.company << endl;
	os << "Engine value: " << engine.value << endl;

	return os;
}