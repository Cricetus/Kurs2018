#include "stdafx.h"
#include "Electrician.h"


Electrician::Electrician():object(nullptr),stage(0),rank(1)//������� ������������ ���������� ��. ���������
{
	
}

Electrician::Electrician(Object* o, int _stage, int _rank) : object(o),stage(_stage),rank(_rank)
{
}

bool Electrician::JobApplication(Object * o)
{
	return o->ReceiveCV(*this);//���������� ������ ����������� ������
}


void Electrician::ChangeObject(Object* o)
{
	if (JobApplication(o)){ //������ ������ �� ������ �����
	object->Fire(*this);//����� ��������� ��������� � ������ ����������
	o->Hire(*this);        //P.S. �� ����� �������� ������,�� ������ ��������� ������,
					//� ������� ������� ���� �� ������ �� ���� � ���������� ������
					// �� ����� ��������� ��� ��� ���� �� ���������� ������� ����� �� �����
	
}

unsigned int Electrician::GetStage()const
{
	return stage;
}

unsigned int Electrician::GetRank() const
{
	return rank;
}

Object* Electrician::GetObject()
{
	return *object;
}

bool Electrician::operator==(const Electrician& e) //���������� �������� ��������� ���������
{
	return (this->firstName == e.firstName
		&& this->lastName == e.lastName
		&&this->age == e.age && this->height == e.height
		&& this->weight == e.weight && this->_gender == e._gender
		&& this->object == e.object && this->stage == e.stage
		&& this->rank == e.rank
		);

}

void Electrician::BeHired(Object * o)
{
	obejct = o;
}

void Electrician::BeFired()
{
	object = nullptr;
}

Electrician::~Electrician()
{
}
