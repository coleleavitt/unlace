unsigned __int64 __fastcall sub_3A6330(const __m128i *a1)
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
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __m128i v27; // xmm0
  __m128i *v28; // rax
  int *v29; // rax
  int v30; // r9d
  int *v31; // rdx
  int v32; // r10d
  __int64 v33; // rax
  __int64 v35; // [rsp+0h] [rbp-C8h]
  __int128 v36; // [rsp+8h] [rbp-C0h]
  __int64 v37; // [rsp+18h] [rbp-B0h]
  __int64 v38; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v39; // [rsp+28h] [rbp-A0h]
  __int64 v40; // [rsp+40h] [rbp-88h] BYREF
  __int128 v41; // [rsp+48h] [rbp-80h]
  char v42[40]; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v43; // [rsp+88h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  v35 = 0;
  v36 = 0;
  sub_2B6570(a1[13].m128i_i64[1], a1->m128i_i64[0], 0);
  for ( i = netnode_supfirst(); ; i = netnode_supnext() )
  {
    v6 = v36;
    v7 = v35;
    v8 = v36;
    v9 = v35;
    if ( i == -1 )
      break;
    v10 = v36 + 1;
    if ( *((_QWORD *)&v36 + 1) < (unsigned __int64)(v36 + 1) )
    {
      v35 = qvector_reserve();
      v9 = v35;
      v8 = v36;
      v10 = v36 + 1;
    }
    v3 = 16 * v8 + v9;
    *(_QWORD *)&v36 = v10;
    *(_QWORD *)v3 = _mm_shuffle_epi32(_mm_cvtsi32_si128(i), 224).m128i_u64[0];
    v4 = a1->m128i_i64[0];
    v5 = netnode_altval();
    *(_QWORD *)(v3 + 8) = v4 + v5;
    sub_3A61B0((__int64)a1, (int *)(v3 + 4), v4 + v5);
  }
  v11.m128i_i64[0] = 0;
  v12 = (int *)v35;
  v13 = 0;
  v39 = 0;
  v14 = 0;
  v15 = (int *)(v35 + 16 * v36);
  v41 = 0;
  v38 = 0;
  v40 = 0;
  if ( v15 != (int *)v35 )
  {
    do
    {
      if ( *((_QWORD *)v12 + 1) == -1 )
      {
        v29 = v12;
        while ( v29 != (int *)v7 )
        {
          v29 -= 4;
          if ( *((_QWORD *)v29 + 1) != -1 )
            goto LABEL_31;
        }
        v30 = 0x7FFFFFFF;
        if ( *((_QWORD *)v29 + 1) == -1 )
          goto LABEL_24;
LABEL_31:
        v30 = *v12 - *v29;
LABEL_24:
        v31 = v29;
        do
        {
          v31 += 4;
          if ( v15 == v31 )
          {
            if ( v30 == 0x7FFFFFFF )
              goto LABEL_18;
            goto LABEL_28;
          }
        }
        while ( *((_QWORD *)v31 + 1) == -1 );
        v32 = *v31;
        if ( *v31 - *v12 <= v30 )
          goto LABEL_30;
LABEL_28:
        if ( v15 == v29 )
          goto LABEL_18;
        v32 = *v29;
        v31 = v29;
LABEL_30:
        v16 = v12[1] + v31[1] - v32;
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
          v14 = callui(1104, v42, &callui, v18, v19, v20, v35, v36, *((_QWORD *)&v36 + 1), v37);
        }
        v21 = v39;
        v22 = v38;
        if ( *((_QWORD *)&v39 + 1) < (unsigned __int64)(v39 + 1) )
        {
          v38 = qvector_reserve();
          v22 = v38;
          v21 = v39;
        }
        v23 = 32 * v21 + v22;
        *(_QWORD *)(v23 + 8) = 0;
        *(_QWORD *)v23 = -1;
        *(_QWORD *)(v23 + 16) = v17;
        *(_QWORD *)&v39 = v39 + 1;
        *(_DWORD *)(v23 + 24) = v14;
        *(_QWORD *)v23 = v17;
        *(_DWORD *)(v23 + 8) = v14;
        *(_DWORD *)(v23 + 12) = 3;
        v24 = v41;
        *(_DWORD *)(v23 + 28) = 3;
        v25 = v24 + 1;
        *(_QWORD *)(v23 + 16) = v12[1];
        v26 = v40;
        if ( *((_QWORD *)&v41 + 1) < (unsigned __int64)(v24 + 1) )
        {
          v33 = qvector_reserve();
          v24 = v41;
          v40 = v33;
          v26 = v33;
          v25 = v41 + 1;
        }
        v27 = _mm_loadl_epi64(a1);
        *(_QWORD *)&v41 = v25;
        v13 = 3;
        v28 = (__m128i *)(v26 + 24 * v24);
        v11 = _mm_unpacklo_epi64(v27, v27);
        *v28 = v11;
        v28[1].m128i_i64[0] = *((_QWORD *)v12 + 1);
      }
      v6 = v36;
      v7 = v35;
LABEL_18:
      v12 += 4;
      v15 = (int *)(v7 + 16 * v6);
    }
    while ( v12 != v15 );
  }
  sub_3A5960(a1[13].m128i_i64[1], (__int64)&v38, &v40, *(double *)v11.m128i_i64);
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    qfree();
  }
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    qfree();
  }
  if ( v35 )
    qfree();
  return v43 - __readfsqword(0x28u);
}

