__int64 __fastcall sub_9CC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // eax
  int v4; // ecx
  unsigned __int16 v5; // ax
  int v6; // r13d
  int v7; // r14d
  unsigned __int16 v8; // ax
  int v10; // ebp

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(unsigned __int16 *)(a2 + 24);
  v4 = *(_DWORD *)(v2 + 104);
  if ( v3 >= v4 )
  {
    if ( v3 < *(_DWORD *)(v2 + 108) )
    {
      v10 = *(_DWORD *)(*(_QWORD *)(v2 + 112) + 16LL * (v3 - v4) + 8);
      *(_BYTE *)(a1 + 233) = ~*(_BYTE *)(*(_QWORD *)(v2 + 112) + 16LL * (v3 - v4) + 8);
      *(_BYTE *)(a1 + 233) &= 1u;
      if ( (v10 & 0x100) != 0 )
        sub_9B00(a1, a2, a2 + 40);
      if ( (v10 & 0x200) != 0 )
        sub_9B00(a1, a2, a2 + 80);
      v7 = v10 & 4;
      v6 = v10 & 8;
      if ( (v10 & 0x4000) != 0 )
        remember_problem();
    }
    else
    {
      *(_BYTE *)(a1 + 233) = 1;
      v6 = 0;
      v7 = 0;
    }
    v8 = *(_WORD *)(a2 + 24);
    if ( v8 != 65 )
    {
      if ( v8 <= 0x41u )
      {
        if ( v8 != 30 )
        {
          if ( v8 != 52 )
          {
LABEL_14:
            if ( v7 )
              sub_9A50(a2, a2 + 40);
            if ( v6 )
              sub_9A50(a2, a2 + 80);
            goto LABEL_18;
          }
LABEL_13:
          *(_BYTE *)(a1 + 233) = 0;
          goto LABEL_14;
        }
LABEL_29:
        if ( *(_BYTE *)(a2 + 81) == 3 )
          remember_problem();
        goto LABEL_13;
      }
      if ( v8 != 116 )
      {
        if ( v8 > 0x74u )
        {
          if ( v8 != 195 )
            goto LABEL_14;
          goto LABEL_39;
        }
        if ( (unsigned __int16)(v8 - 102) > 1u )
          goto LABEL_14;
      }
      if ( *(_WORD *)(a2 + 46) != 8 )
        goto LABEL_14;
      goto LABEL_29;
    }
LABEL_39:
    map_code_ea();
    add_cref();
    goto LABEL_14;
  }
  *(_BYTE *)(a1 + 233) = 1;
  v5 = *(_WORD *)(a2 + 24);
  if ( v5 == 65 )
  {
    v6 = 0;
    v7 = 0;
    goto LABEL_39;
  }
  if ( v5 > 0x41u )
  {
    if ( v5 == 116 )
      goto LABEL_27;
    if ( v5 <= 0x74u )
    {
      if ( (unsigned __int16)(v5 - 102) > 1u )
        goto LABEL_32;
LABEL_27:
      if ( *(_WORD *)(a2 + 46) != 8 )
        goto LABEL_18;
      goto LABEL_28;
    }
    v6 = 0;
    v7 = 0;
    if ( v5 != 195 )
      goto LABEL_32;
    goto LABEL_39;
  }
  if ( v5 == 30 )
  {
LABEL_28:
    v6 = 0;
    v7 = 0;
    goto LABEL_29;
  }
  if ( v5 != 52 )
    goto LABEL_32;
  *(_BYTE *)(a1 + 233) = 0;
LABEL_18:
  if ( !*(_BYTE *)(a1 + 233) )
    return 1;
LABEL_32:
  add_cref();
  return 1;
}

