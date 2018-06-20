
#include "Object.h"


Object::Object()
{
}

bool Object::IsPresentInCL(const Electrician& e)//�����,�����������,���� �� 
{
	for (const auto& el : CL)
	{
		if(el == e) return true;
	}
	return false;
}

void Object::ProspectivesOverview() const //����� �� �������,������� ������ ��� �������,������� 
										 //������ ��������.
{
	for (auto& e : CL){
		cout<<e.GetName() << endl;
	}
}

bool Object::ReceiveCV(const Electrician& e)
{
	if (e.GetStage() >= req_exp) {
		if (e.GetRank() >= req_rank) {
			if (!IsPresentInCL(e)) { //���� ������������� ���������� 
				CL.push_back(e);					//� ��� ��� ��� � ������ ����������,��������� 
				return true;						//��� ���� 
			} return true;
			
		} else {
			cout << "Incefitient skills";
			return false;
		}
	} else {
		"Incefitient experience";
		return false;
	}
}

bool Object::Hire(const Electrician&  e)//������ ������ ��������� � ������� ���������� �� �������� �������,
													//��� ���� ����������� ��������� �� ���� ������ �������� 
{	
	if (IsPresentInCL(e)) { //
		workers.push_back(e);
		e.BeHired(this);
		return true;
	}
	
	return false;
}

void Object::Fire(const Electrician & e)
{
	e.BeFired();
	for (auto el : workers)
	{
		if (el == e) workers.erase(std::find(workers.begin(), workers.end(), e));
	}
}


Object::~Object()
{
}
