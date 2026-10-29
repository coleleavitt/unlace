__int64 (__fastcall **__fastcall sub_37960(__int64 a1))()
{
  __int64 v2; // rdx
  __int64 v3; // rbp
  __int64 i; // rbx
  _QWORD *v5; // rax
  _QWORD *j; // r13
  _QWORD *v7; // rbp
  _QWORD *k; // rbx
  _QWORD *v9; // r15
  __int64 v10; // rdi
  __int64 (__fastcall **result)(); // rax

  sub_36B40(a1, 1);
  v2 = *(_QWORD *)(a1 + 900);
  *(_QWORD *)(a1 + 800) = 0;
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 908);
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v2 + 24 * i);
        if ( *v5 )
        {
          v5[1] = 0;
          qfree();
          v2 = *(_QWORD *)(a1 + 900);
        }
      }
    }
    *(_QWORD *)(a1 + 908) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 876) )
  {
    *(_QWORD *)(a1 + 884) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 852) )
  {
    *(_QWORD *)(a1 + 860) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 828) )
  {
    *(_QWORD *)(a1 + 836) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 708) )
  {
    *(_QWORD *)(a1 + 716) = 0;
    qfree();
  }
  sub_347B0(*(void **)(a1 + 676));
  for ( j = *(_QWORD **)(a1 + 636); (_QWORD *)(a1 + 636) != j; --*(_QWORD *)(a1 + 652) )
  {
    v7 = j;
    j = (_QWORD *)*j;
    *(_QWORD *)v7[1] = j;
    j[1] = v7[1];
    for ( k = (_QWORD *)v7[7]; v7 + 7 != k; --v7[9] )
    {
      v9 = k;
      k = (_QWORD *)*k;
      *(_QWORD *)v9[1] = k;
      k[1] = v9[1];
      if ( v9[2] )
      {
        v9[3] = 0;
        qfree();
      }
      qfree();
    }
    if ( v7[2] )
    {
      v7[3] = 0;
      qfree();
    }
    qfree();
  }
  if ( *(_QWORD *)(a1 + 612) )
  {
    *(_QWORD *)(a1 + 620) = 0;
    qfree();
  }
  v10 = *(_QWORD *)(a1 + 16);
  result = off_70C58;
  *(_QWORD *)(a1 + 8) = off_70C58;
  if ( v10 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    return (__int64 (__fastcall **)())qfree();
  }
  return result;
}

