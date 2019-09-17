#ifndef TESTELEMENT_H   
#define TESTELEMENT_H
#include "Hashable.h"     
#include <string>   
#include <iostream>

using namespace std;

/**
 * Hashable: ������ʹ�õĹ�ϣ��Ԫ������ 
 * note: ���������ṩ��һ��Ӧ����μ̳�Hashable����д���еķ�������֧��ʹ��HashSet��ZipHashSet�� 
 */
class Hashable
{
	public:
	Hashable();                                              // Ĭ�Ϲ��캯��  
	Hashable(int _val);                              		 // ���캯�� 
    Hashable(const Hashable &other);                         // �������캯�� 
	virtual Hashable& operator= (const Hashable &other);             // ������ֵ����� 
	virtual int hashCode() const;                                    // ���㵱ǰԪ�صĹ�ϣֵ 
	virtual bool equals(const Hashable &other) const;                // �Ƚ��������� 
    virtual string toString() const;                                 // �ַ��������ǰԪ�� 
    virtual ~Hashable();                                             // ����������
    
    private: 
    int val;    // ʵ�ʴ洢��ֵ������Ԫ������ʵ���Ͼ��Ǽ򵥷�װ��һ��intֵ 
};

Hashable::Hashable()
{
	val=0;
}

Hashable::Hashable(int _val)
{
	val=_val;
}

Hashable::Hashable(const Hashable &other)
{
	val=other.val;
}

Hashable& Hashable::operator= (const Hashable &other)
{
	if(&other==this)
	return (*this);
	
	val=other.val;
	return (*this);
}

int Hashable::hashCode() const
{
	return val;
}

bool Hashable::equals(const Hashable &other) const
{
	if(val==other.val)// ���dynamic_cast�ɹ��������ߵ�ֵ��ȣ�������������ȣ�����true 
	return true;
	else                               // ���������������������� 
	return false;
}

string Hashable::toString() const
{
	return to_string(val);
}

Hashable::~Hashable() 
{
	//cout<<"Hashable����������������"<<endl; 
}                                 

#endif