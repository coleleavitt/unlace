__int64 __fastcall sub_3F060(__int64 a1, __int64 a2, int *a3, __int64 a4)
{
  int v6; // ebx
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int16 v12; // dx
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  int v15; // edi
  __int64 v16; // rdx
  int *v17; // rcx
  int v18; // eax
  __int64 v19; // rdx

  v6 = a4;
  if ( (*(_BYTE *)(a2 + 28) & 8) != 0 )
  {
    if ( (*(_QWORD *)(a2 + 24) & 0x80000FFFFLL) == 0x80000000DLL
      && (unsigned int)get_dword(*(_QWORD *)(a2 + 56)) == 1317011489
      && *(_QWORD *)(a2 + 56) != -5 )
    {
LABEL_40:
      result = 0;
      if ( v6 > 0 )
      {
        while ( a3[result] != 280 )
        {
          if ( v6 == ++result )
            return 0xFFFFFFFFLL;
        }
        return result;
      }
      return 0xFFFFFFFFLL;
    }
    v12 = *(_WORD *)(a2 + 24);
    v13 = *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26);
    if ( v12 == 13 )
    {
      if ( v13 != *(_QWORD *)(a2 + 56) )
        goto LABEL_22;
    }
    else if ( v12 != 14 || v13 != *(_QWORD *)(a2 + 136) )
    {
      goto LABEL_22;
    }
    if ( v13 != -1 )
      goto LABEL_40;
LABEL_22:
    v14 = *(unsigned int *)(a1 + 288);
    v15 = -1;
    if ( (unsigned int)v14 <= 9 )
    {
      v16 = 790;
      v15 = _bittest64(&v16, v14) == 0 ? -1 : 2;
    }
    if ( v6 > 0 )
    {
      v17 = &a3[v6];
      while ( 1 )
      {
        v18 = *a3;
        if ( (unsigned int)(*a3 - 13) > 0x12 && v18 != 1 && v18 != v15 )
          break;
        if ( ++a3 == v17 )
          return 0xFFFFFFFFLL;
      }
      return 4294967294LL;
    }
    return 0xFFFFFFFFLL;
  }
  v7 = *(unsigned __int16 *)(a2 + 24);
  if ( (_WORD)v7 == 292 )
  {
    a4 = 280;
    goto LABEL_5;
  }
  if ( (unsigned __int16)v7 <= 0x124u )
  {
    if ( (unsigned __int16)v7 > 0x78u )
    {
      LOWORD(v7) = v7 - 181;
      if ( (unsigned __int16)v7 > 0x1Du )
        goto LABEL_16;
      v19 = 806930019;
      if ( !_bittest64(&v19, v7) )
        goto LABEL_16;
    }
    else
    {
      if ( (unsigned __int16)v7 <= 0x54u )
        goto LABEL_16;
      v10 = 0xC40C66663LL;
      if ( !_bittest64(&v10, (unsigned int)(v7 - 85)) )
        goto LABEL_16;
    }
    goto LABEL_13;
  }
  a4 = 281;
  if ( (_WORD)v7 != 293 )
  {
    LOWORD(v7) = v7 - 1250;
    if ( (unsigned __int16)v7 > 0x10u || (v11 = 81923, !_bittest64(&v11, v7)) )
    {
LABEL_16:
      v8 = v6;
      return get_spoiled_reg(a2, a3, v8, a4);
    }
LABEL_13:
    a4 = *(unsigned __int16 *)(a2 + 86);
  }
LABEL_5:
  v8 = v6;
  result = 0;
  if ( v6 <= 0 )
    return get_spoiled_reg(a2, a3, v8, a4);
  while ( a3[result] != (_DWORD)a4 )
  {
    if ( ++result == v6 )
      return get_spoiled_reg(a2, a3, v8, a4);
  }
  return result;
}

