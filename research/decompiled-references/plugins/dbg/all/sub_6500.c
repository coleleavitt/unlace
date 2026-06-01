_QWORD *__fastcall sub_6500(_QWORD *a1, _BYTE *a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  _QWORD *result; // rax
  unsigned __int64 v8; // rsi
  __int64 v9; // rsi

  result = a1;
  if ( a3 )
  {
    *a2 = 0;
    if ( (_BYTE)a5 && (v8 = result[5], v8 > 1) )
    {
      if ( a4 < v8 - 1 )
        return (_QWORD *)qstrncpy(a2, a4 + result[4], a3, a4, a5, a6);
    }
    else if ( a4 > 3 )
    {
      v9 = result[2];
      if ( v9 )
      {
        if ( a4 < (unsigned __int64)(v9 - 1) )
          return (_QWORD *)qstrncpy(a2, a4 + result[1], a3, a4, a5, a6);
      }
    }
  }
  return result;
}
