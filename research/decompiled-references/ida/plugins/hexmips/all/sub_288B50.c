__int64 __fastcall sub_288B50(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // r13
  int v5; // r13d
  char tinfo_property; // al
  __int64 v7; // rbp
  unsigned int v8; // eax
  _QWORD *v9; // rax
  __m128i *v10; // rax
  __int64 v11; // r13
  unsigned __int64 v12; // r14
  unsigned __int64 tinfo_size; // r13

  v2 = *(_QWORD *)(a2 + 24);
  if ( (unsigned int)(*(_DWORD *)(v2 + 8) - 2) > 0xD )
    return 0;
  v4 = *(_QWORD *)(a2 + 32);
  if ( sub_255220(*(_QWORD *)(v2 + 24), v4)
    && (sub_255220(*(_QWORD *)(v2 + 32), v4) || (v12 = get_tinfo_size(), v12 < get_tinfo_size())) )
  {
    if ( *(_DWORD *)(v4 + 8) != 49 )
      return 0;
    v11 = *(_QWORD *)(v4 + 24);
    if ( sub_255220(*(_QWORD *)(v2 + 24), v11) )
    {
      if ( sub_255220(*(_QWORD *)(v2 + 32), v11) )
        return 0;
      tinfo_size = get_tinfo_size();
      if ( tinfo_size < get_tinfo_size() )
        return 0;
    }
    v5 = 22;
  }
  else
  {
    v5 = 23;
  }
  tinfo_property = get_tinfo_property();
  v7 = *(_QWORD *)(a2 + 32);
  if ( (tinfo_property & 0xF) == 9 )
  {
    sub_250DB0(*(_QWORD *)(a2 + 32));
    *(_DWORD *)(v7 + 8) = 62;
    v10 = (__m128i *)j__qalloc_or_throw();
    *v10 = _mm_loadu_si128(xmmword_410BE0);
    v10[1].m128i_i32[0] = xmmword_410BE0[1].m128i_i32[0];
    *(_QWORD *)(v7 + 24) = v10;
    copy_tinfo_t();
    *(_DWORD *)(a2 + 56) |= 4u;
  }
  else
  {
    v8 = get_tinfo_size();
    sub_23C1A0(v7, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 216LL), 0, 0, v8, 0);
  }
  v9 = *(_QWORD **)(a2 + 32);
  *(_DWORD *)(a2 + 8) = v5;
  *(_QWORD *)a2 = *v9;
  copy_tinfo_t();
  clear_tinfo_t();
  if ( (unsigned __int8)sub_27F280(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
    *(_DWORD *)(a1 + 8) |= 8u;
  return 1;
}

