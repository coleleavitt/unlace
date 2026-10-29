unsigned __int64 __fastcall sub_2E9E30(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 i; // r13
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // rdx
  __m128i v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r12
  __m128i v17; // xmm0
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // r14
  __int64 v22; // r15
  __m128i v23; // xmm0
  __int64 v24; // r13
  __int64 v25; // rbx
  __int64 v26; // xmm1_8
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // xmm0_8
  __int64 v31; // xmm1_8
  __int64 v32; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // r13
  __int64 v37; // rbx
  __int64 v38; // r12
  __int64 v39; // rax
  __m128i v40; // xmm0
  __m128i v41; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v42; // [rsp+18h] [rbp-D0h]
  __m128i v43; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v44; // [rsp+30h] [rbp-B8h]
  __int64 v45; // [rsp+38h] [rbp-B0h]
  __int64 (__fastcall **v46)(); // [rsp+40h] [rbp-A8h] BYREF
  __int64 v47; // [rsp+48h] [rbp-A0h]
  __int64 v48; // [rsp+50h] [rbp-98h]
  __m128i v49; // [rsp+58h] [rbp-90h]
  __int64 v50; // [rsp+68h] [rbp-80h]
  int v51; // [rsp+70h] [rbp-78h]
  __int64 v52; // [rsp+78h] [rbp-70h]
  _BYTE v53[16]; // [rsp+80h] [rbp-68h] BYREF
  __int64 v54; // [rsp+90h] [rbp-58h]
  int (__fastcall *v55)(__int64, __int64, __int64 (__fastcall ***)()); // [rsp+98h] [rbp-50h]
  unsigned __int64 v56; // [rsp+A8h] [rbp-40h]

  v42 = a2;
  v45 = a3;
  v56 = __readfsqword(0x28u);
  v41.m128i_i64[0] = (a3 - 1) / 2;
  if ( a2 >= v41.m128i_i64[0] )
  {
    v8 = v42;
  }
  else
  {
    for ( i = a2; ; i = v8 )
    {
      v8 = 2 * (i + 1);
      v9 = (i + 1) << 7;
      v10 = a1 + v9;
      if ( !*(_QWORD *)(a5 + 16) )
        std::__throw_bad_function_call();
      if ( (*(int (__fastcall **)(__int64, __int64, __int64))(a5 + 24))(a5, a1 + v9, a1 + v9 - 64) < 0 )
        v10 = a1 + (--v8 << 6);
      v11 = a1 + (i << 6);
      *(_QWORD *)(v11 + 8) = *(_QWORD *)(v10 + 8);
      v12 = *(_QWORD *)(v10 + 16);
      *(_QWORD *)(v10 + 16) = 0;
      v13 = _mm_loadu_si128((const __m128i *)(v10 + 24));
      *(_OWORD *)(v10 + 24) = 0;
      if ( *(_QWORD *)(v11 + 16) )
      {
        *(_QWORD *)(v11 + 24) = 0;
        v44 = v12;
        v43 = v13;
        qfree();
        v12 = v44;
        v13 = _mm_load_si128(&v43);
      }
      *(_QWORD *)(v11 + 16) = v12;
      v14 = v41.m128i_i64[0];
      *(__m128i *)(v11 + 24) = v13;
      *(_QWORD *)(v11 + 40) = *(_QWORD *)(v10 + 40);
      *(_DWORD *)(v11 + 48) = *(_DWORD *)(v10 + 48);
      *(_QWORD *)(v11 + 56) = *(_QWORD *)(v10 + 56);
      if ( v8 >= v14 )
        break;
    }
  }
  if ( (v45 & 1) == 0 && (v45 - 2) / 2 == v8 )
  {
    v35 = v8 + 1;
    v36 = 2 * (v8 + 1);
    v37 = a1 + (v8 << 6);
    v38 = a1 + (v35 << 7) - 64;
    *(_QWORD *)(v37 + 8) = *(_QWORD *)(v38 + 8);
    v39 = *(_QWORD *)(v38 + 16);
    *(_QWORD *)(v38 + 16) = 0;
    v40 = _mm_loadu_si128((const __m128i *)(v38 + 24));
    *(_OWORD *)(v38 + 24) = 0;
    if ( *(_QWORD *)(v37 + 16) )
    {
      *(_QWORD *)(v37 + 24) = 0;
      v43.m128i_i64[0] = v39;
      v41 = v40;
      qfree();
      v39 = v43.m128i_i64[0];
      v40 = _mm_load_si128(&v41);
    }
    *(_QWORD *)(v37 + 16) = v39;
    *(__m128i *)(v37 + 24) = v40;
    *(_QWORD *)(v37 + 40) = *(_QWORD *)(v38 + 40);
    *(_DWORD *)(v37 + 48) = *(_DWORD *)(v38 + 48);
    *(_QWORD *)(v37 + 56) = *(_QWORD *)(v38 + 56);
    v8 = v36 - 1;
  }
  v41.m128i_i64[0] = (__int64)v53;
  sub_2CA450((__int64)v53, (const __m128i *)a5);
  v15 = *(_QWORD *)(a4 + 40);
  v16 = *(_QWORD *)(a4 + 16);
  v17 = _mm_loadu_si128((const __m128i *)(a4 + 24));
  v46 = off_4CFD80;
  v18 = *(_QWORD *)(a4 + 8);
  v19 = v42;
  v50 = v15;
  LODWORD(v15) = *(_DWORD *)(a4 + 48);
  v48 = v16;
  v47 = v18;
  v51 = v15;
  v20 = *(_QWORD *)(a4 + 56);
  *(_QWORD *)(a4 + 16) = 0;
  v52 = v20;
  v49 = v17;
  *(_OWORD *)(a4 + 24) = 0;
  v21 = (v8 - 1) / 2;
  if ( v8 <= v19 )
  {
    v25 = a1 + (v8 << 6);
    v26 = _mm_srli_si128(v17, 8).m128i_u64[0];
  }
  else
  {
    while ( 1 )
    {
      v24 = a1 + (v21 << 6);
      if ( !v54 )
        std::__throw_bad_function_call();
      v25 = a1 + (v8 << 6);
      if ( v55(v41.m128i_i64[0], a1 + (v21 << 6), &v46) >= 0 )
      {
        v18 = v47;
        v16 = v48;
        v26 = v49.m128i_i64[1];
        v17.m128i_i64[0] = v49.m128i_i64[0];
        goto LABEL_21;
      }
      *(_QWORD *)(v25 + 8) = *(_QWORD *)(v24 + 8);
      v22 = *(_QWORD *)(v24 + 16);
      v23 = _mm_loadu_si128((const __m128i *)(v24 + 24));
      *(_QWORD *)(v24 + 16) = 0;
      *(_OWORD *)(v24 + 24) = 0;
      if ( *(_QWORD *)(v25 + 16) )
      {
        *(_QWORD *)(v25 + 24) = 0;
        v43 = v23;
        qfree();
        v23 = _mm_load_si128(&v43);
      }
      *(_QWORD *)(v25 + 16) = v22;
      *(__m128i *)(v25 + 24) = v23;
      *(_QWORD *)(v25 + 40) = *(_QWORD *)(v24 + 40);
      *(_DWORD *)(v25 + 48) = *(_DWORD *)(v24 + 48);
      *(_QWORD *)(v25 + 56) = *(_QWORD *)(v24 + 56);
      v8 = v21;
      if ( v42 >= v21 )
        break;
      v21 = (v21 - 1) / 2;
    }
    v18 = v47;
    v16 = v48;
    v25 = a1 + (v21 << 6);
    v26 = v49.m128i_i64[1];
    v17.m128i_i64[0] = v49.m128i_i64[0];
  }
LABEL_21:
  v27 = *(_QWORD *)(v25 + 16);
  *(_QWORD *)(v25 + 8) = v18;
  v48 = 0;
  v49 = 0;
  if ( v27 )
  {
    *(_QWORD *)(v25 + 24) = 0;
    v43.m128i_i64[0] = v26;
    v42 = v17.m128i_i64[0];
    qfree();
    v28 = v50;
    v29 = v48;
    *(_QWORD *)(v25 + 16) = v16;
    v30 = v42;
    v31 = v43.m128i_i64[0];
    *(_QWORD *)(v25 + 40) = v28;
    LODWORD(v28) = v51;
    *(_QWORD *)(v25 + 24) = v30;
    *(_DWORD *)(v25 + 48) = v28;
    v32 = v52;
    *(_QWORD *)(v25 + 32) = v31;
    *(_QWORD *)(v25 + 56) = v32;
    v46 = off_4CE4E0;
    if ( v29 )
    {
      v49.m128i_i64[0] = 0;
      qfree();
    }
  }
  else
  {
    v34 = v50;
    *(_QWORD *)(v25 + 16) = v16;
    *(_QWORD *)(v25 + 24) = v17.m128i_i64[0];
    *(_QWORD *)(v25 + 40) = v34;
    LODWORD(v34) = v51;
    *(_QWORD *)(v25 + 32) = v26;
    *(_DWORD *)(v25 + 48) = v34;
    *(_QWORD *)(v25 + 56) = v52;
  }
  sub_63210(v41.m128i_i64[0]);
  return v56 - __readfsqword(0x28u);
}

