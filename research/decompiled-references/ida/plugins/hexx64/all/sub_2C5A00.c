unsigned __int64 __fastcall sub_2C5A00(_QWORD *a1, _QWORD *a2, char a3)
{
  _QWORD *v3; // r15
  __int64 v4; // rcx
  unsigned __int64 v5; // r14
  __int64 *v6; // rbp
  unsigned __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rdx
  __m128i v12; // xmm0
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(__int64, __int64); // rdx
  __int64 v17; // rsi
  __m128i v19; // xmm0
  __int64 *v20; // rbp
  unsigned __int64 v21; // r12
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rax
  int v25; // ecx
  int v26; // ecx
  __int64 v27; // rdi
  __int64 (__fastcall *v28)(__int64, __int64); // rax
  unsigned __int64 v29; // rbx
  _QWORD *v30; // r11
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rsi
  __int64 v33; // rdi
  unsigned __int64 v34; // rdx
  __m128i v35; // xmm1
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 (__fastcall *v43)(__int64, __int64); // rcx
  int v44; // r9d
  int v45; // ecx
  int v46; // r10d
  int v47; // ecx
  __int64 v48; // r14
  unsigned __int64 v49; // rbx
  unsigned __int64 v50; // r12
  __int64 v51; // r13
  unsigned __int8 (***v52)(void); // rdi
  unsigned __int8 (*v53)(void); // rax
  __int64 v54; // rsi
  __int64 v55; // r15
  __int64 v56; // rdi
  __int64 v57; // rsi
  __int64 (__fastcall *v58)(__int64, __int64); // rax
  __m128i v59; // xmm0
  int v60; // r8d
  int v61; // eax
  int v62; // r8d
  int v63; // eax
  __int64 v64; // rsi
  __int64 v65; // rdi
  __int64 v66; // rsi
  __int64 (__fastcall *v67)(__int64, __int64); // rax
  __m128i v68; // xmm0
  int v69; // r8d
  int v70; // eax
  int v71; // r8d
  int v72; // eax
  __int64 v73; // rdi
  __int64 v74; // rsi
  __int64 (__fastcall *v75)(__int64, __int64); // rax
  __m128i v76; // xmm0
  int v77; // r8d
  int v78; // eax
  int v79; // r8d
  int v80; // eax
  unsigned __int8 (***v81)(void); // rdi
  unsigned __int8 (*v82)(void); // rax
  __m128i v83; // xmm1
  __int64 v84; // rcx
  __int64 v85; // rdx
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v89; // [rsp+0h] [rbp-168h]
  __int64 v90; // [rsp+0h] [rbp-168h]
  _QWORD *v91; // [rsp+0h] [rbp-168h]
  _QWORD *v92; // [rsp+0h] [rbp-168h]
  _QWORD *v93; // [rsp+0h] [rbp-168h]
  unsigned __int64 v95; // [rsp+10h] [rbp-158h]
  __int64 *v96; // [rsp+10h] [rbp-158h]
  __int64 v97; // [rsp+10h] [rbp-158h]
  __int64 v98; // [rsp+18h] [rbp-150h]
  __int64 v99; // [rsp+18h] [rbp-150h]
  __int64 *v101; // [rsp+20h] [rbp-148h]
  __int64 *v102; // [rsp+28h] [rbp-140h]
  __int64 v103; // [rsp+90h] [rbp-D8h] BYREF
  __int128 v104; // [rsp+98h] [rbp-D0h]
  __int64 (__fastcall **v105)(); // [rsp+B0h] [rbp-B8h] BYREF
  __m128i v106; // [rsp+B8h] [rbp-B0h] BYREF
  int v107; // [rsp+C8h] [rbp-A0h]
  __m128i v108; // [rsp+D0h] [rbp-98h] BYREF
  int v109; // [rsp+E0h] [rbp-88h]
  __m128i v110; // [rsp+F8h] [rbp-70h] BYREF
  __m128i v111; // [rsp+110h] [rbp-58h] BYREF
  unsigned __int64 v112; // [rsp+128h] [rbp-40h]

  v3 = a1;
  v4 = a1[14];
  v112 = __readfsqword(0x28u);
  v5 = a1[12];
  if ( v4 )
  {
    v103 = 0;
    v19.m128i_i64[0] = 0;
    v104 = 0;
    if ( v5 )
    {
      sub_2AF080(&v103, v5);
      if ( !a1[1] )
      {
LABEL_47:
        if ( v103 )
        {
          *(_QWORD *)&v104 = 0;
          qfree(v103);
        }
LABEL_49:
        if ( !a3 )
          return v112 - __readfsqword(0x28u);
        goto LABEL_50;
      }
    }
    else if ( !a1[1] )
    {
      goto LABEL_49;
    }
    v20 = a1 + 2;
    v21 = 0;
    do
    {
      switch_dbctx();
      v22 = *v20;
      v23 = *v20 + (v20[1] << 6);
      if ( *v20 != v23 )
      {
        do
        {
          while ( 1 )
          {
            v27 = v103 + 56LL * *(_QWORD *)(v22 + 56);
            v28 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 8LL);
            if ( v28 != sub_2AD120 )
              break;
            v24 = *(_QWORD *)(v22 + 8);
            v19 = _mm_loadu_si128((const __m128i *)(v27 + 8));
            v22 += 64;
            *(_QWORD *)(v27 + 8) = v24;
            *(_DWORD *)(v27 + 16) = *(_DWORD *)(v22 - 48);
            v25 = *(_DWORD *)(v22 - 40);
            *(_QWORD *)(v22 - 56) = v19.m128i_i64[0];
            *(_DWORD *)(v22 - 48) = v19.m128i_i32[2];
            LODWORD(v24) = *(_DWORD *)(v27 + 24);
            *(_DWORD *)(v27 + 24) = v25;
            v26 = *(_DWORD *)(v22 - 16);
            *(_DWORD *)(v22 - 40) = v24;
            LODWORD(v24) = *(_DWORD *)(v27 + 48);
            *(_DWORD *)(v27 + 48) = v26;
            *(_DWORD *)(v22 - 16) = v24;
            if ( v23 == v22 )
              goto LABEL_25;
          }
          v89 = v23;
          v28(v27, v22);
          v23 = v89;
          v22 += 64;
        }
        while ( v89 != v22 );
LABEL_25:
        v23 = *v20;
      }
      if ( v23 )
      {
        v20[1] = 0;
        qfree(v23);
        *v20 = 0;
        v20[2] = 0;
      }
      v29 = v5 - v3[14];
      v30 = (_QWORD *)a2[v21];
      v31 = v30[6];
      if ( v29 != v31 )
      {
        v106.m128i_i64[0] = -1;
        v106.m128i_i32[2] = 0;
        v107 = 0;
        v108.m128i_i64[0] = -1;
        v108.m128i_i32[2] = 0;
        v109 = -2;
        v105 = off_4E1320;
        if ( v29 >= v31 )
        {
          v32 = v30[5];
          v33 = (__int64)(v30 + 5);
          v34 = v30[7];
          if ( (unsigned __int64)&v105 < v32 || (unsigned __int64)&v105 >= v32 + 56 * v34 )
          {
            if ( v34 < v29 )
            {
              v92 = v30;
              v86 = qvector_reserve(v33, v32, v29, 56);
              v30 = v92;
              v92[5] = v86;
              v31 = v92[6];
            }
            if ( v31 < v29 )
            {
              v83 = _mm_loadu_si128(&v106);
              v19 = _mm_load_si128(&v108);
              v84 = 56 * v31;
              do
              {
                ++v31;
                v85 = v84 + v30[5];
                v84 += 56;
                *(_DWORD *)(v85 + 24) = 0;
                *(_DWORD *)(v85 + 48) = -2;
                *(_QWORD *)v85 = off_4E1320;
                *(__m128i *)(v85 + 8) = v83;
                *(__m128i *)(v85 + 32) = v19;
              }
              while ( v29 != v31 );
            }
          }
          else
          {
            v110 = _mm_loadu_si128(&v106);
            v19 = _mm_load_si128(&v108);
            v111 = v19;
            if ( v34 < v29 )
            {
              v93 = v30;
              v87 = qvector_reserve(v33, v32, v29, 56);
              v30 = v93;
              v93[5] = v87;
              v31 = v93[6];
            }
            if ( v31 < v29 )
            {
              v35 = _mm_loadu_si128(&v110);
              v19 = _mm_load_si128(&v111);
              v36 = 56 * v31;
              do
              {
                ++v31;
                v37 = v36 + v30[5];
                v36 += 56;
                *(_DWORD *)(v37 + 24) = 0;
                *(_DWORD *)(v37 + 48) = -2;
                *(_QWORD *)v37 = off_4E1320;
                *(__m128i *)(v37 + 8) = v35;
                *(__m128i *)(v37 + 32) = v19;
              }
              while ( v29 != v31 );
            }
          }
        }
        v30[6] = v29;
      }
      if ( v5 )
      {
        v38 = 0;
        v39 = 0;
        v40 = 0;
        do
        {
          if ( *(_DWORD *)(v3[11] + 4 * v39) )
          {
            v41 = v30[5] + 56 * v40;
            v42 = v38 + v103;
            v43 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v41 + 8LL);
            if ( v43 == sub_2AD120 )
            {
              v19 = _mm_loadu_si128((const __m128i *)(v41 + 8));
              *(_QWORD *)(v41 + 8) = *(_QWORD *)(v42 + 8);
              *(_DWORD *)(v41 + 16) = *(_DWORD *)(v42 + 16);
              v44 = *(_DWORD *)(v42 + 24);
              *(_QWORD *)(v42 + 8) = v19.m128i_i64[0];
              *(_DWORD *)(v42 + 16) = v19.m128i_i32[2];
              v45 = *(_DWORD *)(v41 + 24);
              *(_DWORD *)(v41 + 24) = v44;
              v46 = *(_DWORD *)(v42 + 48);
              *(_DWORD *)(v42 + 24) = v45;
              v47 = *(_DWORD *)(v41 + 48);
              *(_DWORD *)(v41 + 48) = v46;
              *(_DWORD *)(v42 + 48) = v47;
            }
            else
            {
              v99 = v38;
              v97 = v40;
              v91 = v30;
              v43(v41, v42);
              v30 = v91;
              v40 = v97;
              v38 = v99;
            }
            ++v40;
          }
          ++v39;
          v38 += 56;
        }
        while ( v39 != v5 );
      }
      else
      {
        v40 = 0;
      }
      if ( v30[6] != v40 )
      {
        if ( !under_debugger )
          sub_383060(0x7AAu, *(double *)v19.m128i_i64);
        BUG();
      }
      ++v21;
      v20 += 3;
    }
    while ( v21 < v3[1] );
    goto LABEL_47;
  }
  if ( a1[1] )
  {
    v95 = a1[12];
    v6 = a1 + 2;
    v7 = 0;
    do
    {
      switch_dbctx();
      v8 = a2[v7];
      if ( v95 != *(_QWORD *)(v8 + 48) )
        sub_2AF080((__int64 *)(v8 + 40), v95);
      v9 = *v6;
      v10 = *v6 + (v6[1] << 6);
      if ( *v6 != v10 )
      {
        do
        {
          while ( 1 )
          {
            v15 = *(_QWORD *)(v8 + 40) + 56LL * *(_QWORD *)(v9 + 56);
            v16 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 8LL);
            if ( v16 != sub_2AD120 )
              break;
            v11 = *(_QWORD *)(v9 + 8);
            v12 = _mm_loadu_si128((const __m128i *)(v15 + 8));
            v9 += 64;
            *(_QWORD *)(v15 + 8) = v11;
            *(_DWORD *)(v15 + 16) = *(_DWORD *)(v9 - 48);
            v13 = *(_DWORD *)(v9 - 40);
            *(_QWORD *)(v9 - 56) = v12.m128i_i64[0];
            *(_DWORD *)(v9 - 48) = v12.m128i_i32[2];
            LODWORD(v11) = *(_DWORD *)(v15 + 24);
            *(_DWORD *)(v15 + 24) = v13;
            v14 = *(_DWORD *)(v9 - 16);
            *(_DWORD *)(v9 - 40) = v11;
            LODWORD(v11) = *(_DWORD *)(v15 + 48);
            *(_DWORD *)(v15 + 48) = v14;
            *(_DWORD *)(v9 - 16) = v11;
            if ( v9 == v10 )
              goto LABEL_11;
          }
          v17 = v9;
          v9 += 64;
          v16(v15, v17);
        }
        while ( v9 != v10 );
LABEL_11:
        v10 = *v6;
      }
      if ( v10 )
      {
        v6[1] = 0;
        qfree(v10);
        *v6 = 0;
        v6[2] = 0;
      }
      ++v7;
      v6 += 3;
    }
    while ( v7 < a1[1] );
    v3 = a1;
    if ( !a3 )
      return v112 - __readfsqword(0x28u);
LABEL_50:
    v96 = nullptr;
    v48 = *a2;
    v98 = *a2;
    v101 = (__int64 *)(*a2 + 40LL);
    v90 = a2[1];
    v102 = (__int64 *)(v90 + 40);
    if ( v3[1] > 2u )
      v96 = (__int64 *)(a2[2] + 40LL);
    goto LABEL_52;
  }
  if ( !a3 )
    return v112 - __readfsqword(0x28u);
  v96 = nullptr;
  v48 = *a2;
  v90 = a2[1];
  v98 = *a2;
  v101 = (__int64 *)(*a2 + 40LL);
  v102 = (__int64 *)(v90 + 40);
LABEL_52:
  v49 = *(_QWORD *)(v48 + 48);
  if ( v49 )
  {
    v50 = 0;
    v49 = 0;
    v51 = 0;
    do
    {
      v81 = (unsigned __int8 (***)(void))(v51 + *(_QWORD *)(v48 + 40));
      v82 = **v81;
      if ( (char *)v82 == (char *)sub_2AD590 )
      {
        if ( (unsigned int)sub_257C70((__int64)(v81 + 1), (__int64)(v81 + 4)) )
          goto LABEL_57;
      }
      else if ( v82() )
      {
        goto LABEL_57;
      }
      v52 = (unsigned __int8 (***)(void))(v51 + *(_QWORD *)(v90 + 40));
      v53 = **v52;
      if ( (char *)v53 == (char *)sub_2AD590 )
      {
        if ( (unsigned int)sub_257C70((__int64)(v52 + 1), (__int64)(v52 + 4)) )
          goto LABEL_57;
      }
      else if ( v53() )
      {
LABEL_57:
        if ( v49 < v50 )
        {
          v54 = *(_QWORD *)(v48 + 40);
          v55 = 56 * v49;
          v56 = v54 + 56 * v49;
          v57 = v51 + v54;
          v58 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v56 + 8LL);
          if ( v58 == sub_2AD120 )
          {
            v59 = _mm_loadu_si128((const __m128i *)(v56 + 8));
            *(_QWORD *)(v56 + 8) = *(_QWORD *)(v57 + 8);
            *(_DWORD *)(v56 + 16) = *(_DWORD *)(v57 + 16);
            v60 = *(_DWORD *)(v57 + 24);
            *(_QWORD *)(v57 + 8) = v59.m128i_i64[0];
            *(_DWORD *)(v57 + 16) = v59.m128i_i32[2];
            v61 = *(_DWORD *)(v56 + 24);
            *(_DWORD *)(v56 + 24) = v60;
            v62 = *(_DWORD *)(v57 + 48);
            *(_DWORD *)(v57 + 24) = v61;
            v63 = *(_DWORD *)(v56 + 48);
            *(_DWORD *)(v56 + 48) = v62;
            *(_DWORD *)(v57 + 48) = v63;
          }
          else
          {
            v58(v56, v57);
          }
          v64 = *(_QWORD *)(v90 + 40);
          v65 = v64 + v55;
          v66 = v51 + v64;
          v67 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v65 + 8LL);
          if ( v67 == sub_2AD120 )
          {
            v68 = _mm_loadu_si128((const __m128i *)(v65 + 8));
            *(_QWORD *)(v65 + 8) = *(_QWORD *)(v66 + 8);
            *(_DWORD *)(v65 + 16) = *(_DWORD *)(v66 + 16);
            v69 = *(_DWORD *)(v66 + 24);
            *(_QWORD *)(v66 + 8) = v68.m128i_i64[0];
            *(_DWORD *)(v66 + 16) = v68.m128i_i32[2];
            v70 = *(_DWORD *)(v65 + 24);
            *(_DWORD *)(v65 + 24) = v69;
            v71 = *(_DWORD *)(v66 + 48);
            *(_DWORD *)(v66 + 24) = v70;
            v72 = *(_DWORD *)(v65 + 48);
            *(_DWORD *)(v65 + 48) = v71;
            *(_DWORD *)(v66 + 48) = v72;
          }
          else
          {
            v67(v65, v66);
          }
          if ( v96 )
          {
            v73 = *v96 + v55;
            v74 = v51 + *v96;
            v75 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v73 + 8LL);
            if ( v75 == sub_2AD120 )
            {
              v76 = _mm_loadu_si128((const __m128i *)(v73 + 8));
              *(_QWORD *)(v73 + 8) = *(_QWORD *)(v74 + 8);
              *(_DWORD *)(v73 + 16) = *(_DWORD *)(v74 + 16);
              v77 = *(_DWORD *)(v74 + 24);
              *(_QWORD *)(v74 + 8) = v76.m128i_i64[0];
              *(_DWORD *)(v74 + 16) = v76.m128i_i32[2];
              v78 = *(_DWORD *)(v73 + 24);
              *(_DWORD *)(v73 + 24) = v77;
              v79 = *(_DWORD *)(v74 + 48);
              *(_DWORD *)(v74 + 24) = v78;
              v80 = *(_DWORD *)(v73 + 48);
              *(_DWORD *)(v73 + 48) = v79;
              *(_DWORD *)(v74 + 48) = v80;
            }
            else
            {
              v75(v73, v74);
            }
          }
        }
        ++v49;
      }
      ++v50;
      v51 += 56;
    }
    while ( v50 < *(_QWORD *)(v48 + 48) );
  }
  switch_dbctx();
  if ( v49 != *(_QWORD *)(v98 + 48) )
    sub_2AF080(v101, v49);
  switch_dbctx();
  if ( v49 != *(_QWORD *)(v90 + 48) )
    sub_2AF080(v102, v49);
  if ( !v96 )
    return v112 - __readfsqword(0x28u);
  switch_dbctx();
  if ( v49 == v96[1] )
    return v112 - __readfsqword(0x28u);
  return sub_2AF080(v96, v49);
}

