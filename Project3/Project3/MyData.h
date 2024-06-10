#pragma once
class MyData
{
public:
	MyData(int nParam)
	{
		m_pnData	= new int;
		*m_pnData	= nParam;
	}

	MyData(const MyData& other)
	{
		m_pnData = new int;
		*m_pnData = *other.;
	}
};

