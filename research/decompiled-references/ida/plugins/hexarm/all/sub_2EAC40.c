unsigned __int64 __fastcall sub_2EAC40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r12
  __int64 i; // r15
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r15
  __int64 v12; // rdx
  __m128i v13; // xmm0
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r12
  __m128i v18; // xmm0
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r14
  __int64 v22; // r13
  __m128i v23; // xmm0
  __int64 v24; // rbx
  __int64 v25; // r15
  __int64 v26; // xmm1_8
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // xmm0_8
  __int64 v31; // xmm1_8
  __int64 v32; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // r15
  __int64 v37; // rbx
  __int64 v38; // r12
  __int64 v39; // r13
  __m128i v40; // xmm0
  __m128i v41; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v42; // [rsp+18h] [rbp-D0h]
  __m128i v43; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v44; // [rsp+30h] [rbp-B8h]
  __int64 v45; // [rsp+38h] [rbp-B0h]
  __int64 (__fastcall **v46)(); // [rsp+40h] [rbp-A8h] BYREF
  int v47; // [rsp+48h] [rbp-A0h]
  __int64 v48; // [rsp+50h] [rbp-98h]
  __m128i v49; // [rsp+58h] [rbp-90h]
  __int64 v50; // [rsp+68h] [rbp-80h]
  __int64 v51; // [rsp+70h] [rbp-78h]
  _BYTE v52[16]; // [rsp+80h] [rbp-68h] BYREF
  __int64 v53; // [rsp+90h] [rbp-58h]
  int (__fastcall *v54)(__int64, __int64, __int64 (__fastcall ***)()); // [rsp+98h] [rbp-50h]
  unsigned __int64 v55; // [rsp+A8h] [rbp-40h]

  v5 = (a3 - 1) / 2;
  v42 = a2;
  v44 = a3;
  v45 = a4;
  v55 = __readfsqword(0x28u);
  if ( a2 >= v5 )
  {
    v8 = v42;
  }
  else
  {
    for ( i = a2; ; i = v8 )
    {
      v8 = 2 * (i + 1);
      v9 = 112 * (i + 1);
      v10 = a1 + v9;
      if ( !*(_QWORD *)(a5 + 16) )
        std::__throw_bad_function_call();
      if ( (*(int (__fastcall **)(__int64, __int64, __int64))(a5 + 24))(a5, a1 + v9, a1 + v9 - 56) < 0 )
      {
        --v8;
        v10 = a1 + 56 * v8;
      }
      v11 = a1 + 56 * i;
      *(_DWORD *)(v11 + 8) = *(_DWORD *)(v10 + 8);
      v12 = *(_QWORD *)(v10 + 16);
      v13 = _mm_loadu_si128((const __m128i *)(v10 + 24));
      *(_QWORD *)(v10 + 16) = 0;
      *(_OWORD *)(v10 + 24) = 0;
      if ( *(_QWORD *)(v11 + 16) )
      {
        *(_QWORD *)(v11 + 24) = 0;
        v43.m128i_i64[0] = v12;
        v41 = v13;
        qfree();
        v12 = v43.m128i_i64[0];
        v13 = _mm_load_si128(&v41);
      }
      *(_QWORD *)(v11 + 16) = v12;
      *(__m128i *)(v11 + 24) = v13;
      *(_DWORD *)(v11 + 40) = *(_DWORD *)(v10 + 40);
      *(_DWORD *)(v11 + 44) = *(_DWORD *)(v10 + 44);
      *(_QWORD *)(v11 + 48) = *(_QWORD *)(v10 + 48);
      if ( v8 >= v5 )
        break;
    }
  }
  if ( (v44 & 1) == 0 && (v44 - 2) / 2 == v8 )
  {
    v36 = 2 * (v8 + 1);
    v37 = a1 + 112 * (v8 + 1) - 56;
    v38 = a1 + 56 * v8;
    *(_DWORD *)(v38 + 8) = *(_DWORD *)(v37 + 8);
    v39 = *(_QWORD *)(v37 + 16);
    v40 = _mm_loadu_si128((const __m128i *)(v37 + 24));
    *(_QWORD *)(v37 + 16) = 0;
    *(_OWORD *)(v37 + 24) = 0;
    if ( *(_QWORD *)(v38 + 16) )
    {
      *(_QWORD *)(v38 + 24) = 0;
      v41 = v40;
      qfree();
      v40 = _mm_load_si128(&v41);
    }
    *(_QWORD *)(v38 + 16) = v39;
    v8 = v36 - 1;
    *(__m128i *)(v38 + 24) = v40;
    *(_DWORD *)(v38 + 40) = *(_DWORD *)(v37 + 40);
    *(_DWORD *)(v38 + 44) = *(_DWORD *)(v37 + 44);
    *(_QWORD *)(v38 + 48) = *(_QWORD *)(v37 + 48);
  }
  v41.m128i_i64[0] = (__int64)v52;
  sub_2CE400((__int64)v52, (const __m128i *)a5);
  v14 = v45;
  v46 = off_4DD2F8;
  v15 = v42;
  v16 = *(_QWORD *)(v45 + 40);
  v17 = *(_QWORD *)(v45 + 16);
  *(_QWORD *)(v45 + 16) = 0;
  v18 = _mm_loadu_si128((const __m128i *)(v14 + 24));
  v19 = *(_DWORD *)(v14 + 8);
  *(_OWORD *)(v14 + 24) = 0;
  v50 = v16;
  v20 = *(_QWORD *)(v14 + 48);
  v47 = v19;
  v51 = v20;
  v48 = v17;
  v49 = v18;
  v21 = (v8 - 1) / 2;
  if ( v8 <= v15 )
  {
    v26 = _mm_srli_si128(v18, 8).m128i_u64[0];
    v25 = a1 + 56 * v8;
  }
  else
  {
    while ( 1 )
    {
      v24 = a1 + 56 * v21;
      if ( !v53 )
        std::__throw_bad_function_call();
      v25 = a1 + 56 * v8;
      if ( v54(v41.m128i_i64[0], a1 + 56 * v21, &v46) >= 0 )
      {
        v19 = v47;
        v17 = v48;
        v26 = v49.m128i_i64[1];
        v18.m128i_i64[0] = v49.m128i_i64[0];
        goto LABEL_21;
      }
      *(_DWORD *)(v25 + 8) = *(_DWORD *)(v24 + 8);
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
      v8 = v21;
      *(__m128i *)(v25 + 24) = v23;
      *(_DWORD *)(v25 + 40) = *(_DWORD *)(v24 + 40);
      *(_DWORD *)(v25 + 44) = *(_DWORD *)(v24 + 44);
      *(_QWORD *)(v25 + 48) = *(_QWORD *)(v24 + 48);
      if ( v42 >= v21 )
        break;
      v21 = (v21 - 1) / 2;
    }
    v19 = v47;
    v17 = v48;
    v25 = a1 + 56 * v21;
    v26 = v49.m128i_i64[1];
    v18.m128i_i64[0] = v49.m128i_i64[0];
  }
LABEL_21:
  v27 = *(_QWORD *)(v25 + 16);
  *(_DWORD *)(v25 + 8) = v19;
  v48 = 0;
  v49 = 0;
  if ( v27 )
  {
    *(_QWORD *)(v25 + 24) = 0;
    v43.m128i_i64[0] = v26;
    v42 = v18.m128i_i64[0];
    qfree();
    v28 = v50;
    v29 = v48;
    *(_QWORD *)(v25 + 16) = v17;
    v30 = v42;
    v31 = v43.m128i_i64[0];
    *(_QWORD *)(v25 + 40) = v28;
    v32 = v51;
    *(_QWORD *)(v25 + 24) = v30;
    *(_QWORD *)(v25 + 48) = v32;
    v46 = off_4DBA30;
    *(_QWORD *)(v25 + 32) = v31;
    if ( v29 )
    {
      v49.m128i_i64[0] = 0;
      qfree();
    }
  }
  else
  {
    v34 = v50;
    *(_QWORD *)(v25 + 16) = v17;
    *(_QWORD *)(v25 + 24) = v18.m128i_i64[0];
    *(_QWORD *)(v25 + 40) = v34;
    v35 = v51;
    *(_QWORD *)(v25 + 32) = v26;
    *(_QWORD *)(v25 + 48) = v35;
  }
  sub_66650(v41.m128i_i64[0]);
  return v55 - __readfsqword(0x28u);
}

