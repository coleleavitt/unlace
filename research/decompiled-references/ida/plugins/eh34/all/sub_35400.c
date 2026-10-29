__int64 __fastcall sub_35400(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // r8
  __int64 v6; // r15
  __int64 v9; // rdi
  __int64 v10; // rsi
  unsigned int v11; // edx
  signed int v12; // r12d
  int i; // ecx
  __int64 v14; // rax
  __m128i v15; // xmm0
  signed int v16; // eax
  __m128i v17; // xmm2
  __int64 v18; // rax
  __m128i v19; // xmm1
  __int64 v20; // r12
  __int64 v21; // rax
  __m128i v22; // xmm0
  __int64 v23; // rax
  const __m128i *v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rax
  _QWORD *v27; // rsi
  __m128i v28; // xmm1
  const __m128i *v29; // rcx
  __int64 v30; // rax
  __m128i v31; // xmm0
  __int64 v33; // [rsp+8h] [rbp-B0h]
  __m128i v34; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+20h] [rbp-98h]
  _QWORD *v36; // [rsp+28h] [rbp-90h]
  __int64 v37; // [rsp+30h] [rbp-88h] BYREF
  __m128i v38; // [rsp+38h] [rbp-80h] BYREF
  char v39; // [rsp+48h] [rbp-70h]
  __int64 v40; // [rsp+50h] [rbp-68h] BYREF
  __m128i v41; // [rsp+58h] [rbp-60h] BYREF
  char v42; // [rsp+68h] [rbp-50h]
  unsigned __int64 v43; // [rsp+78h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a2 + 560) + ((__int64)(int)a3 << 6);
  if ( (*(_BYTE *)(v5 + 16) & 1) != 0
    || (v6 = *(_QWORD *)(a2 + 560) + ((__int64)(int)a3 << 6), !*(_BYTE *)(v5 + 12))
    || (v9 = a2, !(unsigned __int8)sub_342D0(a2, a3))
    || (*(_QWORD *)(v6 + 48) = 0, v10 = (__int64)&v40, v33 = *(_QWORD *)(a2 + 504), v35 = a2 + 488, v33 == a2 + 488) )
  {
LABEL_3:
    *(_BYTE *)(a1 + 24) = 0;
    return a1;
  }
  while ( 1 )
  {
    v11 = *(_DWORD *)(v33 + 32);
    if ( !*(_BYTE *)(v6 + 12) )
      sub_7964(v9, v10);
    if ( *(_DWORD *)(v6 + 8) == v11 )
      goto LABEL_21;
    v10 = a3;
    sub_34360(a2, a3, v11);
    if ( *(_BYTE *)(a2 + 468) )
    {
      sub_28EA0((__int64)&v37, a2, *(_DWORD *)v6);
      v10 = a2;
      sub_28EA0((__int64)&v40, a2, *(_DWORD *)(v6 + 4));
      if ( !*(_BYTE *)(v6 + 12) )
        sub_7964(&v40, a2);
      if ( v40 )
      {
        v41.m128i_i64[0] = 0;
        qfree(v40);
      }
      if ( v37 )
      {
        v38.m128i_i64[0] = 0;
        qfree(v37);
      }
    }
    v12 = *(_DWORD *)(v6 + 4);
    if ( v12 >= *(_DWORD *)v6 )
      break;
LABEL_17:
    v16 = *(_DWORD *)(a2 + 772);
    if ( v16 > 0 )
    {
      v17 = _mm_cvtsi32_si128(v16);
      v18 = *(_QWORD *)(v6 + 48);
      v19 = _mm_unpacklo_epi64(
              _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(a2 + 760)), _mm_cvtsi32_si128(*(_DWORD *)(a2 + 764))),
              _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(a2 + 768)), v17));
      if ( *(_QWORD *)(v6 + 56) < (unsigned __int64)(v18 + 1) )
      {
        v36 = *(_QWORD **)(v6 + 56);
        v34 = v19;
        v23 = qvector_reserve(v6 + 40, 0, v18 + 1, 16);
        v24 = *(const __m128i **)(v6 + 40);
        v20 = v23;
        v25 = v23;
        v26 = *(_QWORD *)(v6 + 48);
        v27 = *(_QWORD **)(v6 + 56);
        v28 = _mm_load_si128(&v34);
        *(_QWORD *)(v6 + 56) = v36;
        v29 = v24;
        v30 = v26 - 1;
        if ( v30 >= 0 )
        {
          do
          {
            v31 = _mm_loadu_si128(v29);
            v25 += 16;
            ++v29;
            *(__m128i *)(v25 - 16) = v31;
          }
          while ( v30-- != 0 );
          v24 = *(const __m128i **)(v6 + 40);
        }
        v36 = v27;
        v34 = v28;
        qfree(v24);
        v10 = (__int64)v36;
        *(_QWORD *)(v6 + 40) = v20;
        v18 = *(_QWORD *)(v6 + 48);
        v19 = _mm_load_si128(&v34);
        *(_QWORD *)(v6 + 56) = v10;
      }
      else
      {
        v20 = *(_QWORD *)(v6 + 40);
      }
      *(__m128i *)(v20 + 16 * v18) = v19;
      ++*(_QWORD *)(v6 + 48);
    }
LABEL_21:
    v9 = v33;
    v33 = std::_Rb_tree_increment(v33);
    if ( v35 == v33 )
      goto LABEL_3;
  }
  for ( i = *(_DWORD *)(v6 + 4); ; i = *(_DWORD *)(v6 + 4) )
  {
    sub_34640((__int64)&v37, a2, v12, i);
    if ( v39 )
    {
      v14 = v37;
      v15 = _mm_loadu_si128(&v38);
      *(_BYTE *)(a1 + 24) = 1;
      *(_QWORD *)a1 = v14;
      *(__m128i *)(a1 + 8) = v15;
      return a1;
    }
    v10 = a2;
    sub_351F0((__int64)&v40, a2, v37);
    if ( v42 )
      break;
    if ( *(_DWORD *)v6 > --v12 )
      goto LABEL_17;
  }
  v21 = v40;
  v22 = _mm_loadu_si128(&v41);
  *(_BYTE *)(a1 + 24) = 1;
  *(_QWORD *)a1 = v21;
  *(__m128i *)(a1 + 8) = v22;
  return a1;
}

