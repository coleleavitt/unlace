_BOOL8 __fastcall sub_2E180(__int64 a1, __int64 a2, int a3)
{
  int v5; // eax
  __int16 v6; // cx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  int v10; // ebp
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // esi

  v5 = *(unsigned __int16 *)(a2 + 24);
  if ( (_WORD)v5 == 518 )
    goto LABEL_30;
  v6 = *(_WORD *)(a2 + 24);
  if ( (unsigned __int16)v5 <= 0x206u )
  {
    if ( (_WORD)v5 != 116 )
    {
      if ( (_WORD)v5 != 517 && (_WORD)v5 != 114 )
      {
        if ( (*(_QWORD *)(a2 + 40) & 0xFFFF00000000FF00LL) != 0x100 )
          goto LABEL_14;
        goto LABEL_40;
      }
      goto LABEL_22;
    }
LABEL_30:
    v11 = a2;
    if ( *(_BYTE *)(a2 + 41) != 1 )
      goto LABEL_23;
    goto LABEL_31;
  }
  if ( (_WORD)v5 == 547 )
    goto LABEL_30;
  if ( (unsigned __int16)v5 > 0x223u )
  {
    if ( (unsigned __int16)(v5 - 835) > 1u )
      goto LABEL_6;
LABEL_22:
    v11 = a2 + 40;
    if ( *(_BYTE *)(a2 + 81) != 1 )
      goto LABEL_23;
LABEL_31:
    if ( !*(_WORD *)(v11 + 46) )
      return 0;
LABEL_23:
    if ( *(_BYTE *)(a2 + 41) != 7 )
    {
      if ( !a3 )
        return 1;
      if ( (unsigned __int16)v5 <= 0x77u )
        goto LABEL_35;
      goto LABEL_26;
    }
    goto LABEL_38;
  }
  if ( (_WORD)v5 == 546 )
    goto LABEL_22;
LABEL_6:
  if ( (*(_QWORD *)(a2 + 40) & 0xFFFF00000000FF00LL) == 0x100 )
  {
LABEL_40:
    if ( (*(_BYTE *)(a2 + 44) & 8) != 0 )
    {
      v15 = *(_QWORD *)(a1 + 16);
      v16 = *(_DWORD *)(v15 + 104);
      if ( v5 >= v16
        && v5 < *(_DWORD *)(v15 + 108)
        && (*(_BYTE *)(*(_QWORD *)(v15 + 112) + 16LL * (v5 - v16) + 8) & 4) != 0 )
      {
        return 0;
      }
    }
LABEL_14:
    if ( *(_BYTE *)(a2 + 41) != 7 )
    {
LABEL_15:
      if ( v6 == 194 )
      {
        v8 = *(_QWORD *)(a2 + 16);
        if ( v8 <= 0x83 )
          return 1;
        v9 = v8 - 4;
        v10 = 0;
        while ( !(unsigned int)get_dword(v9) )
        {
          ++v10;
          v9 -= 4LL;
          if ( v10 == 32 )
            return 0;
        }
      }
      goto LABEL_8;
    }
LABEL_38:
    v14 = sub_2A800(a1, *(_QWORD *)(a2 + 56));
    if ( !(unsigned __int8)is_mapped(v14) )
      return 0;
    v6 = *(_WORD *)(a2 + 24);
    goto LABEL_15;
  }
  if ( *(_BYTE *)(a2 + 41) == 7 )
    goto LABEL_38;
LABEL_8:
  if ( !a3 )
    return 1;
  v5 = *(unsigned __int16 *)(a2 + 24);
  if ( (_WORD)v5 == 119 )
    return 0;
  if ( (unsigned __int16)v5 <= 0x77u )
  {
LABEL_35:
    v12 = (unsigned int)(v5 - 53);
    if ( (unsigned __int16)v12 > 0x18u )
      return 1;
    v13 = -16777226;
    return _bittest64(&v13, v12) != 0;
  }
LABEL_26:
  if ( (_WORD)v5 == 206 )
    return 0;
  if ( (unsigned __int16)v5 <= 0xCEu )
    return (unsigned __int16)(v5 - 153) > 4u;
  return (unsigned __int16)(v5 - 505) > 1u;
}

