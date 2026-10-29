const __m128i **__fastcall sub_187B80(_QWORD *a1, const __m128i **a2, unsigned __int8 *a3, _QWORD *a4, __int64 *a5)
{
  const __m128i **v6; // r12
  _QWORD *v8; // rax
  _BYTE *v9; // rax
  _BYTE *v10; // rbx
  __int64 v11; // rax
  int v12; // r15d
  __int64 v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rax
  _QWORD *v16; // r8
  __int64 v17; // rbx
  __m128i *v18; // rax
  unsigned int v19; // ebp
  __m128i *v20; // rcx
  __int64 v21; // r13
  __int64 v22; // rdx
  __m128i v23; // xmm2
  __m128i v24; // xmm1
  __int32 v25; // r11d
  __int64 v26; // rax
  __int64 v27; // rdx
  const __m128i *v28; // rcx
  const __m128i *v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // xmm2_8
  __m128i v32; // xmm1
  __int32 v33; // r11d
  __m128i v34; // xmm0
  const __m128i *v36; // rdx
  const __m128i *v37; // rcx
  _QWORD *v41; // [rsp+28h] [rbp-80h]
  __m128i v42; // [rsp+30h] [rbp-78h] BYREF
  const __m128i *v43; // [rsp+40h] [rbp-68h]
  const __m128i *v44; // [rsp+48h] [rbp-60h]
  __int64 v45; // [rsp+50h] [rbp-58h] BYREF
  __int128 v46; // [rsp+58h] [rbp-50h]
  unsigned __int64 v47; // [rsp+68h] [rbp-40h]

  v6 = a2;
  v47 = __readfsqword(0x28u);
  while ( 1 )
  {
    if ( sub_5FEB0(a5, *(_DWORD *)(*a1 + 72LL))
      || (unsigned __int8)sub_5FD00(a1 + 11, a4)
      || (unsigned __int8)sub_312BB0(a1 + 13, a4 + 2) )
    {
      return nullptr;
    }
    v8 = (_QWORD *)a1[1];
    if ( v8 )
    {
      v9 = (_BYTE *)(*v8 & 0xFFFFFFFFFFFFFFFCLL);
      v10 = v9;
      if ( !v9 )
        break;
      if ( (*v9 & 2) == 0 )
      {
        while ( sub_118E80(a3, *((unsigned __int8 **)v10 + 3)) < 0 )
        {
          v10 = *((_BYTE **)v10 + 1);
LABEL_12:
          if ( (*v10 & 2) != 0 )
            goto LABEL_13;
        }
        if ( sub_118E80(*((unsigned __int8 **)v10 + 3), a3) < 0 )
        {
          v10 = *((_BYTE **)v10 + 2);
          goto LABEL_12;
        }
        if ( (_BYTE *)a1[1] != v10 )
          break;
      }
    }
LABEL_13:
    sub_5F710(a5, *(_DWORD *)(*a1 + 72LL));
    v11 = a1[4];
    if ( v11 != 1 )
    {
      if ( !v11 )
        goto LABEL_33;
      v12 = 0;
      v13 = 0;
      while ( 1 )
      {
        v14 = a1[3];
        v45 = 0;
        v46 = 0;
        v15 = (_QWORD *)sub_187B80(*(_QWORD *)(v14 + 8 * v13), &v45, a3, a4, a5);
        v16 = v15;
        if ( v15 )
        {
          v17 = *v15;
          if ( 32LL * v15[1] )
            break;
        }
LABEL_30:
        if ( v45 )
        {
          *(_QWORD *)&v46 = 0;
          qfree();
        }
        v13 = ++v12;
        if ( (unsigned __int64)v12 >= a1[4] )
          goto LABEL_33;
      }
      while ( 2 )
      {
        v18 = (__m128i *)*v6;
        v19 = *(_DWORD *)(v17 + 20);
        v20 = (__m128i *)&(*v6)[2 * (_QWORD)v6[1]];
        if ( *v6 == v20 )
        {
LABEL_35:
          v21 = *(_QWORD *)v17;
          goto LABEL_36;
        }
        while ( v19 != v18[1].m128i_i32[1]
             || *(_DWORD *)(v17 + 24) != v18[1].m128i_i32[2]
             || *(_DWORD *)(v17 + 16) != v18[1].m128i_i32[0] )
        {
          v18 += 2;
          if ( v20 == v18 )
            goto LABEL_35;
        }
        v21 = *(_QWORD *)v17;
        if ( v20 == v18 )
        {
LABEL_36:
          v23 = _mm_loadl_epi64((const __m128i *)(v17 + 8));
          v24 = _mm_cvtsi32_si128(*(_DWORD *)(v17 + 16));
          v25 = *(_DWORD *)(v17 + 24);
          if ( v6[2] < (const __m128i *)&v6[1]->m128i_i8[1] )
          {
            v43 = v6[2];
            v41 = v16;
            v42.m128i_i64[1] = __PAIR64__(v25, _mm_cvtsi128_si32(v24));
            v42.m128i_i64[0] = v23.m128i_i64[0];
            v26 = qvector_reserve();
            v27 = v26;
            v28 = v6[2];
            v29 = *v6;
            v30 = (__int64)&v6[1][-1].m128i_i64[1] + 7;
            v6[2] = v43;
            v31 = v42.m128i_i64[0];
            v32 = _mm_cvtsi32_si128(v42.m128i_u32[2]);
            v33 = v42.m128i_i32[3];
            if ( v30 >= 0 )
            {
              do
              {
                v34 = _mm_loadu_si128(v29);
                v26 += 32;
                v29 += 2;
                *(__m128i *)(v26 - 32) = v34;
                *(__m128i *)(v26 - 16) = _mm_loadu_si128(v29 - 1);
              }
              while ( v30-- != 0 );
            }
            v44 = v28;
            v43 = (const __m128i *)v27;
            v42.m128i_i64[1] = __PAIR64__(v33, _mm_cvtsi128_si32(v32));
            v42.m128i_i64[0] = v31;
            qfree();
            v36 = v43;
            v25 = v42.m128i_i32[3];
            v24 = _mm_cvtsi32_si128(v42.m128i_u32[2]);
            v23 = _mm_loadl_epi64(&v42);
            v16 = v41;
            v6[2] = v44;
            v37 = v6[1];
            *v6 = v36;
            v20 = (__m128i *)&v36[2 * (_QWORD)v37];
          }
          v20[1].m128i_i32[2] = v25;
          *v20 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v21, v23);
          v20[1].m128i_i64[0] = _mm_unpacklo_epi32(v24, _mm_cvtsi32_si128(v19)).m128i_u64[0];
          v6[1] = (const __m128i *)((char *)v6[1] + 1);
        }
        else
        {
          if ( v18->m128i_i64[0] > v21 )
            v18->m128i_i64[0] = v21;
          v22 = *(_QWORD *)(v17 + 8);
          if ( v22 > v18->m128i_i64[1] )
            v18->m128i_i64[1] = v22;
        }
        v17 += 32;
        if ( v17 == *v16 + 32LL * v16[1] )
          goto LABEL_30;
        continue;
      }
    }
    a1 = *(_QWORD **)a1[3];
  }
  sub_1872C0(a2, (__int64)(v10 + 32));
LABEL_33:
  if ( !v6[1] )
    return nullptr;
  return v6;
}

