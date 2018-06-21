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
	bool JobApplication(Object* o);//������ ������ �� ������
	void ChangeObject(Object* o);//������ ������
	unsigned int GetStage()const;
	unsigned int GetRank()const;
	Object* GetObject();
	bool operator == (const Electrician& e); //�������� ���������
	friend bool operator == (const Electrician& e1, const Electrician& e2); //�������� ���������� ������� ������,������ ��� ������� 
																		//�������� ������
	void BeHired(const Object* o);//������,���������������� � ��������� ��������� ��� ����� �� ������ � ���������� �����. 
	void BeFired();
	virtual ~Electrician();
};
//��� �� ����� ������� ����������. ��������� ������� �������, ������ ��� �� ����� �� � ���� �� 
//���� �� �������

bool operator == (const Electrician& e1, const Electrician& e2)
{
	return (e1.GetName() == e2.GetName()
			&& e1.GetAge() == e2.GetAge() && e2.GetHeight() == e2.GetHeight()
			&& e1.GetWeight() == e2.GetWeight() && e1.GetGender() == e2.GetGender()
			&& e1.GetObject() == e2.GetObject() && e1.GetStage() == e2.GetStage()
			&& e1.GetRank() == e2.GetRank()
		);
}
