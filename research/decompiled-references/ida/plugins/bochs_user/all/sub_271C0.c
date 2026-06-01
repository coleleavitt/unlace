__int64 __fastcall sub_271C0(__int64 a1, char a2, unsigned __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  unsigned __int64 v6; // rsi
  unsigned __int64 v8; // rsi

  v4 = *(_QWORD **)(a1 + 80);
  v5 = (_QWORD *)(a1 + 80);
  if ( v4 == v5 )
    return 5;
  if ( a2 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = v4[2];
        if ( a3 >= v8 )
          break;
        v4 = (_QWORD *)*v4;
        if ( v5 == v4 )
          return 5;
      }
      if ( v4[3] >= a3 )
        break;
      v4 = (_QWORD *)*v4;
      if ( v4 == v5 )
        return 5;
    }
    *a4 = v4[4] + a3 - v8;
    return 0;
  }
  else
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = v4[4];
        if ( a3 >= v6 )
          break;
        v4 = (_QWORD *)*v4;
        if ( v4 == v5 )
          return 5;
      }
      if ( v4[5] >= a3 )
        break;
      v4 = (_QWORD *)*v4;
      if ( v5 == v4 )
        return 5;
    }
    *a4 = v4[2] + a3 - v6;
    return 0;
  }
}

