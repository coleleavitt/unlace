unsigned __int64 __fastcall sub_3A5DF0(__m128i *a1)
{
  __int64 i; // r12
  __int64 v3; // rbp
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rdx
  __m128i v11; // xmm0
  int *v12; // r12
  int v13; // r8d
  int v14; // r13d
  int *v15; // rdi
  int v16; // eax
  __int64 v17; // r14
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rsi
  __m128i v28; // xmm0
  __m128i *v29; // rax
  int *v30; // rax
  int v31; // r9d
  int *v32; // rdx
  int v33; // r10d
  __int64 v34; // rax
  int *v36; // [rsp+0h] [rbp-C8h] BYREF
  __int128 v37; // [rsp+8h] [rbp-C0h]
  __int64 v38; // [rsp+18h] [rbp-B0h]
  __int64 v39; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v40; // [rsp+28h] [rbp-A0h]
  __int64 v41; // [rsp+40h] [rbp-88h] BYREF
  __int128 v42; // [rsp+48h] [rbp-80h]
  char v43[40]; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v44; // [rsp+88h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  v36 = nullptr;
  v37 = 0;
  sub_2B61B0(a1[13].m128i_i64[1], a1->m128i_i64[0], 0);
  for ( i = netnode_supfirst(); ; i = netnode_supnext() )
  {
    v6 = v37;
    v7 = (__int64)v36;
    v8 = v37;
    v9 = (__int64)v36;
    if ( i == -1 )
      break;
    v10 = v37 + 1;
    if ( *((_QWORD *)&v37 + 1) < (unsigned __int64)(v37 + 1) )
    {
      v36 = (int *)qvector_reserve((__int64)&v36, (__int64)v36, v10, 16);
      v9 = (__int64)v36;
      v8 = v37;
      v10 = v37 + 1;
    }
    v3 = 16 * v8 + v9;
    *(_QWORD *)&v37 = v10;
    *(_QWORD *)v3 = _mm_shuffle_epi32(_mm_cvtsi32_si128(i), 224).m128i_u64[0];
    v4 = a1->m128i_i64[0];
    v5 = netnode_altval();
    *(_QWORD *)(v3 + 8) = v4 + v5;
    sub_3A5C70(a1, (int *)(v3 + 4), v4 + v5);
  }
  v11.m128i_i64[0] = 0;
  v12 = v36;
  v13 = 0;
  v40 = 0;
  v14 = 0;
  v15 = &v36[4 * v37];
  v42 = 0;
  v39 = 0;
  v41 = 0;
  if ( v15 != v36 )
  {
    do
    {
      if ( *((_QWORD *)v12 + 1) == -1 )
      {
        v30 = v12;
        while ( v30 != (int *)v7 )
        {
          v30 -= 4;
          if ( *((_QWORD *)v30 + 1) != -1 )
            goto LABEL_31;
        }
        v31 = 0x7FFFFFFF;
        if ( *((_QWORD *)v30 + 1) == -1 )
          goto LABEL_24;
LABEL_31:
        v31 = *v12 - *v30;
LABEL_24:
        v32 = v30;
        do
        {
          v32 += 4;
          if ( v15 == v32 )
          {
            if ( v31 == 0x7FFFFFFF )
              goto LABEL_18;
            goto LABEL_28;
          }
        }
        while ( *((_QWORD *)v32 + 1) == -1 );
        v33 = *v32;
        if ( *v32 - *v12 <= v31 )
          goto LABEL_30;
LABEL_28:
        if ( v15 == v30 )
          goto LABEL_18;
        v33 = *v30;
        v32 = v30;
LABEL_30:
        v16 = v12[1] + v32[1] - v33;
        v12[1] = v16;
      }
      else
      {
        v16 = v12[1];
      }
      v17 = *v12;
      if ( (_DWORD)v17 != v16 )
      {
        if ( v13 != 3 )
        {
          qsnprintf();
          v17 = *v12;
          callui(1104, v43, &callui, v18, v19, v20, v36, v37, *((_QWORD *)&v37 + 1), v38);
          v14 = v21;
        }
        v22 = v40;
        v23 = v39;
        if ( *((_QWORD *)&v40 + 1) < (unsigned __int64)(v40 + 1) )
        {
          v39 = qvector_reserve((__int64)&v39, v39, v40 + 1, 32);
          v23 = v39;
          v22 = v40;
        }
        v24 = 32 * v22 + v23;
        *(_QWORD *)(v24 + 8) = 0;
        *(_QWORD *)v24 = -1;
        *(_QWORD *)(v24 + 16) = v17;
        *(_QWORD *)&v40 = v40 + 1;
        *(_DWORD *)(v24 + 24) = v14;
        *(_QWORD *)v24 = v17;
        *(_DWORD *)(v24 + 8) = v14;
        *(_DWORD *)(v24 + 12) = 3;
        v25 = v42;
        *(_DWORD *)(v24 + 28) = 3;
        v26 = v25 + 1;
        *(_QWORD *)(v24 + 16) = v12[1];
        v27 = v41;
        if ( *((_QWORD *)&v42 + 1) < (unsigned __int64)(v25 + 1) )
        {
          v34 = qvector_reserve((__int64)&v41, v41, v26, 24);
          v25 = v42;
          v41 = v34;
          v27 = v34;
          v26 = v42 + 1;
        }
        v28 = _mm_loadl_epi64(a1);
        *(_QWORD *)&v42 = v26;
        v13 = 3;
        v29 = (__m128i *)(v27 + 24 * v25);
        v11 = _mm_unpacklo_epi64(v28, v28);
        *v29 = v11;
        v29[1].m128i_i64[0] = *((_QWORD *)v12 + 1);
      }
      v6 = v37;
      v7 = (__int64)v36;
LABEL_18:
      v12 += 4;
      v15 = (int *)(v7 + 16 * v6);
    }
    while ( v12 != v15 );
  }
  sub_3A5420(a1[13].m128i_i64[1], (__int64)&v39, &v41, *(double *)v11.m128i_i64);
  if ( v41 )
  {
    *(_QWORD *)&v42 = 0;
    qfree(v41);
  }
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v39);
  }
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree((__int64)v36);
  }
  return v44 - __readfsqword(0x28u);
}

