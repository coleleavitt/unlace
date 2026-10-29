__int64 __fastcall sub_197580(__int64 a1, unsigned __int8 **a2, __m128 a3)
{
  unsigned int v4; // r14d
  int v6; // eax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rbp
  int v9; // r13d
  __int64 v10; // rax
  __int64 v11; // rbp
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rdi
  __m128i v16; // xmm1
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  const __m128i *v21; // rdi
  __int64 v22; // r15
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __m128i v26; // xmm0
  bool v27; // cf
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r15
  const __m128i *v33; // rdx
  __int64 v34; // rcx
  __m128i v35; // xmm0
  __int64 v36; // [rsp+8h] [rbp-70h]
  __int64 v37; // [rsp+8h] [rbp-70h]
  __m128i v38; // [rsp+10h] [rbp-68h] BYREF
  __m128i v39; // [rsp+20h] [rbp-58h] BYREF
  __int64 v40; // [rsp+30h] [rbp-48h]
  unsigned __int64 v41; // [rsp+38h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  v4 = sub_7F010(a1, a2, *(double *)a3.m128_u64);
  if ( (_BYTE)v4 )
  {
    v6 = sub_7CD20(a2, *(double *)a3.m128_u64);
    v7 = *(_QWORD *)(a1 + 72);
    v8 = v6;
    if ( v6 != v7 )
    {
      a3.m128_u64[0] = 0;
      LOBYTE(v40) = 0;
      v39.m128i_i64[0] = -1;
      v39.m128i_i64[1] = -1;
      v38 = 0;
      if ( v6 >= v7 )
      {
        v12 = *(_QWORD *)(a1 + 64);
        v13 = *(_QWORD *)(a1 + 80);
        if ( (unsigned __int64)&v38 < v12 || (unsigned __int64)&v38 >= v12 + 40 * v13 )
        {
          if ( v13 >= v6 )
            goto LABEL_18;
          v19 = qvector_reserve(a1 + 64, 0, v6, 40);
          v20 = *(_QWORD *)(a1 + 72);
          v21 = *(const __m128i **)(a1 + 64);
          v22 = v19;
          v23 = *(_QWORD *)(a1 + 80);
          *(_QWORD *)(a1 + 80) = v13;
          v24 = v20 - 1;
          if ( v24 >= 0 )
          {
            v25 = v22;
            do
            {
              v26 = _mm_loadu_si128(v21);
              v25 += 40;
              v21 = (const __m128i *)((char *)v21 + 40);
              *(__m128i *)(v25 - 40) = v26;
              a3 = (__m128)_mm_loadu_si128((const __m128i *)((char *)v21 - 24));
              *(__m128 *)(v25 - 24) = a3;
              *(_QWORD *)(v25 - 8) = v21[-1].m128i_i64[1];
              v27 = v24-- == 0;
            }
            while ( !v27 );
            v21 = *(const __m128i **)(a1 + 64);
          }
          v36 = v23;
          qfree((__int64)v21);
          v7 = *(_QWORD *)(a1 + 72);
          v12 = v22;
          *(_QWORD *)(a1 + 64) = v22;
          *(_QWORD *)(a1 + 80) = v36;
          if ( v7 < v8 )
          {
LABEL_18:
            v16 = _mm_load_si128(&v38);
            a3 = (__m128)_mm_load_si128(&v39);
            v17 = v40;
            v18 = 40 * v7;
            while ( 1 )
            {
              ++v7;
              *(_QWORD *)(v12 + v18 + 32) = v17;
              *(__m128i *)(v12 + v18) = v16;
              *(__m128 *)(v12 + v18 + 16) = a3;
              v18 += 40;
              if ( v8 == v7 )
                break;
              v12 = *(_QWORD *)(a1 + 64);
            }
          }
        }
        else
        {
          if ( v13 >= v6 )
            goto LABEL_13;
          v28 = qvector_reserve(a1 + 64, 0, v6, 40);
          v29 = *(_QWORD *)(a1 + 64);
          v30 = *(_QWORD *)(a1 + 72);
          v31 = *(_QWORD *)(a1 + 80);
          v32 = v28;
          *(_QWORD *)(a1 + 80) = v13;
          v33 = (const __m128i *)v29;
          v34 = v30 - 1;
          if ( v34 >= 0 )
          {
            do
            {
              v35 = _mm_loadu_si128(v33);
              v28 += 40;
              v33 = (const __m128i *)((char *)v33 + 40);
              *(__m128i *)(v28 - 40) = v35;
              a3 = (__m128)_mm_loadu_si128((const __m128i *)((char *)v33 - 24));
              *(__m128 *)(v28 - 24) = a3;
              *(_QWORD *)(v28 - 8) = v33[-1].m128i_i64[1];
              v27 = v34-- == 0;
            }
            while ( !v27 );
            v29 = *(_QWORD *)(a1 + 64);
          }
          v37 = v31;
          qfree(v29);
          v7 = *(_QWORD *)(a1 + 72);
          v12 = v32;
          *(_QWORD *)(a1 + 64) = v32;
          *(_QWORD *)(a1 + 80) = v37;
          if ( v7 < v8 )
          {
LABEL_13:
            a3.m128_u64[0] = 0;
            v14 = 40 * v7;
            while ( 1 )
            {
              v15 = v14 + v12;
              ++v7;
              v14 += 40;
              *(_QWORD *)(v15 + 16) = -1;
              *(_QWORD *)(v15 + 24) = -1;
              *(_BYTE *)(v15 + 32) = 0;
              *(_OWORD *)v15 = 0;
              if ( v8 == v7 )
                break;
              v12 = *(_QWORD *)(a1 + 64);
            }
          }
        }
        *(_QWORD *)(a1 + 72) = v8;
        goto LABEL_7;
      }
      *(_QWORD *)(a1 + 72) = v6;
      v7 = v6;
    }
    if ( !v7 )
    {
LABEL_9:
      *(_QWORD *)(a1 + 104) = sub_7CEC0(a2, *(double *)a3.m128_u64) - 1;
      *(_DWORD *)(a1 + 112) = sub_7CD20(a2, *(double *)a3.m128_u64) - 1;
      *(_BYTE *)(a1 + 116) = (unsigned __int8)sub_7CD00(a2, *(double *)a3.m128_u64) != 0;
      return v4;
    }
LABEL_7:
    v9 = 0;
    v10 = 0;
    do
    {
      v11 = *(_QWORD *)(a1 + 64) + 40 * v10;
      *(_QWORD *)(v11 + 24) = sub_7CEC0(a2, *(double *)a3.m128_u64);
      *(_QWORD *)(v11 + 16) = sub_7CEC0(a2, *(double *)a3.m128_u64);
      *(_BYTE *)(v11 + 32) = (unsigned __int8)sub_7CD00(a2, *(double *)a3.m128_u64) != 0;
      v10 = ++v9;
    }
    while ( (unsigned __int64)v9 < *(_QWORD *)(a1 + 72) );
    goto LABEL_9;
  }
  return v4;
}

