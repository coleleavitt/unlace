unsigned __int64 __fastcall sub_670B0(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  unsigned __int64 v6; // rax
  __m128 *v7; // rax
  __int64 v8; // rdx
  __m128 v9; // xmm0
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __m128 v15; // xmm0
  __int32 *v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  __m128 *v19; // rax
  unsigned __int64 v20; // rdx
  _QWORD *v21; // rdi
  __m128 v22; // xmm0
  __int32 *v23; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // r15
  __int64 v27; // rbx
  __int64 v28; // rax
  __m128 v29; // xmm0
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // r14
  _QWORD *v33; // r13
  __int64 v34; // rdi
  __int64 v35; // rax
  unsigned __int64 v36; // rsi
  unsigned __int64 v37; // rbp
  unsigned __int64 v38; // r15
  __int64 v39; // rbp
  __int64 v40; // rbx
  __int64 v41; // rax
  __m128 v42; // xmm0
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // r14
  _QWORD *v46; // r13
  __int64 v47; // rdi
  __int64 v48; // [rsp+8h] [rbp-B0h]
  __int64 v49; // [rsp+8h] [rbp-B0h]
  __int64 v50; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v51; // [rsp+20h] [rbp-98h]
  unsigned __int64 v52; // [rsp+28h] [rbp-90h]
  unsigned __int64 v53; // [rsp+30h] [rbp-88h]
  __int32 v54; // [rsp+38h] [rbp-80h]
  __int32 v55; // [rsp+48h] [rbp-70h] BYREF
  __m128 v56; // [rsp+50h] [rbp-68h] BYREF
  __int32 *v57; // [rsp+60h] [rbp-58h]
  unsigned __int64 v58; // [rsp+68h] [rbp-50h]
  __int32 v59; // [rsp+70h] [rbp-48h]
  unsigned __int64 v60; // [rsp+78h] [rbp-40h]

  v3 = *a1;
  v4 = a1[2];
  v60 = __readfsqword(0x28u);
  v50 = v3;
  if ( a2 >= v3 && a2 < v3 + 88 * v4 )
  {
    v13 = *(_QWORD *)a2;
    v52 = *(_QWORD *)(a2 + 8);
    v51 = *(_QWORD *)a2;
    v53 = *(_QWORD *)(a2 + 16);
    v54 = *(_DWORD *)(a2 + 24);
    v14 = *(_QWORD *)(a2 + 48);
    if ( v14 )
    {
      v15 = _mm_loadh_ps((const double *)(a2 + 56));
      v55 = *(_DWORD *)(a2 + 40);
      v16 = *(__int32 **)(a2 + 64);
      v56 = v15;
      v57 = v16;
      *(_QWORD *)(v14 + 8) = &v55;
      v17 = *(_QWORD *)(a2 + 72);
      *(_QWORD *)(a2 + 48) = 0;
      v58 = v17;
      *(_QWORD *)(a2 + 56) = a2 + 40;
      *(_QWORD *)(a2 + 64) = a2 + 40;
      *(_QWORD *)(a2 + 72) = 0;
      v4 = a1[2];
    }
    else
    {
      v55 = 0;
      v56.m128_u64[0] = 0;
      v56.m128_u64[1] = (unsigned __int64)&v55;
      v57 = &v55;
      v58 = 0;
    }
    v59 = *(_DWORD *)(a2 + 80);
    v18 = a1[1];
    if ( v4 < v18 + 1 )
    {
      v35 = qvector_reserve(a1, 0, v18 + 1, 88);
      v36 = a1[2];
      v37 = a1[1];
      v48 = v35;
      a1[2] = v4;
      v38 = *a1;
      v39 = v37 - 1;
      if ( v39 >= 0 )
      {
        v40 = v35 + 40;
        do
        {
          *(_QWORD *)(v40 - 40) = *(_QWORD *)v38;
          *(_QWORD *)(v40 - 32) = *(_QWORD *)(v38 + 8);
          *(_QWORD *)(v40 - 24) = *(_QWORD *)(v38 + 16);
          *(_DWORD *)(v40 - 16) = *(_DWORD *)(v38 + 24);
          v41 = *(_QWORD *)(v38 + 48);
          if ( v41 )
          {
            v42 = _mm_loadh_ps((const double *)(v38 + 56));
            *(_DWORD *)v40 = *(_DWORD *)(v38 + 40);
            v43 = *(_QWORD *)(v38 + 64);
            *(__m128 *)(v40 + 8) = v42;
            *(_QWORD *)(v40 + 24) = v43;
            *(_QWORD *)(v41 + 8) = v40;
            v44 = *(_QWORD *)(v38 + 72);
            *(_QWORD *)(v38 + 48) = 0;
            *(_QWORD *)(v40 + 32) = v44;
            *(_QWORD *)(v38 + 56) = v38 + 40;
            *(_QWORD *)(v38 + 64) = v38 + 40;
            *(_QWORD *)(v38 + 72) = 0;
          }
          else
          {
            *(_DWORD *)v40 = 0;
            *(_QWORD *)(v40 + 8) = 0;
            *(_QWORD *)(v40 + 16) = v40;
            *(_QWORD *)(v40 + 24) = v40;
            *(_QWORD *)(v40 + 32) = 0;
          }
          *(_DWORD *)(v40 + 40) = *(_DWORD *)(v38 + 80);
          v45 = *(_QWORD *)(v38 + 48);
          while ( v45 )
          {
            v46 = (_QWORD *)v45;
            sub_65640(*(_QWORD **)(v45 + 24));
            v47 = *(_QWORD *)(v45 + 64);
            v45 = *(_QWORD *)(v45 + 16);
            if ( v47 )
            {
              v46[9] = 0;
              qfree(v47);
            }
            operator delete(v46, 0x58u);
          }
          --v39;
          v38 += 88LL;
          v40 += 88;
        }
        while ( v39 != -1 );
        v38 = *a1;
      }
      qfree(v38);
      v13 = v51;
      *a1 = v48;
      a1[2] = v36;
      v18 = a1[1];
    }
    else
    {
      v48 = *a1;
    }
    v19 = (__m128 *)(v48 + 88 * v18);
    v19->m128_u64[0] = v13;
    v19->m128_u64[1] = v52;
    v19[1].m128_u64[0] = v53;
    v19[1].m128_i32[2] = v54;
    v20 = v56.m128_u64[0];
    if ( v56.m128_u64[0] )
    {
      v21 = nullptr;
      v22 = _mm_loadh_ps((const double *)&v56.m128_u64[1]);
      v19[2].m128_i32[2] = v55;
      v23 = v57;
      v19[3] = v22;
      v19[4].m128_u64[0] = (unsigned __int64)v23;
      *(_QWORD *)(v20 + 8) = (char *)v19 + 40;
      v56.m128_u64[0] = 0;
      v19[4].m128_u64[1] = v58;
      v56.m128_u64[1] = (unsigned __int64)&v55;
      v57 = &v55;
      v58 = 0;
    }
    else
    {
      v19[2].m128_i32[2] = 0;
      v19[3].m128_u64[0] = 0;
      v21 = (_QWORD *)v56.m128_u64[0];
      v19[3].m128_u64[1] = (unsigned __int64)&v19[2].m128_u64[1];
      v19[4].m128_u64[0] = (unsigned __int64)&v19[2].m128_u64[1];
      v19[4].m128_u64[1] = 0;
    }
    v19[5].m128_i32[0] = v59;
    sub_65640(v21);
  }
  else
  {
    v6 = a1[1];
    if ( v4 < v6 + 1 )
    {
      v24 = qvector_reserve(a1, 0, v6 + 1, 88);
      v25 = a1[2];
      v26 = *a1;
      a1[2] = v4;
      v50 = v24;
      v49 = a1[1] - 1;
      if ( v49 >= 0 )
      {
        v27 = v24 + 40;
        do
        {
          *(_QWORD *)(v27 - 40) = *(_QWORD *)v26;
          *(_QWORD *)(v27 - 32) = *(_QWORD *)(v26 + 8);
          *(_QWORD *)(v27 - 24) = *(_QWORD *)(v26 + 16);
          *(_DWORD *)(v27 - 16) = *(_DWORD *)(v26 + 24);
          v28 = *(_QWORD *)(v26 + 48);
          if ( v28 )
          {
            v29 = _mm_loadh_ps((const double *)(v26 + 56));
            *(_DWORD *)v27 = *(_DWORD *)(v26 + 40);
            v30 = *(_QWORD *)(v26 + 64);
            *(__m128 *)(v27 + 8) = v29;
            *(_QWORD *)(v27 + 24) = v30;
            *(_QWORD *)(v28 + 8) = v27;
            v31 = *(_QWORD *)(v26 + 72);
            *(_QWORD *)(v26 + 48) = 0;
            *(_QWORD *)(v27 + 32) = v31;
            *(_QWORD *)(v26 + 56) = v26 + 40;
            *(_QWORD *)(v26 + 64) = v26 + 40;
            *(_QWORD *)(v26 + 72) = 0;
          }
          else
          {
            *(_DWORD *)v27 = 0;
            *(_QWORD *)(v27 + 8) = 0;
            *(_QWORD *)(v27 + 16) = v27;
            *(_QWORD *)(v27 + 24) = v27;
            *(_QWORD *)(v27 + 32) = 0;
          }
          *(_DWORD *)(v27 + 40) = *(_DWORD *)(v26 + 80);
          v32 = *(_QWORD *)(v26 + 48);
          while ( v32 )
          {
            v33 = (_QWORD *)v32;
            sub_65640(*(_QWORD **)(v32 + 24));
            v34 = *(_QWORD *)(v32 + 64);
            v32 = *(_QWORD *)(v32 + 16);
            if ( v34 )
            {
              v33[9] = 0;
              qfree(v34);
            }
            operator delete(v33, 0x58u);
          }
          --v49;
          v26 += 88LL;
          v27 += 88;
        }
        while ( v49 != -1 );
        v26 = *a1;
      }
      qfree(v26);
      *a1 = v50;
      a1[2] = v25;
      v6 = a1[1];
    }
    v7 = (__m128 *)(v50 + 88 * v6);
    v7->m128_u64[0] = *(_QWORD *)a2;
    v7->m128_u64[1] = *(_QWORD *)(a2 + 8);
    v7[1].m128_u64[0] = *(_QWORD *)(a2 + 16);
    v7[1].m128_i32[2] = *(_DWORD *)(a2 + 24);
    v8 = *(_QWORD *)(a2 + 48);
    if ( v8 )
    {
      v9 = _mm_loadh_ps((const double *)(a2 + 56));
      v7[2].m128_i32[2] = *(_DWORD *)(a2 + 40);
      v10 = *(_QWORD *)(a2 + 64);
      v7[3] = v9;
      v7[4].m128_u64[0] = v10;
      *(_QWORD *)(v8 + 8) = (char *)v7 + 40;
      v11 = *(_QWORD *)(a2 + 72);
      *(_QWORD *)(a2 + 48) = 0;
      v7[4].m128_u64[1] = v11;
      *(_QWORD *)(a2 + 56) = a2 + 40;
      *(_QWORD *)(a2 + 64) = a2 + 40;
      *(_QWORD *)(a2 + 72) = 0;
    }
    else
    {
      v7[2].m128_i32[2] = 0;
      v7[3].m128_u64[0] = 0;
      v7[3].m128_u64[1] = (unsigned __int64)&v7[2].m128_u64[1];
      v7[4].m128_u64[0] = (unsigned __int64)&v7[2].m128_u64[1];
      v7[4].m128_u64[1] = 0;
    }
    v7[5].m128_i32[0] = *(_DWORD *)(a2 + 80);
  }
  ++a1[1];
  return v60 - __readfsqword(0x28u);
}

