__int64 __fastcall sub_205210(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3,
        __m128i *a4,
        unsigned __int64 a5,
        __int64 a6,
        double a7,
        char a8)
{
  _QWORD *v9; // rdi

  if ( (**(_DWORD **)(a1 + 56) & 0x40000) != 0 )
    return 0;
  if ( (unsigned int)sub_202CA0(a1, a2, a3, a4, a5, a6, a7, a8) )
    return 4294967260LL;
  v9 = *(_QWORD **)(a1 + 56);
  if ( (*(_BYTE *)(v9[187] + 604LL) & 0x10) == 0 )
    return 4294967276LL;
  sub_1F08B0(v9, 0xFFFFFFFFFFFFFFFFLL, 0x14u);
  return 0;
}

