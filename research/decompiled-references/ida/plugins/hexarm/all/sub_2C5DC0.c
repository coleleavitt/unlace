unsigned __int64 __fastcall sub_2C5DC0(_QWORD *a1, _QWORD *a2, char a3)
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
  __int64 *v19; // rbp
  unsigned __int64 v20; // r12
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rax
  __m128i v24; // xmm0
  int v25; // ecx
  int v26; // ecx
  __int64 v27; // rdi
  __int64 (__fastcall *v28)(__int64, __int64); // rax
  unsigned __int64 v29; // rbx
  _QWORD *v30; // r11
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rsi
  unsigned __int64 v33; // rdx
  __m128i v34; // xmm1
  __m128i v35; // xmm0
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 (__fastcall *v43)(__int64, __int64); // rcx
  __m128i v44; // xmm0
  int v45; // r9d
  int v46; // ecx
  int v47; // r10d
  int v48; // ecx
  __int64 v49; // r14
  unsigned __int64 v50; // rbx
  unsigned __int64 v51; // r12
  __int64 v52; // r13
  unsigned __int8 (***v53)(void); // rdi
  unsigned __int8 (*v54)(void); // rax
  __int64 v55; // rsi
  __int64 v56; // r15
  __int64 v57; // rdi
  __int64 v58; // rsi
  __int64 (__fastcall *v59)(__int64, __int64); // rax
  __m128i v60; // xmm0
  int v61; // r8d
  int v62; // eax
  int v63; // r8d
  int v64; // eax
  __int64 v65; // rsi
  __int64 v66; // rdi
  __int64 v67; // rsi
  __int64 (__fastcall *v68)(__int64, __int64); // rax
  __m128i v69; // xmm0
  int v70; // r8d
  int v71; // eax
  int v72; // r8d
  int v73; // eax
  __int64 v74; // rdi
  __int64 v75; // rsi
  __int64 (__fastcall *v76)(__int64, __int64); // rax
  __m128i v77; // xmm0
  int v78; // r8d
  int v79; // eax
  int v80; // r8d
  int v81; // eax
  unsigned __int8 (***v82)(void); // rdi
  unsigned __int8 (*v83)(void); // rax
  __m128i v84; // xmm1
  __m128i v85; // xmm0
  __int64 v86; // rcx
  __int64 v87; // rdx
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v91; // [rsp+0h] [rbp-168h]
  __int64 v92; // [rsp+0h] [rbp-168h]
  _QWORD *v93; // [rsp+0h] [rbp-168h]
  _QWORD *v94; // [rsp+0h] [rbp-168h]
  _QWORD *v95; // [rsp+0h] [rbp-168h]
  unsigned __int64 v97; // [rsp+10h] [rbp-158h]
  __int64 *v98; // [rsp+10h] [rbp-158h]
  __int64 v99; // [rsp+10h] [rbp-158h]
  __int64 v100; // [rsp+18h] [rbp-150h]
  __int64 v101; // [rsp+18h] [rbp-150h]
  __int64 *v103; // [rsp+20h] [rbp-148h]
  __int64 *v104; // [rsp+28h] [rbp-140h]
  __int64 v105; // [rsp+90h] [rbp-D8h] BYREF
  __int128 v106; // [rsp+98h] [rbp-D0h]
  __int64 (__fastcall **v107)(); // [rsp+B0h] [rbp-B8h] BYREF
  __m128i v108; // [rsp+B8h] [rbp-B0h] BYREF
  int v109; // [rsp+C8h] [rbp-A0h]
  __m128i v110; // [rsp+D0h] [rbp-98h] BYREF
  int v111; // [rsp+E0h] [rbp-88h]
  __m128i v112; // [rsp+F8h] [rbp-70h] BYREF
  __m128i v113; // [rsp+110h] [rbp-58h] BYREF
  unsigned __int64 v114; // [rsp+128h] [rbp-40h]

  v3 = a1;
  v4 = a1[14];
  v114 = __readfsqword(0x28u);
  v5 = a1[12];
  if ( v4 )
  {
    v105 = 0;
    v106 = 0;
    if ( v5 )
    {
      sub_2AF440(&v105, v5);
      if ( !a1[1] )
      {
LABEL_47:
        if ( v105 )
        {
          *(_QWORD *)&v106 = 0;
          qfree();
        }
LABEL_49:
        if ( !a3 )
          return v114 - __readfsqword(0x28u);
        goto LABEL_50;
      }
    }
    else if ( !a1[1] )
    {
      goto LABEL_49;
    }
    v19 = a1 + 2;
    v20 = 0;
    do
    {
      switch_dbctx();
      v21 = *v19;
      v22 = *v19 + (v19[1] << 6);
      if ( *v19 != v22 )
      {
        do
        {
          while ( 1 )
          {
            v27 = v105 + 56LL * *(_QWORD *)(v21 + 56);
            v28 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 8LL);
            if ( v28 != sub_2AD4E0 )
              break;
            v23 = *(_QWORD *)(v21 + 8);
            v24 = _mm_loadu_si128((const __m128i *)(v27 + 8));
            v21 += 64;
            *(_QWORD *)(v27 + 8) = v23;
            *(_DWORD *)(v27 + 16) = *(_DWORD *)(v21 - 48);
            v25 = *(_DWORD *)(v21 - 40);
            *(_QWORD *)(v21 - 56) = v24.m128i_i64[0];
            *(_DWORD *)(v21 - 48) = v24.m128i_i32[2];
            LODWORD(v23) = *(_DWORD *)(v27 + 24);
            *(_DWORD *)(v27 + 24) = v25;
            v26 = *(_DWORD *)(v21 - 16);
            *(_DWORD *)(v21 - 40) = v23;
            LODWORD(v23) = *(_DWORD *)(v27 + 48);
            *(_DWORD *)(v27 + 48) = v26;
            *(_DWORD *)(v21 - 16) = v23;
            if ( v22 == v21 )
              goto LABEL_25;
          }
          v91 = v22;
          v28(v27, v21);
          v22 = v91;
          v21 += 64;
        }
        while ( v91 != v21 );
LABEL_25:
        v22 = *v19;
      }
      if ( v22 )
      {
        v19[1] = 0;
        qfree();
        *v19 = 0;
        v19[2] = 0;
      }
      v29 = v5 - v3[14];
      v30 = (_QWORD *)a2[v20];
      v31 = v30[6];
      if ( v29 != v31 )
      {
        v108.m128i_i64[0] = -1;
        v108.m128i_i32[2] = 0;
        v109 = 0;
        v110.m128i_i64[0] = -1;
        v110.m128i_i32[2] = 0;
        v111 = -2;
        v107 = off_4DB9E0;
        if ( v29 >= v31 )
        {
          v32 = v30[5];
          v33 = v30[7];
          if ( (unsigned __int64)&v107 < v32 || (unsigned __int64)&v107 >= v32 + 56 * v33 )
          {
            if ( v33 < v29 )
            {
              v94 = v30;
              v88 = qvector_reserve();
              v30 = v94;
              v94[5] = v88;
              v31 = v94[6];
            }
            if ( v31 < v29 )
            {
              v84 = _mm_loadu_si128(&v108);
              v85 = _mm_load_si128(&v110);
              v86 = 56 * v31;
              do
              {
                ++v31;
                v87 = v86 + v30[5];
                v86 += 56;
                *(_DWORD *)(v87 + 24) = 0;
                *(_DWORD *)(v87 + 48) = -2;
                *(_QWORD *)v87 = off_4DB9E0;
                *(__m128i *)(v87 + 8) = v84;
                *(__m128i *)(v87 + 32) = v85;
              }
              while ( v29 != v31 );
            }
          }
          else
          {
            v112 = _mm_loadu_si128(&v108);
            v113 = _mm_load_si128(&v110);
            if ( v33 < v29 )
            {
              v95 = v30;
              v89 = qvector_reserve();
              v30 = v95;
              v95[5] = v89;
              v31 = v95[6];
            }
            if ( v31 < v29 )
            {
              v34 = _mm_loadu_si128(&v112);
              v35 = _mm_load_si128(&v113);
              v36 = 56 * v31;
              do
              {
                ++v31;
                v37 = v36 + v30[5];
                v36 += 56;
                *(_DWORD *)(v37 + 24) = 0;
                *(_DWORD *)(v37 + 48) = -2;
                *(_QWORD *)v37 = off_4DB9E0;
                *(__m128i *)(v37 + 8) = v34;
                *(__m128i *)(v37 + 32) = v35;
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
            v42 = v38 + v105;
            v43 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v41 + 8LL);
            if ( v43 == sub_2AD4E0 )
            {
              v44 = _mm_loadu_si128((const __m128i *)(v41 + 8));
              *(_QWORD *)(v41 + 8) = *(_QWORD *)(v42 + 8);
              *(_DWORD *)(v41 + 16) = *(_DWORD *)(v42 + 16);
              v45 = *(_DWORD *)(v42 + 24);
              *(_QWORD *)(v42 + 8) = v44.m128i_i64[0];
              *(_DWORD *)(v42 + 16) = v44.m128i_i32[2];
              v46 = *(_DWORD *)(v41 + 24);
              *(_DWORD *)(v41 + 24) = v45;
              v47 = *(_DWORD *)(v42 + 48);
              *(_DWORD *)(v42 + 24) = v46;
              v48 = *(_DWORD *)(v41 + 48);
              *(_DWORD *)(v41 + 48) = v47;
              *(_DWORD *)(v42 + 48) = v48;
            }
            else
            {
              v101 = v38;
              v99 = v40;
              v93 = v30;
              v43(v41, v42);
              v30 = v93;
              v40 = v99;
              v38 = v101;
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
          sub_3835A0(1962);
        BUG();
      }
      ++v20;
      v19 += 3;
    }
    while ( v20 < v3[1] );
    goto LABEL_47;
  }
  if ( a1[1] )
  {
    v97 = a1[12];
    v6 = a1 + 2;
    v7 = 0;
    do
    {
      switch_dbctx();
      v8 = a2[v7];
      if ( v97 != *(_QWORD *)(v8 + 48) )
        sub_2AF440((__int64 *)(v8 + 40), v97);
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
            if ( v16 != sub_2AD4E0 )
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
        qfree();
        *v6 = 0;
        v6[2] = 0;
      }
      ++v7;
      v6 += 3;
    }
    while ( v7 < a1[1] );
    v3 = a1;
    if ( !a3 )
      return v114 - __readfsqword(0x28u);
LABEL_50:
    v98 = nullptr;
    v49 = *a2;
    v100 = *a2;
    v103 = (__int64 *)(*a2 + 40LL);
    v92 = a2[1];
    v104 = (__int64 *)(v92 + 40);
    if ( v3[1] > 2u )
      v98 = (__int64 *)(a2[2] + 40LL);
    goto LABEL_52;
  }
  if ( !a3 )
    return v114 - __readfsqword(0x28u);
  v98 = nullptr;
  v49 = *a2;
  v92 = a2[1];
  v100 = *a2;
  v103 = (__int64 *)(*a2 + 40LL);
  v104 = (__int64 *)(v92 + 40);
LABEL_52:
  v50 = *(_QWORD *)(v49 + 48);
  if ( v50 )
  {
    v51 = 0;
    v50 = 0;
    v52 = 0;
    do
    {
      v82 = (unsigned __int8 (***)(void))(v52 + *(_QWORD *)(v49 + 40));
      v83 = **v82;
      if ( (char *)v83 == (char *)sub_2AD950 )
      {
        if ( (unsigned int)sub_258030((__int64)(v82 + 1), (__int64)(v82 + 4)) )
          goto LABEL_57;
      }
      else if ( v83() )
      {
        goto LABEL_57;
      }
      v53 = (unsigned __int8 (***)(void))(v52 + *(_QWORD *)(v92 + 40));
      v54 = **v53;
      if ( (char *)v54 == (char *)sub_2AD950 )
      {
        if ( (unsigned int)sub_258030((__int64)(v53 + 1), (__int64)(v53 + 4)) )
          goto LABEL_57;
      }
      else if ( v54() )
      {
LABEL_57:
        if ( v50 < v51 )
        {
          v55 = *(_QWORD *)(v49 + 40);
          v56 = 56 * v50;
          v57 = v55 + 56 * v50;
          v58 = v52 + v55;
          v59 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v57 + 8LL);
          if ( v59 == sub_2AD4E0 )
          {
            v60 = _mm_loadu_si128((const __m128i *)(v57 + 8));
            *(_QWORD *)(v57 + 8) = *(_QWORD *)(v58 + 8);
            *(_DWORD *)(v57 + 16) = *(_DWORD *)(v58 + 16);
            v61 = *(_DWORD *)(v58 + 24);
            *(_QWORD *)(v58 + 8) = v60.m128i_i64[0];
            *(_DWORD *)(v58 + 16) = v60.m128i_i32[2];
            v62 = *(_DWORD *)(v57 + 24);
            *(_DWORD *)(v57 + 24) = v61;
            v63 = *(_DWORD *)(v58 + 48);
            *(_DWORD *)(v58 + 24) = v62;
            v64 = *(_DWORD *)(v57 + 48);
            *(_DWORD *)(v57 + 48) = v63;
            *(_DWORD *)(v58 + 48) = v64;
          }
          else
          {
            v59(v57, v58);
          }
          v65 = *(_QWORD *)(v92 + 40);
          v66 = v65 + v56;
          v67 = v52 + v65;
          v68 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v66 + 8LL);
          if ( v68 == sub_2AD4E0 )
          {
            v69 = _mm_loadu_si128((const __m128i *)(v66 + 8));
            *(_QWORD *)(v66 + 8) = *(_QWORD *)(v67 + 8);
            *(_DWORD *)(v66 + 16) = *(_DWORD *)(v67 + 16);
            v70 = *(_DWORD *)(v67 + 24);
            *(_QWORD *)(v67 + 8) = v69.m128i_i64[0];
            *(_DWORD *)(v67 + 16) = v69.m128i_i32[2];
            v71 = *(_DWORD *)(v66 + 24);
            *(_DWORD *)(v66 + 24) = v70;
            v72 = *(_DWORD *)(v67 + 48);
            *(_DWORD *)(v67 + 24) = v71;
            v73 = *(_DWORD *)(v66 + 48);
            *(_DWORD *)(v66 + 48) = v72;
            *(_DWORD *)(v67 + 48) = v73;
          }
          else
          {
            v68(v66, v67);
          }
          if ( v98 )
          {
            v74 = *v98 + v56;
            v75 = v52 + *v98;
            v76 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v74 + 8LL);
            if ( v76 == sub_2AD4E0 )
            {
              v77 = _mm_loadu_si128((const __m128i *)(v74 + 8));
              *(_QWORD *)(v74 + 8) = *(_QWORD *)(v75 + 8);
              *(_DWORD *)(v74 + 16) = *(_DWORD *)(v75 + 16);
              v78 = *(_DWORD *)(v75 + 24);
              *(_QWORD *)(v75 + 8) = v77.m128i_i64[0];
              *(_DWORD *)(v75 + 16) = v77.m128i_i32[2];
              v79 = *(_DWORD *)(v74 + 24);
              *(_DWORD *)(v74 + 24) = v78;
              v80 = *(_DWORD *)(v75 + 48);
              *(_DWORD *)(v75 + 24) = v79;
              v81 = *(_DWORD *)(v74 + 48);
              *(_DWORD *)(v74 + 48) = v80;
              *(_DWORD *)(v75 + 48) = v81;
            }
            else
            {
              v76(v74, v75);
            }
          }
        }
        ++v50;
      }
      ++v51;
      v52 += 56;
    }
    while ( v51 < *(_QWORD *)(v49 + 48) );
  }
  switch_dbctx();
  if ( v50 != *(_QWORD *)(v100 + 48) )
    sub_2AF440(v103, v50);
  switch_dbctx();
  if ( v50 != *(_QWORD *)(v92 + 48) )
    sub_2AF440(v104, v50);
  if ( !v98 )
    return v114 - __readfsqword(0x28u);
  switch_dbctx();
  if ( v50 == v98[1] )
    return v114 - __readfsqword(0x28u);
  return sub_2AF440(v98, v50);
}

