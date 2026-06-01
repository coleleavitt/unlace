__int64 __fastcall sub_37F30(_QWORD *a1)
{
  _QWORD *v1; // r14
  _QWORD *v2; // r12
  _QWORD *i; // rbx
  _QWORD *v4; // rbp
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 != a1 )
  {
    do
    {
      v2 = v1;
      v1 = (_QWORD *)*v1;
      *(_QWORD *)v2[1] = v1;
      v1[1] = v2[1];
      for ( i = (_QWORD *)v2[7]; v2 + 7 != i; --v2[9] )
      {
        v4 = i;
        i = (_QWORD *)*i;
        *(_QWORD *)v4[1] = i;
        i[1] = v4[1];
        if ( v4[2] )
        {
          v4[3] = 0;
          qfree();
        }
        qfree();
      }
      if ( v2[2] )
      {
        v2[3] = 0;
        qfree();
      }
      result = qfree();
      --a1[2];
    }
    while ( a1 != v1 );
  }
  return result;
}

