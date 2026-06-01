__int64 __fastcall sub_3A0450(__int64 a1, __m128 a2, __m128 a3, __m128i a4, double a5)
{
  unsigned int v5; // ecx
  __int64 v6; // rax

  sub_38B490(a1, 0);
  v5 = 0;
  if ( *(_DWORD *)(a1 + 80) == 1 )
  {
    v6 = sub_384AF0(*(_QWORD *)(a1 + 88));
    if ( v6 )
    {
      *(_BYTE *)(v6 + 13) = (*(_BYTE *)(v6 + 13) ^ 8) & 0xFC | 1;
      sub_39FD80(a1, v6, 1u, a2, a3, a4, a5);
      return 1;
    }
  }
  return v5;
}

