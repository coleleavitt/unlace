unsigned __int64 __fastcall sub_2EDAB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 i; // r13
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // r13
  __int64 v13; // rdx
  __m128i v14; // xmm0
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r12
  __m128i v19; // xmm0
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // r14
  __int64 v24; // r15
  __m128i v25; // xmm0
  __int64 v26; // rdi
  __int64 v27; // r13
  __int64 v28; // rbx
  __int64 v29; // xmm1_8
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // xmm0_8
  __int64 v34; // xmm1_8
  __int64 v35; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // r13
  __int64 v40; // rbx
  __int64 v41; // r12
  __int64 v42; // rax
  __m128i v43; // xmm0
  __int64 v44; // rdi
  __m128i v45; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v46; // [rsp+18h] [rbp-D0h]
  __m128i v47; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v48; // [rsp+30h] [rbp-B8h]
  __int64 v49; // [rsp+38h] [rbp-B0h]
  __int64 (__fastcall **v50)(); // [rsp+40h] [rbp-A8h] BYREF
  __int64 v51; // [rsp+48h] [rbp-A0h]
  __int64 v52; // [rsp+50h] [rbp-98h]
  __m128i v53; // [rsp+58h] [rbp-90h]
  __int64 v54; // [rsp+68h] [rbp-80h]
  int v55; // [rsp+70h] [rbp-78h]
  __int64 v56; // [rsp+78h] [rbp-70h]
  _BYTE v57[16]; // [rsp+80h] [rbp-68h] BYREF
  __int64 v58; // [rsp+90h] [rbp-58h]
  int (__fastcall *v59)(__int64, __int64, __int64 (__fastcall ***)()); // [rsp+98h] [rbp-50h]
  unsigned __int64 v60; // [rsp+A8h] [rbp-40h]

  v46 = a2;
  v49 = a3;
  v60 = __readfsqword(0x28u);
  v45.m128i_i64[0] = (a3 - 1) / 2;
  if ( a2 >= v45.m128i_i64[0] )
  {
    v9 = v46;
  }
  else
  {
    for ( i = a2; ; i = v9 )
    {
      v9 = 2 * (i + 1);
      v10 = (i + 1) << 7;
      v11 = a1 + v10;
      if ( !*(_QWORD *)(a5 + 16) )
        std::__throw_bad_function_call();
      if ( (*(int (__fastcall **)(__int64, __int64, __int64))(a5 + 24))(a5, a1 + v10, a1 + v10 - 64) < 0 )
        v11 = a1 + (--v9 << 6);
      v12 = a1 + (i << 6);
      *(_QWORD *)(v12 + 8) = *(_QWORD *)(v11 + 8);
      v13 = *(_QWORD *)(v11 + 16);
      *(_QWORD *)(v11 + 16) = 0;
      v14 = _mm_loadu_si128((const __m128i *)(v11 + 24));
      *(_OWORD *)(v11 + 24) = 0;
      v15 = *(_QWORD *)(v12 + 16);
      if ( v15 )
      {
        *(_QWORD *)(v12 + 24) = 0;
        v48 = v13;
        v47 = v14;
        qfree(v15);
        v13 = v48;
        v14 = _mm_load_si128(&v47);
      }
      *(_QWORD *)(v12 + 16) = v13;
      v16 = v45.m128i_i64[0];
      *(__m128i *)(v12 + 24) = v14;
      *(_QWORD *)(v12 + 40) = *(_QWORD *)(v11 + 40);
      *(_DWORD *)(v12 + 48) = *(_DWORD *)(v11 + 48);
      *(_QWORD *)(v12 + 56) = *(_QWORD *)(v11 + 56);
      if ( v9 >= v16 )
        break;
    }
  }
  if ( (v49 & 1) == 0 && (v49 - 2) / 2 == v9 )
  {
    v38 = v9 + 1;
    v39 = 2 * (v9 + 1);
    v40 = a1 + (v9 << 6);
    v41 = a1 + (v38 << 7) - 64;
    *(_QWORD *)(v40 + 8) = *(_QWORD *)(v41 + 8);
    v42 = *(_QWORD *)(v41 + 16);
    *(_QWORD *)(v41 + 16) = 0;
    v43 = _mm_loadu_si128((const __m128i *)(v41 + 24));
    *(_OWORD *)(v41 + 24) = 0;
    v44 = *(_QWORD *)(v40 + 16);
    if ( v44 )
    {
      *(_QWORD *)(v40 + 24) = 0;
      v47.m128i_i64[0] = v42;
      v45 = v43;
      qfree(v44);
      v42 = v47.m128i_i64[0];
      v43 = _mm_load_si128(&v45);
    }
    *(_QWORD *)(v40 + 16) = v42;
    *(__m128i *)(v40 + 24) = v43;
    *(_QWORD *)(v40 + 40) = *(_QWORD *)(v41 + 40);
    *(_DWORD *)(v40 + 48) = *(_DWORD *)(v41 + 48);
    *(_QWORD *)(v40 + 56) = *(_QWORD *)(v41 + 56);
    v9 = v39 - 1;
  }
  v45.m128i_i64[0] = (__int64)v57;
  sub_2CE0D0((__int64)v57, (const __m128i *)a5);
  v17 = *(_QWORD *)(a4 + 40);
  v18 = *(_QWORD *)(a4 + 16);
  v19 = _mm_loadu_si128((const __m128i *)(a4 + 24));
  v50 = off_4E2C60;
  v20 = *(_QWORD *)(a4 + 8);
  v21 = v46;
  v54 = v17;
  LODWORD(v17) = *(_DWORD *)(a4 + 48);
  v52 = v18;
  v51 = v20;
  v55 = v17;
  v22 = *(_QWORD *)(a4 + 56);
  *(_QWORD *)(a4 + 16) = 0;
  v56 = v22;
  v53 = v19;
  *(_OWORD *)(a4 + 24) = 0;
  v23 = (v9 - 1) / 2;
  if ( v9 <= v21 )
  {
    v28 = a1 + (v9 << 6);
    v29 = _mm_srli_si128(v19, 8).m128i_u64[0];
  }
  else
  {
    while ( 1 )
    {
      v27 = a1 + (v23 << 6);
      if ( !v58 )
        std::__throw_bad_function_call();
      v28 = a1 + (v9 << 6);
      if ( v59(v45.m128i_i64[0], a1 + (v23 << 6), &v50) >= 0 )
      {
        v20 = v51;
        v18 = v52;
        v29 = v53.m128i_i64[1];
        v19.m128i_i64[0] = v53.m128i_i64[0];
        goto LABEL_21;
      }
      *(_QWORD *)(v28 + 8) = *(_QWORD *)(v27 + 8);
      v24 = *(_QWORD *)(v27 + 16);
      v25 = _mm_loadu_si128((const __m128i *)(v27 + 24));
      *(_QWORD *)(v27 + 16) = 0;
      *(_OWORD *)(v27 + 24) = 0;
      v26 = *(_QWORD *)(v28 + 16);
      if ( v26 )
      {
        *(_QWORD *)(v28 + 24) = 0;
        v47 = v25;
        qfree(v26);
        v25 = _mm_load_si128(&v47);
      }
      *(_QWORD *)(v28 + 16) = v24;
      *(__m128i *)(v28 + 24) = v25;
      *(_QWORD *)(v28 + 40) = *(_QWORD *)(v27 + 40);
      *(_DWORD *)(v28 + 48) = *(_DWORD *)(v27 + 48);
      *(_QWORD *)(v28 + 56) = *(_QWORD *)(v27 + 56);
      v9 = v23;
      if ( v46 >= v23 )
        break;
      v23 = (v23 - 1) / 2;
    }
    v20 = v51;
    v18 = v52;
    v28 = a1 + (v23 << 6);
    v29 = v53.m128i_i64[1];
    v19.m128i_i64[0] = v53.m128i_i64[0];
  }
LABEL_21:
  v30 = *(_QWORD *)(v28 + 16);
  *(_QWORD *)(v28 + 8) = v20;
  v52 = 0;
  v53 = 0;
  if ( v30 )
  {
    *(_QWORD *)(v28 + 24) = 0;
    v47.m128i_i64[0] = v29;
    v46 = v19.m128i_i64[0];
    qfree(v30);
    v31 = v54;
    v32 = v52;
    *(_QWORD *)(v28 + 16) = v18;
    v33 = v46;
    v34 = v47.m128i_i64[0];
    *(_QWORD *)(v28 + 40) = v31;
    LODWORD(v31) = v55;
    *(_QWORD *)(v28 + 24) = v33;
    *(_DWORD *)(v28 + 48) = v31;
    v35 = v56;
    *(_QWORD *)(v28 + 32) = v34;
    *(_QWORD *)(v28 + 56) = v35;
    v50 = off_4E13C0;
    if ( v32 )
    {
      v53.m128i_i64[0] = 0;
      qfree(v32);
    }
  }
  else
  {
    v37 = v54;
    *(_QWORD *)(v28 + 16) = v18;
    *(_QWORD *)(v28 + 24) = v19.m128i_i64[0];
    *(_QWORD *)(v28 + 40) = v37;
    LODWORD(v37) = v55;
    *(_QWORD *)(v28 + 32) = v29;
    *(_DWORD *)(v28 + 48) = v37;
    *(_QWORD *)(v28 + 56) = v56;
  }
  sub_66C50(v45.m128i_i64[0]);
  return v60 - __readfsqword(0x28u);
}

