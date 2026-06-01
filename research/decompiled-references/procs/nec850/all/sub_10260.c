unsigned __int64 __fastcall sub_10260(__int64 a1, __int64 *a2, __int64 a3)
{
  int v5; // eax
  char v6; // cl
  __int64 v7; // rdx
  int v8; // esi
  int v9; // ecx
  _DWORD *v10; // rax
  __int64 v11; // rdx
  char v12; // cl
  char *v13; // rax
  __int64 v14; // rdx
  char v15; // cl
  unsigned __int16 v16; // ax
  int v17; // eax
  int v18; // ecx
  __int64 v19; // rax
  char v20; // cl
  unsigned __int16 v21; // cx
  __int64 v22; // rax
  unsigned __int16 v23; // cx
  __int64 v24; // r8
  __int64 v25; // rax
  unsigned __int16 v27; // cx
  __int64 v28; // rsi
  unsigned int v29; // ecx
  __int64 v30; // r9
  __int64 v31; // r10
  __int64 v32; // rcx
  int v33; // ecx
  int v34; // ecx
  __int64 v35; // rax
  __int64 v36; // rdx
  int v37; // eax
  char i; // cl
  __int64 v39; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v40; // [rsp+8h] [rbp-30h]

  v5 = *(unsigned __int16 *)(a3 + 24);
  v40 = __readfsqword(0x28u);
  v6 = v5 - 19;
  if ( (unsigned __int16)(v5 - 19) <= 0x3Cu )
  {
    if ( ((1LL << v6) & 0x1C3) != 0 )
    {
      if ( *(_BYTE *)(a3 + 121) == 1 )
      {
        v27 = *(_WORD *)(a3 + 126);
        v28 = 1LL << v27;
        if ( v27 >= 0x20u )
          v28 = 0;
        *a2 |= v28;
        return v40 - __readfsqword(0x28u);
      }
    }
    else if ( ((1LL << v6) & 0x1000000005000000LL) != 0 )
    {
      v39 = 0;
      if ( (unsigned __int8)sub_21DF0(a1, &v39, a3) )
      {
        *a2 |= v39;
        return v40 - __readfsqword(0x28u);
      }
      v5 = *(unsigned __int16 *)(a3 + 24);
    }
  }
  v7 = *(_QWORD *)(a1 + 16);
  v8 = 0;
  v9 = *(_DWORD *)(v7 + 104);
  if ( v5 >= v9 && v5 < *(_DWORD *)(v7 + 108) )
    v8 = *(_DWORD *)(*(_QWORD *)(v7 + 112) + 16LL * (v5 - v9) + 8);
  v10 = &unk_25580;
  v11 = a3 + 41;
  do
  {
    while ( 1 )
    {
      while ( (*v10 & v8) == 0 )
      {
LABEL_12:
        ++v10;
        v11 += 40;
        if ( &unk_25590 == (_UNKNOWN *)v10 )
          goto LABEL_13;
      }
      v12 = *(_BYTE *)v11;
      if ( *(_BYTE *)v11 == 1 )
        break;
      if ( v12 != 9 )
      {
        if ( v12 == 11 )
        {
          v29 = *(unsigned __int16 *)(v11 + 23);
          if ( (int)(*(unsigned __int16 *)(v11 + 25) - v29 + 1) > 0 )
          {
            v30 = *a2;
            do
            {
              v31 = v30;
              if ( v29 < 0x20 )
                v31 = v30 | (1LL << v29);
              ++v29;
              v30 = v31;
            }
            while ( *(unsigned __int16 *)(v11 + 25) + 1 != v29 );
            *a2 = v31;
          }
        }
        goto LABEL_12;
      }
      ++v10;
      v32 = *(_QWORD *)(v11 + 7);
      v11 += 40;
      *a2 |= v32;
      if ( &unk_25590 == (_UNKNOWN *)v10 )
        goto LABEL_13;
    }
    v23 = *(_WORD *)(v11 + 5);
    v24 = 1LL << v23;
    if ( v23 >= 0x20u )
      v24 = 0;
    ++v10;
    *a2 |= v24;
    v11 += 40;
  }
  while ( &unk_25590 != (_UNKNOWN *)v10 );
LABEL_13:
  v13 = (char *)(a3 + 72);
  v14 = 0;
  while ( 1 )
  {
    v15 = *(v13 - 31);
    if ( (unsigned __int8)(v15 - 3) <= 1u )
    {
      v20 = *v13;
    }
    else
    {
      if ( v15 != 1 )
        goto LABEL_16;
      v20 = *v13;
      if ( (*v13 & 1) == 0 )
        goto LABEL_16;
    }
    if ( (v20 & 0x18) != 0 )
      break;
LABEL_16:
    ++v14;
    v13 += 40;
    if ( v14 == 4 )
      goto LABEL_17;
  }
  v21 = *(_WORD *)(a3 + 40 * v14 + 46);
  v22 = 1LL << v21;
  if ( v21 >= 0x20u )
    v22 = 0;
  *a2 |= v22;
LABEL_17:
  if ( sub_10190(a1, a3) )
    *a2 |= sub_F590(a1) ^ 0xFFFFFFFF;
  v16 = *(_WORD *)(a3 + 24);
  if ( v16 == 207 )
    goto LABEL_68;
  if ( v16 <= 0xCFu )
  {
    if ( v16 != 85 )
    {
      if ( v16 > 0x55u )
      {
        if ( (unsigned __int16)(v16 - 102) > 1u )
          return v40 - __readfsqword(0x28u);
        v33 = *(unsigned __int16 *)(a3 + 166);
        goto LABEL_63;
      }
      if ( v16 > 0x4Eu )
      {
        if ( v16 != 84 )
          return v40 - __readfsqword(0x28u);
        v25 = *a2 | 0x40000000;
LABEL_47:
        *a2 = v25 | 8;
        return v40 - __readfsqword(0x28u);
      }
      if ( v16 <= 0x4Cu )
        return v40 - __readfsqword(0x28u);
    }
LABEL_74:
    v25 = *a2;
    goto LABEL_47;
  }
  if ( v16 == 261 )
  {
    v36 = *a2;
    v37 = 1;
    for ( i = 1; ; i = v37 )
    {
      ++v37;
      v36 |= 1LL << i;
      if ( v37 == 32 )
        break;
    }
    *a2 = v36;
    return v40 - __readfsqword(0x28u);
  }
  if ( v16 > 0x105u )
  {
    if ( v16 == 290 && *(_BYTE *)(a3 + 81) == 1 )
    {
      v17 = *(unsigned __int16 *)(a3 + 86);
      if ( (unsigned __int16)v17 <= 0x1Fu )
      {
        v18 = v17 + 1;
        v19 = 1LL << ((unsigned __int8)v17 + 1);
        if ( v18 == 32 )
          v19 = 0;
        *a2 |= v19;
      }
    }
    return v40 - __readfsqword(0x28u);
  }
  if ( v16 <= 0xD7u )
  {
    if ( v16 <= 0xD5u )
      return v40 - __readfsqword(0x28u);
    goto LABEL_74;
  }
  if ( v16 != 239 )
    return v40 - __readfsqword(0x28u);
LABEL_68:
  v33 = *(unsigned __int16 *)(a3 + 86);
LABEL_63:
  v34 = v33 + 1;
  v35 = 1LL << v34;
  if ( v34 >= 32 )
    v35 = 0;
  *a2 |= v35;
  return v40 - __readfsqword(0x28u);
}
