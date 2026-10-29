__int64 __fastcall sub_446C0(_QWORD *a1)
{
  __int64 v2; // rdx
  _QWORD **v3; // rdi
  __int64 result; // rax
  _QWORD **v5; // rbx
  _QWORD *v6; // rbp

  v2 = a1[1];
  v3 = (_QWORD **)*a1;
  result = 8 * v2;
  if ( 8 * v2 )
  {
    v5 = v3;
    do
    {
      v6 = *v5;
      if ( *v5 )
      {
        if ( v6[1] )
        {
          v6[2] = 0;
          qfree();
        }
        operator delete(v6, 0x20u);
        v3 = (_QWORD **)*a1;
        v2 = a1[1];
      }
      ++v5;
      result = (__int64)&v3[v2];
    }
    while ( v5 != (_QWORD **)result );
  }
  if ( v3 )
  {
    a1[1] = 0;
    return qfree();
  }
  else
  {
    a1[3] = 0;
  }
  return result;
}

