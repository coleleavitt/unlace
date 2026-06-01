unsigned __int64 __fastcall sub_289F0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r14
  __int64 v6; // r12
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int16 v11; // si
  __m128i v12; // xmm1
  __m128i v13; // xmm0
  __m128i v14; // xmm2
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r13
  __m128i v18; // xmm6
  __m128i v19; // xmm7
  __int64 v20; // r13
  __int64 v21; // r12
  __m128 v22; // xmm4
  __int16 v23; // ax
  __int64 v24; // r15
  __m128i v25; // xmm0
  __int64 v26; // rdx
  __m128i v27; // xmm0
  __int64 v28; // rdi
  __int64 v29; // rdx
  __m128i v30; // xmm0
  __m128i v31; // xmm7
  __int64 v32; // rdx
  __m128i v33; // xmm1
  __m128i v34; // xmm2
  __int16 v35; // ax
  __int64 v36; // r12
  __m128i v38; // [rsp+0h] [rbp-F8h] BYREF
  __m128i v39; // [rsp+10h] [rbp-E8h] BYREF
  __m128i v40; // [rsp+20h] [rbp-D8h] BYREF
  unsigned __int64 v41; // [rsp+30h] [rbp-C8h]
  __int64 v42; // [rsp+38h] [rbp-C0h]
  __m128i v43; // [rsp+40h] [rbp-B8h] BYREF
  __m128i v44; // [rsp+50h] [rbp-A8h] BYREF
  __m128i v45; // [rsp+60h] [rbp-98h] BYREF
  __int64 v46; // [rsp+70h] [rbp-88h]
  __m128i v47; // [rsp+78h] [rbp-80h]
  __int64 v48; // [rsp+88h] [rbp-70h]
  __m128i v49; // [rsp+90h] [rbp-68h]
  __int64 v50; // [rsp+A0h] [rbp-58h]
  __int16 v51; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v52; // [rsp+B8h] [rbp-40h]

  v3 = a2;
  v52 = __readfsqword(0x28u);
  v39.m128i_i64[0] = a2 - a1;
  if ( (__int64)(a2 - a1) > 80 )
  {
    v38.m128i_i64[0] = (__int64)&v45;
    v41 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(a2 - a1) >> 4);
    v6 = (__int64)(v41 - 2) / 2;
    v7 = a1 + 80 * v6;
    while ( 1 )
    {
      v8 = *(_QWORD *)(v7 + 16);
      v9 = *(_QWORD *)(v7 + 40);
      *(_QWORD *)(v7 + 16) = 0;
      v10 = *(_QWORD *)(v7 + 64);
      v11 = *(_WORD *)(v7 + 72);
      *(_QWORD *)(v7 + 40) = 0;
      v12 = _mm_loadu_si128((const __m128i *)(v7 + 24));
      v13 = _mm_loadu_si128((const __m128i *)(v7 + 48));
      v46 = v8;
      v14 = _mm_loadu_si128((const __m128i *)v7);
      v48 = v9;
      v15 = v38.m128i_i64[0];
      v16 = v41;
      v50 = v10;
      v51 = v11;
      *(_OWORD *)(v7 + 24) = 0;
      *(_OWORD *)(v7 + 48) = 0;
      v45 = v14;
      v47 = v12;
      v49 = v13;
      sub_1A0D0(a1, v6, v16, v15);
      v17 = v46;
      if ( v48 )
        qfree();
      if ( v17 )
        qfree();
      v7 -= 80;
      if ( !v6 )
        break;
      --v6;
    }
  }
  if ( v3 < a3 )
  {
    v42 = 0xCCCCCCCCCCCCCCCDLL * (v39.m128i_i64[0] >> 4);
    do
    {
      while ( 1 )
      {
        if ( *(_QWORD *)a1 >= *(_QWORD *)v3
          && (*(_QWORD *)v3 != *(_QWORD *)a1 || *(_QWORD *)(v3 + 8) < *(_QWORD *)(a1 + 8)) )
        {
          v18 = _mm_loadu_si128((const __m128i *)(v3 + 24));
          v19 = _mm_loadu_si128((const __m128i *)(v3 + 48));
          *(_OWORD *)(v3 + 24) = 0;
          v20 = *(_QWORD *)(v3 + 16);
          v21 = *(_QWORD *)(v3 + 40);
          v22 = _mm_loadh_ps((const double *)(v3 + 8));
          *(_OWORD *)(v3 + 48) = 0;
          v23 = *(_WORD *)(v3 + 72);
          v24 = *(_QWORD *)(v3 + 64);
          *(_QWORD *)(v3 + 16) = 0;
          *(_QWORD *)(v3 + 40) = 0;
          v25 = _mm_loadu_si128((const __m128i *)a1);
          LOWORD(v41) = v23;
          *(__m128i *)v3 = v25;
          v26 = *(_QWORD *)(a1 + 16);
          v27 = _mm_loadu_si128((const __m128i *)(a1 + 24));
          *(_QWORD *)(a1 + 16) = 0;
          *(_OWORD *)(a1 + 24) = 0;
          v28 = *(_QWORD *)(v3 + 16);
          v38 = (__m128i)v22;
          v39 = v18;
          v40 = v19;
          if ( v28 )
          {
            *(_QWORD *)(v3 + 24) = 0;
            v44.m128i_i64[0] = v26;
            v43 = v27;
            qfree();
            v26 = v44.m128i_i64[0];
            v27 = _mm_load_si128(&v43);
          }
          *(_QWORD *)(v3 + 16) = v26;
          *(__m128i *)(v3 + 24) = v27;
          v29 = *(_QWORD *)(a1 + 40);
          v30 = _mm_loadu_si128((const __m128i *)(a1 + 48));
          *(_QWORD *)(a1 + 40) = 0;
          *(_OWORD *)(a1 + 48) = 0;
          if ( *(_QWORD *)(v3 + 40) )
          {
            *(_QWORD *)(v3 + 48) = 0;
            v43.m128i_i64[0] = v29;
            v44 = v30;
            qfree();
            v30 = _mm_load_si128(&v44);
            v29 = v43.m128i_i64[0];
          }
          *(_QWORD *)(v3 + 40) = v29;
          v31 = _mm_load_si128(&v38);
          *(__m128i *)(v3 + 48) = v30;
          v32 = *(_QWORD *)(a1 + 64);
          v33 = _mm_load_si128(&v39);
          v34 = _mm_load_si128(&v40);
          v35 = v41;
          v48 = v21;
          *(_QWORD *)(v3 + 64) = v32;
          LOBYTE(v32) = *(_BYTE *)(a1 + 72);
          v50 = v24;
          *(_BYTE *)(v3 + 72) = v32;
          LOBYTE(v32) = *(_BYTE *)(a1 + 73);
          v51 = v35;
          *(_BYTE *)(v3 + 73) = v32;
          v46 = v20;
          v45 = v31;
          v47 = v33;
          v49 = v34;
          sub_1A0D0(a1, 0, v42, (__int64)&v45);
          v36 = v46;
          if ( v48 )
            qfree();
          if ( v36 )
            break;
        }
        v3 += 80LL;
        if ( v3 >= a3 )
          return v52 - __readfsqword(0x28u);
      }
      v3 += 80LL;
      qfree();
    }
    while ( v3 < a3 );
  }
  return v52 - __readfsqword(0x28u);
}

