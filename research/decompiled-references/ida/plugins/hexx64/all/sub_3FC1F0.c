unsigned __int64 __fastcall sub_3FC1F0(__int64 a1, __m128i a2, __m128 a3, __m128 a4)
{
  int v4; // eax
  int v5; // edx
  unsigned __int8 v6; // bp
  __int64 v7; // r12
  __int64 v8; // r13
  int dtype_size; // eax
  int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // rsi

  v4 = *(_DWORD *)(a1 + 52);
  v5 = *(unsigned __int16 *)(a1 + 48);
  if ( (v4 & 0x10) == 0 )
  {
    v11 = *(_DWORD *)(a1 + 52) & 0x818;
    if ( v11 && v11 != 2056 )
    {
      v6 = v11 == 8 || v11 == 2048;
      if ( (_WORD)v5 != 17 )
        goto LABEL_5;
      goto LABEL_10;
    }
    v6 = 2;
    goto LABEL_4;
  }
  if ( (*(_BYTE *)(a1 + 57) & 8) != 0 )
  {
    v6 = 7;
    goto LABEL_4;
  }
  if ( (v4 & 0x800) == 0 )
  {
    v6 = (*(_DWORD *)(a1 + 52) & 0x818) == 16;
    goto LABEL_4;
  }
  if ( (unsigned __int16)v5 > 0x39u )
  {
    v6 = 7;
    if ( (unsigned __int16)(v5 - 61) <= 0x18u )
      goto LABEL_6;
    if ( (unsigned __int16)v5 > 0xA0u )
    {
      if ( (_WORD)v5 == 738 || (_WORD)v5 == 741 )
        goto LABEL_6;
      goto LABEL_25;
    }
    if ( (unsigned __int16)v5 > 0x6Cu )
    {
      v13 = 0xC050682000555LL;
      if ( _bittest64(&v13, (unsigned int)(v5 - 109)) )
        goto LABEL_6;
      goto LABEL_25;
    }
  }
  else
  {
    v6 = 7;
    if ( (unsigned __int16)v5 > 0x34u )
      goto LABEL_6;
    if ( (unsigned __int16)v5 <= 0x12u )
    {
      if ( (unsigned __int16)v5 <= 0xFu )
      {
LABEL_16:
        v6 = 2 * ((*(_DWORD *)(a1 + 52) & 0x818) == 2064);
        goto LABEL_6;
      }
LABEL_4:
      if ( (_WORD)v5 != 17 )
        goto LABEL_5;
LABEL_10:
      sub_3F8D40(a1, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 64LL), v6, a2, a3, a4);
      goto LABEL_6;
    }
  }
  if ( (unsigned __int16)(v5 - 37) > 0x3Bu )
    goto LABEL_16;
  v12 = 0xA1A000000E00005LL;
  v6 = 7;
  if ( _bittest64(&v12, (unsigned int)(v5 - 37)) )
    goto LABEL_6;
LABEL_25:
  v6 = 2;
  if ( (*(_DWORD *)(a1 + 52) & 0x818) == 0x810 )
    goto LABEL_6;
  v6 = 0;
LABEL_5:
  if ( (_WORD)v5 == 16 && *(_BYTE *)(a1 + 65) == 6 )
    goto LABEL_10;
LABEL_6:
  v7 = *(_QWORD *)(a1 + 32) + *(unsigned __int16 *)(a1 + 50);
  v8 = *(int *)(*(_QWORD *)(a1 + 832) + 464LL);
  dtype_size = get_dtype_size();
  sub_1D6310(a1, 3u, dtype_size, v7, 0x3BEA45E214ADDC55LL, v8, *(double *)a2.m128i_i64, 0);
  return sub_3F8D40(a1, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 464LL), v6, a2, a3, a4);
}

