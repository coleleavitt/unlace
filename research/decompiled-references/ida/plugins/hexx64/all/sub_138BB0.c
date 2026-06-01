unsigned __int64 __fastcall sub_138BB0(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, unsigned __int64 a5, int a6)
{
  __m128i si128; // xmm0
  __int64 v8; // r14
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rbx
  __m128i v15; // xmm0
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 *v19; // rdi
  __int64 v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 *v24; // rax
  unsigned int *v26; // rbx
  __int64 v27; // rax
  int v28; // eax
  int v29; // edx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __m128i v40; // [rsp+0h] [rbp-C8h] BYREF
  __int64 *v41; // [rsp+10h] [rbp-B8h]
  __int64 v42; // [rsp+18h] [rbp-B0h]
  unsigned __int64 v43; // [rsp+20h] [rbp-A8h]
  int v44; // [rsp+2Ch] [rbp-9Ch]
  const void *v45[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v46; // [rsp+40h] [rbp-88h] BYREF
  __m128i v47; // [rsp+48h] [rbp-80h] BYREF
  __int64 v48; // [rsp+60h] [rbp-68h] BYREF
  __int64 v49; // [rsp+68h] [rbp-60h]
  __int64 *v50; // [rsp+70h] [rbp-58h] BYREF
  __m128i v51; // [rsp+78h] [rbp-50h] BYREF
  unsigned __int64 v52; // [rsp+88h] [rbp-40h]

  v42 = a1;
  v43 = a5;
  v44 = a6;
  v52 = __readfsqword(0x28u);
  if ( !a3 )
  {
    sub_221B60((__int64)&v48, v42, a4, v43, v44);
    goto LABEL_10;
  }
  si128.m128i_i64[0] = 0;
  v8 = *(_QWORD *)(a1 + 1496);
  v45[0] = nullptr;
  v45[1] = nullptr;
  v46 = 0;
  v47 = 0;
  if ( !a4 )
  {
    v37 = *(_QWORD *)(v8 + 112);
    sub_64280((__int64 *)v45, (__int64 *)(v37 + 264), 0.0);
    v40.m128i_i64[0] = (__int64)&v46;
    sub_316CB0(&v46, (__int64 **)(v37 + 280), v38, v39);
    goto LABEL_5;
  }
  if ( (*(_BYTE *)(a4 + 24) & 1) != 0 )
  {
    v26 = *(unsigned int **)(a4 + 64);
    v27 = *(_QWORD *)(a4 + 72);
    v41 = &v48;
    for ( v40.m128i_i64[0] = (__int64)&v26[2 * v27]; (unsigned int *)v40.m128i_i64[0] != v26; v26 += 2 )
    {
      v28 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v8 + 112) + 168LL))(*(_QWORD *)(v8 + 112), *v26);
      if ( v28 != -1 )
      {
        v29 = v26[1];
        v48 = 0;
        v49 = 0;
        sub_63E80(v41, v28, v29, 0.0);
        v50 = nullptr;
        v51 = 0;
        sub_64280((__int64 *)v45, v41, 0.0);
        sub_316CB0(&v46, &v50, v30, v31);
        if ( v50 )
        {
          v51.m128i_i64[0] = 0;
          qfree((__int64)v50);
        }
        qfree(v48);
      }
    }
    v48 = 0;
    v49 = 0;
    v50 = nullptr;
    v41 = (__int64 *)&v50;
    v51 = 0;
    v32 = (__int64 *)qvector_reserve((__int64)&v50, 0, 1, 16);
    si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
    v50 = v32;
    *(__m128i *)&v32[2 * v51.m128i_i64[0]++] = si128;
    sub_64280((__int64 *)v45, &v48, *(double *)si128.m128i_i64);
    v40.m128i_i64[0] = (__int64)&v46;
    sub_316CB0(&v46, (__int64 **)v41, v33, v34);
    if ( v50 )
    {
      v51.m128i_i64[0] = 0;
      qfree((__int64)v50);
    }
    qfree(v48);
    if ( (*(_BYTE *)(a4 + 24) & 4) == 0 )
      goto LABEL_5;
    goto LABEL_24;
  }
  v10 = *(_QWORD *)(v8 + 112);
  sub_64280((__int64 *)v45, (__int64 *)(v10 + 264), 0.0);
  v40.m128i_i64[0] = (__int64)&v46;
  sub_316CB0(&v46, (__int64 **)(v10 + 280), v11, v12);
  if ( (*(_BYTE *)(a4 + 24) & 4) != 0 )
  {
LABEL_24:
    if ( v46 )
    {
      v47.m128i_i64[0] = 0;
      qfree(v46);
      v46 = 0;
      v47.m128i_i64[1] = 0;
    }
  }
LABEL_5:
  if ( (*(_BYTE *)(v8 + 605) & 0x20) != 0 )
  {
    v48 = 0;
    v49 = 0;
    sub_63E80(&v48, 0, 5, *(double *)si128.m128i_i64);
    si128.m128i_i64[0] = 0;
    v50 = nullptr;
    v51 = 0;
    sub_64280((__int64 *)v45, &v48, 0.0);
    sub_316CB0((__int64 *)v40.m128i_i64[0], &v50, v35, v36);
    if ( v50 )
    {
      v51.m128i_i64[0] = 0;
      qfree((__int64)v50);
    }
    qfree(v48);
  }
  sub_648D0(a3, v45, *(double *)si128.m128i_i64);
  v13 = a3[2];
  v14 = v46;
  v46 = 0;
  v15 = _mm_loadu_si128(&v47);
  v47 = 0;
  if ( v13 )
  {
    a3[3] = 0;
    v40 = v15;
    qfree(v13);
    v15 = _mm_load_si128(&v40);
    v16 = v46;
    a3[2] = v14;
    *(__m128i *)(a3 + 3) = v15;
    if ( v16 )
    {
      v47.m128i_i64[0] = 0;
      qfree(v16);
    }
  }
  else
  {
    a3[2] = v14;
    *(__m128i *)(a3 + 3) = v15;
  }
  qfree((__int64)v45[0]);
  sub_221B60((__int64)&v48, v42, a4, v43, v44);
  sub_64280(a3, &v48, *(double *)v15.m128i_i64);
  sub_316CB0(a3 + 2, &v50, v17, v18);
LABEL_10:
  v19 = v50;
  if ( a2 )
  {
    v20 = *(_QWORD *)a2;
    v21 = _mm_loadu_si128(&v51);
    *(_QWORD *)a2 = v48;
    v48 = v20;
    v22 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 8) = v49;
    v23 = *(_QWORD *)(a2 + 32);
    v49 = v22;
    v24 = *(__int64 **)(a2 + 16);
    v51.m128i_i64[1] = v23;
    v50 = v24;
    *(_QWORD *)(a2 + 16) = v19;
    v19 = v24;
    *(__m128i *)(a2 + 24) = v21;
  }
  if ( v19 )
  {
    v51.m128i_i64[0] = 0;
    qfree((__int64)v19);
  }
  qfree(v48);
  return v52 - __readfsqword(0x28u);
}

