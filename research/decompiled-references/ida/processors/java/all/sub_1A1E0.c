_BOOL8 __fastcall sub_1A1E0(__int64 a1, int a2, char a3, int a4, char a5)
{
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 v9; // rax
  int v10; // r14d
  __int64 v11; // rbx
  _WORD *v12; // r12
  __int64 v13; // r15
  __int64 v14; // rdi
  _WORD *v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // r15
  __int64 v19; // rax
  __int64 v20; // [rsp+8h] [rbp-70h]
  __int64 v21; // [rsp+10h] [rbp-68h]
  __int64 v24; // [rsp+20h] [rbp-58h]
  _WORD *s2; // [rsp+28h] [rbp-50h]
  _QWORD v26[9]; // [rsp+30h] [rbp-48h] BYREF

  v6 = (unsigned int)(a4 << 16);
  v7 = *(_QWORD *)(a1 + 33336);
  v26[1] = __readfsqword(0x28u);
  v24 = v6;
  v20 = (unsigned int)(a2 << 16);
  v8 = netnode_altval(v7, v20, 65);
  v9 = netnode_altval(*(_QWORD *)(a1 + 33336), v6, 65);
  if ( !v8 )
    goto LABEL_6;
  v10 = v9;
  if ( !v9 )
    goto LABEL_6;
  v11 = (unsigned __int16)v8;
  if ( !(_WORD)v8 )
    goto LABEL_6;
  v21 = (unsigned __int16)v9;
  if ( !(_WORD)v9 )
    goto LABEL_6;
  if ( *(_WORD *)(a1 + 33111) < (unsigned __int16)v8 )
    goto LABEL_6;
  v12 = *(_WORD **)(a1 + 33352);
  v13 = 2LL * (unsigned __int16)v8;
  v14 = *(_QWORD *)(a1 + 33336);
  v26[0] = v13 + 1;
  if ( !netnode_getblob(v14, v12, v26, v20, 106) )
    goto LABEL_6;
  if ( v13 != LODWORD(v26[0]) )
    goto LABEL_6;
  if ( *(_WORD *)(a1 + 33111) < (unsigned __int16)v10 )
    goto LABEL_6;
  v15 = &v12[(unsigned __int64)v13 / 2];
  v16 = *(_QWORD *)(a1 + 33336);
  s2 = &v12[(unsigned __int64)v13 / 2];
  v17 = 2 * v21;
  v26[0] = 2 * v21 + 1;
  if ( !netnode_getblob(v16, v15, v26, v24, 106) || v17 != LODWORD(v26[0]) )
    goto LABEL_6;
  if ( a3 )
  {
    if ( (~(_DWORD)v8 & 0x2400000) != 0 )
      return 1;
    v19 = netnode_altval(*(_QWORD *)(a1 + 33336), v20 + 1, 65);
    LODWORD(v8) = v19;
    if ( !v19 )
      goto LABEL_6;
    v11 -= v19;
    if ( (int)v11 <= 0 )
      goto LABEL_6;
    v12 += v19;
  }
  if ( a5 && (v8 & 0x4000000) == 0 )
  {
    while ( *v12 == 91 )
    {
      if ( !--v11 )
        goto LABEL_6;
      ++v12;
    }
  }
  if ( ((v10 ^ (unsigned int)v8) & 0x4000000) == 0 )
    goto LABEL_24;
  if ( (v10 & 0x4000000) == 0 )
  {
    if ( *s2 != 76 )
      goto LABEL_24;
    if ( s2[(unsigned __int64)v17 / 2 - 1] != 59 )
      goto LABEL_24;
    v21 -= 2;
    ++s2;
    if ( (int)v21 > 0 )
      goto LABEL_24;
LABEL_6:
    sub_E6C0(0);
  }
  if ( *v12 == 76 && v12[v11 - 1] == 59 )
  {
    v11 -= 2;
    ++v12;
    if ( (int)v11 <= 0 )
      goto LABEL_6;
  }
LABEL_24:
  if ( v11 != v21 )
    return 1;
  return memcmp(v12, s2, 2 * v11) != 0;
}

