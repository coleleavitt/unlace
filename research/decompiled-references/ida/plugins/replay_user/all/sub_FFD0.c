__int64 __fastcall sub_FFD0(_QWORD *a1)
{
  __int64 *v1; // r13
  __int64 v2; // rdx
  __int64 v3; // rbp
  __int64 i; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 j; // rbx
  _QWORD *v9; // rax
  unsigned __int64 v10; // rbp
  char **v11; // rbx
  int v12; // edx
  char v13; // cl
  char *v14; // rsi
  __int64 result; // rax
  const char *v16; // rdx
  const char *v17; // rsi
  __int64 v18; // [rsp-10h] [rbp-38h]

  v1 = a1 + 84;
  if ( a1[84] )
  {
    a1[85] = 0;
    qfree();
    a1[84] = 0;
    a1[86] = 0;
  }
  v2 = a1[87];
  if ( v2 )
  {
    v3 = a1[88];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v2 + 24 * i);
        if ( *v5 )
        {
          v5[1] = 0;
          qfree();
          v2 = a1[87];
        }
      }
    }
    a1[88] = 0;
    qfree();
    a1[87] = 0;
    a1[89] = 0;
  }
  if ( a1[90] )
  {
    a1[91] = 0;
    qfree();
    a1[90] = 0;
    a1[92] = 0;
  }
  v6 = a1[93];
  if ( v6 )
  {
    v7 = a1[94];
    if ( v7 )
    {
      for ( j = 0; j != v7; ++j )
      {
        v9 = (_QWORD *)(v6 + 24 * j);
        if ( *v9 )
        {
          v9[1] = 0;
          qfree();
          v6 = a1[93];
        }
      }
    }
    a1[94] = 0;
    qfree();
    a1[93] = 0;
    a1[95] = 0;
  }
  v10 = 0;
  sub_E9E0((__int64)v1, off_21C40, 1);
  v11 = &off_21360;
  if ( qword_21348 )
  {
    do
    {
      v12 = *((_DWORD *)v11 + 2);
      v13 = *((_BYTE *)v11 + 13);
      v14 = *v11;
      v18 = (__int64)v11[3];
      ++v10;
      v11 += 4;
      sub_E4A0(v1, v14, v12, v13, *((_BYTE *)v11 - 20), (__int64)*(v11 - 2), v18);
    }
    while ( v10 < qword_21348 );
  }
  result = debug;
  if ( (debug & 0x10000) != 0 )
  {
    v16 = s;
    if ( a1[105] )
      v16 = (const char *)a1[104];
    v17 = s;
    if ( a1[102] )
      v17 = (const char *)a1[101];
    return sub_9D40((__int64)"%s %s: preset_ppc_registers nregs %d\n", v17, v16, *((_DWORD *)a1 + 170));
  }
  return result;
}

