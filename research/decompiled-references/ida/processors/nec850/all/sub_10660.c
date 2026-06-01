__int16 __fastcall sub_10660(__int64 a1, __int64 *a2, __int64 a3)
{
  int v3; // r8d
  __int64 v5; // rdx
  int v6; // eax
  int v8; // ecx
  _DWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rsi
  char v12; // cl
  __int64 v13; // rsi
  char v14; // al
  unsigned __int16 v15; // cx
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // rax
  int v20; // ecx
  unsigned __int16 v21; // cx
  __int64 v22; // r10
  int v23; // ecx
  unsigned int v24; // ecx
  __int64 v25; // r14
  __int64 v26; // r11
  int v27; // ecx
  bool v28; // cf

  v3 = 0;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(unsigned __int16 *)(a3 + 24);
  v8 = *(_DWORD *)(v5 + 104);
  if ( v8 <= v6 && v6 < *(_DWORD *)(v5 + 108) )
    v3 = *(_DWORD *)(*(_QWORD *)(v5 + 112) + 16LL * (v6 - v8) + 8);
  v9 = &unk_25560;
  v10 = a3 + 41;
  v11 = a3 + 41;
  do
  {
    if ( (*v9 & v3) != 0 )
    {
      v12 = *(_BYTE *)v11;
      if ( *(_BYTE *)v11 == 1 )
      {
        v21 = *(_WORD *)(v11 + 5);
        v22 = 1LL << v21;
        if ( v21 >= 0x20u )
          v22 = 0;
        *a2 |= v22;
      }
      else if ( v12 == 9 )
      {
        *a2 |= *(_QWORD *)(v11 + 7);
      }
      else if ( v12 == 11 )
      {
        v24 = *(unsigned __int16 *)(v11 + 23);
        if ( (int)(*(unsigned __int16 *)(v11 + 25) - v24 + 1) > 0 )
        {
          v25 = *a2;
          do
          {
            v26 = v25;
            if ( v24 < 0x20 )
              v26 = v25 | (1LL << v24);
            ++v24;
            v25 = v26;
          }
          while ( *(unsigned __int16 *)(v11 + 25) + 1 != v24 );
          *a2 = v26;
        }
      }
    }
    ++v9;
    v11 += 40;
  }
  while ( &unk_25570 != (_UNKNOWN *)v9 );
  v13 = 1;
  if ( (unsigned __int8)(*(_BYTE *)v10 - 3) <= 1u )
    goto LABEL_13;
LABEL_11:
  while ( v13 != 4 )
  {
    while ( 1 )
    {
      v14 = *(_BYTE *)(v10 + 40);
      v10 += 40;
      ++v13;
      if ( (unsigned __int8)(v14 - 3) > 1u )
        break;
LABEL_13:
      v15 = *(_WORD *)(v10 + 5);
      v16 = 1LL << v15;
      if ( v15 >= 0x20u )
        v16 = 0;
      v17 = *a2 | v16;
      *a2 = v17;
      if ( (*(_BYTE *)(v10 + 31) & 0x20) == 0 )
        goto LABEL_11;
      if ( v13 == 4 )
        goto LABEL_21;
      if ( *(_BYTE *)(v10 + 40) == 1 )
      {
        v18 = *(unsigned __int16 *)(v10 + 45) + 1;
        if ( v18 <= 31 )
          v17 |= 1LL << v18;
        *a2 = v17;
      }
    }
  }
LABEL_21:
  if ( sub_10190(a1, a3) )
    *a2 |= 0x3C0uLL;
  LOWORD(v19) = *(_WORD *)(a3 + 24);
  if ( (_WORD)v19 == 78 )
  {
    if ( *(_BYTE *)(a3 + 121) != 1 || *(_WORD *)(a3 + 126) != 31 )
    {
LABEL_43:
      *a2 |= 8uLL;
      return v19;
    }
  }
  else
  {
    if ( (_WORD)v19 != 44 )
      goto LABEL_25;
    if ( *(_BYTE *)(a3 + 41) != 1 || *(_WORD *)(a3 + 46) != 31 )
      return v19;
  }
  *a2 |= 0xC00uLL;
  LOWORD(v19) = *(_WORD *)(a3 + 24);
LABEL_25:
  if ( (_WORD)v19 == 238 )
    goto LABEL_51;
  if ( (unsigned __int16)v19 > 0xEEu )
  {
    if ( (_WORD)v19 == 290 )
    {
      if ( *(_BYTE *)(a3 + 41) == 1 )
      {
        LODWORD(v19) = *(unsigned __int16 *)(a3 + 46);
        if ( (unsigned __int16)v19 <= 0x1Fu )
        {
          v20 = v19 + 1;
          v19 = 1LL << ((unsigned __int8)v19 + 1);
          if ( v20 == 32 )
            v19 = 0;
          *a2 |= v19;
        }
      }
      return v19;
    }
    if ( (_WORD)v19 != 316 )
      return v19;
    goto LABEL_51;
  }
  if ( (unsigned __int16)v19 > 0x67u )
  {
    if ( (_WORD)v19 != 208 )
    {
      v28 = (_WORD)v19 == 214;
      LOWORD(v19) = v19 - 214;
      if ( !v28 && (_WORD)v19 != 1 )
        return v19;
      goto LABEL_43;
    }
LABEL_51:
    v23 = *(unsigned __int16 *)(a3 + 46);
    goto LABEL_52;
  }
  if ( (unsigned __int16)v19 <= 0x65u )
  {
    if ( (unsigned __int16)v19 <= 0x4Eu )
    {
      if ( (unsigned __int16)v19 <= 0x4Cu )
        return v19;
    }
    else
    {
      LOWORD(v19) = v19 - 84;
      if ( (unsigned __int16)v19 > 1u )
        return v19;
    }
    goto LABEL_43;
  }
  v23 = *(unsigned __int16 *)(a3 + 126);
LABEL_52:
  v27 = v23 + 1;
  v19 = 1LL << v27;
  if ( v27 >= 32 )
    v19 = 0;
  *a2 |= v19;
  return v19;
}

