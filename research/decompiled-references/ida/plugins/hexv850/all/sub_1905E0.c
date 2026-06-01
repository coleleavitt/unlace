__int64 __fastcall sub_1905E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  unsigned __int8 *v7; // r13
  __int64 v8; // rbp
  __int128 v9; // rdi
  char v11; // dl
  char v12; // al

  v5 = *(_QWORD *)(a1 + 24);
  if ( (*(_QWORD *)(a1 + 40) == 0) != (v5 == 0) )
  {
    if ( !under_debugger )
      sub_37CFE0(52554);
    BUG();
  }
  if ( v5 )
  {
    v7 = (unsigned __int8 *)(a3 + 32);
    if ( sub_120FA0((unsigned __int8 *)(a3 + 32), v5, 0) )
    {
      if ( (*(_BYTE *)(a3 + 64) & 0xFB) == 1 )
      {
LABEL_5:
        v8 = a3 + 64;
        *((_QWORD *)&v9 + 1) = a1 + 160;
        *(_QWORD *)&v9 = a2;
        *(_QWORD *)(a1 + 24) = v8;
        sub_11F2E0(v9, v8, 0, 0xFFFF0000);
        *(_QWORD *)&v9 = a2;
        *((_QWORD *)&v9 + 1) = a1 + 200;
        sub_11F2E0(v9, v8, 0, 0xFFFF0000);
        return 1;
      }
      return (unsigned int)-*(unsigned __int8 *)(a1 + 244);
    }
    v11 = sub_120FA0((unsigned __int8 *)(a3 + 32), *(_QWORD *)(a1 + 40) + 64LL, 0);
    v12 = *(_BYTE *)(a3 + 64) & 0xFB;
    if ( v11 )
    {
      if ( v12 == 1 )
        goto LABEL_5;
      return (unsigned int)-*(unsigned __int8 *)(a1 + 244);
    }
    if ( v12 != 1 )
      return (unsigned int)-*(unsigned __int8 *)(a1 + 244);
  }
  else
  {
    v7 = (unsigned __int8 *)(a3 + 32);
    if ( (*(_BYTE *)(a3 + 64) & 0xFB) != 1 )
      return (unsigned int)-*(unsigned __int8 *)(a1 + 244);
  }
  if ( sub_120FA0(v7, *(_QWORD *)(a1 + 16), 0) )
  {
    *(_QWORD *)(a1 + 32) = a2;
    *(_QWORD *)(a1 + 40) = a3;
    goto LABEL_5;
  }
  return (unsigned int)-*(unsigned __int8 *)(a1 + 244);
}

