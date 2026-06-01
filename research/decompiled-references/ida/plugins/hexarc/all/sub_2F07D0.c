unsigned __int64 __fastcall sub_2F07D0(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5)
{
  __int64 i; // r13
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 (__fastcall ***v12)(); // rdx
  __m128i v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // r13
  __m128i v20; // xmm0
  __int64 v21; // r14
  __int64 v22; // r15
  __int64 v23; // rdi
  __int64 v24; // rbx
  __m128i v25; // xmm0
  __int64 v27; // r12
  __int64 v28; // r13
  __int64 v29; // r15
  __int64 (__fastcall ***v30)(); // rdx
  __m128i v31; // xmm0
  __m128i v32; // [rsp+0h] [rbp-F8h] BYREF
  __m128i v33; // [rsp+10h] [rbp-E8h] BYREF
  __m128i v34; // [rsp+20h] [rbp-D8h] BYREF
  __int64 (__fastcall ***v35)(); // [rsp+30h] [rbp-C8h]
  __int64 *v36; // [rsp+38h] [rbp-C0h]
  __int64 (__fastcall **v37)(); // [rsp+40h] [rbp-B8h] BYREF
  __int64 v38; // [rsp+48h] [rbp-B0h]
  __int64 v39; // [rsp+50h] [rbp-A8h] BYREF
  __m128i v40; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+68h] [rbp-90h] BYREF
  __int64 v42; // [rsp+70h] [rbp-88h]
  int v43; // [rsp+78h] [rbp-80h]
  __int64 v44; // [rsp+80h] [rbp-78h]
  _BYTE v45[16]; // [rsp+90h] [rbp-68h] BYREF
  __int64 v46; // [rsp+A0h] [rbp-58h]
  int (__fastcall *v47)(__int64, __int64, __int64 (__fastcall ***)()); // [rsp+A8h] [rbp-50h]
  unsigned __int64 v48; // [rsp+B8h] [rbp-40h]

  v33.m128i_i64[0] = a2;
  v36 = a3;
  v48 = __readfsqword(0x28u);
  v32.m128i_i64[0] = ((__int64)a3 - 1) / 2;
  if ( a2 >= v32.m128i_i64[0] )
  {
    v8 = v33.m128i_i64[0];
  }
  else
  {
    for ( i = a2; ; i = v8 )
    {
      v8 = 2 * (i + 1);
      v9 = 144 * (i + 1);
      v10 = a1 + v9;
      if ( !*(_QWORD *)(a5 + 16) )
        std::__throw_bad_function_call();
      if ( (*(int (__fastcall **)(__int64, __int64, __int64))(a5 + 24))(a5, a1 + v9, a1 + v9 - 72) < 0 )
      {
        --v8;
        v10 = a1 + 72 * v8;
      }
      v11 = a1 + 72 * i;
      *(_QWORD *)(v11 + 8) = *(_QWORD *)(v10 + 8);
      v12 = *(__int64 (__fastcall ****)())(v10 + 16);
      *(_QWORD *)(v10 + 16) = 0;
      v13 = _mm_loadu_si128((const __m128i *)(v10 + 24));
      *(_OWORD *)(v10 + 24) = 0;
      if ( *(_QWORD *)(v11 + 16) )
      {
        *(_QWORD *)(v11 + 24) = 0;
        v35 = v12;
        v34 = v13;
        qfree();
        v13 = _mm_load_si128(&v34);
        v12 = v35;
      }
      *(_QWORD *)(v11 + 16) = v12;
      *(__m128i *)(v11 + 24) = v13;
      copy_tinfo_t();
      v14 = v32.m128i_i64[0];
      *(_QWORD *)(v11 + 48) = *(_QWORD *)(v10 + 48);
      *(_DWORD *)(v11 + 56) = *(_DWORD *)(v10 + 56);
      *(_QWORD *)(v11 + 64) = *(_QWORD *)(v10 + 64);
      if ( v8 >= v14 )
        break;
    }
  }
  if ( ((unsigned __int8)v36 & 1) == 0 && ((__int64)v36 - 2) / 2 == v8 )
  {
    v27 = 2 * (v8 + 1);
    v28 = a1 + 144 * (v8 + 1) - 72;
    v29 = a1 + 72 * v8;
    *(_QWORD *)(v29 + 8) = *(_QWORD *)(v28 + 8);
    v30 = *(__int64 (__fastcall ****)())(v28 + 16);
    v31 = _mm_loadu_si128((const __m128i *)(v28 + 24));
    *(_QWORD *)(v28 + 16) = 0;
    *(_OWORD *)(v28 + 24) = 0;
    if ( *(_QWORD *)(v29 + 16) )
    {
      *(_QWORD *)(v29 + 24) = 0;
      v35 = v30;
      v32 = v31;
      qfree();
      v30 = v35;
      v31 = _mm_load_si128(&v32);
    }
    *(_QWORD *)(v29 + 16) = v30;
    *(__m128i *)(v29 + 24) = v31;
    copy_tinfo_t();
    *(_QWORD *)(v29 + 48) = *(_QWORD *)(v28 + 48);
    *(_DWORD *)(v29 + 56) = *(_DWORD *)(v28 + 56);
    *(_QWORD *)(v29 + 64) = *(_QWORD *)(v28 + 64);
    v8 = v27 - 1;
  }
  v32.m128i_i64[0] = (__int64)v45;
  sub_2C6F00((__int64)v45, (const __m128i *)a5);
  v15 = *(_QWORD *)(a4 + 8);
  v16 = _mm_loadu_si128((const __m128i *)(a4 + 24));
  v37 = off_4ADCB0;
  v38 = v15;
  v17 = *(_QWORD *)(a4 + 16);
  *(_QWORD *)(a4 + 16) = 0;
  v39 = v17;
  v40 = v16;
  *(_OWORD *)(a4 + 24) = 0;
  v41 = 0;
  v36 = &v41;
  copy_tinfo_t();
  v42 = *(_QWORD *)(a4 + 48);
  v43 = *(_DWORD *)(a4 + 56);
  v37 = off_4AF4D8;
  v44 = *(_QWORD *)(a4 + 64);
  v18 = (v8 - 1) / 2;
  if ( v8 <= v33.m128i_i64[0] )
  {
    v22 = a1 + 72 * v8;
  }
  else
  {
    v35 = &v37;
    while ( 1 )
    {
      v21 = a1 + 72 * v18;
      if ( !v46 )
        std::__throw_bad_function_call();
      v22 = a1 + 72 * v8;
      if ( v47(v32.m128i_i64[0], a1 + 72 * v18, v35) >= 0 )
        break;
      *(_QWORD *)(v22 + 8) = *(_QWORD *)(v21 + 8);
      v19 = *(_QWORD *)(v21 + 16);
      v20 = _mm_loadu_si128((const __m128i *)(v21 + 24));
      *(_QWORD *)(v21 + 16) = 0;
      *(_OWORD *)(v21 + 24) = 0;
      if ( *(_QWORD *)(v22 + 16) )
      {
        *(_QWORD *)(v22 + 24) = 0;
        v34 = v20;
        qfree();
        v20 = _mm_load_si128(&v34);
      }
      *(_QWORD *)(v22 + 16) = v19;
      *(__m128i *)(v22 + 24) = v20;
      copy_tinfo_t();
      *(_QWORD *)(v22 + 48) = *(_QWORD *)(v21 + 48);
      *(_DWORD *)(v22 + 56) = *(_DWORD *)(v21 + 56);
      *(_QWORD *)(v22 + 64) = *(_QWORD *)(v21 + 64);
      v8 = v18;
      if ( v33.m128i_i64[0] >= v18 )
      {
        v22 = a1 + 72 * v18;
        break;
      }
      v18 = (v18 - 1) / 2;
    }
  }
  v23 = *(_QWORD *)(v22 + 16);
  v24 = v39;
  v25 = _mm_loadu_si128(&v40);
  v40 = 0;
  *(_QWORD *)(v22 + 8) = v38;
  v39 = 0;
  if ( v23 )
  {
    *(_QWORD *)(v22 + 24) = 0;
    v33 = v25;
    qfree();
    v25 = _mm_load_si128(&v33);
  }
  *(_QWORD *)(v22 + 16) = v24;
  *(__m128i *)(v22 + 24) = v25;
  copy_tinfo_t();
  v37 = off_4ADCB0;
  *(_QWORD *)(v22 + 48) = v42;
  *(_DWORD *)(v22 + 56) = v43;
  *(_QWORD *)(v22 + 64) = v44;
  sub_2ADDE0(&v39);
  sub_606D0(v32.m128i_i64[0]);
  return v48 - __readfsqword(0x28u);
}

