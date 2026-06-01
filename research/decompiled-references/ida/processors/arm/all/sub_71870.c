__int64 __fastcall sub_71870(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  char v3; // al
  unsigned int v4; // esi
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rbp
  _QWORD *v15; // rdx
  _QWORD *v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx

  v1 = a1[108];
  v2 = a1[47];
  v3 = *(_BYTE *)(v1 + 72);
  if ( (v3 & 2) == 0 || (v4 = 0, (*(unsigned __int16 *)(v2 + 4) & (*(unsigned __int16 *)(v2 + 4) + 1)) == 0) )
  {
    if ( (v3 & 1) != 0 )
    {
      ++*(_WORD *)(v2 + 4);
      v2 = a1[47];
      if ( (~(unsigned __int8)(*(_QWORD *)(v1 + 48) >> 2) & 0xF) != 0 )
        goto LABEL_5;
    }
    else if ( (~(unsigned __int8)(*(_QWORD *)(v1 + 48) >> 2) & 0xF) != 0 )
    {
LABEL_5:
      v5 = *(_QWORD *)(v1 + 64);
      *(_QWORD *)(v2 + 24) = v5;
      if ( v5 == -1 )
        *(_DWORD *)a1[47] |= 0x100000u;
      v6 = *(_QWORD *)(v1 + 56);
      v7 = a1[105];
      v8 = a1[106];
      v9 = (_QWORD *)(v7 + 8 * v8);
      if ( (_QWORD *)v7 == v9 )
        goto LABEL_23;
      v10 = (_QWORD *)a1[105];
      while ( v6 != *v10 )
      {
        if ( v9 == ++v10 )
          goto LABEL_23;
      }
      if ( v10 == v9 )
      {
LABEL_23:
        v17 = v8 + 1;
        if ( a1[107] < v17 )
        {
          v18 = qvector_reserve((__int64)(a1 + 105), v7, v17, 8);
          v19 = a1[106];
          a1[105] = v18;
          v9 = (_QWORD *)(v18 + 8 * v19);
        }
        *v9 = v6;
        ++a1[106];
      }
      return 1;
    }
    *(_QWORD *)(v2 + 24) = -1;
    v12 = a1[102];
    v13 = a1[103];
    v14 = a1[4];
    v15 = (_QWORD *)(v12 + 8 * v13);
    if ( (_QWORD *)v12 == v15 )
      goto LABEL_20;
    v16 = (_QWORD *)a1[102];
    while ( v14 != *v16 )
    {
      if ( v15 == ++v16 )
        goto LABEL_20;
    }
    if ( v15 == v16 )
    {
LABEL_20:
      if ( a1[104] < (unsigned __int64)(v13 + 1) )
      {
        v20 = qvector_reserve((__int64)(a1 + 102), v12, v13 + 1, 8);
        v21 = a1[103];
        a1[102] = v20;
        v15 = (_QWORD *)(v20 + 8 * v21);
      }
      *v15 = v14;
      ++a1[103];
    }
    return 1;
  }
  return v4;
}
