unsigned __int64 __fastcall sub_133FF0(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v7; // r14
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rbx
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rax
  __m128i v17; // xmm0
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned int *v22; // rbx
  __int64 v23; // rax
  int v24; // eax
  int v25; // edx
  __int64 v26; // rbx
  __m128i v27; // [rsp+0h] [rbp-C8h] BYREF
  __int64 *v28; // [rsp+10h] [rbp-B8h]
  __int64 v29; // [rsp+18h] [rbp-B0h]
  __int64 v30; // [rsp+20h] [rbp-A8h]
  int v31; // [rsp+2Ch] [rbp-9Ch]
  __int64 v32[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v33; // [rsp+40h] [rbp-88h] BYREF
  __m128i v34; // [rsp+48h] [rbp-80h] BYREF
  __int64 v35; // [rsp+60h] [rbp-68h] BYREF
  __int64 v36; // [rsp+68h] [rbp-60h]
  __int64 v37; // [rsp+70h] [rbp-58h] BYREF
  __m128i v38; // [rsp+78h] [rbp-50h] BYREF
  unsigned __int64 v39; // [rsp+88h] [rbp-40h]

  v29 = a1;
  v30 = a5;
  v31 = a6;
  v39 = __readfsqword(0x28u);
  if ( !a3 )
  {
    sub_21C7A0(&v35, v29, a4, v30, (unsigned __int8)v31);
    goto LABEL_10;
  }
  v7 = *(_QWORD *)(a1 + 1496);
  v32[0] = 0;
  v32[1] = 0;
  v33 = 0;
  v34 = 0;
  if ( !a4 )
  {
    v26 = *(_QWORD *)(v7 + 112);
    sub_5F800(v32, (__int64 *)(v26 + 264));
    v27.m128i_i64[0] = (__int64)&v33;
    sub_3113F0(&v33, v26 + 280);
    goto LABEL_5;
  }
  if ( (*(_BYTE *)(a4 + 24) & 1) != 0 )
  {
    v22 = *(unsigned int **)(a4 + 64);
    v23 = *(_QWORD *)(a4 + 72);
    v28 = &v35;
    for ( v27.m128i_i64[0] = (__int64)&v22[2 * v23]; (unsigned int *)v27.m128i_i64[0] != v22; v22 += 2 )
    {
      v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v7 + 112) + 168LL))(*(_QWORD *)(v7 + 112), *v22);
      if ( v24 != -1 )
      {
        v25 = v22[1];
        v35 = 0;
        v36 = 0;
        sub_5F400(v28, v24, v25);
        v37 = 0;
        v38 = 0;
        sub_5F800(v32, v28);
        sub_3113F0(&v33, &v37);
        if ( v37 )
        {
          v38.m128i_i64[0] = 0;
          qfree();
        }
        qfree();
      }
    }
    v35 = 0;
    v36 = 0;
    v37 = 0;
    v28 = &v37;
    v38 = 0;
    v37 = qvector_reserve();
    *(__m128i *)(v37 + 16 * v38.m128i_i64[0]++) = _mm_load_si128((const __m128i *)&xmmword_400180);
    sub_5F800(v32, &v35);
    v27.m128i_i64[0] = (__int64)&v33;
    sub_3113F0(&v33, v28);
    if ( v37 )
    {
      v38.m128i_i64[0] = 0;
      qfree();
    }
    qfree();
    if ( (*(_BYTE *)(a4 + 24) & 4) == 0 )
      goto LABEL_5;
    goto LABEL_24;
  }
  v9 = *(_QWORD *)(v7 + 112);
  sub_5F800(v32, (__int64 *)(v9 + 264));
  v27.m128i_i64[0] = (__int64)&v33;
  sub_3113F0(&v33, v9 + 280);
  if ( (*(_BYTE *)(a4 + 24) & 4) != 0 )
  {
LABEL_24:
    if ( v33 )
    {
      v34.m128i_i64[0] = 0;
      qfree();
      v33 = 0;
      v34.m128i_i64[1] = 0;
    }
  }
LABEL_5:
  if ( (*(_BYTE *)(v7 + 605) & 0x20) != 0 )
  {
    v35 = 0;
    v36 = 0;
    sub_5F400(&v35, 0, 5);
    v37 = 0;
    v38 = 0;
    sub_5F800(v32, &v35);
    sub_3113F0(v27.m128i_i64[0], &v37);
    if ( v37 )
    {
      v38.m128i_i64[0] = 0;
      qfree();
    }
    qfree();
  }
  sub_5FE50(a3, v32);
  v10 = a3[2];
  v11 = v33;
  v33 = 0;
  v12 = _mm_loadu_si128(&v34);
  v34 = 0;
  if ( v10 )
  {
    a3[3] = 0;
    v27 = v12;
    qfree();
    v13 = _mm_load_si128(&v27);
    v14 = v33;
    a3[2] = v11;
    *(__m128i *)(a3 + 3) = v13;
    if ( v14 )
    {
      v34.m128i_i64[0] = 0;
      qfree();
    }
  }
  else
  {
    a3[2] = v11;
    *(__m128i *)(a3 + 3) = v12;
  }
  qfree();
  sub_21C7A0(&v35, v29, a4, v30, (unsigned __int8)v31);
  sub_5F800(a3, &v35);
  sub_3113F0(a3 + 2, &v37);
LABEL_10:
  v15 = v37;
  if ( a2 )
  {
    v16 = *(_QWORD *)a2;
    v17 = _mm_loadu_si128(&v38);
    *(_QWORD *)a2 = v35;
    v35 = v16;
    v18 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 8) = v36;
    v19 = *(_QWORD *)(a2 + 32);
    v36 = v18;
    v20 = *(_QWORD *)(a2 + 16);
    v38.m128i_i64[1] = v19;
    v37 = v20;
    *(_QWORD *)(a2 + 16) = v15;
    v15 = v20;
    *(__m128i *)(a2 + 24) = v17;
  }
  if ( v15 )
  {
    v38.m128i_i64[0] = 0;
    qfree();
  }
  qfree();
  return v39 - __readfsqword(0x28u);
}

