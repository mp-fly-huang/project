﻿
// ARPView.h: CARPView 类的接口
//

#pragma once


class CARPView : public CView
{
protected: // 仅从序列化创建
	CARPView() noexcept;
	DECLARE_DYNCREATE(CARPView)

// 特性
public:
	CARPDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CARPView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // ARPView.cpp 中的调试版本
inline CARPDoc* CARPView::GetDocument() const
   { return reinterpret_cast<CARPDoc*>(m_pDocument); }
#endif

