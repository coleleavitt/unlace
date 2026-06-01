__int64 __fastcall sub_3D69D0(
        __int64 a1,
        __int64 *a2,
        _DWORD *a3,
        _BYTE *a4,
        _DWORD *a5,
        double a6,
        double a7,
        double a8,
        __m128 a9,
        __int64 a10,
        _DWORD *a11)
{
  __int64 v12; // r15
  int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rsi
  _DWORD *v23; // rbx
  int v24; // r14d
  int v25; // r8d
  int v26; // r11d
  double v27; // rax
  double v28; // xmm1_8
  _QWORD *v29; // rax
  unsigned int v30; // eax
  __m128i v31; // xmm2
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rsi
  unsigned int v35; // eax
  unsigned int v36; // ecx
  int v37; // esi
  int v38; // ebp
  __int64 v39; // rbp
  unsigned __int64 v40; // rdx
  __int64 v41; // rsi
  _QWORD *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rbx
  _BYTE *v48; // rax
  __int64 v49; // rax
  __int64 func; // r14
  __int64 v51; // rdx
  __int64 v52; // rsi
  __int64 v53; // r14
  _BYTE *v54; // rax
  __int64 v55; // rdi
  int v56; // ebx
  int v57; // eax
  __int64 v58; // rsi
  __int64 v59; // rbp
  unsigned __int64 v60; // rbx
  __int64 v61; // r14
  __int64 i; // rbx
  __int64 v63; // rdx
  __int64 v64; // rsi
  __int64 v65; // rbx
  _BYTE *v66; // rax
  _DWORD *v67; // rdx
  int v68; // edx
  int v69; // ebp
  __int64 v70; // r8
  unsigned __int64 v71; // rdx
  __int64 v72; // rsi
  int v73; // ebp
  unsigned __int64 v74; // rbx
  __int64 v75; // rdx
  __int64 v76; // rbp
  __int64 v77; // rbx
  _QWORD *v78; // rax
  const char *v79; // rdx
  unsigned int **v80; // rcx
  int v81; // r8d
  int v82; // r8d
  __int64 v83; // rcx
  const char *v84; // rax
  __int64 v85; // r8
  __int64 v86; // rax
  __int64 v87; // rsi
  __int64 v88; // rax
  void *v89; // r14
  __int64 v90; // rax
  size_t v91; // r11
  __int64 v92; // rbx
  __int64 v93; // r14
  _QWORD *v94; // rdx
  __int64 v95; // rsi
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // [rsp+8h] [rbp-170h]
  __int64 v101; // [rsp+10h] [rbp-168h]
  _DWORD *v102; // [rsp+18h] [rbp-160h]
  const char *v103; // [rsp+20h] [rbp-158h]
  __int64 v104; // [rsp+20h] [rbp-158h]
  int n; // [rsp+28h] [rbp-150h]
  size_t nb; // [rsp+28h] [rbp-150h]
  size_t na; // [rsp+28h] [rbp-150h]
  unsigned __int64 v108; // [rsp+30h] [rbp-148h]
  const void **v109; // [rsp+30h] [rbp-148h]
  __int64 v110; // [rsp+30h] [rbp-148h]
  unsigned __int64 v111; // [rsp+38h] [rbp-140h]
  int v112; // [rsp+40h] [rbp-138h]
  int v113; // [rsp+48h] [rbp-130h]
  int v114; // [rsp+54h] [rbp-124h]
  __int64 v115; // [rsp+58h] [rbp-120h]
  __m128i v116; // [rsp+60h] [rbp-118h] BYREF
  __int64 v117; // [rsp+70h] [rbp-108h]
  __int64 v118; // [rsp+80h] [rbp-F8h] BYREF
  __int128 v119; // [rsp+88h] [rbp-F0h]
  __int64 v120; // [rsp+A0h] [rbp-D8h] BYREF
  __int128 v121; // [rsp+A8h] [rbp-D0h]
  __int64 v122; // [rsp+C0h] [rbp-B8h] BYREF
  __int128 v123; // [rsp+C8h] [rbp-B0h]
  _BYTE v124[32]; // [rsp+D8h] [rbp-A0h] BYREF
  _QWORD v125[2]; // [rsp+F8h] [rbp-80h] BYREF
  _QWORD v126[2]; // [rsp+108h] [rbp-70h] BYREF
  _QWORD v127[2]; // [rsp+118h] [rbp-60h] BYREF
  int v128; // [rsp+128h] [rbp-50h]
  unsigned __int64 v129; // [rsp+138h] [rbp-40h]

  v129 = __readfsqword(0x28u);
  *a3 = 0;
  *a4 = 1;
  *a5 = -1;
  v12 = *(_QWORD *)(a1 + 64);
  if ( !v12 || (unsigned int)(*(_DWORD *)(v12 + 60) - 1) > 1 )
  {
    v18 = a2[1];
    v19 = *a2;
    if ( a2[2] < (unsigned __int64)(v18 + 1) )
    {
      v44 = qvector_reserve();
      v18 = a2[1];
      *a2 = v44;
      v19 = v44;
    }
    sub_7D4C0(v19 + 24 * v18, "Empty model");
    v16 = a2[1] + 1;
    goto LABEL_9;
  }
  if ( *(_DWORD *)(v12 + 72) != a11[4] )
  {
    v20 = a2[1];
    v21 = *a2;
    if ( a2[2] < (unsigned __int64)(v20 + 1) )
    {
      v49 = qvector_reserve();
      v20 = a2[1];
      *a2 = v49;
      v21 = v49;
    }
    sub_7D4C0(v21 + 24 * v20, "Inconsistent place for model");
    v16 = a2[1] + 1;
    goto LABEL_9;
  }
  v13 = a11[5];
  if ( v13 < 0 || v13 >= *(_DWORD *)(*(_QWORD *)(v12 + 64) + 64LL) )
  {
    v14 = a2[1];
    v15 = *a2;
    if ( a2[2] < (unsigned __int64)(v14 + 1) )
    {
      v43 = qvector_reserve();
      v14 = a2[1];
      *a2 = v43;
      v15 = v43;
    }
    sub_7D4C0(v15 + 24 * v14, "Invalid block index");
    v16 = a2[1] + 1;
LABEL_9:
    a2[1] = v16;
    return 1;
  }
  v23 = a3;
  v101 = sub_3CD8A0(*(_QWORD *)(a1 + 64), v13, a6);
  v24 = a11[6];
  v100 = sub_3CD8E0(v12, a11[5], v24);
  v27 = *(double *)(v12 + 64);
  v117 = v12 + 160;
  v28 = v27;
  v116 = _mm_unpacklo_epi64(
           _mm_loadl_epi64((const __m128i *)(*(_QWORD *)&v27 + 1496LL)),
           (__m128i)*(unsigned __int64 *)&v27);
  if ( !(v26 | v25) )
  {
    if ( (**(_DWORD **)&v27 & 0x400000) != 0 )
      goto LABEL_63;
    v118 = 0;
    v119 = 0;
    get_ash();
    sub_674F0(&v118);
    sub_3D22E0(a2, (__int64)&v118);
    func = get_func();
    if ( func )
    {
      v122 = 0;
      v123 = 0;
      if ( get_func_cmt() > 0 )
        sub_3D67B0(a2, &v122);
      if ( v122 )
      {
        *(_QWORD *)&v123 = 0;
        qfree();
      }
    }
    v120 = 0;
    v121 = 0;
    if ( !(unsigned __int8)print_type() )
    {
      *(_QWORD *)&v121 = 0;
      if ( get_ea_name() < 0 || !tag_strlen() )
      {
        *(_QWORD *)&v121 = 0;
        get_ea_name();
      }
    }
    sub_3D22E0(a2, (__int64)&v120);
    if ( func )
    {
      v123 = 0;
      v122 = 0;
      if ( get_func_cmt() > 0 )
        sub_3D67B0(a2, &v122);
      if ( v122 )
      {
        *(_QWORD *)&v123 = 0;
        qfree();
      }
    }
    v51 = a2[1];
    v52 = *a2;
    if ( a2[2] < (unsigned __int64)(v51 + 1) )
    {
      v96 = qvector_reserve();
      *a2 = v96;
      v51 = a2[1];
      v52 = v96;
    }
    v53 = v52 + 24 * v51;
    *(_QWORD *)v53 = 0;
    *(_OWORD *)(v53 + 8) = 0;
    v54 = (_BYTE *)qvector_reserve();
    *(_QWORD *)v53 = v54;
    *(_QWORD *)(v53 + 8) = 1;
    *v54 = 0;
    v55 = v120;
    ++a2[1];
    if ( v55 )
    {
      *(_QWORD *)&v121 = 0;
      qfree();
    }
    if ( v118 )
    {
      *(_QWORD *)&v119 = 0;
      qfree();
    }
    v25 = a11[6];
    v24 = v25;
  }
  if ( !v25 )
  {
    if ( (**(_DWORD **)(v12 + 64) & 0x400000) == 0 )
    {
      v120 = 0;
      v121 = 0;
      sub_674F0(&v120);
      sub_F6610(&v120);
      v79 = "Predecessors";
      v80 = (unsigned int **)(v101 + 344);
      if ( !*(_DWORD *)(v101 + 72) )
      {
        v80 = (unsigned int **)(v101 + 368);
        v79 = "Successors";
      }
      v81 = 0;
      if ( *(_DWORD *)(v12 + 80) - 1 >= 0 )
        v81 = *(_DWORD *)(v12 + 80) - 1;
      sub_3D4590(&v120, (__int64)&v116, v79, v80, v81);
      sub_3D22E0(a2, (__int64)&v120);
      if ( (**(_DWORD **)(v12 + 64) & 0x400000) == 0 )
      {
        v122 = 0;
        v123 = 0;
        sub_1B2480(v101, &v122, 0.0, v28, a8, a9);
        v85 = v122;
        v104 = v122 + 24 * v123;
        if ( v122 != v104 )
        {
          do
          {
            v91 = *(_QWORD *)(v85 + 8);
            v89 = nullptr;
            if ( v91 )
            {
              v109 = (const void **)v85;
              nb = *(_QWORD *)(v85 + 8);
              v89 = (void *)qalloc_or_throw();
              memcpy(v89, *v109, nb);
              v85 = (__int64)v109;
              v91 = nb;
            }
            v86 = a2[1];
            v87 = *a2;
            if ( a2[2] < (unsigned __int64)(v86 + 1) )
            {
              v110 = v85;
              na = v91;
              v90 = qvector_reserve();
              *a2 = v90;
              v87 = v90;
              v85 = v110;
              v86 = a2[1];
              v91 = na;
            }
            v85 += 24;
            v88 = v87 + 24 * v86;
            *(_QWORD *)v88 = v89;
            *(__m128i *)(v88 + 8) = _mm_unpacklo_epi64((__m128i)v91, (__m128i)v91);
            ++a2[1];
          }
          while ( v104 != v85 );
          v85 = v122;
        }
        if ( v85 )
        {
          if ( (_QWORD)v123 )
          {
            v102 = v23;
            v92 = 0;
            v93 = v123;
            do
            {
              v94 = (_QWORD *)(v85 + 24 * v92);
              if ( *v94 )
              {
                v94[1] = 0;
                qfree();
                v85 = v122;
              }
              ++v92;
            }
            while ( v93 != v92 );
            v23 = v102;
          }
          *(_QWORD *)&v123 = 0;
          qfree();
        }
      }
      if ( v120 )
      {
        *(_QWORD *)&v121 = 0;
        qfree();
      }
      v24 = a11[6];
      goto LABEL_19;
    }
    v26 = a11[5];
LABEL_63:
    v24 = v25;
    goto LABEL_20;
  }
LABEL_19:
  v26 = a11[5];
LABEL_20:
  v29 = (_QWORD *)sub_3CDBA0((_QWORD *)v12, v26, v24, 1);
  if ( v29 && v29[1] > 1u )
    sub_3D67B0(a2, v29);
  if ( !v100 )
  {
    result = a2[1];
    if ( !a11[6] )
    {
      if ( !result )
      {
        v95 = *a2;
        if ( !a2[2] )
        {
          v98 = qvector_reserve();
          *a2 = v98;
          v95 = v98;
          result = a2[1];
        }
        sub_7D4C0(v95 + 24 * result, "; empty block");
        ++a2[1];
      }
      if ( *(_QWORD *)(v101 + 48) || (**(_DWORD **)(v12 + 64) & 0x400000) != 0 )
        return a2[1];
      if ( !*(_QWORD *)(v101 + 376) )
      {
        v122 = 0;
        v123 = 0;
        get_ash();
        sub_674F0(&v122);
        sub_3D22E0(a2, (__int64)&v122);
        if ( v122 )
        {
          *(_QWORD *)&v123 = 0;
          qfree();
        }
      }
      v45 = a2[1];
      v46 = *a2;
      if ( a2[2] < (unsigned __int64)(v45 + 1) )
      {
        v99 = qvector_reserve();
        *a2 = v99;
        v46 = v99;
        v45 = a2[1];
      }
      v47 = v46 + 24 * v45;
      *(_QWORD *)v47 = 0;
      *(_OWORD *)(v47 + 8) = 0;
      v48 = (_BYTE *)qvector_reserve();
      *(_QWORD *)v47 = v48;
      *(_QWORD *)(v47 + 8) = 1;
      *v48 = 0;
      result = a2[1] + 1;
      a2[1] = result;
    }
    return result;
  }
  v122 = -1;
  v125[0] = 0xFFFFFFFF00000000LL;
  *(_QWORD *)&v123 = 0;
  DWORD2(v123) = -1;
  v125[1] = 0;
  v126[0] = 0xFFFFFFFF00000000LL;
  v126[1] = 0;
  v127[0] = 0xFFFFFFFF00000000LL;
  v127[1] = 0;
  sub_32B5A0((__int64)v124, -1);
  v128 = 0;
  v30 = sub_133250(*(_QWORD *)(v12 + 64), v100, *(unsigned int *)(v101 + 72));
  v31 = _mm_cvtsi32_si128(*(_DWORD *)(v101 + 72));
  v32 = *(_QWORD *)(v100 + 24);
  LODWORD(v123) = *(_DWORD *)v100;
  v122 = v32;
  *(_QWORD *)((char *)&v123 + 4) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v30), v31).m128i_u64[0];
  v103 = "DELETED";
  if ( !sub_1338D0(*(_QWORD *)(v12 + 64), (__int64)&v122, 9u) )
  {
    v83 = sub_3C9D00(*(_QWORD *)(v12 + 64), (__int64)&v122, (_DWORD *)v100);
    v84 = "ADDED BY USER";
    if ( !v83 )
      v84 = nullptr;
    v103 = v84;
  }
  sub_1188E0((__int64)v127);
  sub_1188E0((__int64)v126);
  sub_1188E0((__int64)v125);
  v33 = a11[6];
  v118 = 0;
  v119 = 0;
  n = v33;
  if ( *(_BYTE *)(v12 + 84) )
  {
    sub_674F0(&v118);
    if ( **(int **)(v12 + 64) < 0 && *(_QWORD *)(v100 + 24) != -1 )
      sub_F6610(&v118);
    *a4 = 6;
    v34 = *(int *)(v12 + 76);
    if ( v34 > 0 )
      goto LABEL_27;
  }
  else
  {
    v34 = *(int *)(v12 + 76);
    if ( v34 > 0 )
LABEL_27:
      sub_3CABC0(&v118, v34);
  }
  v112 = tag_strlen();
  v35 = **(_DWORD **)(v12 + 64);
  v36 = (v35 >> 20) & 4;
  if ( (v35 & 0x40000000) != 0 )
    v36 = (**(_DWORD **)(v12 + 64) >> 20) & 4 | 2;
  if ( (v35 & 0x20000000) != 0 )
    v36 |= 1u;
  sub_1AFDD0((int *)v100, (__int64)&v118, (__int64)&v116, v36);
  v113 = tag_strlen();
  v114 = *(_DWORD *)(v12 + 76);
  if ( v103 )
  {
    v37 = 0;
    v38 = *(_DWORD *)(v12 + 80) - 1;
    if ( v38 >= 0 )
      v37 = *(_DWORD *)(v12 + 80) - 1;
    if ( v37 > (int)tag_strlen() && v38 > 0 )
      sub_3CABC0(&v118, v37);
    v39 = v119;
    v40 = 2;
    if ( (_QWORD)v119 )
    {
      v40 = v119 + 1;
      v39 = v119 - 1;
    }
    v41 = v118;
    if ( *((_QWORD *)&v119 + 1) < v40 )
    {
      v108 = v40;
      v118 = qvector_reserve();
      v40 = v108;
      v41 = v118;
    }
    *(_QWORD *)&v119 = v40;
    *(_BYTE *)(v41 + v39) = 32;
    *(_BYTE *)(v118 + v39 + 1) = 0;
    get_ash();
    sub_F6610(&v118);
  }
  else if ( v100 == *(_QWORD *)(v101 + 56) && *(_QWORD *)(v101 + 376) )
  {
    v82 = 0;
    if ( *(_DWORD *)(v12 + 80) - 1 >= 0 )
      v82 = *(_DWORD *)(v12 + 80) - 1;
    sub_3D4590(&v118, (__int64)&v116, "Successors", (unsigned int **)(v101 + 368), v82);
  }
  v42 = (_QWORD *)sub_3CDBA0((_QWORD *)v12, *(_DWORD *)(v101 + 72), n, 0);
  if ( v42 && v42[1] > 1u )
  {
    v120 = 0;
    v121 = 0;
    sub_3CC270(v42, &v120, "\n", 0);
    if ( (_QWORD)v121 )
    {
      v68 = 0;
      if ( *(_DWORD *)(v12 + 80) - 1 >= 0 )
        v68 = *(_DWORD *)(v12 + 80) - 1;
      v69 = v68;
      if ( *(_DWORD *)(v12 + 80) - 1 > 0 )
        sub_3CABC0(&v118, v68);
      v70 = v119;
      v71 = 2;
      if ( (_QWORD)v119 )
      {
        v71 = v119 + 1;
        v70 = v119 - 1;
      }
      v72 = v118;
      if ( *((_QWORD *)&v119 + 1) < v71 )
      {
        v115 = v70;
        v111 = v71;
        v118 = qvector_reserve();
        v70 = v115;
        v72 = v118;
        v71 = v111;
      }
      *(_QWORD *)&v119 = v71;
      *(_BYTE *)(v72 + v70) = 32;
      *(_BYTE *)(v118 + v70 + 1) = 0;
      get_ash();
      sub_F6610(&v118);
      *v23 = a2[1];
      sub_3D22E0(a2, (__int64)&v118);
      if ( (unsigned __int64)v121 > 1 )
      {
        v73 = v69 + 1;
        v74 = 1;
        do
        {
          v122 = 0;
          v123 = 0;
          if ( *(_BYTE *)(v12 + 84) )
          {
            sub_674F0(&v122);
            if ( **(int **)(v12 + 64) < 0 && *(_QWORD *)(v100 + 24) != -1 )
              sub_F6610(&v122);
          }
          if ( v73 > 0 )
            sub_3CABC0(&v122, v73);
          get_ash();
          sub_F6610(&v122);
          sub_3D22E0(a2, (__int64)&v122);
          if ( v122 )
          {
            *(_QWORD *)&v123 = 0;
            qfree();
          }
          ++v74;
        }
        while ( v74 < (unsigned __int64)v121 );
      }
    }
    else
    {
      *v23 = a2[1];
      sub_3D22E0(a2, (__int64)&v118);
    }
    v75 = v120;
    if ( v120 )
    {
      v76 = v121;
      if ( (_QWORD)v121 )
      {
        v77 = 0;
        do
        {
          v78 = (_QWORD *)(v75 + 24 * v77);
          if ( *v78 )
          {
            v78[1] = 0;
            qfree();
            v75 = v120;
          }
          ++v77;
        }
        while ( v76 != v77 );
      }
      *(_QWORD *)&v121 = 0;
      qfree();
    }
  }
  else
  {
    *v23 = a2[1];
    sub_3D22E0(a2, (__int64)&v118);
  }
  if ( v118 )
  {
    *(_QWORD *)&v119 = 0;
    qfree();
  }
  if ( *(_QWORD *)(v101 + 56) != v100 || (**(_DWORD **)(v12 + 64) & 0x400000) != 0 )
    return a2[1];
  if ( *(_QWORD *)(v101 + 376) )
  {
    if ( !v103 )
      goto LABEL_103;
    v122 = 0;
    v123 = 0;
    v56 = v113 + v114 - v112;
    if ( *(_BYTE *)(v12 + 84) )
    {
      sub_674F0(&v122);
      v57 = *(_DWORD *)(v12 + 80) - 1;
      if ( v57 < 0 )
        v57 = 0;
      if ( v57 < v56 )
        v57 = v113 + v114 - v112;
      if ( !v57 )
      {
LABEL_96:
        v58 = v122;
        if ( (_QWORD)v123 )
        {
          v59 = v123 - 1;
          v60 = v123 + 1;
        }
        else
        {
          v59 = 0;
          v60 = 2;
        }
        if ( *((_QWORD *)&v123 + 1) >= v60 )
        {
LABEL_99:
          *(_QWORD *)&v123 = v60;
          *(_BYTE *)(v58 + v59) = 32;
          *(_BYTE *)(v122 + v59 + 1) = 0;
          get_ash();
          sub_F6610(&v122);
          v61 = *(_QWORD *)(v101 + 368);
          for ( i = v61 + 4LL * *(_QWORD *)(v101 + 376); i != v61; v61 += 4 )
            sub_F6610(&v122);
          sub_3D22E0(a2, (__int64)&v122);
          if ( v122 )
            goto LABEL_102;
          goto LABEL_103;
        }
LABEL_183:
        v122 = qvector_reserve();
        v58 = v122;
        goto LABEL_99;
      }
    }
    else
    {
      v57 = *(_DWORD *)(v12 + 80) - 1;
      if ( v57 < 0 )
        v57 = 0;
      if ( v57 < v56 )
        v57 = v113 + v114 - v112;
      if ( !v57 )
      {
        v60 = 2;
        v59 = 0;
        goto LABEL_183;
      }
    }
    sub_3CABC0(&v122, v57);
    goto LABEL_96;
  }
  v122 = 0;
  v123 = 0;
  get_ash();
  sub_674F0(&v122);
  sub_3D22E0(a2, (__int64)&v122);
  if ( v122 )
  {
LABEL_102:
    *(_QWORD *)&v123 = 0;
    qfree();
  }
LABEL_103:
  v63 = a2[1];
  v64 = *a2;
  if ( a2[2] < (unsigned __int64)(v63 + 1) )
  {
    v97 = qvector_reserve();
    v63 = a2[1];
    *a2 = v97;
    v64 = v97;
  }
  v65 = v64 + 24 * v63;
  *(_QWORD *)v65 = 0;
  *(_OWORD *)(v65 + 8) = 0;
  v66 = (_BYTE *)qvector_reserve();
  *(_QWORD *)v65 = v66;
  *(_QWORD *)(v65 + 8) = 1;
  *v66 = 0;
  result = a2[1] + 1;
  a2[1] = result;
  if ( *(_QWORD *)(v101 + 56) == v100 )
  {
    v67 = *(_DWORD **)(v12 + 64);
    if ( a11[5] == v67[16] - 1 && (*v67 & 0x400000) == 0 )
    {
      v121 = 0;
      v120 = 0;
      v122 = 0;
      v123 = 0;
      get_ea_name();
      get_ash();
      sub_674F0(&v120);
      if ( v122 )
      {
        *(_QWORD *)&v123 = 0;
        qfree();
      }
      sub_3D22E0(a2, (__int64)&v120);
      if ( v120 )
      {
        *(_QWORD *)&v121 = 0;
        qfree();
      }
    }
    return a2[1];
  }
  return result;
}

