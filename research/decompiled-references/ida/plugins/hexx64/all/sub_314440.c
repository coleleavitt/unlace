_BOOL8 __fastcall sub_314440(__int64 a1, __int64 a2, double a3)
{
  int v3; // eax
  __int64 v7; // rsi
  __int64 *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rbx
  unsigned __int64 v12; // rcx
  __int64 i; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rbp
  __int64 *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rbx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  __int64 v25; // rbp
  int v26; // eax

  v3 = *(_DWORD *)a1 & 0xF;
  if ( v3 != 2 )
    return v3 == 5;
  v7 = *(_QWORD *)(a1 + 16);
  if ( v7 == 1 )
  {
    v8 = *(__int64 **)(a1 + 8);
    v9 = v8[1];
    v10 = *v8;
    v11 = v9 - 1;
    if ( ((v9 - 1) & v9) == 0 && (v11 & v10) == 0 )
    {
      sub_312B80(a2, a3);
      *(_DWORD *)a2 = 5;
      v24 = *(_DWORD *)(a1 + 4);
      *(_QWORD *)(a2 + 16) = v10;
      v25 = v11 | v10;
      *(_DWORD *)(a2 + 4) = v24;
      v26 = *(_DWORD *)(a1 + 4);
      if ( v26 != 8 )
        v25 |= -1LL << (8 * (unsigned __int8)v26);
      *(_QWORD *)(a2 + 8) = ~v25;
      return 1;
    }
    goto LABEL_6;
  }
  if ( v7 )
  {
    v8 = *(__int64 **)(a1 + 8);
LABEL_6:
    v12 = 0;
    for ( i = 0; i != v7; ++i )
    {
      v12 += v8[2 * (int)i + 1];
      if ( v12 > 0x10 )
        return 0;
    }
    v14 = 0;
    v15 = 0;
    v16 = -1;
    do
    {
      v17 = &v8[2 * (int)v14];
      v18 = v17[1];
      if ( v18 )
      {
        v19 = *v17;
        v20 = v19 + v18;
        do
        {
          v16 &= v19;
          v15 |= v19++;
        }
        while ( v19 != v20 );
      }
      ++v14;
    }
    while ( v7 != v14 );
    v21 = ~v15;
    goto LABEL_16;
  }
  v21 = -1;
  v16 = -1;
LABEL_16:
  sub_312B80(a2, a3);
  *(_DWORD *)a2 = 5;
  v22 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a2 + 4) = v22;
  if ( v22 != 8 )
    v16 &= ~(-1LL << (8 * (unsigned __int8)v22));
  *(_QWORD *)(a2 + 16) = v16;
  v23 = *(_DWORD *)(a1 + 4);
  if ( v23 != 8 )
    v21 &= ~(-1LL << (8 * (unsigned __int8)v23));
  *(_QWORD *)(a2 + 8) = v21;
  return 1;
}

