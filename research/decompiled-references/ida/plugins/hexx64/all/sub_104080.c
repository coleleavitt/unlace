__int64 __fastcall sub_104080(_QWORD *a1, double a2)
{
  __int64 v3; // rdi
  __int64 v4; // r12
  __int64 i; // rbp
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 j; // rbp
  __int64 v10; // rax

  sub_66C80((__int64)(a1 + 72), a2);
  sub_66C80((__int64)(a1 + 68), a2);
  a1[56] = &unk_4EBEA0;
  qfree(a1[63]);
  qfree(a1[60]);
  v3 = a1[57];
  if ( v3 )
  {
    v4 = a1[58];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = 3 * i;
        qfree(*(_QWORD *)(v3 + 8 * v6));
        v3 = a1[57];
      }
    }
    a1[58] = 0;
    qfree(v3);
  }
  a1[44] = &unk_4EBEA0;
  qfree(a1[51]);
  qfree(a1[48]);
  v7 = a1[45];
  if ( v7 )
  {
    v8 = a1[46];
    if ( v8 )
    {
      for ( j = 0; j != v8; ++j )
      {
        v10 = 3 * j;
        qfree(*(_QWORD *)(v7 + 8 * v10));
        v7 = a1[45];
      }
    }
    a1[46] = 0;
    qfree(v7);
  }
  return sub_1031F0(a1);
}

