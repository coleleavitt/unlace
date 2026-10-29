__int64 __fastcall viewer_t__::vfunc_2(__int64 a1, unsigned int a2, __int64 a3, _QWORD **a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  int v7; // [rsp+Ch] [rbp-1Ch]

  result = QT::QGraphicsView::qt_metacall();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( !(_DWORD)result )
      {
        sub_2C3F0(a1, 0, 0, a4);
        return 0xFFFFFFFFLL;
      }
      return (unsigned int)(result - 1);
    }
    if ( a2 == 7 )
    {
      if ( !(_DWORD)result )
        **a4 = 0;
      return (unsigned int)(result - 1);
    }
    if ( a2 <= 8 )
    {
      v6 = 334;
      if ( _bittest64(&v6, a2) )
      {
        v7 = result;
        sub_2C3F0(a1, a2, (unsigned int)result, a4);
        return (unsigned int)(v7 - 9);
      }
    }
  }
  return result;
}

