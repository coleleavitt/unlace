__int64 __fastcall sub_3C370(
        __int64 a1,
        double *a2,
        unsigned __int64 a3,
        int a4,
        unsigned __int16 a5,
        unsigned __int8 a6,
        __int64 a7,
        __int64 *a8,
        __int64 a9)
{
  __int64 *v11; // r8
  double v15; // rdi
  unsigned __int64 v16; // rsi
  __int64 *v17; // rsi
  __int64 *v18; // r9
  __int64 v19; // rdx
  _QWORD *v20; // r15
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r13
  __m128 v24; // xmm0
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rax
  __m128i *v28; // r12
  __int64 v29; // rbx
  __int64 *v30; // r15
  unsigned __int64 v31; // rdx
  __int64 *m128i_i64; // r14
  __int64 v33; // r13
  __int64 *i; // rbx
  __int64 v35; // r12
  unsigned int v36; // r13d
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __m128 v41; // xmm0
  __int64 v42; // rdx
  __int64 v43; // r10
  __int64 v44; // rax
  _QWORD *v45; // r15
  unsigned __int64 v46; // rsi
  __int64 v47; // rax
  _QWORD *v48; // r15
  __m128 v49; // xmm0
  __int64 *v50; // [rsp+0h] [rbp-68h]
  __int64 v51; // [rsp+0h] [rbp-68h]
  __int64 v52; // [rsp+8h] [rbp-60h]
  __int64 v53[9]; // [rsp+20h] [rbp-48h] BYREF

  v53[1] = __readfsqword(0x28u);
  v11 = a8;
  if ( !a3 )
  {
    if ( (*(_DWORD *)debug & 0x10000) != 0 )
      sub_E960((__int64)"mem_alloc: could not allocate zero memory!\n", a2, 0, a9, a8);
    return 1;
  }
  if ( *(_QWORD *)(a1 + 40) < a3 && a4 == 128 )
  {
    if ( (*(_DWORD *)debug & 0x10000) != 0 )
      sub_E960((__int64)"mem_alloc: not enough memory!\n", a2, a3, a9, a8);
    return 31;
  }
  else
  {
    v15 = *a2;
    v16 = (a3 + 4095) & 0xFFFFFFFFFFFFF000LL;
    if ( *(_QWORD *)a2 )
    {
      if ( *(_QWORD *)&v15 >= *(_QWORD *)(a1 + 24) )
      {
        v16 += *(_QWORD *)&v15;
        if ( *(_QWORD *)(a1 + 32) >= v16 )
        {
          v17 = *(__int64 **)(a1 + 56);
          v18 = &v17[*(_QWORD *)(a1 + 64)];
          v19 = (__int64)v17;
          if ( v17 != v18 )
          {
            while ( 1 )
            {
              v20 = *(_QWORD **)v19;
              if ( *(_QWORD *)&v15 == *(_QWORD *)(*(_QWORD *)v19 + 32LL) )
                break;
              v19 += 8;
              if ( (__int64 *)v19 == v18 )
                goto LABEL_10;
            }
            if ( (__int64 *)v19 == v18 )
            {
LABEL_10:
              if ( a4 == 128 )
              {
LABEL_55:
                while ( 1 )
                {
                  v39 = *v17;
                  if ( *(_QWORD *)&v15 >= *(_QWORD *)(*v17 + 32) && *(_QWORD *)&v15 < *(_QWORD *)(v39 + 40) )
                    break;
                  if ( ++v17 == v18 )
                    goto LABEL_65;
                }
                if ( a8 )
                  *a8 = v39;
                return 0;
              }
              if ( a4 != 64 )
                return 17;
LABEL_12:
              while ( *(_QWORD *)&v15 < *(_QWORD *)(*v17 + 32) || *(_QWORD *)&v15 >= *(_QWORD *)(*v17 + 40) )
              {
                if ( v18 == ++v17 )
                  goto LABEL_20;
              }
              if ( (*(_DWORD *)debug & 0x10000) != 0 )
                sub_E960((__int64)"mem_alloc: memory collides!\n", v17, v19, a9, a8);
              return 1;
            }
            if ( a4 != 128 )
            {
              v36 = 17;
              if ( a4 != 64 )
                return v36;
              if ( !v20 )
                goto LABEL_12;
              if ( (*(_DWORD *)debug & 0x10000) != 0 )
                sub_E960((__int64)"mem_alloc: page already reserved!\n", v17, v19, a9, a8);
              return 1;
            }
            if ( !v20 )
              goto LABEL_55;
            if ( (v20[14] & 0x40) == 0 )
            {
              if ( v20[3] >= a3 )
              {
                if ( a8 )
                  *a8 = (__int64)v20;
                return 0;
              }
              v46 = *(_QWORD *)a2;
              v53[0] = 0;
              sub_3B7C0(a1, v46, v53);
              v47 = operator new(0x78u);
              *(_OWORD *)(v47 + 8) = 0;
              *(_OWORD *)(v47 + 56) = 0;
              v48 = (_QWORD *)v47;
              *(_OWORD *)(v47 + 80) = 0;
              v49 = _mm_loadh_ps(a2);
              *(_WORD *)(v47 + 104) = 0;
              *(_QWORD *)v47 = 0;
              *(_QWORD *)(v47 + 40) = 0;
              *(_QWORD *)(v47 + 48) = 0;
              *(_QWORD *)(v47 + 72) = 0;
              *(_QWORD *)(v47 + 96) = 0;
              *(_DWORD *)(v47 + 112) = 0;
              *(__m128 *)(v47 + 24) = v49;
              v36 = sub_3BEE0(a1, v47, a7, a5, a8, a6, a9);
              if ( v36 )
              {
                if ( v48 )
                {
                  if ( v48[9] )
                  {
                    v48[10] = 0;
                    qfree();
                  }
                  if ( v48[6] )
                  {
                    v48[7] = 0;
                    qfree();
                  }
                  if ( *v48 )
                  {
                    v48[1] = 0;
                    qfree();
                  }
                  operator delete(v48, 0x78u);
                }
              }
              else if ( a8 )
              {
                *a8 = (__int64)v48;
              }
              return v36;
            }
            if ( !(unsigned int)sub_3BEE0(a1, (__int64)v20, a7, a5, a8, a6, a9) )
              return 0;
            if ( v20[9] )
            {
              v20[10] = 0;
              qfree();
            }
            if ( v20[6] )
            {
              v20[7] = 0;
              qfree();
            }
            if ( !*v20 )
              goto LABEL_73;
            goto LABEL_72;
          }
          if ( a4 == 128 )
          {
LABEL_65:
            v40 = operator new(0x78u);
            *(_OWORD *)(v40 + 8) = 0;
            *(_OWORD *)(v40 + 56) = 0;
            v20 = (_QWORD *)v40;
            *(_OWORD *)(v40 + 80) = 0;
            v41 = _mm_loadh_ps(a2);
            *(_WORD *)(v40 + 104) = 0;
            *(_QWORD *)v40 = 0;
            *(_QWORD *)(v40 + 40) = 0;
            *(_QWORD *)(v40 + 48) = 0;
            *(_QWORD *)(v40 + 72) = 0;
            *(_QWORD *)(v40 + 96) = 0;
            *(_DWORD *)(v40 + 112) = 0;
            *(__m128 *)(v40 + 24) = v41;
            if ( (unsigned int)sub_3BEE0(a1, v40, a7, a5, a8, a6, a9) )
            {
              if ( !v20 )
                return 1;
              if ( v20[9] )
              {
                v20[10] = 0;
                qfree();
              }
              if ( v20[6] )
              {
                v20[7] = 0;
                qfree();
              }
              if ( !*v20 )
              {
LABEL_73:
                operator delete(v20, 0x78u);
                return 1;
              }
LABEL_72:
              v20[1] = 0;
              qfree();
              goto LABEL_73;
            }
            return 0;
          }
          if ( a4 != 64 )
            return 17;
LABEL_20:
          v50 = v11;
          v22 = operator new(0x78u);
          *(_OWORD *)(v22 + 8) = 0;
          v23 = v22;
          *(_OWORD *)(v22 + 56) = 0;
          *(_OWORD *)(v22 + 80) = 0;
          *(_QWORD *)v22 = 0;
          v24 = _mm_loadh_ps(a2);
          *(_QWORD *)(v22 + 40) = 0;
          *(_QWORD *)(v22 + 48) = 0;
          *(_QWORD *)(v22 + 72) = 0;
          *(_QWORD *)(v22 + 96) = 0;
          *(_WORD *)(v22 + 104) = 0;
          *(_DWORD *)(v22 + 112) = 64;
          *(__m128 *)(v22 + 24) = v24;
          if ( v50 )
            *v50 = v22;
          v25 = *(_QWORD *)(a1 + 64);
          v26 = *(_QWORD *)(a1 + 56);
          if ( *(_QWORD *)(a1 + 72) < (unsigned __int64)(v25 + 1) )
          {
            v38 = qvector_reserve();
            *(_QWORD *)(a1 + 56) = v38;
            v26 = v38;
            v25 = *(_QWORD *)(a1 + 64);
          }
          *(_QWORD *)(v26 + 8 * v25) = v23;
          v27 = *(_QWORD *)(a1 + 64);
          v28 = *(__m128i **)(a1 + 56);
          *(_QWORD *)(a1 + 64) = v27 + 1;
          v29 = v27 + 1;
          v30 = &v28->m128i_i64[v29];
          if ( v28 == (__m128i *)&v28->m128i_i8[v29 * 8] )
            goto LABEL_32;
          if ( (v29 * 8) >> 3 )
          {
            _BitScanReverse64(&v31, (v29 * 8) >> 3);
            sub_3BCC0(
              v28,
              &v28->m128i_i64[v29],
              2LL * (int)v31,
              (unsigned __int8 (__fastcall *)(__int64, __int64))sub_3AC20);
            if ( v29 > 16 )
            {
              m128i_i64 = v28[8].m128i_i64;
              sub_3BA50(v28->m128i_i8, v28[8].m128i_i8, (__int64 (__fastcall *)(__int64, __int64))sub_3AC20);
              do
              {
                v33 = *m128i_i64;
                for ( i = m128i_i64; ; --i )
                {
                  v35 = *(i - 1);
                  if ( !sub_3AC20(v33, v35) )
                    break;
                  *i = v35;
                }
                ++m128i_i64;
                *i = v33;
              }
              while ( v30 != m128i_i64 );
              goto LABEL_32;
            }
          }
          else
          {
            sub_3BCC0(v28, &v28->m128i_i64[v29], -2, (unsigned __int8 (__fastcall *)(__int64, __int64))sub_3AC20);
          }
          sub_3BA50(v28->m128i_i8, &v28->m128i_i8[v29 * 8], (__int64 (__fastcall *)(__int64, __int64))sub_3AC20);
LABEL_32:
          *(_BYTE *)(a1 + 48) = 1;
          return 0;
        }
      }
      if ( (*(_DWORD *)debug & 0x10000) != 0 )
        sub_E960((__int64)"mem_alloc: could not access these memory boundaries!\n", v16, a3, a9, a8);
      return 23;
    }
    if ( a4 != 128 )
    {
      if ( a4 != 64 )
        return 17;
      v21 = sub_3B740((_QWORD *)a1, v16);
      if ( v21 != -1 )
      {
        v11 = a8;
        *(_QWORD *)a2 = (unsigned int)v21;
        goto LABEL_20;
      }
      return 23;
    }
    v51 = sub_3B740((_QWORD *)a1, v16);
    if ( v51 == -1 )
    {
      if ( (*(_DWORD *)debug & 0x10000) != 0 )
        sub_E960((__int64)"mem_alloc: not enough memory memory within the range!\n", v16, v42, a9, a8);
      return 23;
    }
    v52 = v43;
    v44 = operator new(0x78u);
    *(_QWORD *)v44 = 0;
    v45 = (_QWORD *)v44;
    *(_QWORD *)(v44 + 40) = 0;
    *(_QWORD *)(v44 + 48) = 0;
    *(_QWORD *)(v44 + 72) = 0;
    *(_QWORD *)(v44 + 96) = 0;
    *(_OWORD *)(v44 + 8) = 0;
    *(_OWORD *)(v44 + 56) = 0;
    *(_OWORD *)(v44 + 80) = 0;
    *(_WORD *)(v44 + 104) = 0;
    *(_DWORD *)(v44 + 112) = 0;
    *(_QWORD *)(v44 + 24) = a3;
    *(_QWORD *)(v44 + 32) = v51;
    v36 = sub_3BEE0(a1, v44, v52, a5, a8, a6, a9);
    if ( v45 && (v36 & 1) != 0 )
    {
      if ( v45[9] )
      {
        v45[10] = 0;
        qfree();
      }
      if ( v45[6] )
      {
        v45[7] = 0;
        qfree();
      }
      if ( *v45 )
      {
        v45[1] = 0;
        qfree();
      }
      operator delete(v45, 0x78u);
    }
    *(_QWORD *)a2 = v51;
  }
  return v36;
}

