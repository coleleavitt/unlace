__int64 __fastcall sub_5AE90(__int64 *a1, __int64 *a2, __int64 a3, unsigned int *a4, __int64 a5)
{
  unsigned int v5; // edx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 (__fastcall *v14)(__int64, __int64); // rax
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rdi
  __m128i v18; // xmm0
  __int64 v19; // r15
  char v20; // al
  __int64 v21; // rdi
  __m128i v22; // xmm0
  __m128i *v23; // r15
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rax
  unsigned int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 (__fastcall *v30)(__int64, __int64); // rax
  __int64 v31; // rsi
  __int64 v32; // rdx
  const char *v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // r12
  __m128i v36; // xmm0
  char v37; // al
  __int64 v38; // rdi
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 (__fastcall *v44)(__int64, __int64); // rax
  __int64 v45; // rsi
  __int64 v46; // rdx
  const char *v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdi
  __int64 v51; // r12
  __m128i v52; // xmm0
  char v53; // al
  __int64 v54; // rdi
  __int64 v55; // r8
  __int64 v56; // rdx
  __int64 v57; // rax
  unsigned int v58; // eax
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 (__fastcall *v61)(__int64, __int64); // rax
  __int64 v62; // rsi
  __int64 v63; // rdx
  const char *v64; // rsi
  __int64 v65; // rdi
  __int64 v66; // rbx
  __m128i v67; // xmm1
  __m128i v68; // xmm1
  char v69; // al
  __int64 v70; // rdi
  char v72; // al
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // [rsp-10h] [rbp-A0h]
  __m128i v82; // [rsp+0h] [rbp-90h] BYREF
  const char *v83; // [rsp+18h] [rbp-78h]
  __m128i v84; // [rsp+20h] [rbp-70h] BYREF
  __int64 v85; // [rsp+30h] [rbp-60h] BYREF
  __m128i v86; // [rsp+38h] [rbp-58h] BYREF
  char v87; // [rsp+48h] [rbp-48h]
  unsigned __int64 v88; // [rsp+58h] [rbp-38h]

  v84.m128i_i64[0] = a3;
  v88 = __readfsqword(0x28u);
  v5 = *a4;
  if ( *a4 == a4[1] )
    return 0xFFFFFFFFLL;
  v10 = 0x10000;
  v11 = *(_QWORD *)(a1[1] + 32);
  v12 = (unsigned int)(*(_DWORD *)(v11 + 24) - 1);
  if ( (unsigned int)v12 <= 7 )
  {
    v10 = dword_7ADC0[v12];
    if ( (_DWORD)v10 != 0x10000 )
    {
      v10 = v5 | (unsigned int)v10;
      if ( v5 >= 0x10000 )
        v10 = 0x10000;
    }
  }
  v13 = *a1;
  v87 = 0;
  v85 = 0;
  v86 = 0;
  v14 = *(__int64 (__fastcall **)(__int64, __int64))(v13 + 16);
  v15 = *(_QWORD *)(v11 + 16) & v84.m128i_i64[0];
  v16 = -1;
  if ( v14 != sub_591A0 )
  {
    LODWORD(v83) = v10;
    v73 = ((__int64 (__fastcall *)(__int64 *, __int64, _QWORD, __int64))v14)(a1, v15, 0, -1);
    v10 = (unsigned int)v83;
    v15 = v73;
    v16 = v74;
  }
  v83 = (const char *)&v85;
  reg_finder_find(a1, &v85, v15, v16, v10, 0, a5);
  v17 = *a2;
  v18 = _mm_loadu_si128(&v86);
  v86 = 0;
  v19 = v85;
  v85 = 0;
  if ( v17 )
  {
    a2[1] = 0;
    v82 = v18;
    qfree(v17, (const char *)&v85);
    v20 = v87;
    v21 = v85;
    *a2 = v19;
    v22 = _mm_load_si128(&v82);
    v23 = (__m128i *)(a2 + 1);
    *((_BYTE *)a2 + 24) = v20;
    *(__m128i *)(a2 + 1) = v22;
    if ( v21 )
    {
      v86.m128i_i64[0] = 0;
      qfree(v21, (const char *)&v85);
      v20 = *((_BYTE *)a2 + 24);
    }
    if ( (unsigned __int8)(v20 - 10) <= 3u )
      return 0;
  }
  else
  {
    v72 = v87;
    *a2 = v19;
    v23 = (__m128i *)(a2 + 1);
    *(__m128i *)(a2 + 1) = v18;
    *((_BYTE *)a2 + 24) = v72;
    if ( (unsigned __int8)(v72 - 10) <= 3u )
      return 0;
  }
  v24 = 0x10000;
  v25 = *(_QWORD *)(a1[1] + 32);
  v26 = (unsigned int)(*(_DWORD *)(v25 + 24) - 1);
  if ( (unsigned int)v26 <= 7 )
  {
    v24 = dword_7ADC0[v26];
    if ( (_DWORD)v24 != 0x10000 )
    {
      v27 = a4[1];
      v24 = v27 | (unsigned int)v24;
      if ( v27 >= 0x10000 )
        v24 = 0x10000;
    }
  }
  v28 = *a1;
  v87 = 0;
  v85 = 0;
  v29 = -1;
  v86 = 0;
  v30 = *(__int64 (__fastcall **)(__int64, __int64))(v28 + 16);
  v31 = *(_QWORD *)(v25 + 16) & v84.m128i_i64[0];
  if ( v30 != sub_591A0 )
  {
    v82.m128i_i32[0] = v24;
    v75 = ((__int64 (__fastcall *)(__int64 *, __int64, _QWORD, __int64))v30)(a1, v31, 0, -1);
    v24 = v82.m128i_u32[0];
    v31 = v75;
    v29 = v76;
  }
  v32 = v31;
  v33 = v83;
  reg_finder_find(a1, v83, v32, v29, v24, 0, a5);
  v34 = *a2;
  v35 = v85;
  v85 = 0;
  v36 = _mm_loadu_si128(&v86);
  v86 = 0;
  if ( v34 )
  {
    a2[1] = 0;
    v82 = v36;
    qfree(v34, v33);
    v37 = v87;
    v38 = v85;
    *a2 = v35;
    *v23 = _mm_load_si128(&v82);
    *((_BYTE *)a2 + 24) = v37;
    if ( v38 )
    {
      v86.m128i_i64[0] = 0;
      qfree(v38, v33);
      v37 = *((_BYTE *)a2 + 24);
    }
  }
  else
  {
    v37 = v87;
    *a2 = v35;
    *v23 = v36;
    *((_BYTE *)a2 + 24) = v37;
  }
  if ( (unsigned __int8)(v37 - 10) > 3u )
  {
    v39 = 0x10000;
    v40 = *(_QWORD *)(a1[1] + 32);
    v41 = (unsigned int)(*(_DWORD *)(v40 + 24) - 1);
    if ( (unsigned int)v41 <= 7 )
    {
      v39 = dword_7ADC0[v41];
      if ( (_DWORD)v39 != 0x10000 )
      {
        v39 = *a4 | (unsigned int)v39;
        if ( *a4 >= 0x10000 )
          v39 = 0x10000;
      }
    }
    v42 = *a1;
    v87 = 0;
    v85 = 0;
    v43 = -1;
    v86 = 0;
    v44 = *(__int64 (__fastcall **)(__int64, __int64))(v42 + 16);
    v45 = *(_QWORD *)(v40 + 16) & v84.m128i_i64[0];
    if ( v44 != sub_591A0 )
    {
      v82.m128i_i32[0] = v39;
      v77 = ((__int64 (__fastcall *)(__int64 *, __int64, _QWORD, __int64))v44)(a1, v45, 0, -1);
      v39 = v82.m128i_u32[0];
      v45 = v77;
      v43 = v78;
    }
    v46 = v45;
    v47 = v83;
    reg_finder_find(a1, v83, v46, v43, v39, 0, 0);
    v50 = *a2;
    v51 = v85;
    v85 = 0;
    v52 = _mm_loadu_si128(&v86);
    v86 = 0;
    if ( v50 )
    {
      a2[1] = 0;
      qfree(v50, v47, v48, v49);
      v53 = v87;
      v54 = v85;
      *a2 = v51;
      *v23 = _mm_load_si128(&v82);
      *((_BYTE *)a2 + 24) = v53;
      if ( v54 )
      {
        v86.m128i_i64[0] = 0;
        qfree(v54, v47);
        v53 = *((_BYTE *)a2 + 24);
      }
    }
    else
    {
      v53 = v87;
      *a2 = v51;
      *v23 = v52;
      *((_BYTE *)a2 + 24) = v53;
    }
    if ( (unsigned __int8)(v53 - 10) > 3u )
    {
      v55 = 0x10000;
      v56 = *(_QWORD *)(a1[1] + 32);
      v57 = (unsigned int)(*(_DWORD *)(v56 + 24) - 1);
      if ( (unsigned int)v57 <= 7 )
      {
        v55 = dword_7ADC0[v57];
        if ( (_DWORD)v55 != 0x10000 )
        {
          v58 = a4[1];
          v55 = v58 | (unsigned int)v55;
          if ( v58 >= 0x10000 )
            v55 = 0x10000;
        }
      }
      v59 = *a1;
      v87 = 0;
      v85 = 0;
      v60 = -1;
      v86 = 0;
      v61 = *(__int64 (__fastcall **)(__int64, __int64))(v59 + 16);
      v62 = *(_QWORD *)(v56 + 16) & v84.m128i_i64[0];
      if ( v61 != sub_591A0 )
      {
        v84.m128i_i32[0] = v55;
        v79 = ((__int64 (__fastcall *)(__int64 *, __int64, _QWORD, __int64))v61)(a1, v62, 0, -1);
        v55 = v84.m128i_u32[0];
        v62 = v79;
        v60 = v80;
      }
      v63 = v62;
      v64 = v83;
      reg_finder_find(a1, v83, v63, v60, v55, 0, 0);
      v65 = *a2;
      v66 = v85;
      v85 = 0;
      v67 = _mm_loadu_si128(&v86);
      v86 = 0;
      if ( v65 )
      {
        a2[1] = 0;
        v84 = v67;
        qfree(v65, v64, v81);
        v68 = _mm_load_si128(&v84);
        v69 = v87;
        *a2 = v66;
        v70 = v85;
        *v23 = v68;
        *((_BYTE *)a2 + 24) = v69;
        if ( v70 )
        {
          v86.m128i_i64[0] = 0;
          qfree(v70, v64);
          v69 = *((_BYTE *)a2 + 24);
        }
      }
      else
      {
        v69 = v87;
        *a2 = v66;
        *v23 = v67;
        *((_BYTE *)a2 + 24) = v69;
      }
      if ( (unsigned __int8)(v69 - 10) > 3u )
        return 0xFFFFFFFFLL;
      return 1;
    }
    return 0;
  }
  return 1;
}

