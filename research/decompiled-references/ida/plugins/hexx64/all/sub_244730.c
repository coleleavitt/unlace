__int64 __fastcall sub_244730(__int64 a1, __int64 a2, __m128i a3)
{
  int v5; // eax
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // eax
  __m128d v10; // xmm0
  int v11; // r13d
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // r12
  __int64 v15; // r14
  __int64 v16; // r15
  char tinfo_property; // al
  __int64 tinfo_size; // rax
  int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rax
  bool v23; // zf
  __int64 *v24; // rdi
  __int64 v25; // rax
  int v26; // ecx
  int v27; // ecx
  int v28; // eax
  __int64 v29; // r15
  int v30; // eax
  int v31; // r14d
  char v32; // al
  int v33; // eax
  __int64 v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __m128i v40; // xmm2
  _QWORD *v41; // r12
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // r14
  int v47; // eax
  int v48; // eax
  __m128i v49; // [rsp+0h] [rbp-58h] BYREF
  __int64 v50; // [rsp+10h] [rbp-48h]
  __int64 v51; // [rsp+18h] [rbp-40h]

  v5 = *(_DWORD *)(a2 + 8);
  if ( v5 == 23 )
  {
    v12 = *(_QWORD *)(a2 + 32);
    if ( *(_DWORD *)(v12 + 8) == 61 )
    {
      v13 = sub_255A30(*(__int64 **)(v12 + 24));
      if ( !v13 )
      {
        v14 = *(_QWORD *)(a2 + 24);
        if ( *(_DWORD *)(v14 + 8) == 21 )
        {
          v15 = *(_QWORD *)(v14 + 24);
          v16 = *(_QWORD *)(v14 + 32);
          if ( *(_DWORD *)(v15 + 8) != 61 )
          {
            if ( *(_DWORD *)(v16 + 8) != 61 )
              return 0;
            v15 = *(_QWORD *)(v14 + 32);
            v16 = *(_QWORD *)(v14 + 24);
          }
          tinfo_property = get_tinfo_property();
          if ( (tinfo_property & 0x3E) != 0
            && ((tinfo_property & 0xFu) <= 8 || (tinfo_property & 0x3F) == 0x2D)
            && (unsigned int)get_tinfo_property() == 1 )
          {
            tinfo_size = get_tinfo_size();
            v19 = 8 * tinfo_size - 1;
            v20 = tinfo_size;
            v21 = 1LL << (8 * (unsigned __int8)tinfo_size - 1);
            v22 = 0;
            if ( (unsigned __int64)v19 < 0x40 )
              v22 = v21;
            v23 = *(_DWORD *)(v15 + 8) == 61;
            v49.m128i_i64[0] = v22;
            if ( !v23 )
              sub_23E360(*(double *)a3.m128i_i64);
            v24 = *(__int64 **)(v15 + 24);
            v50 = v20;
            v51 = v15 + 48;
            v25 = sub_255A30(v24);
            if ( v49.m128i_i64[0] == v25 )
              goto LABEL_28;
            v26 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 216LL) + 130LL);
            if ( (int)v50 < v26 )
            {
              v27 = 8 * v26 - 1;
              if ( (unsigned __int64)v27 < 0x40 )
                v13 = 1LL << v27;
              if ( v13 == v25 )
              {
LABEL_28:
                if ( v15 )
                {
                  sub_255630(v15);
                  clear_tinfo_t();
                  j__qfree(v15);
                }
                sub_255850((__int64 *)v14, v16);
                *(_DWORD *)(a2 + 8) = 30;
                ++*(_DWORD *)(a1 + 72);
              }
            }
          }
        }
      }
    }
  }
  else if ( (v5 & 0xFFFFFFF9) == 0x18 && (*(_BYTE *)(a2 + 56) & 4) == 0 )
  {
    v7 = *(_QWORD *)(a2 + 32);
    if ( *(_DWORD *)(v7 + 8) != 61 || sub_255A30(*(__int64 **)(v7 + 24)) )
    {
      v8 = *(_QWORD *)(a2 + 24);
      if ( *(_DWORD *)(v8 + 8) != 61 )
        return 0;
      if ( sub_255A30(*(__int64 **)(v8 + 24)) )
        return 0;
      v9 = *(_DWORD *)(a2 + 8);
      if ( ((v9 - 26) & 0xFFFFFFFD) != 0 )
        return 0;
      v10 = (__m128d)_mm_loadu_si128((const __m128i *)(a2 + 24));
      a3 = (__m128i)_mm_shuffle_pd(v10, v10, 1);
      v11 = (v9 == 28) + 22;
      v49 = a3;
    }
    else
    {
      v28 = *(_DWORD *)(a2 + 8);
      if ( v28 != 30 && v28 != 24 )
        return 0;
      v11 = (v28 == 30) + 22;
      v49 = _mm_loadu_si128((const __m128i *)(a2 + 24));
    }
    if ( v49.m128i_i64[0] )
    {
      v29 = v49.m128i_i64[0];
      v30 = get_tinfo_size();
      v23 = *(_DWORD *)(v49.m128i_i64[0] + 8) == 48;
      LOBYTE(v50) = 0;
      v31 = v30;
      if ( v23 )
      {
        v29 = *(_QWORD *)(v49.m128i_i64[0] + 24);
        v48 = get_tinfo_size();
        if ( v31 > v48 )
          return 0;
        if ( v31 < v48 && v31 < *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 216LL) + 130LL) )
          LOBYTE(v50) = (get_tinfo_property() & 0xF) != 9;
      }
      v32 = get_tinfo_property();
      if ( (v32 & 0x3E) != 0
        && ((v32 & 0xFu) <= 8 || (v32 & 0x3F) == 0x2D)
        && ((unsigned int)get_tinfo_property() == 2 || (_BYTE)v50) )
      {
        v33 = *(_DWORD *)(v29 + 8);
        if ( (unsigned int)(v33 - 35) > 1 && (unsigned int)(v33 - 42) > 1 )
        {
          if ( v29 != v49.m128i_i64[0] )
            sub_255850((__int64 *)v49.m128i_i64[0], v29);
          v34 = v49.m128i_i64[1];
          *(_QWORD *)v49.m128i_i64[1] = *(_QWORD *)a2;
          v35 = *(_QWORD *)(a1 + 64);
          v36 = *(_QWORD *)(v35 + 216);
          sub_240A20(v34, v36, v35, 1LL << (8 * (unsigned __int8)v31 - 1), v31, 2, *(double *)a3.m128i_i64);
          v39 = j__qalloc_or_throw(64, v36, v37, v38);
          v40 = _mm_load_si128(&v49);
          v41 = (_QWORD *)v39;
          *(_QWORD *)v39 = -1;
          *(__m128i *)(v39 + 24) = v40;
          *(_DWORD *)(v39 + 8) = 21;
          *(_QWORD *)(v39 + 12) = -1;
          *(_QWORD *)(v39 + 40) = 0;
          *(_QWORD *)(v39 + 48) = 0;
          *(_DWORD *)(v39 + 56) = 0;
          v42 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 216LL) + 112LL);
          sub_2441C0(v39, v42, 0, *(double *)a3.m128i_i64);
          *v41 = *(_QWORD *)a2;
          v45 = j__qalloc_or_throw(64, v42, v43, v44);
          *(_QWORD *)v45 = -1;
          v46 = v45;
          *(_QWORD *)(v45 + 8) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v45 + 16) = 0xFFFFFFFFLL;
          *(_QWORD *)(v45 + 40) = 0;
          *(_QWORD *)(v45 + 48) = 0;
          *(_DWORD *)(v45 + 56) = 0;
          *(_OWORD *)(v45 + 24) = 0;
          v47 = get_tinfo_size();
          sub_240A20(v46, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 216LL), *(_QWORD *)(a1 + 64), 0, v47, 0, 0.0);
          *(_DWORD *)(a2 + 8) = v11;
          *(_QWORD *)(a2 + 24) = v41;
          *(_QWORD *)(a2 + 32) = v46;
          ++*(_DWORD *)(a1 + 72);
        }
      }
    }
  }
  return 0;
}

