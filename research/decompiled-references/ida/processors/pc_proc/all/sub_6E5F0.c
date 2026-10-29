char __fastcall sub_6E5F0(__int64 a1, __int64 a2, int a3, int *a4)
{
  char result; // al
  char v6; // bp
  int v7; // edx
  bool v8; // al
  bool v9; // zf
  __int64 v10; // rdx
  char v11; // r12
  __int16 v12; // ax
  int v13; // r13d
  unsigned __int16 v14; // dx
  int v15; // esi
  unsigned __int16 v16; // si
  char v17; // al
  int v18; // edx
  char v19; // al
  int v20; // r12d
  char v21; // al
  int v22; // eax
  int v23; // esi
  int *v24; // [rsp+8h] [rbp-30h]

  if ( a3 == -1 )
    return 0;
  result = 0;
  v6 = *(_BYTE *)(a2 + 1);
  if ( (unsigned __int8)(v6 - 2) <= 2u )
  {
    if ( !*(_BYTE *)(a2 + 32) )
    {
      v7 = *(_DWORD *)(a1 + 28) & 0x1018;
      v8 = v7 == 4096;
      v9 = v7 == 8;
      v10 = *(unsigned __int16 *)(a2 + 6);
      result = v9 || v8;
      if ( result )
      {
        switch ( *(_WORD *)(a2 + 6) )
        {
          case 0:
          case 2:
            v23 = 6;
            break;
          case 1:
          case 3:
            v23 = 7;
            break;
          case 4:
          case 5:
          case 6:
          case 7:
            if ( a3 != dword_16EB20[v10] )
              return 0;
            goto LABEL_42;
          default:
            sub_6A2A0();
            v20 = -1;
            goto LABEL_35;
        }
        v20 = dword_16EB20[v10];
        if ( a3 != v20 )
        {
          if ( a3 == v23 )
            goto LABEL_51;
          return 0;
        }
        result = 0;
        if ( v23 == a3 )
          return result;
      }
      else
      {
        if ( a3 != (_DWORD)v10 )
          return result;
LABEL_42:
        v23 = -1;
      }
      if ( a4 )
        *a4 = v23;
      return 1;
    }
    v11 = *(_BYTE *)(a2 + 33);
    v12 = (v11 >> 3) & 7;
    v13 = *(_DWORD *)(a1 + 28) & 0x10;
    if ( (*(_DWORD *)(a1 + 28) & 0x10) != 0 && (*(_BYTE *)(a1 + 33) & 2) != 0 )
    {
      v14 = *(_WORD *)(a1 + 24);
      LOBYTE(v15) = (v11 >> 3) & 7 | 8;
      v12 = (char)v15;
      if ( v14 > 0x5C0u )
      {
        if ( v14 > 0x5F1u )
        {
          if ( (unsigned __int16)(v14 - 1532) > 0xFu )
            goto LABEL_14;
        }
        else if ( v14 <= 0x5EDu )
        {
          v15 = (char)v15;
          if ( v6 != 2 )
          {
            v17 = v11 & 7;
            if ( (*(_BYTE *)(a1 + 33) & 1) != 0 )
              goto LABEL_28;
            if ( a3 != v17 )
              goto LABEL_29;
            goto LABEL_56;
          }
LABEL_85:
          result = 0;
          if ( a3 != v15 || (unsigned __int8)v11 >> 6 )
            return result;
          v20 = -1;
LABEL_51:
          if ( !a4 )
            return 1;
          goto LABEL_35;
        }
      }
      else if ( v14 <= 0x5BCu )
      {
        if ( v14 > 0x378u )
        {
          if ( (unsigned __int16)(v14 - 993) > 3u )
            goto LABEL_14;
        }
        else if ( v14 <= 0x374u )
        {
LABEL_14:
          v15 = (char)v15;
          goto LABEL_25;
        }
      }
    }
    else
    {
      v16 = *(_WORD *)(a1 + 24);
      if ( v16 > 0x5C0u )
      {
        if ( v16 > 0x5F1u )
        {
          if ( (unsigned __int16)(v16 - 1532) > 0xFu )
            goto LABEL_24;
        }
        else if ( v16 <= 0x5EDu )
        {
          goto LABEL_24;
        }
      }
      else if ( v16 <= 0x5BCu )
      {
        if ( v16 > 0x378u )
        {
          if ( (unsigned __int16)(v16 - 993) > 3u )
            goto LABEL_24;
        }
        else if ( v16 <= 0x374u )
        {
          goto LABEL_24;
        }
      }
    }
    v24 = a4;
    if ( (*(_BYTE *)(a1 + 273) & 0x10) != 0 )
      v12 |= 0x10u;
    v12 = sub_23710(a1, v12);
    a4 = v24;
LABEL_24:
    v15 = v12;
    if ( v12 == 4 )
    {
      if ( v6 == 2 )
        return 0;
      if ( v13 && (*(_BYTE *)(a1 + 33) & 1) != 0 )
      {
        if ( a3 != (v11 & 7 | 8) )
          return 0;
      }
      else if ( a3 != (v11 & 7) )
      {
        return 0;
      }
      v15 = -1;
      goto LABEL_56;
    }
LABEL_25:
    if ( v6 != 2 )
    {
      v17 = v11 & 7;
      v18 = v11 & 7;
      if ( v13 )
      {
        if ( (*(_BYTE *)(a1 + 33) & 1) == 0 )
        {
          if ( a3 != v18 )
            goto LABEL_29;
LABEL_55:
          result = 0;
          if ( a3 == v15 )
            return result;
          goto LABEL_56;
        }
LABEL_28:
        if ( a3 != (char)(v17 | 8) )
        {
LABEL_29:
          result = 0;
          if ( a3 != v15 )
            return result;
          result = 0;
          if ( (unsigned __int8)v11 >> 6 )
            return result;
          if ( a4 )
          {
LABEL_32:
            v19 = v11;
            v20 = v11 & 7;
            v21 = v19 & 7;
            if ( v13 )
            {
              v22 = v21 | 8;
              if ( (*(_BYTE *)(a1 + 33) & 1) != 0 )
                v20 = v22;
            }
LABEL_35:
            *a4 = v20;
          }
          return 1;
        }
        goto LABEL_55;
      }
      result = 0;
      if ( a3 != v18 )
      {
        if ( a3 != v15 || (unsigned __int8)v11 >> 6 )
          return result;
        if ( a4 )
          goto LABEL_32;
        return 1;
      }
      if ( a3 == v15 )
        return result;
LABEL_56:
      if ( a4 )
      {
        if ( (unsigned __int8)v11 >> 6 )
          v15 = -1;
        *a4 = v15;
      }
      return 1;
    }
    goto LABEL_85;
  }
  return result;
}

