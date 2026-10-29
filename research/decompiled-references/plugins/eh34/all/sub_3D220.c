__int64 __fastcall sub_3D220(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r12
  __int64 v5; // rax
  __m128i v6; // xmm0
  const __m128i *v7; // rdi
  __int32 v9; // r14d
  __int64 v10; // rdx
  int v11; // r13d
  __int64 v12; // rdx
  __int32 v13; // eax
  __int64 v14; // rsi
  __int64 v15; // rcx
  __m128i v16; // kr00_16
  __int64 v17; // rax
  __int32 v18; // eax
  unsigned __int64 v19; // r10
  __int32 v20; // r9d
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rsi
  const __m128i *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rdx
  __m128i v29; // xmm0
  bool v30; // cf
  __int64 v31; // rcx
  __int64 v32; // rsi
  const __m128i *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rdx
  __m128i v36; // xmm0
  const __m128i *v37; // rdx
  __m128 v38; // xmm0
  unsigned __int32 v39; // [rsp+0h] [rbp-A8h]
  unsigned __int64 v40; // [rsp+0h] [rbp-A8h]
  __int64 v41; // [rsp+0h] [rbp-A8h]
  __int32 v42; // [rsp+0h] [rbp-A8h]
  __int64 v43; // [rsp+0h] [rbp-A8h]
  unsigned __int64 v44; // [rsp+8h] [rbp-A0h]
  __int32 v45; // [rsp+8h] [rbp-A0h]
  const __m128i *v46; // [rsp+20h] [rbp-88h] BYREF
  __int128 v47; // [rsp+28h] [rbp-80h] BYREF
  __m128i v48; // [rsp+40h] [rbp-68h] BYREF
  __int64 v49; // [rsp+50h] [rbp-58h]
  char v50; // [rsp+58h] [rbp-50h]
  unsigned __int64 v51; // [rsp+68h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  v47 = 0;
  v46 = nullptr;
  v4 = a2[2];
  sub_744C0(&v48, *a2, a2[1]);
  if ( v50 )
  {
    v5 = v48.m128i_i64[0];
    v6 = _mm_loadu_si128((const __m128i *)&v48.m128i_u64[1]);
    *(_BYTE *)(a1 + 24) = 1;
    v7 = v46;
    *(_QWORD *)a1 = v5;
    *(__m128i *)(a1 + 8) = v6;
  }
  else
  {
    v9 = v48.m128i_i32[0];
    v10 = v48.m128i_i64[1] + a2[1];
    a2[1] = v10;
    if ( !v9 )
    {
LABEL_31:
      v37 = v46;
      *(_BYTE *)(a1 + 24) = 0;
      v38 = _mm_loadh_ps((const double *)&v47 + 1);
      *(_QWORD *)a1 = v37;
      *(__m128 *)(a1 + 8) = v38;
      return a1;
    }
    v11 = 0;
    while ( 1 )
    {
      sub_744C0(&v48, *a2, v10);
      if ( v50 )
        break;
      v12 = v48.m128i_i64[1] + a2[1];
      v13 = v48.m128i_i32[0];
      v14 = *a2;
      a2[1] = v12;
      v39 = v13;
      sub_744C0(&v48, v14, v12);
      v7 = v46;
      v15 = (__int64)v46;
      if ( v50 )
      {
        v16 = v48;
        v17 = v49;
        goto LABEL_11;
      }
      v4 += v39;
      v18 = v48.m128i_i32[0];
      v48.m128i_i64[0] = v4;
      v19 = *((_QWORD *)&v47 + 1);
      v20 = v18 - 1;
      v21 = v47;
      a2[1] += v48.m128i_i64[1];
      v48.m128i_i32[2] = v20;
      v22 = v21 + 1;
      if ( &v48 < v7 || &v48 >= &v7[v19] )
      {
        if ( v19 < v22 )
        {
          v40 = v19;
          v24 = qvector_reserve(&v46, 0, v22, 16);
          v25 = *((_QWORD *)&v47 + 1);
          v26 = v46;
          *((_QWORD *)&v47 + 1) = v40;
          v27 = v47 - 1;
          if ( (__int64)v47 - 1 >= 0 )
          {
            v28 = v24;
            do
            {
              v29 = _mm_loadu_si128(v26);
              v28 += 16;
              ++v26;
              *(__m128i *)(v28 - 16) = v29;
              v30 = v27-- == 0;
            }
            while ( !v30 );
            v26 = v46;
          }
          v41 = v24;
          qfree(v26);
          v15 = v41;
          v21 = v47;
          v46 = (const __m128i *)v41;
          *((_QWORD *)&v47 + 1) = v25;
        }
        *(__m128i *)(v15 + 16 * v21) = _mm_load_si128(&v48);
      }
      else
      {
        if ( v19 < v22 )
        {
          v42 = v20;
          v44 = v19;
          v31 = qvector_reserve(&v46, 0, v22, 16);
          v32 = *((_QWORD *)&v47 + 1);
          v33 = v46;
          v34 = v47 - 1;
          *((_QWORD *)&v47 + 1) = v44;
          if ( (__int64)v47 - 1 >= 0 )
          {
            v35 = v31;
            do
            {
              v36 = _mm_loadu_si128(v33);
              v35 += 16;
              ++v33;
              *(__m128i *)(v35 - 16) = v36;
              v30 = v34-- == 0;
            }
            while ( !v30 );
            v33 = v46;
          }
          v45 = v42;
          v43 = v31;
          qfree(v33);
          v15 = v43;
          v21 = v47;
          v20 = v45;
          v46 = (const __m128i *)v43;
          *((_QWORD *)&v47 + 1) = v32;
        }
        v23 = v15 + 16 * v21;
        *(_QWORD *)v23 = v4;
        *(_DWORD *)(v23 + 8) = v20;
      }
      ++v11;
      *(_QWORD *)&v47 = v47 + 1;
      if ( v11 == v9 )
        goto LABEL_31;
      v10 = a2[1];
    }
    v17 = v49;
    v7 = v46;
    v16 = v48;
LABEL_11:
    *(__m128i *)a1 = v16;
    *(_QWORD *)(a1 + 16) = v17;
    *(_BYTE *)(a1 + 24) = 1;
  }
  if ( v7 )
  {
    *(_QWORD *)&v47 = 0;
    qfree(v7);
  }
  return a1;
}
