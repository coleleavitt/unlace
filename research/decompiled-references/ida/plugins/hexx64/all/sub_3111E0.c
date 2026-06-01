__int64 __fastcall sub_3111E0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  int v5; // eax
  __m128i v6; // xmm0
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __m128i v14; // xmm1
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rax
  unsigned int v18; // r15d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r12
  int v22; // r14d
  unsigned int v23; // r13d
  __m128i *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r12
  __int64 v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 *v31; // rax
  const void *v32; // rsi
  __int64 v33; // r12
  __m128i *v34; // rbx
  __m128i *i; // rbp
  __int64 v36; // rdi
  void *v38; // rax
  const void *v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 (__fastcall *v45)(__int64, int); // rax
  unsigned int v46; // r13d
  __int64 v47; // r14
  __int64 (__fastcall *v48)(__int64, int, int); // rax
  unsigned int v49; // r12d
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rax
  __m128i *v53; // rcx
  __int64 *v54; // rdx
  unsigned int v55; // eax
  __m128i v56; // [rsp+0h] [rbp-108h] BYREF
  __int64 *v57; // [rsp+10h] [rbp-F8h]
  __int64 v58; // [rsp+18h] [rbp-F0h]
  __int64 *v59; // [rsp+20h] [rbp-E8h]
  __int64 v60; // [rsp+28h] [rbp-E0h]
  size_t n; // [rsp+30h] [rbp-D8h]
  __m128i *v62; // [rsp+38h] [rbp-D0h]
  __m128i v63; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v64; // [rsp+50h] [rbp-B8h]
  __int64 v65[3]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v66; // [rsp+70h] [rbp-98h] BYREF
  __int64 v67; // [rsp+78h] [rbp-90h]
  __int64 v68; // [rsp+80h] [rbp-88h] BYREF
  __m128i v69; // [rsp+88h] [rbp-80h]
  __int64 v70; // [rsp+A0h] [rbp-68h] BYREF
  __int64 *v71; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v72; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v73; // [rsp+C8h] [rbp-40h]

  v3 = *a1;
  v73 = __readfsqword(0x28u);
  v62 = &v63;
  v56 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v63, (__m128i)(unsigned __int64)&v63);
  v5 = (*(__int64 (__fastcall **)(__int64 *))(v3 + 80))(a1);
  v6 = _mm_load_si128(&v56);
  v7 = *(_QWORD *)(a2 + 8) + 40LL * v5;
  v8 = *(_QWORD *)v7;
  *(_QWORD *)v7 = *(_QWORD *)(a2 + 72);
  v9 = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(a2 + 72) = v8;
  v10 = *(_QWORD *)(v7 + 8);
  *(_QWORD *)(v7 + 8) = v9;
  v11 = *(_QWORD *)(a2 + 88);
  *(_QWORD *)(a2 + 80) = v10;
  v12 = *(_QWORD *)(v7 + 16);
  *(_QWORD *)(v7 + 16) = v11;
  v13 = *(_QWORD *)(a2 + 96);
  v14 = _mm_loadu_si128((const __m128i *)(v7 + 24));
  v63 = v6;
  *(_QWORD *)(v7 + 24) = v13;
  v15 = *(_QWORD *)(a2 + 104);
  v64 = 0;
  *(_QWORD *)(v7 + 32) = v15;
  *(_QWORD *)(a2 + 88) = v12;
  *(__m128i *)(a2 + 96) = v14;
  v65[0] = 0;
  v65[1] = 0;
  sub_310F30(a1, &v63, 1);
  v59 = v65;
  v56.m128i_i64[0] = (__int64)&v70;
  while ( v64 )
  {
    while ( 1 )
    {
      v16 = v63.m128i_i64[0];
      v17 = *(_QWORD *)v63.m128i_i64[0];
      v18 = *(_DWORD *)(v63.m128i_i64[0] + 16);
      **(_QWORD **)(v63.m128i_i64[0] + 8) = *(_QWORD *)v63.m128i_i64[0];
      *(_QWORD *)(v17 + 8) = *(_QWORD *)(v16 + 8);
      qfree(v16);
      --v64;
      sub_64340(v59, v18, *(double *)v6.m128i_i64);
      if ( (*(unsigned int (__fastcall **)(__int64 *))(*a1 + 80))(a1) == v18 )
        break;
      v58 = a2 + 32;
      v57 = &v66;
      sub_64000(&v66, a2 + 32, *(double *)v6.m128i_i64);
      v21 = *(_QWORD *)(a2 + 56);
      v6.m128i_i64[0] = 0;
      v68 = 0;
      v69 = 0;
      if ( v21 )
      {
        v38 = (void *)qalloc_or_throw(16 * v21, a2 + 32, v19, v20);
        v39 = *(const void **)(a2 + 48);
        v68 = (__int64)v38;
        v69.m128i_i64[1] = v21;
        memcpy(v38, v39, 16 * v21);
        v69.m128i_i64[0] = v21;
      }
      v22 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 104))(a1, v18);
      v23 = 0;
      if ( v22 > 0 )
      {
        do
        {
          v26 = (*(unsigned int (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a1 + 120))(a1, v18, v23);
          if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, _QWORD))(*a1 + 152))(a1, v26, v18) )
          {
            v27 = v58;
            sub_64000((__int64 *)v56.m128i_i64[0], v58, 0.0);
            v28 = *(_QWORD *)(a2 + 56);
            v6.m128i_i64[0] = 0;
            v71 = nullptr;
            v72 = 0;
            if ( v28 )
            {
              v60 = v28;
              n = 16 * v28;
              v31 = (__int64 *)qalloc_or_throw(16 * v28, v27, 16 * v28, v28);
              v32 = *(const void **)(a2 + 48);
              v71 = v31;
              *((_QWORD *)&v72 + 1) = v60;
              memcpy(v31, v32, n);
              *(_QWORD *)&v72 = v60;
            }
            (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 16LL))(
              a2,
              v56.m128i_i64[0],
              (unsigned int)v26,
              v18);
            if ( *(_DWORD *)(a2 + 112) == 1 )
            {
              sub_64280(v57, (__int64 *)v56.m128i_i64[0], 0.0);
              sub_316CB0(&v68, &v71, v29, v30);
            }
            else
            {
              sub_64700(v57, (__int64 *)v56.m128i_i64[0]);
              sub_3180C0(&v68, (__int64)&v71, v24, v25);
            }
            if ( v71 )
            {
              *(_QWORD *)&v72 = 0;
              qfree((__int64)v71);
            }
            qfree(v70);
          }
          ++v23;
        }
        while ( v22 != v23 );
      }
      v33 = 40LL * (int)v18;
      if ( sub_122C30(v33 + *(_QWORD *)(a2 + 8), (__int64)v57) )
      {
        v40 = v33 + *(_QWORD *)(a2 + 8);
        v41 = *(_QWORD *)v40;
        v6 = _mm_loadu_si128((const __m128i *)(v40 + 24));
        *(_QWORD *)v40 = v66;
        v66 = v41;
        v42 = *(_QWORD *)(v40 + 8);
        *(_QWORD *)(v40 + 8) = v67;
        v67 = v42;
        v43 = *(_QWORD *)(v40 + 16);
        *(_QWORD *)(v40 + 16) = v68;
        v68 = v43;
        *(__m128i *)(v40 + 24) = v69;
        v44 = *a1;
        v69 = v6;
        v45 = *(__int64 (__fastcall **)(__int64, int))(v44 + 96);
        LODWORD(v57) = v45 == sub_65090 ? sub_65090((__int64)a1, v18) : (unsigned int)v45((__int64)a1, v18);
        if ( (int)v57 > 0 )
        {
          v46 = 0;
          do
          {
            v47 = *a1;
            v48 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112);
            if ( v48 == sub_650D0 )
            {
              v49 = sub_650D0((__int64)a1, v18, v46);
            }
            else
            {
              v55 = v48((__int64)a1, v18, v46);
              v47 = *a1;
              v49 = v55;
            }
            if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD, _QWORD))(v47 + 152))(a1, v18, v49)
              && (unsigned __int8)sub_64190(v59, v49, *(double *)v6.m128i_i64) )
            {
              v52 = qalloc_or_throw(24, v49, v50, v51);
              v53 = v62;
              *(_DWORD *)(v52 + 16) = v49;
              *(_QWORD *)v52 = v53;
              v54 = (__int64 *)v63.m128i_i64[1];
              *(_QWORD *)(v52 + 8) = v63.m128i_i64[1];
              *v54 = v52;
              v63.m128i_i64[1] = v52;
              ++v64;
            }
            ++v46;
          }
          while ( (_DWORD)v57 != v46 );
        }
      }
      if ( v68 )
      {
        v69.m128i_i64[0] = 0;
        qfree(v68);
      }
      qfree(v66);
      if ( !v64 )
        goto LABEL_22;
    }
  }
LABEL_22:
  qfree(v65[0]);
  v34 = (__m128i *)v63.m128i_i64[0];
  for ( i = v62; v34 != i; --v64 )
  {
    v36 = (__int64)v34;
    v34 = (__m128i *)v34->m128i_i64[0];
    **(_QWORD **)(v36 + 8) = v34;
    v34->m128i_i64[1] = *(_QWORD *)(v36 + 8);
    qfree(v36);
  }
  return 1;
}

