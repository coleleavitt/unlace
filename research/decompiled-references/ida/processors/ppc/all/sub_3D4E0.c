__int64 __fastcall sub_3D4E0(__int64 a1)
{
  int v1; // edx
  const __m128i *v2; // rsi
  __m128i *v3; // rax
  __m128i v4; // xmm0
  __int64 v5; // rsi
  __int64 v6; // rax
  int v7; // ecx

  if ( *(_QWORD *)(a1 + 32) == *(_QWORD *)(a1 + 424) )
    goto LABEL_7;
  if ( ((*(_WORD *)(a1 + 40) - 231) & 0xFFFB) == 0 )
    goto LABEL_3;
  if ( (*(_QWORD *)(a1 + 40) & 0x20000000FFFFLL) != 0x200000000014LL )
    return 0;
  if ( *(_BYTE *)(a1 + 57) == 11 )
  {
LABEL_3:
    v1 = *(unsigned __int16 *)(a1 + 62);
    v2 = (const __m128i *)(a1 + 96);
  }
  else
  {
    v2 = (const __m128i *)(a1 + 56);
    v1 = 0;
  }
  v3 = *(__m128i **)(a1 + 864);
  if ( !v3[2].m128i_i8[9] )
  {
LABEL_7:
    *(_BYTE *)(a1 + 792) = 1;
  }
  else if ( v3[2].m128i_u16[7] == v1 )
  {
    v4 = _mm_loadu_si128(v2);
    v5 = (__int64)&v2[2].m128i_i64[1];
    *v3 = v4;
    v3[1] = _mm_loadu_si128((const __m128i *)(v5 - 24));
    v3[2].m128i_i32[0] = *(_DWORD *)(v5 - 8);
    v6 = *(_QWORD *)(a1 + 376);
    v7 = *(unsigned __int16 *)(v5 - 34);
    *(_BYTE *)(v6 + 68) = *(_BYTE *)(v5 - 35);
    *(_DWORD *)(v6 + 64) = v7;
    sub_3D210((_QWORD *)a1, v5);
    return 1;
  }
  return 0;
}

