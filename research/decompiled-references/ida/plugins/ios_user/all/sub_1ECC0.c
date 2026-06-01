__int64 __fastcall sub_1ECC0(__int64 a1)
{
  int v1; // ecx
  int v2; // r8d
  int v3; // r9d
  unsigned int v4; // r12d
  __int64 *v5; // rdx
  __int64 v6; // r15
  __int64 v7; // rbp
  __int64 v8; // r13
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rax
  int v12; // edx
  int v13; // r8d
  int v14; // r9d
  int v15; // ecx
  __int64 v16; // r15
  __int64 v17; // rbp
  void *v18; // r13
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rax
  __int64 i; // rbx
  _QWORD *v24; // rdx
  char *s1; // [rsp+0h] [rbp-68h]
  char *s1a; // [rsp+0h] [rbp-68h]
  __int64 v28; // [rsp+10h] [rbp-58h]
  __int64 v29; // [rsp+18h] [rbp-50h]

  v4 = sub_46180();
  if ( (_BYTE)v4 )
    return v4;
  v5 = &qword_8FB50;
  if ( *(int *)(qword_8FB50 + 144LL * *(int *)(a1 + 1176) + 128) <= 4 )
    return v4;
  v6 = *(_QWORD *)(a1 + 1128);
  v28 = 0;
  v29 = 0;
  v7 = v6;
  if ( !(144LL * *(_QWORD *)(a1 + 1136)) )
    return v4;
  v8 = 0;
  do
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v7 + 8) )
      {
        s1 = *(char **)v7;
        if ( !strcmp(*(const char **)v7, "com.apple.debugserver.arm64.low")
          || !strcmp(s1, "com.apple.debugserver.arm64.state") )
        {
          break;
        }
      }
      v7 += 144;
      if ( v7 == v6 + 144LL * *(_QWORD *)(a1 + 1136) )
        goto LABEL_12;
    }
    v9 = v28;
    if ( v8 != -1 )
    {
      v28 = qvector_reserve();
      v8 = v29;
      v9 = v28;
    }
    v10 = v9 + 24 * v8;
    *(_QWORD *)v10 = 0;
    *(_OWORD *)(v10 + 8) = 0;
    ++v29;
    sub_4BE00(a1, v10, v7);
    sub_1E910((_QWORD *)v7);
    memmove((void *)v7, (const void *)(v7 + 144), *(_QWORD *)(a1 + 1128) + 144LL * *(_QWORD *)(a1 + 1136) - v7 - 144);
    v8 = v29;
    v6 = *(_QWORD *)(a1 + 1128);
    v11 = *(_QWORD *)(a1 + 1136) - 1LL;
    *(_QWORD *)(a1 + 1136) = v11;
  }
  while ( v7 != v6 + 144 * v11 );
LABEL_12:
  if ( !v8 )
  {
    if ( !v28 )
      return v4;
    goto LABEL_26;
  }
  sub_65BB0(
    a1,
    (unsigned int)"GDB: -----------------------------------------------------------------------------------------------\n"
                  "GDB: Warning: IDA has detected that the debugserver does not have proper support for the 'g' packet.\n"
                  "GDB: IDA can fall back to the 'p' packet to retrieve register info, but in some cases this packet\n"
                  "GDB: provides incorrect register information. To avoid any complications from buggy register data,\n"
                  "GDB: the following register classes have been disabled:\n"
                  "GDB:\n",
    (_DWORD)v5,
    v1,
    v2,
    v3);
  v15 = v28;
  v16 = v28;
  v17 = v28 + 24 * v29;
  if ( v17 != v28 )
  {
    do
    {
      while ( !*(_QWORD *)(v16 + 8) )
      {
        sub_65BB0(a1, (unsigned int)"GDB:   %s\n", (unsigned int)s, v15, v13, v14);
LABEL_16:
        v16 += 24;
        if ( v17 == v16 )
          goto LABEL_20;
      }
      s1a = *(char **)(v16 + 8);
      v18 = (void *)qalloc_or_throw();
      memcpy(v18, *(const void **)v16, (size_t)s1a);
      sub_65BB0(a1, (unsigned int)"GDB:   %s\n", (_DWORD)v18, v19, v20, v21);
      if ( !v18 )
        goto LABEL_16;
      v16 += 24;
      qfree();
    }
    while ( v17 != v16 );
  }
LABEL_20:
  sub_65BB0(
    a1,
    (unsigned int)"GDB:\n"
                  "GDB: -----------------------------------------------------------------------------------------------\n",
    v12,
    v15,
    v13,
    v14);
  sub_52DD0(a1, a1 + 1056);
  v22 = v28;
  if ( v28 )
  {
    if ( v29 )
    {
      for ( i = 0; i != v29; ++i )
      {
        v24 = (_QWORD *)(v22 + 24 * i);
        if ( *v24 )
        {
          v24[1] = 0;
          qfree();
          v22 = v28;
        }
      }
    }
LABEL_26:
    qfree();
  }
  return v4;
}

