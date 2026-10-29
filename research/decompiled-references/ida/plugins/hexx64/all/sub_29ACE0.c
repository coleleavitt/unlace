bool __fastcall sub_29ACE0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v5; // rsi
  int v7; // r15d
  unsigned __int64 v8; // r14
  bool v9; // bp
  unsigned __int64 v10; // rdx
  const __m128i *v11; // r9
  __m128i v13; // xmm1
  __int64 v14; // rbx
  __int64 v15; // rbp
  __int64 tinfo_size; // rax
  unsigned __int64 v17; // r13
  bool v19; // [rsp+0h] [rbp-68h]
  __int64 tinfo_property; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v21[2]; // [rsp+20h] [rbp-48h] BYREF

  v5 = *(_QWORD *)(a2 + 8);
  v21[1] = __readfsqword(0x28u);
  if ( !v5 )
    return 0;
  v7 = 1;
  v8 = 8 * a3;
  v9 = a3 == -1;
  v10 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v11 = (const __m128i *)(*(_QWORD *)a2 + 144 * v10);
      if ( !*(_BYTE *)(a2 + 51) && !v9 )
        break;
      if ( sub_29B010(a1, (_DWORD)v11 + 64, a3, a4) )
        return 1;
      v5 = *(_QWORD *)(a2 + 8);
      v10 = v7++;
      if ( v10 >= v5 )
        return 0;
    }
    if ( v5 - 1 == v10 )
      break;
    v10 = v7;
    if ( v8 < *(_QWORD *)(*(_QWORD *)a2 + 144LL * v7) )
      break;
    ++v7;
    if ( v10 >= v5 )
      return 0;
  }
  if ( (v11[4].m128i_i8[0] & 0xF) == 0xE )
    return 0;
  v13 = _mm_loadu_si128(v11);
  if ( _mm_add_epi64(_mm_srli_si128(v13, 8), v13).m128i_u64[0] < v8 )
    return 0;
  v14 = a3 - ((unsigned __int64)v13.m128i_i64[0] >> 3);
  if ( sub_29B010(a1, (_DWORD)v11 + 64, v14, a4) )
    return 1;
  if ( !v14 && (get_tinfo_property() & 0xF) == 0xA && (get_tinfo_property() & 0xF) == 0xA )
  {
    v21[0] = get_tinfo_property();
    tinfo_property = get_tinfo_property();
    v19 = sub_29B010(a1, (unsigned int)&tinfo_property, 0, (int)v21);
    clear_tinfo_t();
    clear_tinfo_t();
    return v19;
  }
  if ( (get_tinfo_property() & 0x2F) == 0xD )
    return 0;
  if ( (get_tinfo_property() & 0xF) == 0xB )
    return 0;
  v15 = *(int *)(a1 + 80);
  tinfo_size = get_tinfo_size();
  v17 = tinfo_size;
  return v15 < tinfo_size && !(tinfo_size % v15) && !(v14 % v15) && v15 == get_tinfo_size() && v17 >= v15 + v14;
}

