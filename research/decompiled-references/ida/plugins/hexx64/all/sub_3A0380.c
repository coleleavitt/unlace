__int64 __fastcall sub_3A0380(__int64 a1, __m128 a2, __m128 a3, __m128i a4, double a5)
{
  __int64 v5; // rbp
  unsigned int v6; // eax
  int v7; // eax

  sub_38B490(a1, 0);
  if ( *(_DWORD *)(a1 + 80) != 1 )
    return 0;
  v5 = sub_384AF0(*(_QWORD *)(a1 + 88));
  if ( !v5 )
    return 0;
  v6 = sub_3C0E90(*(_QWORD *)(a1 + 128));
  *(double *)a2.m128_u64 = ((double (__fastcall *)(__int64, _QWORD, _QWORD, const char *, _QWORD, _QWORD, __int64 (__fastcall *)(__int64, __int64, __int64 *), __int64))callui)(
                             205,
                             0,
                             0,
                             "Select a structure",
                             0,
                             v6,
                             sub_384880,
                             v5);
  if ( !v7 )
    return 0;
  sub_3C0EA0(*(_QWORD *)(a1 + 128), v7);
  create_numbered_type_name();
  *(_BYTE *)(v5 + 13) |= 1u;
  *(_QWORD *)(v5 + 40) = *(_QWORD *)(v5 + 40) & 0xFF000000F00FFFFFLL | 0xAAAAAA0AA00000LL;
  sub_39FD80(a1, v5, 0, a2, a3, a4, a5);
  return 1;
}

