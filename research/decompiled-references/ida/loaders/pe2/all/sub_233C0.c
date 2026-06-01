__int64 __fastcall sub_233C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  unsigned int *v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  __int64 v6; // rsi
  unsigned __int64 v7; // r8
  char v8; // r11
  _DWORD *v9; // rbp
  unsigned __int64 v10; // rcx
  _DWORD *v11; // rax
  unsigned __int64 v12; // rsi
  char v13; // r9
  __int64 v15; // r13
  unsigned __int8 *v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  bool v19; // zf
  unsigned __int8 *v20; // r12
  unsigned __int8 v21; // al
  _BYTE *v22; // r15
  unsigned int v23; // r14d
  int v24; // eax
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  bool v27; // cf
  _DWORD *v28; // rax
  char v29; // [rsp+0h] [rbp-48h]
  unsigned int v30; // [rsp+Ch] [rbp-3Ch]

  v2 = *(_QWORD *)(a1 + 24);
  if ( (int)v2 <= 0 )
  {
LABEL_25:
    v3 = nullptr;
  }
  else
  {
    v3 = *(unsigned int **)(a1 + 16);
    v4 = (__int64)&v3[11 * (unsigned int)(v2 - 1) + 11];
    while ( v3[10] != 5 )
    {
      v3 += 11;
      if ( v3 == (unsigned int *)v4 )
        goto LABEL_25;
    }
  }
  v5 = *(_QWORD *)a1;
  v6 = *v3 + a2;
  if ( (unsigned __int64)(v6 + 4) < *(_QWORD *)a1 )
    return 0;
  v7 = v5 + *(_QWORD *)(a1 + 8);
  if ( v7 < v6 + 5 )
    return 0;
  if ( v6 + 5 < v5 )
    return 0;
  if ( v7 < v6 + 6 )
    return 0;
  if ( v6 + 6 < v5 )
    return 0;
  if ( v7 < v6 + 7 )
    return 0;
  v8 = *(_BYTE *)(v6 + 6);
  *(_BYTE *)(a1 + 64) = v8;
  if ( v6 + 8 < v5 )
    return 0;
  if ( v7 < v6 + 16 )
    return 0;
  if ( v6 + 16 < v5 )
    return 0;
  v9 = (_DWORD *)(v6 + 24);
  if ( v7 < v6 + 24 )
    return 0;
  v10 = *(_QWORD *)(v6 + 8);
  v11 = (_DWORD *)(a1 + 76);
  v12 = *(_QWORD *)(v6 + 16);
  v13 = 0;
  do
  {
    *((_BYTE *)v11 - 4) = v10;
    *((_BYTE *)v11 - 3) = v12;
    *((_BYTE *)v11 - 4) &= 1u;
    v13 += v10 & 1;
    *((_BYTE *)v11 - 3) &= 1u;
    if ( (v10 & 1) != 0 )
    {
      if ( (unsigned __int64)v9 < v5 || v7 < (unsigned __int64)(v9 + 1) )
        return 0;
      if ( v11 )
        *v11 = *v9;
      ++v9;
    }
    else
    {
      *v11 = 0;
    }
    v10 >>= 1;
    v11 += 10;
    v12 >>= 1;
  }
  while ( v11 != (_DWORD *)(a1 + 1876) );
  *(_BYTE *)(a1 + 65) = v13;
  v15 = a1 + 81;
  v30 = 0;
  if ( (v8 & 0x40) != 0 )
    ++v9;
  do
  {
    v16 = (unsigned __int8 *)sub_2A1C0(v30, v12, v5, v10);
    v19 = *(_BYTE *)(v15 - 9) == 0;
    *(_QWORD *)(v15 + 23) = v16;
    if ( !v19 )
    {
      v20 = v16;
      v21 = *v16;
      if ( v21 == 0x8A )
      {
        v25 = *(_QWORD *)a1;
        if ( (unsigned __int64)v9 < *(_QWORD *)a1 )
          return 0;
        v28 = v9;
        LOBYTE(v23) = 0;
      }
      else
      {
        v22 = (_BYTE *)v15;
        v23 = 0;
        do
        {
          if ( v21 > 0x2Cu )
            v24 = sub_23120(a1, v21, v5, v10, v17, v18, v29);
          else
            v24 = sub_23010(a1, 0, 1, v21, v17, v18, v29);
          ++v20;
          *v22 = v24;
          v23 += v24;
          ++v22;
          v21 = *v20;
        }
        while ( *v20 != 0x8A );
        v12 = *(unsigned int *)(v15 - 5);
        v10 = v23;
        if ( v23 && (_DWORD)v12 && !is_mul_ok(v12, v23) )
          return 0;
        v25 = *(_QWORD *)a1;
        if ( (unsigned __int64)v9 < *(_QWORD *)a1 )
          return 0;
        v26 = (unsigned int)v12 * v23;
        v27 = __CFADD__(v9, v26);
        v28 = (_DWORD *)((char *)v9 + v26);
        if ( v27 )
          return 0;
      }
      v5 = *(_QWORD *)(a1 + 8) + v25;
      if ( v5 < (unsigned __int64)v28 )
        return 0;
      *(_QWORD *)(v15 + 15) = v9;
      v9 = v28;
      *(_BYTE *)(v15 - 1) = v23;
    }
    ++v30;
    v15 += 40;
  }
  while ( v30 != 45 );
  return 1;
}

