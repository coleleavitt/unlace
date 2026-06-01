__int64 __fastcall graph_t__::vfunc_2(QT::QMetaObject *this, int a2, __int64 a3, _QWORD **a4)
{
  __int64 result; // rax
  void **v6; // r8
  _QWORD *v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // [rsp+18h] [rbp-40h] BYREF
  int v10[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 *v11; // [rsp+28h] [rbp-30h]
  unsigned __int64 v12; // [rsp+38h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  result = QT::QGraphicsScene::qt_metacall();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( !(_DWORD)result )
      {
        v8 = *a4[1];
        *(_QWORD *)v10 = 0;
        v9 = v8;
        v11 = &v9;
        QT::QMetaObject::activate(this, (QT::QObject *)&off_4EB40, nullptr, (int)v10, v6);
        LODWORD(result) = 0;
      }
      return (unsigned int)(result - 1);
    }
    if ( a2 == 7 )
    {
      if ( !(_DWORD)result )
      {
        v7 = *a4;
        if ( *(_DWORD *)a4[1] )
          *v7 = 0;
        else
          *v7 = &unk_4FCA0;
      }
      return (unsigned int)(result - 1);
    }
  }
  return result;
}

