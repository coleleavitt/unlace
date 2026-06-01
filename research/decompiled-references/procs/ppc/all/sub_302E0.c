__int64 __fastcall sub_302E0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned __int16 v8; // r9
  __int16 v9; // bx
  __int16 v11; // ax
  __int16 v12; // ax
  __int16 v13; // ax
  int v14; // eax
  __int16 v15; // dx

  v8 = *(_WORD *)(a5 + 6);
  if ( (v8 & 0x2000) != 0 )
  {
    if ( !(unsigned __int8)getinf_flag(3, 4) )
      return 0;
    v8 = *(_WORD *)(a5 + 6);
  }
  v9 = (v8 >> 1) & 0x1000;
  if ( !(unsigned int)sub_2E7C0(a1, a2, a3, a2 + 40, a4, (unsigned __int16)(v9 | *(_WORD *)(a5 + 2)))
    || !(unsigned int)sub_2E7C0(a1, a2, a3, a2 + 80, a4, (unsigned __int16)(v9 | *(_WORD *)(a5 + 4)))
    || !(unsigned int)sub_2E7C0(a1, a2, a3, a2 + 120, a4, (unsigned __int16)(v9 | *(_WORD *)(a5 + 6)))
    || !(unsigned int)sub_2E7C0(a1, a2, a3, a2 + 160, a4, (unsigned __int16)(*(_WORD *)(a5 + 8) | v9)) )
  {
    return 0;
  }
  v11 = *(_WORD *)(a5 + 2);
  if ( (v11 & 0x4000) != 0 )
  {
    if ( (a4 & 1) != 0 )
      return 0;
  }
  else if ( v11 < 0 && (a4 & 1) != 0 )
  {
    *(_DWORD *)(a2 + 28) |= 2u;
    v11 = *(_WORD *)(a5 + 2);
  }
  if ( (v11 & 0x200) != 0 && (a4 & 0x400) != 0 )
  {
    *(_DWORD *)(a2 + 28) |= 2u;
    v11 = *(_WORD *)(a5 + 2);
  }
  if ( (v11 & 0x2000) != 0 && (a4 & 0x40) != 0 )
  {
    *(_DWORD *)(a2 + 28) |= 2u;
    v11 = *(_WORD *)(a5 + 2);
  }
  if ( (_BYTE)v11 == 92 )
    *(_DWORD *)(a2 + 28) |= 0x4000u;
  v12 = *(_WORD *)(a5 + 4);
  if ( (v12 & 0x2000) != 0 )
  {
    if ( (a4 & 2) != 0 )
      return 0;
  }
  else if ( v12 < 0 && (a4 & 2) != 0 )
  {
    *(_DWORD *)(a2 + 28) |= 4u;
    v12 = *(_WORD *)(a5 + 4);
  }
  if ( (v12 & 0x4000) != 0 && (a4 & 1) != 0 )
    *(_DWORD *)(a2 + 28) |= 8u;
  v13 = *(_WORD *)(a5 + 6);
  if ( v13 < 0 && (a4 & 0x400) != 0 )
  {
    *(_DWORD *)(a2 + 28) |= 1u;
    v13 = *(_WORD *)(a5 + 6);
  }
  if ( (v13 & 0x4000) != 0 )
  {
    v14 = *(_DWORD *)(a2 + 28) | 2;
    *(_DWORD *)(a2 + 28) = v14;
    if ( *(__int16 *)(a5 + 2) >= 0 )
    {
      v13 = *(_WORD *)(a5 + 6);
      goto LABEL_28;
    }
    if ( (a4 & 1) != 0 )
    {
      v15 = *(_WORD *)(a5 + 6);
      if ( (v15 & 0x400) == 0 )
      {
        if ( (v15 & 0x200) == 0 )
          goto LABEL_30;
        goto LABEL_41;
      }
      goto LABEL_49;
    }
    return 0;
  }
LABEL_28:
  if ( (v13 & 0x400) == 0 )
  {
    if ( (v13 & 0x200) == 0 || (a4 & 1) == 0 )
      goto LABEL_30;
    v14 = *(_DWORD *)(a2 + 28);
LABEL_41:
    *(_DWORD *)(a2 + 28) = v14 | 0x10000;
    goto LABEL_30;
  }
  if ( (a4 & 1) != 0 )
  {
    v14 = *(_DWORD *)(a2 + 28);
LABEL_49:
    v14 |= 1u;
    *(_DWORD *)(a2 + 28) = v14;
    if ( (*(_BYTE *)(a5 + 7) & 2) == 0 )
      goto LABEL_30;
    goto LABEL_41;
  }
LABEL_30:
  sub_2B100(a1, a2);
  return *(unsigned __int16 *)(a2 + 26);
}
