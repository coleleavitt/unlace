__int64 __fastcall sub_25A00(__int64 a1, __int64 a2, char a3)
{
  __int64 *v4; // rbx
  __int64 *v5; // rdi
  __int64 *v7; // rax
  __int64 *v8; // rdi
  __int64 *v9; // rax
  __int64 *i; // rbp

  v4 = (__int64 *)(a1 + 776);
  v5 = *(__int64 **)(a1 + 776);
  if ( v4 == v5 )
    return 0;
  if ( a3 )
  {
    while ( a2 != v5[3] )
    {
      v5 = (__int64 *)*v5;
      if ( v4 == v5 )
        return 0;
    }
  }
  else
  {
    while ( a2 != v5[4] )
    {
      v5 = (__int64 *)*v5;
      if ( v4 == v5 )
        return 0;
    }
  }
  v7 = (__int64 *)*v5;
  *(_QWORD *)v5[1] = *v5;
  v7[1] = v5[1];
  qfree();
  v8 = *(__int64 **)(a1 + 776);
  --*(_QWORD *)(a1 + 792);
  if ( v4 != v8 )
  {
    if ( a3 )
    {
      while ( a2 != v8[3] )
      {
        v8 = (__int64 *)*v8;
        if ( v4 == v8 )
          goto LABEL_12;
      }
    }
    else
    {
      while ( a2 != v8[4] )
      {
        v8 = (__int64 *)*v8;
        if ( v4 == v8 )
          goto LABEL_12;
      }
    }
    v9 = (__int64 *)*v8;
    *(_QWORD *)v8[1] = *v8;
    v9[1] = v8[1];
    qfree();
    --*(_QWORD *)(a1 + 792);
  }
LABEL_12:
  sub_27400(a1);
  for ( i = *(__int64 **)(a1 + 776); v4 != i; i = (__int64 *)*i )
    sub_27280(a1, *((_DWORD *)i + 4) == 8, i[3], *((unsigned int *)i + 10));
  return 1;
}

