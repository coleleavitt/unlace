__int64 __fastcall sub_3E3F40(__int64 a1)
{
  __int64 i; // rax
  __m128i *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rax
  unsigned __int64 v7; // r14
  __int64 v8; // r12
  __m128i v9; // xmm1
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rsi
  __m128i *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rsi
  const __m128i *v16; // rdi
  __m128i v17; // xmm1
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __m128i v21; // xmm0
  bool v22; // cf
  __int64 v23; // rsi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rsi
  const __m128i *v28; // rdi
  __m128i v29; // xmm1
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __m128i v33; // xmm0
  __int64 v34; // rsi
  __m128i v35; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+18h] [rbp-90h]
  __int64 v37; // [rsp+20h] [rbp-88h]
  __m128i v38; // [rsp+28h] [rbp-80h] BYREF
  __int64 v39; // [rsp+40h] [rbp-68h] BYREF
  __int64 v40; // [rsp+48h] [rbp-60h]
  __m128i v41; // [rsp+50h] [rbp-58h]
  unsigned __int64 v42; // [rsp+68h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  for ( i = netnode_supfirst(); ; i = netnode_supnext() )
  {
    v5 = i;
    if ( i == -1 )
      break;
    v38 = 0;
    v37 = 0;
    netnode_qsupstr();
    v6 = *(_QWORD *)(a1 + 8);
    v7 = *(_QWORD *)a1;
    v8 = v37;
    v9 = _mm_loadu_si128(&v38);
    v39 = v5;
    v10 = *(_QWORD *)(a1 + 16);
    v38 = 0;
    v11 = v6 + 1;
    v40 = v37;
    v37 = 0;
    v41 = v9;
    if ( (unsigned __int64)&v39 < v7 || (unsigned __int64)&v39 >= v7 + 32 * v10 )
    {
      if ( v10 < v11 )
      {
        v35 = v9;
        v13 = qvector_reserve();
        v14 = *(_QWORD *)(a1 + 8);
        v15 = *(_QWORD *)(a1 + 16);
        v7 = v13;
        *(_QWORD *)(a1 + 16) = v10;
        v16 = *(const __m128i **)a1;
        v17 = _mm_load_si128(&v35);
        v18 = v14 - 1;
        if ( v18 >= 0 )
        {
          do
          {
            v19 = v16->m128i_i64[0];
            v13 += 32;
            v16 += 2;
            *(_QWORD *)(v13 - 32) = v19;
            v20 = v16[-2].m128i_i64[1];
            v21 = _mm_loadu_si128(v16 - 1);
            v16[-2].m128i_i64[1] = 0;
            *(_QWORD *)(v13 - 24) = v20;
            *(__m128i *)(v13 - 16) = v21;
            v16[-1].m128i_i64[1] = 0;
            v22 = v18-- == 0;
          }
          while ( !v22 );
        }
        v36 = v15;
        v35 = v17;
        qfree();
        v23 = v36;
        v6 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)a1 = v7;
        v9 = _mm_load_si128(&v35);
        *(_QWORD *)(a1 + 16) = v23;
      }
      v12 = (__m128i *)(32 * v6 + v7);
      v12->m128i_i64[0] = v5;
      v12->m128i_i64[1] = v8;
      v12[1] = v9;
    }
    else
    {
      v40 = 0;
      v41 = 0;
      if ( v10 < v11 )
      {
        v35 = v9;
        v25 = qvector_reserve();
        v26 = *(_QWORD *)(a1 + 8);
        v27 = *(_QWORD *)(a1 + 16);
        v7 = v25;
        *(_QWORD *)(a1 + 16) = v10;
        v28 = *(const __m128i **)a1;
        v29 = _mm_load_si128(&v35);
        v30 = v26 - 1;
        if ( v30 >= 0 )
        {
          do
          {
            v31 = v28->m128i_i64[0];
            v25 += 32;
            v28 += 2;
            *(_QWORD *)(v25 - 32) = v31;
            v32 = v28[-2].m128i_i64[1];
            v33 = _mm_loadu_si128(v28 - 1);
            v28[-2].m128i_i64[1] = 0;
            *(_QWORD *)(v25 - 24) = v32;
            *(__m128i *)(v25 - 16) = v33;
            v28[-1].m128i_i64[1] = 0;
            v22 = v30-- == 0;
          }
          while ( !v22 );
        }
        v36 = v27;
        v35 = v29;
        qfree();
        v34 = v36;
        v6 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)a1 = v7;
        v9 = _mm_load_si128(&v35);
        *(_QWORD *)(a1 + 16) = v34;
      }
      v3 = (__m128i *)(v7 + 32 * v6);
      v3->m128i_i64[0] = v5;
      v3->m128i_i64[1] = v8;
      v3[1] = v9;
    }
    v4 = v37;
    ++*(_QWORD *)(a1 + 8);
    if ( v4 )
    {
      v38.m128i_i64[0] = 0;
      qfree();
    }
  }
  return a1;
}

