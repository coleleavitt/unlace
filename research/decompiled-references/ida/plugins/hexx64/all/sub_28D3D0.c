__int64 __fastcall sub_28D3D0(__int64 a1, __int64 a2, __m128 a3)
{
  __int64 v3; // rbp
  __int64 v5; // r13
  int v6; // r13d
  char tinfo_property; // al
  __int64 v8; // rbp
  int v9; // eax
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __m128 *v13; // rax
  __int64 v14; // r13
  unsigned __int64 v15; // r14
  unsigned __int64 tinfo_size; // r13

  v3 = *(_QWORD *)(a2 + 24);
  if ( (unsigned int)(*(_DWORD *)(v3 + 8) - 2) > 0xD )
    return 0;
  v5 = *(_QWORD *)(a2 + 32);
  if ( sub_259AA0(*(_QWORD *)(v3 + 24), v5, *(double *)a3.m128_u64)
    && (sub_259AA0(*(_QWORD *)(v3 + 32), v5, *(double *)a3.m128_u64) || (v15 = get_tinfo_size(), v15 < get_tinfo_size())) )
  {
    if ( *(_DWORD *)(v5 + 8) != 49 )
      return 0;
    v14 = *(_QWORD *)(v5 + 24);
    if ( sub_259AA0(*(_QWORD *)(v3 + 24), v14, *(double *)a3.m128_u64) )
    {
      if ( sub_259AA0(*(_QWORD *)(v3 + 32), v14, *(double *)a3.m128_u64) )
        return 0;
      tinfo_size = get_tinfo_size();
      if ( tinfo_size < get_tinfo_size() )
        return 0;
    }
    v6 = 22;
  }
  else
  {
    v6 = 23;
  }
  tinfo_property = get_tinfo_property();
  v8 = *(_QWORD *)(a2 + 32);
  if ( (tinfo_property & 0xF) == 9 )
  {
    sub_255630(*(_QWORD *)(a2 + 32), *(double *)a3.m128_u64);
    *(_DWORD *)(v8 + 8) = 62;
    v13 = (__m128 *)j__qalloc_or_throw(20, 2, v11, v12);
    a3 = (__m128)_mm_loadu_si128(xmmword_42E1E0);
    *v13 = a3;
    v13[1].m128_i32[0] = xmmword_42E1E0[1].m128i_i32[0];
    *(_QWORD *)(v8 + 24) = v13;
    copy_tinfo_t();
    *(_DWORD *)(a2 + 56) |= 4u;
  }
  else
  {
    v9 = get_tinfo_size();
    sub_240A20(v8, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 216LL), 0, 0, v9, 0, *(double *)a3.m128_u64);
  }
  v10 = *(_QWORD **)(a2 + 32);
  *(_DWORD *)(a2 + 8) = v6;
  *(_QWORD *)a2 = *v10;
  copy_tinfo_t();
  clear_tinfo_t();
  if ( (unsigned __int8)sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), a3) )
    *(_DWORD *)(a1 + 8) |= 8u;
  return 1;
}

