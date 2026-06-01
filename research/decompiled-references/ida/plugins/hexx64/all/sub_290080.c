__int64 __fastcall sub_290080(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        unsigned __int8 a6,
        __m128 a7)
{
  __int64 v11; // r15
  unsigned int v12; // r13d
  char tinfo_property; // al
  int tinfo_size; // eax
  int v16; // eax
  __int64 v17; // r14

  v11 = a5[3];
  if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u )
    return 0;
  tinfo_property = get_tinfo_property();
  if ( (tinfo_property & 0xFu) > 0xA && (tinfo_property & 0x3F) != 0x2D )
    return 0;
  if ( (get_tinfo_property() & 0xF) == 9 )
    return 0;
  tinfo_size = get_tinfo_size();
  v16 = sub_2862C0(a1, a3, tinfo_size, a6, 0, *(double *)a7.m128_u64);
  if ( v16 == 1 )
  {
    if ( (unsigned __int8)sub_27EA20(
                            *(_QWORD *)(a1 + 72),
                            (_QWORD *)(a4 + 48),
                            (_QWORD *)(v11 + 48),
                            (__int64)(a5 + 6),
                            0) )
      return 0;
  }
  else if ( v16 == 2 )
  {
    return 0;
  }
  v12 = sub_28FF70(a1, a3, (__int64)a5, *(double *)a7.m128_u64);
  if ( !(_BYTE)v12 )
    return 0;
  v17 = a5[4];
  if ( v17 )
  {
    sub_255630(a5[4], *(double *)a7.m128_u64);
    clear_tinfo_t();
    j__qfree(v17);
  }
  sub_255850(a5, a5[3], *(double *)a7.m128_u64);
  if ( a3 )
    sub_2441C0(a3, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0, *(double *)a7.m128_u64);
  if ( (unsigned __int8)sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), a7) )
    *(_DWORD *)(a1 + 8) |= 8u;
  return v12;
}

