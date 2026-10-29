__int64 __fastcall sub_41770(__int128 a1, __int64 a2, __int64 a3, _QWORD **a4)
{
  __int64 result; // rax
  _QWORD *v6; // rbp
  int v7; // ebx
  _QWORD *v8; // r15

  result = *((_QWORD *)&a1 + 1) | a1;
  if ( a1 == 0 )
  {
    v6 = *a4;
    if ( *a4 )
    {
      if ( *v6 )
      {
        v7 = 0;
        do
        {
          qfree();
          ++v7;
        }
        while ( v6[v7] );
      }
      result = qfree();
      *a4 = nullptr;
    }
  }
  else
  {
    v8 = (_QWORD *)qcalloc();
    qbasename();
    *v8 = qstrdup();
    v8[1] = qstrdup();
    v8[2] = qstrdup();
    v8[3] = qstrdup();
    v8[4] = 0;
    *a4 = v8;
    return qstrncpy();
  }
  return result;
}

