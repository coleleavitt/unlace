__int64 __fastcall sub_3FD040(__int64 *a1, __int64 a2, __m128i a3, __m128 a4, __m128 a5)
{
  __int64 v5; // rdx
  int v6; // eax

  v5 = a1[1];
  if ( *(_BYTE *)(v5 + 144) )
    return sub_415820(a1, a2, *(double *)a3.m128i_i64);
  v6 = *(_DWORD *)(a2 + 16) & 0x70000;
  switch ( v6 )
  {
    case 0x40000:
      sub_3FCA50((__int64)a1, a2, a3, a4, a5);
      return 0;
    case 0x10000:
      return ((__int64 (__fastcall *)(__int64, __int64, double))sub_3EF4A0)(
               *(_QWORD *)(*(_QWORD *)(v5 + 784) + 56LL),
               a2,
               *(double *)a3.m128i_i64);
    case 0x20000:
      return sub_3EF420(*(_QWORD *)(*(_QWORD *)(v5 + 784) + 56LL), a2, *(double *)a3.m128i_i64);
    default:
      if ( !under_debugger )
        sub_383060(0xCB1Bu, *(double *)a3.m128i_i64);
      BUG();
  }
}

