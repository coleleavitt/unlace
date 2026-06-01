__int64 __fastcall sub_28D600(__int64 a1, __int64 *a2, __m128 a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebp
  __int64 v6; // r14
  __int64 v7; // r13

  v3 = a2[3];
  if ( *(_DWORD *)(v3 + 8) != 49 )
    return 0;
  v6 = *(_QWORD *)(v3 + 24);
  v4 = sub_29CC80((_QWORD *)(v6 + 48));
  if ( !(_BYTE)v4 )
    return 0;
  *(_QWORD *)(a2[3] + 24) = 0;
  v7 = a2[3];
  if ( v7 )
  {
    sub_255630(a2[3], *(double *)a3.m128_u64);
    clear_tinfo_t();
    j__qfree(v7);
  }
  sub_255850(a2, v6, *(double *)a3.m128_u64);
  sub_2441C0((__int64)a2, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0, *(double *)a3.m128_u64);
  if ( !(unsigned __int8)sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), a3) )
    return v4;
  *(_DWORD *)(a1 + 8) |= 8u;
  return v4;
}

