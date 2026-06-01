unsigned __int64 __fastcall sub_276B0(QT::QGraphicsScene *this, __int64 a2, __int64 a3, double a4, __m128 a5)
{
  size_t v6; // r13
  bool v7; // zf
  const char *v8; // rdx
  __int64 *v9; // rax
  const char *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // r13
  __int64 v16; // rax
  void *v18; // rax
  const void *v19; // rsi
  _BYTE v20[8]; // [rsp+8h] [rbp-48h] BYREF
  _QWORD (**v21)(QT::QGraphicsScene *__hidden); // [rsp+10h] [rbp-40h] BYREF
  __int128 v22; // [rsp+18h] [rbp-38h]
  unsigned __int64 v23; // [rsp+28h] [rbp-28h]

  v23 = __readfsqword(0x28u);
  QT::QGraphicsScene::QGraphicsScene(this, nullptr);
  *((_QWORD *)this + 3) = 0;
  *((_OWORD *)this + 2) = 0;
  v6 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)this = &graph_t___vtable;
  *((_WORD *)this + 8) = 0;
  if ( v6 )
  {
    v18 = (void *)qalloc_or_throw(v6);
    *((_QWORD *)this + 3) = v18;
    v19 = *(const void **)a2;
    *((_QWORD *)this + 5) = v6;
    memcpy(v18, v19, v6);
    *((_QWORD *)this + 4) = v6;
  }
  *((_QWORD *)this + 7) = a3;
  *((_OWORD *)this + 4) = 0;
  *((_QWORD *)this + 6) = -1;
  QT::QString::fromUtf8((char *)this + 80, 0, "");
  *((_BYTE *)this + 104) = 0;
  *((_BYTE *)this + 116) = 0;
  *(_QWORD *)((char *)this + 108) = 0xF00000007LL;
  *((_DWORD *)this + 30) = 30;
  sub_38330((char *)this + 128, this);
  QT::QGraphicsScene::setItemIndexMethod(this, 0xFFFFFFFFLL);
  v7 = *((_QWORD *)this + 4) == 0;
  v21 = nullptr;
  v22 = 0;
  v8 = s1;
  if ( !v7 )
    v8 = *((const char **)this + 3);
  v9 = sub_1AC30((__int64 *)&v21, (__int64)"$ xref graph : %s data", v8);
  v10 = s1;
  if ( v9[1] )
    v10 = (const char *)*v9;
  v15 = netnode_check((char *)this + 48, v10, 0, 1);
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21, v10);
  }
  if ( !v15 )
    sub_270C0(this, 0.0, a5, (__int64)v10, v11, v12, v13, v14);
  *(_QWORD *)&v22 = 0;
  v21 = &QT::QGraphicsScene::selectionChanged;
  v16 = operator new(0x10u);
  *(_DWORD *)v16 = 1;
  *(_QWORD *)(v16 + 8) = sub_1EC90;
  QT::QObject::connectImpl(v20, this, &v21, this, 0, v16, 0, 0, &QT::QGraphicsScene::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v20);
  return v23 - __readfsqword(0x28u);
}
