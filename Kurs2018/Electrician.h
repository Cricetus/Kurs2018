#pragma once
#include "Object.h"
#include "Person.h"
class Electrician : public Person
{
	
	unsigned int stage;
	unsigned int rank;
	Object* object;
public:
	Electrician();
	Electrician(Object* o,int stage, int rank);
	bool JobApplication(Object* o);//Подаем заявку на работу
	void ChangeObject(Object* o);//Меняем объект
	unsigned int GetStage()const;
	unsigned int GetRank()const;
	Object* GetObject();
	bool operator == (const Electrician& e); //оператор сравнения
	friend bool operator == (const Electrician& e1, const Electrician& e2); //пришлось опредедить снаружи класса,потому что вызвало 
																		//странную ошибку
	void BeHired(const Object* o);//Методы,инициализирующие и очищающие указатель при преме на работу и увольнении соотв. 
	void BeFired();
	virtual ~Electrician();
};
//Вот то самое внешнее объявление. Попытался сделать френдом, потому как он иначе бы у него не 
//было бы доступа

bool operator == (const Electrician& e1, const Electrician& e2)
{
	return (e1.GetName() == e2.GetName()
			&& e1.GetAge() == e2.GetAge() && e2.GetHeight() == e2.GetHeight()
			&& e1.GetWeight() == e2.GetWeight() && e1.GetGender() == e2.GetGender()
			&& e1.GetObject() == e2.GetObject() && e1.GetStage() == e2.GetStage()
			&& e1.GetRank() == e2.GetRank()
		);
}
