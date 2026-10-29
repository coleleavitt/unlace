__int64 (__fastcall **__fastcall sub_3BBFB0(_QWORD *a1))()
{
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  __int64 v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 (__fastcall **result)(); // rax

  v2 = a1[24];
  *(a1 - 4) = &unk_4E8520;
  *a1 = &unk_4E8558;
  a1[23] = &off_4E8618;
  if ( v2 )
  {
    v3 = a1[25];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = v2 + 48 * i;
        if ( *(_QWORD *)(v5 + 16) )
        {
          *(_QWORD *)(v5 + 24) = 0;
          qfree();
          v2 = a1[24];
        }
      }
    }
    a1[25] = 0;
    qfree();
  }
  v6 = a1 + 19;
  *a1 = &unk_4E7D28;
  do
  {
    if ( *v6 )
    {
      v6[1] = 0;
      qfree();
    }
    v6 -= 3;
  }
  while ( a1 + 7 != v6 );
  v7 = *(a1 - 3);
  result = &off_4E1C48;
  *(a1 - 4) = &off_4E1C48;
  if ( v7 )
  {
    *(a1 - 2) = 0;
    return (__int64 (__fastcall **)())qfree();
  }
  return result;
}

