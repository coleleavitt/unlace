__int64 __fastcall sub_18640(__m128i *a1, __m128i *a2)
{
  __int64 result; // rax
  __m128i *v4; // rbp
  __int64 v5; // r8
  signed int v6; // ecx
  __int64 *v7; // r14
  __m128i *v8; // rbx
  __m128i v9; // xmm6
  __m128i v10; // xmm7
  __m128i v11; // xmm5
  __int64 v12; // rax
  __m128i v13; // xmm0
  __m128i v14; // xmm6
  __int64 v15; // rax
  unsigned __int64 v16; // r15
  __int64 *v17; // rbx
  __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rbp
  __m128i v22; // xmm0
  __int64 v23; // rdi
  __int64 v24; // rbp
  __m128i v25; // xmm0
  __int64 v26; // rdi
  __int64 v27; // rbp
  __m128i v28; // xmm0
  int v29; // edx
  __m128i v30; // xmm0
  int v31; // edx
  __int64 v32; // rdi
  __m128i v33; // xmm5
  __int64 v34; // rdi
  __m128i v35; // xmm6
  __int64 v36; // rdi
  __m128i v37; // xmm7
  __m128i si128; // xmm0
  unsigned __int64 v39; // rax
  __m128i v40; // [rsp+0h] [rbp-138h] BYREF
  __int64 v41; // [rsp+18h] [rbp-120h]
  __int64 v42; // [rsp+20h] [rbp-118h]
  __int64 v43; // [rsp+28h] [rbp-110h]
  char v44; // [rsp+36h] [rbp-102h]
  unsigned __int8 v45; // [rsp+37h] [rbp-101h]
  unsigned __int64 v46; // [rsp+38h] [rbp-100h]
  __m128i v47; // [rsp+40h] [rbp-F8h] BYREF
  __m128i v48; // [rsp+50h] [rbp-E8h] BYREF
  __m128i v49; // [rsp+60h] [rbp-D8h] BYREF
  __m128i *v50; // [rsp+70h] [rbp-C8h]
  __m128i *v51; // [rsp+78h] [rbp-C0h]
  __m128i v52[5]; // [rsp+E0h] [rbp-58h] BYREF

  if ( a1 != a2 )
  {
    result = (__int64)&a1[7].m128i_i64[1];
    if ( a2 != (__m128i *)&a1[7].m128i_u64[1] )
    {
      v4 = a1 + 15;
      do
      {
        v5 = v4[-8].m128i_i64[1];
        v6 = v4[-3].m128i_i32[3];
        v7 = &v4[-8].m128i_i64[1];
        v8 = v4;
        if ( v5 == a1->m128i_i64[0] )
        {
          if ( v6 < a1[5].m128i_i32[1] )
          {
LABEL_6:
            v9 = _mm_loadu_si128((__m128i *)((char *)v4 - 104));
            v10 = _mm_loadu_si128(v4 - 5);
            v11 = _mm_cvtsi32_si128(v4[-3].m128i_u32[2]);
            v41 = v4[-7].m128i_i64[0];
            v12 = v4[-6].m128i_i64[1];
            v13 = _mm_loadu_si128((__m128i *)((char *)v4 - 24));
            v48 = v9;
            v14 = _mm_loadu_si128((__m128i *)((char *)v4 - 56));
            v42 = v12;
            v15 = v4[-4].m128i_i64[0];
            v49 = v10;
            v43 = v15;
            LOBYTE(v15) = v4[-2].m128i_i8[0];
            v4[-7].m128i_i64[0] = 0;
            v16 = 0xEEEEEEEEEEEEEEEFLL * (((char *)v7 - (char *)a1) >> 3);
            v44 = v15;
            LOBYTE(v15) = v4[-1].m128i_i8[8];
            v4[-6].m128i_i64[1] = 0;
            v4[-4].m128i_i64[0] = 0;
            v45 = v15;
            *(__m128i *)((char *)&v4[-7] + 8) = 0;
            v4[-5] = 0;
            v47 = v14;
            *(__m128i *)((char *)&v4[-4] + 8) = 0;
            v46 = _mm_unpacklo_epi32(v11, _mm_cvtsi32_si128(v6)).m128i_u64[0];
            v52[0] = v13;
            if ( (char *)v7 - (char *)a1 > 0 )
            {
              v51 = v4;
              v50 = v4;
              v17 = &v4[-8].m128i_i64[1];
              v18 = v5;
              do
              {
                v19 = *(v17 - 15);
                v20 = v17[1];
                v17 -= 15;
                v21 = v17[1];
                v22 = _mm_loadu_si128((const __m128i *)v17 + 1);
                *((_OWORD *)v17 + 1) = 0;
                v17[1] = 0;
                v17[15] = v19;
                if ( v20 )
                {
                  v17[17] = 0;
                  v40 = v22;
                  qfree();
                  v22 = _mm_load_si128(&v40);
                }
                v23 = v17[19];
                v17[16] = v21;
                *(__m128i *)(v17 + 17) = v22;
                v24 = v17[4];
                v25 = _mm_loadu_si128((const __m128i *)(v17 + 5));
                v17[4] = 0;
                *(_OWORD *)(v17 + 5) = 0;
                if ( v23 )
                {
                  v17[20] = 0;
                  v40 = v25;
                  qfree();
                  v25 = _mm_load_si128(&v40);
                }
                v26 = v17[22];
                v17[19] = v24;
                *((__m128i *)v17 + 10) = v25;
                v27 = v17[7];
                v28 = _mm_loadu_si128((const __m128i *)v17 + 4);
                v17[7] = 0;
                *((_OWORD *)v17 + 4) = 0;
                if ( v26 )
                {
                  v17[23] = 0;
                  v40 = v28;
                  qfree();
                  v28 = _mm_load_si128(&v40);
                }
                v29 = *((_DWORD *)v17 + 20);
                *(__m128i *)(v17 + 23) = v28;
                v30 = _mm_loadu_si128((const __m128i *)v17 + 6);
                v17[22] = v27;
                *((_DWORD *)v17 + 50) = v29;
                v31 = *((_DWORD *)v17 + 21);
                *(__m128i *)(v17 + 27) = v30;
                *((_DWORD *)v17 + 51) = v31;
                *((_BYTE *)v17 + 208) = *((_BYTE *)v17 + 88);
                *((_BYTE *)v17 + 232) = *((_BYTE *)v17 + 112);
                --v16;
              }
              while ( v16 );
              v8 = v50;
              v4 = v51;
              v5 = v18;
            }
            v32 = a1->m128i_i64[1];
            a1->m128i_i64[0] = v5;
            if ( v32 )
            {
              a1[1].m128i_i64[0] = 0;
              qfree();
            }
            v33 = _mm_load_si128(&v48);
            v34 = a1[2].m128i_i64[0];
            a1->m128i_i64[1] = v41;
            a1[1] = v33;
            if ( v34 )
            {
              a1[2].m128i_i64[1] = 0;
              qfree();
            }
            v35 = _mm_load_si128(&v49);
            v36 = a1[3].m128i_i64[1];
            a1[2].m128i_i64[0] = v42;
            *(__m128i *)((char *)a1 + 40) = v35;
            if ( v36 )
            {
              a1[4].m128i_i64[0] = 0;
              qfree();
            }
            v37 = _mm_load_si128(&v47);
            si128 = _mm_load_si128(v52);
            a1[3].m128i_i64[1] = v43;
            v39 = v46;
            a1[4] = v37;
            a1[5].m128i_i64[0] = v39;
            LOBYTE(v39) = v44;
            a1[6] = si128;
            a1[5].m128i_i8[8] = v39;
            result = v45;
            a1[7].m128i_i8[0] = v45;
            goto LABEL_23;
          }
        }
        else if ( v5 < a1->m128i_i64[0] )
        {
          goto LABEL_6;
        }
        result = sub_18370(&v4[-8].m128i_i64[1]);
LABEL_23:
        v4 = (__m128i *)((char *)v4 + 120);
      }
      while ( a2 != v8 );
    }
  }
  return result;
}

