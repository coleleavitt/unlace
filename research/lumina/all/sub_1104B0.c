__int64 __fastcall sub_1104B0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  unsigned int v4; // r13d
  char v5; // al
  unsigned int v6; // eax

  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(v2 + 80);
  v4 = sub_10D290(*(_QWORD *)(v2 + 112), a2);
  if ( !v4 )
  {
    *(__m128i *)v3 = _mm_load_si128((const __m128i *)&xmmword_1B7130);
    *(_BYTE *)(v3 + 16) = BYTE1(*(_DWORD *)(a1 + 52));
    *(_BYTE *)(v3 + 17) = *(_WORD *)(a1 + 54);
    *(_WORD *)(v3 + 18) = 257;
    v5 = *(_DWORD *)(a1 + 52) - *(_BYTE *)(a1 + 56);
    *(_WORD *)(v3 + 21) = 8256;
    *(_BYTE *)(v3 + 23) = 32;
    *(_QWORD *)(v3 + 24) = 0;
    *(_QWORD *)(v3 + 92) = 0;
    *(_BYTE *)(v3 + 20) = v5;
    memset(
      (void *)((v3 + 32) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * (((unsigned int)v3 - (((_DWORD)v3 + 32) & 0xFFFFFFF8) + 100) >> 3));
    sub_E8FB0(v2, 13);
    v6 = *(unsigned __int8 *)(a1 + 33);
    *(_WORD *)(a1 + 40) |= 2u;
    *(_DWORD *)(v3 + 52) = _byteswap_ulong(v6);
    *(_DWORD *)(v3 + 64) = _byteswap_ulong(*(unsigned __int8 *)(a1 + 34));
    *(_DWORD *)(a1 + 64) = 1;
    *(_BYTE *)(v3 + 31) = 1;
  }
  return v4;
}
