__int64 __fastcall sub_D160(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // dx
  __int64 v4; // rcx
  unsigned __int16 v6; // si
  unsigned __int16 v7; // di
  __int64 v8; // rdx
  int v9; // ecx
  char v10; // al
  int v11; // ecx
  char v12; // al

  v2 = *(_WORD *)(a2 + 24);
  if ( v2 != 114 )
  {
    if ( v2 > 0x72u )
    {
      v4 = 0;
      if ( (unsigned __int16)(v2 - 480) <= 1u )
      {
        v4 = (unsigned int)*(_QWORD *)(a2 + 88) + 4 * *(unsigned __int16 *)(a2 + 46) - 8;
        if ( v2 == 480 )
          return -(__int64)((unsigned int)*(_QWORD *)(a2 + 88) + 4 * *(unsigned __int16 *)(a2 + 46) - 8);
      }
      return v4;
    }
    v4 = 0;
    if ( (unsigned __int16)(v2 - 25) > 3u || (*(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL) != 0x1F000000000300LL )
      return v4;
    v6 = *(_WORD *)(a2 + 46);
    v7 = *(_WORD *)(a2 + 126);
    v8 = *(_QWORD *)(a2 + 168);
    if ( v6 != 31 || (v9 = 0, v7 != 31) )
    {
      if ( v7 < v6 )
      {
        v9 = 0;
      }
      else
      {
        v9 = 1;
        if ( v7 >= (unsigned __int16)(v6 + 1) )
        {
          if ( (((_BYTE)v7 - (_BYTE)v6) & 1) == 0 || (v9 = 2, v7 >= (unsigned __int16)(v6 + 2)) )
          {
            do
              v9 += 2;
            while ( v7 >= (unsigned __int16)(v6 + v9) );
          }
        }
      }
    }
    v10 = *(_BYTE *)(a2 + 33);
    v11 = v9 - (((v8 & 2) == 0) - 1) - (((v8 & 4) == 0) - 1) - (((v8 & 8) == 0) - 1);
    if ( (unsigned __int8)(v10 - 6) > 7u )
    {
      if ( (unsigned __int8)(v10 - 14) > 7u )
        return 4 * v11;
      v12 = v10 - 14;
    }
    else
    {
      v12 = v10 - 6;
    }
    if ( (v12 & 2) != 0 )
      return -4 * v11;
    return 4 * v11;
  }
  v4 = 0;
  if ( (*(_QWORD *)(a2 + 40) & 0xFFFF00000000FF00LL) == 0x1F000000000100LL )
  {
    if ( (*(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL) == 0x1F000000000100LL && *(_BYTE *)(a2 + 121) == 5 )
    {
      return *(_QWORD *)(a2 + 128);
    }
    else
    {
      v4 = 0;
      if ( *(_BYTE *)(a2 + 81) == 5 )
        return *(_QWORD *)(a2 + 88);
    }
  }
  return v4;
}

