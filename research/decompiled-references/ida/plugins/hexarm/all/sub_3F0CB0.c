char __fastcall sub_3F0CB0(__int64 a1, double a2)
{
  int v2; // eax
  unsigned __int16 v3; // ax
  unsigned __int16 v5; // cx
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  __int64 v8; // rax
  const char *v9; // rsi
  const char *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 dtype_size; // r14

  if ( (*(_DWORD *)(a1 + 52) & 0x806004) != 0 )
  {
    LOBYTE(v2) = 0;
    return v2;
  }
  v3 = *(_WORD *)(a1 + 48);
  if ( v3 == 412 )
  {
LABEL_9:
    LOBYTE(v2) = 1;
    return v2;
  }
  if ( v3 <= 0x19Cu )
  {
    if ( v3 == 339 )
    {
      LOBYTE(v2) = *(_BYTE *)(a1 + 98) != 0xFF;
      return v2;
    }
    if ( (unsigned __int16)(v3 - 340) > 2u )
      goto LABEL_15;
    return (unsigned int)sub_3EE030(a1, a1 + 64) ^ 1;
  }
  if ( v3 > 0x281u )
  {
    if ( v3 == 769 )
      goto LABEL_9;
    if ( (unsigned __int16)(v3 - 770) > 2u )
      goto LABEL_15;
    return (unsigned int)sub_3EE030(a1, a1 + 64) ^ 1;
  }
  if ( v3 > 0x27Au || v3 <= 0x19Fu )
    return (unsigned int)sub_3EE030(a1, a1 + 64) ^ 1;
  if ( v3 == 634 )
    goto LABEL_9;
LABEL_15:
  if ( sub_3EE080(a1, a1 + 64) )
  {
    v5 = *(_WORD *)(a1 + 48);
    if ( v5 > 0x166u )
    {
      if ( v5 > 0x1EDu )
      {
        if ( (unsigned __int16)(v5 - 753) <= 3u && *(_BYTE *)(a1 + 145) == 5 && !*(_QWORD *)(a1 + 152) )
        {
          sub_3EE110(a1, a1 + 104, a2);
          dtype_size = get_dtype_size();
          if ( (int)(dtype_size / (unsigned int)sub_3EE210(a1, a1 + 104, a2)) > 2 )
          {
            LOBYTE(v2) = (unsigned int)sub_3EE210(a1, a1 + 104, a2) == 4;
            return v2;
          }
          goto LABEL_9;
        }
        goto LABEL_20;
      }
      if ( v5 <= 0x1EBu )
      {
        if ( v5 == 417 )
          goto LABEL_9;
        if ( v5 > 0x1A1u )
        {
          if ( v5 != 422 )
          {
            LOBYTE(v2) = 0;
            return v2;
          }
          goto LABEL_9;
        }
        if ( (unsigned __int16)(v5 - 363) > 1u )
        {
LABEL_20:
          LOBYTE(v2) = 0;
          return v2;
        }
      }
    }
    else if ( v5 <= 0x135u )
    {
      if ( v5 == 23 )
        goto LABEL_9;
      if ( ((v5 - 22) & 0xFFFD) != 0 )
      {
        LOBYTE(v2) = 0;
        return v2;
      }
    }
    else
    {
      v6 = 1LL << ((unsigned __int8)v5 - 54);
      if ( (v6 & 0x1020400000000LL) != 0 )
        goto LABEL_9;
      if ( (v6 & 0x200003) == 0 )
        goto LABEL_20;
    }
    if ( *(_BYTE *)(a1 + 105) == 5 )
    {
      LOBYTE(v2) = *(_BYTE *)(a1 + 145) == 0;
      return v2;
    }
    goto LABEL_20;
  }
  if ( *(_BYTE *)(a1 + 65) == 1 && *(_WORD *)(a1 + 70) == 15 && (unsigned __int16)(*(_WORD *)(a1 + 48) - 871) <= 1u )
  {
    LOBYTE(v2) = 0;
    return v2;
  }
  v7 = *(unsigned __int16 *)(a1 + 48);
  v8 = 293;
  v9 = (const char *)&unk_42E380;
  while ( v8 > 0 )
  {
    while ( 1 )
    {
      v10 = &v9[v8 & 0xFFFFFFFFFFFFFFFELL];
      if ( *(_WORD *)v10 >= (unsigned __int16)v7 )
        break;
      v9 = v10 + 2;
      v8 = v8 - 1 - (v8 >> 1);
      if ( v8 <= 0 )
        goto LABEL_28;
    }
    v8 >>= 1;
  }
LABEL_28:
  if ( v9 == "bhsdq" || (unsigned __int16)v7 < *(_WORD *)v9 )
    goto LABEL_20;
  if ( (_WORD)v7 == 484 )
  {
    LOBYTE(v2) = sub_3F0BD0(a1, a2);
    return v2;
  }
  if ( (unsigned __int16)v7 <= 0x1E4u )
  {
    if ( (unsigned __int16)v7 > 0x15Du )
    {
      LOWORD(v7) = v7 - 356;
      if ( (unsigned __int16)v7 > 0x3Eu )
        goto LABEL_9;
      v11 = 0x4000000000000079LL;
      if ( !_bittest64(&v11, v7) )
        goto LABEL_9;
    }
    else
    {
      if ( (unsigned __int16)v7 <= 0x131u )
        goto LABEL_9;
      v12 = 0xA0078800001LL;
      if ( !_bittest64(&v12, (unsigned int)(v7 - 306)) )
      {
        if ( (_WORD)v7 != 325 )
          goto LABEL_9;
LABEL_54:
        if ( *(_BYTE *)(a1 + 145) != 5 && get_dtype_size() != 2 )
        {
          LOBYTE(v2) = get_dtype_size() != 2;
          return v2;
        }
        goto LABEL_20;
      }
    }
LABEL_49:
    LOBYTE(v2) = sub_3EE340(a1, a1 + 24, 0);
    return v2;
  }
  if ( (unsigned __int16)v7 > 0x272u )
  {
    if ( (_WORD)v7 != 667 )
      goto LABEL_9;
    goto LABEL_49;
  }
  if ( (unsigned __int16)v7 <= 0x253u )
    goto LABEL_9;
  LOWORD(v7) = v7 - 596;
  switch ( v7 )
  {
    case 0uLL:
      goto LABEL_54;
    case 1uLL:
    case 6uLL:
    case 0xBuLL:
    case 0xCuLL:
      LOBYTE(v2) = *(_QWORD *)(a1 + 152) == 0;
      break;
    case 0x1EuLL:
      goto LABEL_49;
    default:
      goto LABEL_9;
  }
  return v2;
}

