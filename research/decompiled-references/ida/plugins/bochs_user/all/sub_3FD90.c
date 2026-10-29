__int64 __fastcall sub_3FD90(__int64 a1, unsigned __int16 a2, int a3, _QWORD *a4)
{
  unsigned int v4; // r8d
  unsigned __int64 v5; // rsi
  unsigned __int16 *v6; // rsi
  unsigned int v7; // eax
  unsigned int v8; // edx

  v4 = 5;
  v5 = a2 >> 3;
  if ( *(_QWORD *)(a1 + 24) < v5 )
    return v4;
  v6 = (unsigned __int16 *)(*(_QWORD *)(a1 + 16) + 8 * v5);
  v7 = a3 + (v6[1] | __ROR4__(_byteswap_ulong(*((_DWORD *)v6 + 1)) & 0xFF0000FF, 8));
  v4 = v7 & 0xFFF;
  if ( (v7 & 0xFFF) != 0 )
    return 4;
  v8 = *v6 | ((v6[3] & 0xF) << 16);
  if ( *((char *)v6 + 6) < 0 )
  {
    if ( v8 << 12 >= v7 )
    {
LABEL_5:
      if ( a4 )
        *a4 = v6;
      return v4;
    }
  }
  else if ( v8 >= v7 )
  {
    goto LABEL_5;
  }
  return 5;
}

