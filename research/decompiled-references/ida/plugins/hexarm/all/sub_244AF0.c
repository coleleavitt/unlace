__int64 __fastcall sub_244AF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v7; // eax
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // eax
  __m128d v12; // xmm0
  int v13; // r13d
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // r12
  __int64 v17; // r14
  __int64 v18; // r15
  char tinfo_property; // al
  __int64 tinfo_size; // rax
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rax
  bool v26; // zf
  __int64 v27; // rdi
  __int64 v28; // rax
  int v29; // ecx
  int v30; // ecx
  int v31; // eax
  __int64 v32; // r15
  signed int v33; // eax
  signed int v34; // r14d
  char v35; // al
  int v36; // eax
  __int64 v37; // rdi
  __int64 v38; // rax
  __m128i si128; // xmm2
  _QWORD *v40; // r12
  __int64 v41; // rax
  __int64 v42; // r14
  unsigned int v43; // eax
  signed int v44; // eax
  __m128d v45; // [rsp+0h] [rbp-58h] BYREF
  __int64 v46; // [rsp+10h] [rbp-48h]
  __int64 v47; // [rsp+18h] [rbp-40h]

  v7 = *(_DWORD *)(a2 + 8);
  if ( v7 == 23 )
  {
    v14 = *(_QWORD *)(a2 + 32);
    if ( *(_DWORD *)(v14 + 8) == 61 )
    {
      v15 = sub_255DF0(*(_QWORD *)(v14 + 24), v14 + 48, a3, a4, a5);
      if ( !v15 )
      {
        v16 = *(_QWORD *)(a2 + 24);
        if ( *(_DWORD *)(v16 + 8) == 21 )
        {
          v17 = *(_QWORD *)(v16 + 24);
          v18 = *(_QWORD *)(v16 + 32);
          if ( *(_DWORD *)(v17 + 8) != 61 )
          {
            if ( *(_DWORD *)(v18 + 8) != 61 )
              return 0;
            v17 = *(_QWORD *)(v16 + 32);
            v18 = *(_QWORD *)(v16 + 24);
          }
          tinfo_property = get_tinfo_property();
          if ( (tinfo_property & 0x3E) != 0
            && ((tinfo_property & 0xFu) <= 8 || (tinfo_property & 0x3F) == 0x2D)
            && (unsigned int)get_tinfo_property() == 1 )
          {
            tinfo_size = get_tinfo_size();
            v22 = (unsigned int)(8 * tinfo_size - 1);
            v23 = tinfo_size;
            v24 = 1LL << (8 * (unsigned __int8)tinfo_size - 1);
            v25 = 0;
            if ( (unsigned __int64)(int)v22 < 0x40 )
              v25 = v24;
            v26 = *(_DWORD *)(v17 + 8) == 61;
            *(_QWORD *)&v45.m128d_f64[0] = v25;
            if ( !v26 )
              sub_23E720(0, v24, v23);
            v27 = *(_QWORD *)(v17 + 24);
            v46 = v23;
            v47 = v17 + 48;
            v28 = sub_255DF0(v27, v17 + 48, v23, v22, v21);
            if ( *(_QWORD *)&v45.m128d_f64[0] == v28 )
              goto LABEL_28;
            v29 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 216LL) + 130LL);
            if ( (int)v46 < v29 )
            {
              v30 = 8 * v29 - 1;
              if ( (unsigned __int64)v30 < 0x40 )
                v15 = 1LL << v30;
              if ( v15 == v28 )
              {
LABEL_28:
                if ( v17 )
                {
                  sub_2559F0(v17);
                  clear_tinfo_t();
                  j__qfree();
                }
                sub_255C10(v16, v18);
                *(_DWORD *)(a2 + 8) = 30;
                ++*(_DWORD *)(a1 + 72);
              }
            }
          }
        }
      }
    }
  }
  else if ( (v7 & 0xFFFFFFF9) == 0x18 && (*(_BYTE *)(a2 + 56) & 4) == 0 )
  {
    v9 = *(_QWORD *)(a2 + 32);
    if ( *(_DWORD *)(v9 + 8) != 61 || sub_255DF0(*(_QWORD *)(v9 + 24), v9 + 48, a3, a4, a5) )
    {
      v10 = *(_QWORD *)(a2 + 24);
      if ( *(_DWORD *)(v10 + 8) != 61 )
        return 0;
      if ( sub_255DF0(*(_QWORD *)(v10 + 24), v10 + 48, a3, a4, a5) )
        return 0;
      v11 = *(_DWORD *)(a2 + 8);
      if ( ((v11 - 26) & 0xFFFFFFFD) != 0 )
        return 0;
      v12 = (__m128d)_mm_loadu_si128((const __m128i *)(a2 + 24));
      v13 = (v11 == 28) + 22;
      v45 = _mm_shuffle_pd(v12, v12, 1);
    }
    else
    {
      v31 = *(_DWORD *)(a2 + 8);
      if ( v31 != 30 && v31 != 24 )
        return 0;
      v13 = (v31 == 30) + 22;
      v45 = (__m128d)_mm_loadu_si128((const __m128i *)(a2 + 24));
    }
    if ( *(_QWORD *)&v45.m128d_f64[0] )
    {
      v32 = *(_QWORD *)&v45.m128d_f64[0];
      v33 = get_tinfo_size();
      v26 = *(_DWORD *)(*(_QWORD *)&v45.m128d_f64[0] + 8LL) == 48;
      LOBYTE(v46) = 0;
      v34 = v33;
      if ( v26 )
      {
        v32 = *(_QWORD *)(*(_QWORD *)&v45.m128d_f64[0] + 24LL);
        v44 = get_tinfo_size();
        if ( v34 > v44 )
          return 0;
        if ( v34 < v44 && v34 < *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 216LL) + 130LL) )
          LOBYTE(v46) = (get_tinfo_property() & 0xF) != 9;
      }
      v35 = get_tinfo_property();
      if ( (v35 & 0x3E) != 0
        && ((v35 & 0xFu) <= 8 || (v35 & 0x3F) == 0x2D)
        && ((unsigned int)get_tinfo_property() == 2 || (_BYTE)v46) )
      {
        v36 = *(_DWORD *)(v32 + 8);
        if ( (unsigned int)(v36 - 35) > 1 && (unsigned int)(v36 - 42) > 1 )
        {
          if ( v32 != *(_QWORD *)&v45.m128d_f64[0] )
            sub_255C10(*(_QWORD *)&v45.m128d_f64[0], v32);
          v37 = *(_QWORD *)&v45.m128d_f64[1];
          **(_QWORD **)&v45.m128d_f64[1] = *(_QWORD *)a2;
          sub_240DE0(
            v37,
            *(_QWORD *)(*(_QWORD *)(a1 + 64) + 216LL),
            *(_QWORD *)(a1 + 64),
            1LL << (8 * (unsigned __int8)v34 - 1),
            v34,
            2u);
          v38 = j__qalloc_or_throw();
          si128 = _mm_load_si128((const __m128i *)&v45);
          v40 = (_QWORD *)v38;
          *(_QWORD *)v38 = -1;
          *(__m128i *)(v38 + 24) = si128;
          *(_DWORD *)(v38 + 8) = 21;
          *(_QWORD *)(v38 + 12) = -1;
          *(_QWORD *)(v38 + 40) = 0;
          *(_QWORD *)(v38 + 48) = 0;
          *(_DWORD *)(v38 + 56) = 0;
          sub_244580(v38, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 216LL) + 112LL), 0);
          *v40 = *(_QWORD *)a2;
          v41 = j__qalloc_or_throw();
          *(_QWORD *)v41 = -1;
          v42 = v41;
          *(_QWORD *)(v41 + 8) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v41 + 16) = 0xFFFFFFFFLL;
          *(_QWORD *)(v41 + 40) = 0;
          *(_QWORD *)(v41 + 48) = 0;
          *(_DWORD *)(v41 + 56) = 0;
          *(_OWORD *)(v41 + 24) = 0;
          v43 = get_tinfo_size();
          sub_240DE0(v42, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 216LL), *(_QWORD *)(a1 + 64), 0, v43, 0);
          *(_DWORD *)(a2 + 8) = v13;
          *(_QWORD *)(a2 + 24) = v40;
          *(_QWORD *)(a2 + 32) = v42;
          ++*(_DWORD *)(a1 + 72);
        }
      }
    }
  }
  return 0;
}

