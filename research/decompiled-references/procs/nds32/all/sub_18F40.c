__int64 __fastcall sub_18F40(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // eax
  int v4; // r10d
  __int64 v6; // r8
  int v8; // edi
  int v9; // r9d
  unsigned __int16 v10; // dx
  __int64 result; // rax
  int v12; // edi
  unsigned int *v13; // rax
  unsigned __int16 *v14; // rdx

  v6 = *(_QWORD *)(a1 + 16);
  v8 = *(unsigned __int16 *)(a2 + 24);
  v9 = *(_DWORD *)(v6 + 104);
  v10 = *(_WORD *)(a2 + 24);
  LOBYTE(v3) = (_WORD)v8 == 487;
  LOBYTE(v4) = (_WORD)v8 == 192;
  result = v4 | v3;
  if ( v9 <= v8 && v8 < *(_DWORD *)(v6 + 108) )
  {
    if ( (_BYTE)result )
      return result;
    v12 = *(_DWORD *)(*(_QWORD *)(v6 + 112) + 16LL * (v8 - v9) + 8);
    if ( (v12 & 2) != 0 )
    {
      result = 1;
      if ( a3 <= 5 )
        return result;
    }
    if ( v10 <= 0x79u )
      goto LABEL_7;
LABEL_20:
    if ( v10 <= 0x1DCu )
    {
      if ( v10 > 0x1DAu )
      {
        if ( *(_BYTE *)(a2 + 41) == 1 )
        {
          result = 1;
          if ( *(unsigned __int16 *)(a2 + 46) == a3 )
            return result;
        }
        result = 1;
        if ( a3 == 15 )
          return result;
      }
    }
    else if ( (unsigned __int16)(v10 - 477) <= 1u )
    {
      result = 1;
      if ( a3 == 15 )
        return result;
    }
    goto LABEL_11;
  }
  v12 = 0;
  if ( (_BYTE)result )
    return result;
  if ( v10 > 0x79u )
    goto LABEL_20;
LABEL_7:
  if ( v10 > 0x77u )
    goto LABEL_41;
  if ( v10 <= 0x67u )
  {
    if ( v10 > 0x65u )
    {
      if ( *(_BYTE *)(a2 + 41) == 1 )
      {
        result = 1;
        if ( *(unsigned __int16 *)(a2 + 46) == a3 )
          return result;
      }
      if ( *(_BYTE *)(a2 + 81) == 1 )
      {
        result = 1;
        if ( *(unsigned __int16 *)(a2 + 86) == a3 )
          return result;
      }
    }
    goto LABEL_11;
  }
  if ( (unsigned __int16)(v10 - 104) <= 5u )
  {
LABEL_41:
    if ( *(_BYTE *)(a2 + 41) == 1 )
    {
      result = 1;
      if ( *(unsigned __int16 *)(a2 + 46) == a3 )
        return result;
    }
  }
LABEL_11:
  v13 = (unsigned int *)&unk_23220;
  v14 = (unsigned __int16 *)(a2 + 46);
  do
  {
    if ( (*v13 & v12) != 0 && *((_BYTE *)v14 - 5) == 1 && a3 == *v14 )
      return 1;
    ++v13;
    v14 += 20;
  }
  while ( jpt_1C0FD != (_UNKNOWN *__ptr32 *)v13 );
  return 0;
}
