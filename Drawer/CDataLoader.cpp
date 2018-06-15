#include "stdafx.h"
#include "CDataLoader.h"

// �ν��Ͻ��� �ʱ�ȭ ���ݴϴ�.
SINGLETON_IMPL(CDataLoader);

CDataLoader::~CDataLoader()
{
}

void CDataLoader::Load(LPCTSTR address, DATA_NAME dataName)
{
	if (m_datas.find(dataName) != m_datas.end())
		return;
//	m_datas.emplace(make_pair(dataName, CJson::Read(address));
}

SpriteFileData CDataLoader::GetData(DATA_NAME dataName)
{
	assert(m_datas.find(dataName) != m_datas.end() && "�������� �ʴ� �����Դϴ�.");
	return m_datas.find(dataName)->second;
}
