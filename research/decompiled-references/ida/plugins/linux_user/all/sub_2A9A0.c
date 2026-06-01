__int64 __fastcall sub_2A9A0(__int64 a1, __int64 *a2, __int64 *a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v5; // r13
  __int64 v6; // r14
  __int64 v9; // rdi
  __int64 v10; // r8
  unsigned int v11; // edx
  unsigned int v12; // eax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r13
  __int64 v15; // rcx
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rbx
  __m128i v21; // xmm0
  __m128i v22; // xmm1
  __int64 v23; // rax
  __int64 v24; // rsi
  __m128i v25; // [rsp+8h] [rbp-C0h] BYREF
  __int64 (__fastcall ***v26)(); // [rsp+18h] [rbp-B0h]
  unsigned __int64 v27; // [rsp+28h] [rbp-A0h] BYREF
  __int64 (__fastcall **v28)(); // [rsp+30h] [rbp-98h] BYREF
  __int64 v29; // [rsp+38h] [rbp-90h]
  __m128i v30; // [rsp+40h] [rbp-88h]
  unsigned __int64 v31; // [rsp+50h] [rbp-78h]
  __int64 v32; // [rsp+58h] [rbp-70h]
  __int128 v33; // [rsp+60h] [rbp-68h]
  unsigned __int64 v34; // [rsp+70h] [rbp-58h]
  __int64 v35; // [rsp+78h] [rbp-50h]
  unsigned __int64 v36; // [rsp+88h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  v3 = a3[2];
  if ( !v3 )
    return 0;
  v5 = *(int *)(a1 + 400);
  v6 = *a3;
  v9 = *(_QWORD *)(a1 + 472);
  v10 = *a3;
  if ( !v5 )
    v5 = 1;
  v27 = v3 / v5;
  sub_2A8C0(v9, &v27, v5, "Dynamic info size", v10, -1);
  if ( !v27 )
    return 0;
  v11 = 0;
  v12 = 0;
  v28 = &off_44F40;
  v29 = a1;
  v31 = v5;
  v32 = 0;
  v34 = 0;
  v35 = 0;
  v26 = &v28;
  v30 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v6, (__m128i)v27);
  v33 = 0;
  while ( 1 )
  {
    if ( v12 < v11 )
      goto LABEL_25;
    v13 = v34;
    v14 = v30.m128i_i64[1] - v34;
    if ( v30.m128i_i64[1] == v34 )
      goto LABEL_9;
    v15 = v33;
    if ( (unsigned __int64)v33 < v14 )
    {
      v24 = v32;
      if ( *((_QWORD *)&v33 + 1) < v14 )
      {
        v32 = qvector_reserve();
        v15 = v33;
        v24 = v32;
      }
      memset((void *)(v24 + 16 * v15), 0, 16 * (v14 - v15));
      *(_QWORD *)&v33 = v14;
      v13 = v34;
    }
    else if ( v14 != (_QWORD)v33 )
    {
      *(_QWORD *)&v33 = v30.m128i_i64[1] - v34;
    }
    LODWORD(v35) = 0;
    if ( v31 && (v13 && !is_mul_ok(v31, v13) || !is_mul_ok(v14, v31)) )
      goto LABEL_30;
    v16 = v29;
    v25.m128i_i64[0] = qlseek() - *(_QWORD *)(v16 + 480);
    if ( qlseek() == -1 )
      break;
    v17 = 0;
    while ( sub_29880((__int64)&v28, (_OWORD *)(v32 + 16 * v17)) )
    {
      if ( v14 == ++v17 )
        goto LABEL_23;
    }
    LODWORD(v14) = v17;
LABEL_23:
    qlseek();
    HIDWORD(v35) = v14;
    if ( !(_DWORD)v14 )
      goto LABEL_9;
    v34 += (unsigned int)v14;
    v12 = v35;
    if ( (unsigned int)v35 >= (unsigned int)v14 )
      goto LABEL_9;
LABEL_25:
    v18 = a2[1];
    v19 = *a2;
    v20 = v32 + 16LL * v12;
    LODWORD(v35) = v12 + 1;
    v21 = _mm_loadl_epi64((const __m128i *)v20);
    v22 = _mm_loadl_epi64((const __m128i *)(v20 + 8));
    if ( a2[2] < (unsigned __int64)(v18 + 1) )
    {
      v25.m128i_i64[1] = v22.m128i_i64[0];
      v25.m128i_i64[0] = v21.m128i_i64[0];
      v23 = qvector_reserve();
      *a2 = v23;
      v18 = a2[1];
      v19 = v23;
      v22 = _mm_loadl_epi64((const __m128i *)&v25.m128i_u64[1]);
      v21 = _mm_loadl_epi64(&v25);
    }
    *(__m128i *)(v19 + 16 * v18) = _mm_unpacklo_epi64(v21, v22);
    ++a2[1];
    if ( !*(_QWORD *)v20 )
      goto LABEL_9;
    v12 = v35;
    v11 = HIDWORD(v35);
  }
  qlseek();
LABEL_30:
  HIDWORD(v35) = 0;
LABEL_9:
  v28 = &off_44F40;
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree();
  }
  return 1;
}

