void __fastcall sub_7A040(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // r12
  __m128i *v11; // r15
  __int64 v12; // rax
  __int64 v13; // r10
  __int64 v14; // r14
  unsigned __int8 v15; // al
  __int64 v16; // r10
  __int64 v17; // rax
  __int64 v18; // rax
  __m128i v19; // xmm2
  __m128i v20; // xmm3
  __int64 v21; // r15
  __int64 v22; // r14
  __int64 v23; // r12
  __int64 v24; // rbp
  __int64 v25; // rbx
  __int64 v26; // rax
  __m128i si128; // xmm1
  __int64 v28; // rdi
  __int64 v29; // rax
  __m128i v30; // xmm0
  __int64 v31; // rdi
  __int64 v32; // rdi
  __m128i v33; // xmm4
  __int64 v34; // rdi
  __m128i v35; // xmm5
  unsigned __int8 (__fastcall *v36[3])(__int64, __int64); // [rsp+0h] [rbp-88h] BYREF
  __int64 v37; // [rsp+18h] [rbp-70h]
  __m128i v38; // [rsp+20h] [rbp-68h] BYREF
  __int64 v39; // [rsp+30h] [rbp-58h]
  __int64 v40; // [rsp+38h] [rbp-50h]
  __m128i v41[4]; // [rsp+40h] [rbp-48h] BYREF

  v40 = a3;
  v36[0] = (unsigned __int8 (__fastcall *)(__int64, __int64))a6;
  if ( a4 )
  {
    v8 = a4;
    v9 = a5;
    if ( a5 )
    {
      if ( a5 + a4 == 2 )
      {
LABEL_9:
        v37 = a1;
        v15 = v36[0](a2, a1);
        v16 = v37;
        if ( v15 )
        {
          v18 = *(_QWORD *)(v37 + 56);
          v19 = _mm_loadu_si128((const __m128i *)(v37 + 40));
          *(_QWORD *)(v37 + 56) = 0;
          *(_OWORD *)(v16 + 40) = 0;
          v20 = _mm_loadu_si128((const __m128i *)(v16 + 64));
          v21 = *(_QWORD *)(v16 + 32);
          *(_OWORD *)(v16 + 64) = 0;
          v22 = *(_QWORD *)v16;
          v23 = *(_QWORD *)(v16 + 8);
          v24 = *(_QWORD *)(v16 + 16);
          v25 = *(_QWORD *)(v16 + 24);
          v37 = v18;
          *(_QWORD *)(v16 + 32) = 0;
          *(__m128i *)v36 = v19;
          *(__m128i *)v16 = _mm_loadu_si128((const __m128i *)a2);
          v38 = v20;
          *(__m128i *)(v16 + 16) = _mm_loadu_si128((const __m128i *)(a2 + 16));
          v26 = *(_QWORD *)(a2 + 32);
          si128 = _mm_loadu_si128((const __m128i *)(a2 + 40));
          *(_QWORD *)(a2 + 32) = 0;
          *(_OWORD *)(a2 + 40) = 0;
          v28 = *(_QWORD *)(v16 + 32);
          if ( v28 )
          {
            *(_QWORD *)(v16 + 40) = 0;
            v40 = v26;
            v39 = v16;
            v41[0] = si128;
            qfree(v28);
            si128 = _mm_load_si128(v41);
            v26 = v40;
            v16 = v39;
          }
          *(__m128i *)(v16 + 40) = si128;
          *(_QWORD *)(v16 + 32) = v26;
          v29 = *(_QWORD *)(a2 + 56);
          v30 = _mm_loadu_si128((const __m128i *)(a2 + 64));
          *(_QWORD *)(a2 + 56) = 0;
          *(_OWORD *)(a2 + 64) = 0;
          v31 = *(_QWORD *)(v16 + 56);
          if ( v31 )
          {
            *(_QWORD *)(v16 + 64) = 0;
            v40 = v29;
            v39 = v16;
            v41[0] = v30;
            qfree(v31);
            v30 = _mm_load_si128(v41);
            v29 = v40;
            v16 = v39;
          }
          *(_QWORD *)(v16 + 56) = v29;
          *(__m128i *)(v16 + 64) = v30;
          v32 = *(_QWORD *)(a2 + 32);
          *(_QWORD *)a2 = v22;
          *(_QWORD *)(a2 + 8) = v23;
          *(_QWORD *)(a2 + 16) = v24;
          *(_QWORD *)(a2 + 24) = v25;
          if ( v32 )
          {
            *(_QWORD *)(a2 + 40) = 0;
            qfree(v32);
          }
          v33 = _mm_load_si128((const __m128i *)v36);
          v34 = *(_QWORD *)(a2 + 56);
          *(_QWORD *)(a2 + 32) = v21;
          *(__m128i *)(a2 + 40) = v33;
          if ( v34 )
          {
            *(_QWORD *)(a2 + 64) = 0;
            qfree(v34);
          }
          v35 = _mm_load_si128(&v38);
          *(_QWORD *)(a2 + 56) = v37;
          *(__m128i *)(a2 + 64) = v35;
        }
      }
      else
      {
        while ( 1 )
        {
          v38.m128i_i64[0] = a1;
          if ( v9 >= v8 )
          {
            v14 = v9 / 2;
            v37 = a2 + 80 * (v9 / 2);
            v17 = sub_79FB0(a1, a2, v37, v36[0]);
            v13 = v38.m128i_i64[0];
            v11 = (__m128i *)v17;
            v10 = 0xCCCCCCCCCCCCCCCDLL * ((v17 - v38.m128i_i64[0]) >> 4);
          }
          else
          {
            v10 = v8 / 2;
            v11 = (__m128i *)(a1 + 80 * (v8 / 2));
            v12 = sub_79F20(a2, v40, (__int64)v11, v36[0]);
            v13 = v38.m128i_i64[0];
            v37 = v12;
            v14 = 0xCCCCCCCCCCCCCCCDLL * ((v12 - a2) >> 4);
          }
          v38.m128i_i64[0] = v13;
          v9 -= v14;
          v39 = sub_70510(v11, a2, v37);
          sub_7A040(v38.m128i_i64[0], v11, v39, v10, v14, v36[0]);
          v8 -= v10;
          if ( !v8 || !v9 )
            break;
          a1 = v39;
          a2 = v37;
          if ( v9 + v8 == 2 )
            goto LABEL_9;
        }
      }
    }
  }
}

