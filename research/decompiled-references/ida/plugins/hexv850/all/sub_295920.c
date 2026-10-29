bool __fastcall sub_295920(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  unsigned __int64 v6; // rsi
  int v8; // r15d
  unsigned __int64 v9; // r14
  bool v10; // bp
  unsigned __int64 v11; // rdx
  const __m128i *v12; // r9
  __m128i v14; // xmm1
  __int64 v15; // rbx
  int tinfo_property; // eax
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rbp
  __int64 tinfo_size; // rax
  unsigned __int64 v21; // r13
  int v22; // [rsp+0h] [rbp-68h]
  int v23; // [rsp+0h] [rbp-68h]
  char v24; // [rsp+0h] [rbp-68h]
  __int64 v25; // [rsp+8h] [rbp-60h]
  __int64 v26; // [rsp+8h] [rbp-60h]
  __int64 v27; // [rsp+10h] [rbp-58h]
  __int64 v28; // [rsp+10h] [rbp-58h]
  __int64 v29; // [rsp+18h] [rbp-50h] BYREF
  __int64 v30; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v31; // [rsp+28h] [rbp-40h]
  int v32; // [rsp+30h] [rbp-38h]
  int v33; // [rsp+38h] [rbp-30h]
  __int64 v34; // [rsp+40h] [rbp-28h]

  v6 = *(_QWORD *)(a2 + 8);
  v22 = a4;
  v31 = __readfsqword(0x28u);
  if ( !v6 )
    return 0;
  v8 = 1;
  v9 = 8 * a3;
  v10 = a3 == -1;
  v11 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = (const __m128i *)(*(_QWORD *)a2 + 144 * v11);
      if ( !*(_BYTE *)(a2 + 51) && !v10 )
        break;
      if ( (unsigned __int8)sub_295C50(
                              a1,
                              (int)v12 + 64,
                              a3,
                              v22,
                              a5,
                              (_DWORD)v12,
                              v22,
                              v25,
                              v27,
                              v29,
                              v30,
                              v31,
                              v32,
                              v33,
                              v34) )
        return 1;
      v6 = *(_QWORD *)(a2 + 8);
      v11 = v8++;
      if ( v11 >= v6 )
        return 0;
    }
    if ( v6 - 1 == v11 )
      break;
    v11 = v8;
    if ( v9 < *(_QWORD *)(*(_QWORD *)a2 + 144LL * v8) )
      break;
    ++v8;
    if ( v11 >= v6 )
      return 0;
  }
  if ( (v12[4].m128i_i8[0] & 0xF) == 0xE )
    return 0;
  v14 = _mm_loadu_si128(v12);
  if ( _mm_add_epi64(_mm_srli_si128(v14, 8), v14).m128i_u64[0] < v9 )
    return 0;
  v15 = a3 - ((unsigned __int64)v14.m128i_i64[0] >> 3);
  if ( (unsigned __int8)sub_295C50(
                          a1,
                          (int)v12 + 64,
                          v15,
                          v22,
                          a5,
                          (_DWORD)v12,
                          v22,
                          (__int64)v12,
                          v27,
                          v29,
                          v30,
                          v31,
                          v32,
                          v33,
                          v34) )
    return 1;
  if ( !v15 && (get_tinfo_property() & 0xF) == 0xA && (get_tinfo_property() & 0xF) == 0xA )
  {
    LODWORD(v30) = get_tinfo_property();
    tinfo_property = get_tinfo_property();
    v24 = sub_295C50(
            a1,
            (unsigned int)&v29,
            0,
            (unsigned int)&v30,
            v17,
            v18,
            v23,
            v26,
            v28,
            tinfo_property,
            v30,
            v31,
            v32,
            v33,
            v34);
    clear_tinfo_t();
    clear_tinfo_t();
    return v24;
  }
  if ( (get_tinfo_property() & 0x2F) == 0xD )
    return 0;
  if ( (get_tinfo_property() & 0xF) == 0xB )
    return 0;
  v19 = *(int *)(a1 + 80);
  tinfo_size = get_tinfo_size();
  v21 = tinfo_size;
  return v19 < tinfo_size && !(tinfo_size % v19) && !(v15 % v19) && v19 == get_tinfo_size() && v21 >= v19 + v15;
}

