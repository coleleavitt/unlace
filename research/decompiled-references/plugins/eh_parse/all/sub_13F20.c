char __fastcall sub_13F20(__int64 a1, __int64 a2, int a3)
{
  char result; // al
  char v5; // r13
  char v7; // r14
  __int16 v8; // dx
  int v9; // r12d
  unsigned __int16 v10; // ax
  int v11; // eax
  int v12; // edx
  __int64 v13; // rdx
  char v14; // di
  unsigned __int16 v15; // cx
  char v16; // si
  int v17; // r14d

  result = 0;
  v5 = *(_BYTE *)(a2 + 1);
  if ( (unsigned __int8)(v5 - 2) > 2u )
    return result;
  if ( *(_BYTE *)(a2 + 32) )
  {
    v7 = *(_BYTE *)(a2 + 33);
    v8 = (v7 >> 3) & 7;
    v9 = *(_DWORD *)(a1 + 28) & 0x10;
    if ( (*(_DWORD *)(a1 + 28) & 0x10) != 0 )
    {
      v14 = *(_BYTE *)(a1 + 33);
      if ( (v14 & 2) != 0 )
      {
        v15 = *(_WORD *)(a1 + 24);
        v16 = (v7 >> 3) & 7 | 8;
        v8 = v16;
        if ( v15 > 0x5C0u )
        {
          if ( v15 > 0x5F1u )
          {
            if ( (unsigned __int16)(v15 - 1532) > 0xFu )
              goto LABEL_27;
          }
          else if ( v15 <= 0x5EDu )
          {
            if ( v5 == 2 || (v14 & 1) != 0 )
              return result;
            v11 = v16;
            v12 = v7 & 7;
LABEL_33:
            if ( a3 != v12 )
              goto LABEL_16;
            return a3 != v11;
          }
        }
        else if ( v15 <= 0x5BCu )
        {
          if ( v15 > 0x378u )
          {
            if ( (unsigned __int16)(v15 - 993) > 3u )
              goto LABEL_27;
          }
          else if ( v15 <= 0x374u )
          {
LABEL_27:
            v11 = v16;
            goto LABEL_13;
          }
        }
        goto LABEL_9;
      }
    }
    v10 = *(_WORD *)(a1 + 24);
    if ( v10 > 0x5C0u )
    {
      if ( v10 > 0x5F1u )
      {
        if ( (unsigned __int16)(v10 - 1532) <= 0xFu )
          goto LABEL_9;
      }
      else if ( v10 > 0x5EDu )
      {
        goto LABEL_9;
      }
    }
    else
    {
      if ( v10 > 0x5BCu )
      {
LABEL_9:
        if ( (*(_BYTE *)(a1 + 273) & 0x10) != 0 )
          v8 |= 0x10u;
        v8 = sub_13910(a1, v8);
        goto LABEL_12;
      }
      if ( v10 > 0x378u )
      {
        if ( (unsigned __int16)(v10 - 993) <= 3u )
          goto LABEL_9;
      }
      else if ( v10 > 0x374u )
      {
        goto LABEL_9;
      }
    }
LABEL_12:
    v11 = v8;
    if ( v8 != 4 )
    {
LABEL_13:
      if ( v5 == 2 || (v12 = v7 & 7, v9) && (*(_BYTE *)(a1 + 33) & 1) != 0 )
      {
LABEL_16:
        if ( a3 == v11 )
          return (unsigned __int8)v7 >> 6 == 0;
        return 0;
      }
      goto LABEL_33;
    }
    if ( v5 != 2 )
    {
      v17 = v7 & 7;
      if ( v9 )
      {
        result = 0;
        if ( (*(_BYTE *)(a1 + 33) & 1) != 0 || a3 != v17 )
          return result;
      }
      else if ( a3 != v17 )
      {
        return 0;
      }
      v11 = -1;
      return a3 != v11;
    }
    return 0;
  }
  v13 = *(unsigned __int16 *)(a2 + 6);
  result = (*(_DWORD *)(a1 + 28) & 0x1018) == 8 || (*(_DWORD *)(a1 + 28) & 0x1018) == 4096;
  if ( !result )
    return a3 == (_DWORD)v13;
  if ( (unsigned __int16)v13 > 7u )
  {
    sub_138F0();
    return sub_141C0();
  }
  if ( a3 != dword_27640[v13] )
    return 0;
  return result;
}
