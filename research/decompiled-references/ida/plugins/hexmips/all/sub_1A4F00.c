__int64 __fastcall sub_1A4F00(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  void (__fastcall *v5)(_QWORD *, __int64, __int64); // r12
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r12
  unsigned int v10; // ebp
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r9d
  int v16; // r15d
  __int64 v17; // r13
  unsigned int v18; // ebp
  unsigned __int64 *v19; // rax
  unsigned __int64 v20; // rbx
  unsigned __int64 *v21; // rax
  __m128i v22; // xmm0
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // r9d
  int v28; // eax
  unsigned int v29; // eax
  _QWORD *v30; // rbp
  __int64 v31; // rax
  unsigned __int64 v32; // r12
  __int64 v33; // r13
  __int64 v34; // rsi
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 *v39; // r12
  __int64 v40; // rax
  __int64 v41; // rsi
  unsigned __int64 v42; // rsi
  unsigned __int64 v43; // r15
  __int64 v44; // rax
  __int64 v45; // r12
  unsigned __int64 v46; // rcx
  __int64 v47; // rax
  int v48; // r14d
  __int64 v49; // rax
  __int64 v50; // r13
  __int64 v51; // rsi
  unsigned int v52; // eax
  __int64 v53; // rdx
  unsigned int v54; // eax
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 **v57; // rdi
  __int64 v58; // rax
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // rax
  int v61; // ebp
  unsigned __int64 v62; // rax
  __int64 v63; // r14
  __int64 **v64; // rax
  __int64 *v65; // rax
  __int64 v66; // rax
  __int64 *v67; // rax
  int v68; // ebp
  __int64 v69; // rbp
  unsigned __int64 v70; // r12
  _QWORD *v71; // rdx
  _QWORD *v72; // r13
  _QWORD *i; // r12
  __int128 v74; // rdi
  __m128i *v75; // r12
  unsigned int v76; // r14d
  int v77; // r13d
  __int64 v78; // r15
  unsigned int v79; // r13d
  __int64 v80; // rsi
  int v81; // edx
  __int64 v82; // rbx
  __int64 v83; // rax
  unsigned __int64 v84; // r15
  unsigned __int64 v85; // rbx
  _QWORD *v86; // rax
  __int64 v87; // rcx
  __int64 v88; // rax
  unsigned int v89; // r12d
  __int64 v90; // r14
  __int64 v91; // rbp
  __m128i *v92; // rax
  __int64 v93; // r14
  __int64 v94; // r15
  __int64 v95; // r12
  unsigned int v96; // r13d
  __m128i *v97; // rax
  __int64 *v98; // r12
  __int64 v99; // rdx
  __int64 *v100; // rdi
  __int64 *v101; // rdi
  unsigned __int64 *v102; // rax
  __m128i v103; // xmm0
  void *v104; // r14
  void *v105; // rbx
  int v107; // [rsp+0h] [rbp-250h]
  int n; // [rsp+10h] [rbp-240h]
  int na; // [rsp+10h] [rbp-240h]
  _QWORD *v110; // [rsp+18h] [rbp-238h]
  int v111; // [rsp+18h] [rbp-238h]
  __int64 v112; // [rsp+18h] [rbp-238h]
  __int64 v113; // [rsp+20h] [rbp-230h]
  __int64 v114; // [rsp+38h] [rbp-218h]
  unsigned __int64 v116; // [rsp+58h] [rbp-1F8h] BYREF
  __int128 v117; // [rsp+60h] [rbp-1F0h]
  __int64 v118; // [rsp+78h] [rbp-1D8h] BYREF
  unsigned __int64 *v119; // [rsp+80h] [rbp-1D0h]
  __int64 v120; // [rsp+88h] [rbp-1C8h]
  __int64 v121; // [rsp+90h] [rbp-1C0h]
  __int128 v122; // [rsp+98h] [rbp-1B8h]
  _QWORD *v123; // [rsp+A8h] [rbp-1A8h]
  __int64 v124; // [rsp+B0h] [rbp-1A0h]
  __int64 v125; // [rsp+B8h] [rbp-198h]
  __int128 v126; // [rsp+C0h] [rbp-190h]
  __int64 v127; // [rsp+D0h] [rbp-180h]
  __int128 v128; // [rsp+D8h] [rbp-178h]
  _BYTE v129[24]; // [rsp+178h] [rbp-D8h] BYREF
  char v130; // [rsp+190h] [rbp-C0h]
  unsigned __int64 *v131; // [rsp+198h] [rbp-B8h]
  unsigned __int64 v132; // [rsp+1A0h] [rbp-B0h]
  __int128 v133; // [rsp+1A8h] [rbp-A8h]
  unsigned __int64 v134; // [rsp+210h] [rbp-40h]

  v134 = __readfsqword(0x28u);
  v2 = *(_QWORD **)(a1 + 16);
  v122 = 0;
  v119 = nullptr;
  v120 = 0;
  v121 = 0;
  v124 = 0;
  v125 = 0;
  v3 = v2[35];
  v123 = v2;
  v127 = 0;
  v4 = *(_QWORD *)(v3 + 1496);
  v126 = 0;
  v128 = 0;
  v118 = v4;
  v5 = *(void (__fastcall **)(_QWORD *, __int64, __int64))(*v2 + 56LL);
  v6 = (*(__int64 (__fastcall **)(_QWORD *))(*v2 + 32LL))(v2);
  v5(v2, a1 + 144, v6);
  v7 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(a1 + 184) > *(_DWORD *)(v7 + 24) || *(_DWORD *)(a1 + 208) > *(_DWORD *)(v7 + 48) )
  {
    if ( !under_debugger )
      sub_37E160(51506);
    goto LABEL_157;
  }
  v8 = *(_QWORD *)(v7 + 280);
  v9 = 8;
  v10 = 1;
  if ( *(int *)(v8 + 64) > 1 )
  {
    while ( 1 )
    {
      sub_1A4D10(a1, &v118, *(_QWORD *)(*(_QWORD *)(v8 + 528) + v9));
      v11 = *(_DWORD *)(v8 + 64);
      if ( (int)v11 <= (int)++v10 )
        break;
      v9 += 8;
      if ( v10 >= v11 )
      {
        if ( !under_debugger )
          sub_37E160(52719);
        goto LABEL_157;
      }
    }
  }
  sub_198630(a1, &v118);
  v114 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(*(_QWORD *)(a1 + 16));
  if ( !(unsigned __int8)sub_1A1900(a1, v8) )
  {
LABEL_8:
    if ( *(_BYTE *)(v8 + 320) && (unsigned __int8)sub_19E730((_QWORD *)a1, a2, v12, v13, v14, v15) )
    {
      v18 = 1;
      goto LABEL_19;
    }
    if ( *(_DWORD *)(a1 + 184) == -1 || (v16 = *(_DWORD *)(a1 + 208), v16 == -1) )
    {
      v18 = 0;
      goto LABEL_19;
    }
    v17 = *(_QWORD *)(a1 + 200);
    v18 = 0;
    if ( v17 != -1 )
    {
      if ( *(_BYTE *)(a1 + 468) )
      {
LABEL_13:
        if ( *a2 )
        {
          a2[1] = 0;
          qfree();
          *a2 = 0;
          a2[2] = 0;
        }
        if ( a2[7] )
        {
          a2[8] = 0;
          qfree();
          a2[7] = 0;
          a2[9] = 0;
        }
        *(_DWORD *)(a1 + 208) = -1;
        *(_DWORD *)(a1 + 184) = -1;
        goto LABEL_19;
      }
      v89 = *(char *)(v114 + 13);
      v90 = *(_QWORD *)(a1 + 16);
      v91 = *(_QWORD *)(v90 + 48);
      v92 = sub_CDFA0(v8);
      v18 = sub_194C60((__int64)v92, v17, (_QWORD *)(v90 + 120), v16, v91, v89);
    }
    v93 = *(_QWORD *)(a1 + 176);
    if ( v93 != -1 && !*(_BYTE *)(a1 + 468) )
    {
      v94 = *(_QWORD *)(a1 + 16);
      v95 = *(_QWORD *)(v94 + 24);
      v96 = *(char *)(v114 + 12);
      na = *(_DWORD *)(a1 + 184);
      v97 = sub_CDFA0(v8);
      v18 += sub_194C60((__int64)v97, v93, (_QWORD *)(v94 + 96), na, v95, v96);
    }
    goto LABEL_13;
  }
  sub_197F90(a1, v114);
  v28 = *(_DWORD *)(v8 + 72);
  if ( v28 == 128
    || (v29 = v28 & 0xFFFFFFF0, v29 != 64) && v29 != 208 && (*(_BYTE *)(v8 + 320) || (*(_BYTE *)(v8 + 4) & 0x20) != 0) )
  {
    n = 0;
  }
  else
  {
    v116 = 0;
    v117 = 0;
    v30 = *(_QWORD **)(a1 + 120);
    n = 0;
    v110 = &v30[16 * *(_QWORD *)(a1 + 128)];
    if ( v110 == v30 )
      goto LABEL_94;
    do
    {
      sub_1CB990(v8, v30[9]);
      get_func();
      tinfo_get_func_frame();
      v31 = sub_19D260((__int64)v30, 0);
      if ( (unsigned int)sub_19D300((_QWORD *)v8, (__int64)v30, v31) == -1 )
      {
        if ( !under_debugger )
          sub_37E160(51307);
        goto LABEL_157;
      }
      if ( !*v30 )
      {
        if ( !under_debugger )
          sub_37E160(51371);
        goto LABEL_157;
      }
      v32 = v117;
      v33 = *(int *)(*v30 + 72LL);
      v34 = v116;
      v35 = v116;
      if ( (int)v33 > (int)v117 - 1 )
      {
        v36 = (int)v33 + 1;
        if ( (_QWORD)v117 != v36 )
        {
          memset(v129, 0, sizeof(v129));
          if ( v36 < (unsigned __int64)v117 )
          {
            v113 = v8;
            v84 = (int)v33 + 1;
            v85 = v117;
            do
            {
              v86 = (_QWORD *)(v34 + 24 * v84);
              if ( *v86 )
              {
                v86[1] = 0;
                qfree();
                v34 = v116;
              }
              ++v84;
            }
            while ( v84 < v85 );
            *(_QWORD *)&v117 = (int)v33 + 1;
            v8 = v113;
            v35 = v34;
          }
          else
          {
            if ( (unsigned __int64)v129 < v116 || (unsigned __int64)v129 >= v116 + 24LL * *((_QWORD *)&v117 + 1) )
            {
              if ( *((_QWORD *)&v117 + 1) < v36 )
              {
                v35 = qvector_reserve();
                v32 = v117;
                v36 = (int)v33 + 1;
                v116 = v35;
              }
              if ( v32 < v36 )
              {
                v87 = 24 * v32;
                do
                {
                  v88 = v87 + v35;
                  ++v32;
                  v87 += 24;
                  *(_QWORD *)v88 = 0;
                  *(_OWORD *)(v88 + 8) = 0;
                  v35 = v116;
                }
                while ( v36 != v32 );
              }
            }
            else
            {
              if ( *((_QWORD *)&v117 + 1) < v36 )
              {
                v35 = qvector_reserve();
                v32 = v117;
                v36 = (int)v33 + 1;
                v116 = v35;
              }
              if ( v32 < v36 )
              {
                v37 = 24 * v32;
                do
                {
                  v38 = v37 + v35;
                  ++v32;
                  v37 += 24;
                  *(_QWORD *)v38 = 0;
                  *(_OWORD *)(v38 + 8) = 0;
                  v35 = v116;
                }
                while ( v36 != v32 );
              }
            }
            *(_QWORD *)&v117 = v36;
          }
        }
      }
      v39 = (__int64 *)(v35 + 24 * v33);
      v40 = v39[1];
      v41 = *v39;
      if ( v39[2] < (unsigned __int64)(v40 + 1) )
      {
        v83 = qvector_reserve();
        *v39 = v83;
        v41 = v83;
        v40 = v39[1];
      }
      *(_QWORD *)(v41 + 8 * v40) = v30;
      v30 += 16;
      ++v39[1];
      ++n;
      clear_tinfo_t();
    }
    while ( v110 != v30 );
    v25 = 0;
    v111 = 0;
    v42 = v116;
    if ( (_QWORD)v117 )
    {
      do
      {
        v43 = v42 + 24 * v25;
        if ( *(_QWORD *)(v43 + 8) > 1u )
        {
          memset(v129, 0, sizeof(v129));
          v44 = ***(_QWORD ***)v43;
          if ( !v44 )
            sub_190F60(0.0);
          v45 = *(_QWORD *)(v44 + 48);
          v46 = *(_QWORD *)(v43 + 8);
          v47 = 0;
          if ( v45 )
          {
            while ( 1 )
            {
              v48 = 0;
              v49 = 0;
              if ( v46 )
                break;
LABEL_70:
              v45 = *(_QWORD *)(v45 + 8);
              if ( !v45 )
              {
                v47 = *(_QWORD *)&v129[8];
                goto LABEL_72;
              }
            }
            while ( 1 )
            {
              v50 = *(_QWORD *)(*(_QWORD *)v43 + 8 * v49);
              if ( !*(_QWORD *)(v50 + 104) )
                break;
              if ( **(_QWORD **)(v50 + 96) == v45 )
              {
                v51 = *(_QWORD *)v129;
                v52 = *(_DWORD *)&v129[8] - 1;
                if ( *(_DWORD *)&v129[8] - 1 < 0 )
                {
LABEL_106:
                  v54 = *(_DWORD *)(v50 + 8) & 0xFFFFFFFA;
                }
                else
                {
                  v53 = *(_QWORD *)v129 + 8LL * v52;
                  while ( *(_QWORD *)(v50 + 72) != *(_QWORD *)(*(_QWORD *)v53 + 72LL) )
                  {
                    --v52;
                    v53 -= 8;
                    if ( v52 == -1 )
                      goto LABEL_106;
                  }
                  v54 = *(_DWORD *)(v50 + 8) | 5;
                }
                *(_DWORD *)(v50 + 8) = v54;
                v55 = *(_QWORD *)&v129[8];
                if ( *(_QWORD *)&v129[16] < (unsigned __int64)(*(_QWORD *)&v129[8] + 1LL) )
                {
                  *(_QWORD *)v129 = qvector_reserve();
                  v55 = *(_QWORD *)&v129[8];
                  v51 = *(_QWORD *)v129;
                }
                *(_QWORD *)(v51 + 8 * v55) = v50;
                ++v48;
                ++*(_QWORD *)&v129[8];
                v46 = *(_QWORD *)(v43 + 8);
                v49 = v48;
                if ( v48 >= v46 )
                  goto LABEL_70;
              }
              else
              {
                v49 = ++v48;
                if ( v48 >= v46 )
                  goto LABEL_70;
              }
            }
            if ( !under_debugger )
              sub_37E160(51196);
LABEL_157:
            BUG();
          }
LABEL_72:
          if ( v46 != v47 )
          {
            if ( !under_debugger )
              sub_37E160(51384);
            goto LABEL_157;
          }
          v56 = *(_QWORD *)v129;
          v57 = *(__int64 ***)v43;
          *(_QWORD *)(v43 + 8) = v46;
          v58 = *(_QWORD *)(v43 + 16);
          *(_QWORD *)v43 = v56;
          *(_QWORD *)(v43 + 16) = *(_QWORD *)&v129[16];
          *(_QWORD *)v129 = v57;
          *(_QWORD *)&v129[16] = v58;
          if ( v57 )
          {
            *(_QWORD *)&v129[8] = 0;
            qfree();
          }
          v42 = v116;
        }
        ++v111;
        v59 = v117;
        v25 = v111;
        v60 = v117;
      }
      while ( v111 < (unsigned __int64)v117 );
      if ( (unsigned __int64)v117 > 1 )
      {
        v25 = 1;
        v61 = 1;
        do
        {
          v62 = v42 + 24 * v25;
          if ( *(_QWORD *)(v62 + 8) )
          {
            v63 = ***(_QWORD ***)v62;
            if ( !v63 )
              sub_190F60(0.0);
            *(_QWORD *)&v129[16] = 0;
            v130 = 0;
            v132 = v42 + 24 * v25;
            v64 = *(__int64 ***)v62;
            *(_OWORD *)v129 = (unsigned __int64)&off_4BE988;
            v65 = *v64;
            v131 = &v116;
            v66 = *v65;
            if ( !v66 )
              sub_190F60(0.0);
            LODWORD(v133) = *(_DWORD *)(v66 + 72);
            v67 = (__int64 *)sub_62EE0(*(_QWORD **)(v63 + 64));
            sub_6B390((__int64 *)v129, v67, *(_DWORD *)(v63 + 72), 1);
            *(_QWORD *)v129 = off_4BC298;
            qfree();
            v42 = v116;
            v59 = v117;
          }
          ++v61;
          v60 = v59;
          v25 = v61;
        }
        while ( v61 < v59 );
      }
      v24 = (unsigned int)(v60 - 1);
      if ( (int)v24 >= 0 )
      {
        v68 = 0;
        do
        {
          sub_19DD20(a1, (_QWORD *)(v42 + 24LL * v68));
          v60 = v117;
          ++v68;
          v42 = v116;
          v24 = (unsigned int)(v117 - 1);
        }
        while ( v68 <= (int)v24 );
      }
      if ( v42 )
      {
        if ( v60 )
        {
          v69 = 0;
          v70 = v60;
          do
          {
            v71 = (_QWORD *)(v42 + 24 * v69);
            if ( *v71 )
            {
              v71[1] = 0;
              qfree();
              v42 = v116;
            }
            ++v69;
          }
          while ( v69 != v70 );
        }
        goto LABEL_93;
      }
    }
    else if ( v116 )
    {
LABEL_93:
      *(_QWORD *)&v117 = 0;
      qfree();
    }
  }
LABEL_94:
  v18 = n + (unsigned __int8)sub_19E730((_QWORD *)a1, a2, v24, v25, v26, v27);
  sub_197D70(a1);
  v72 = *(_QWORD **)(a1 + 120);
  for ( i = &v72[16 * *(_QWORD *)(a1 + 128)]; i != v72; v72 += 16 )
  {
    *((_QWORD *)&v74 + 1) = v72;
    *(_QWORD *)&v74 = a1;
    sub_1A0360(v74);
    sub_19CEE0(v72, *(_DWORD *)(a1 + 464));
  }
  sub_18C100(v8);
  if ( *(_QWORD *)(a1 + 400) )
  {
    *(_QWORD *)(a1 + 408) = 0;
    qfree();
    *(_QWORD *)(a1 + 400) = 0;
    *(_QWORD *)(a1 + 416) = 0;
  }
  if ( *(_QWORD *)(a1 + 424) )
  {
    *(_QWORD *)(a1 + 432) = 0;
    qfree();
    *(_QWORD *)(a1 + 424) = 0;
    *(_QWORD *)(a1 + 440) = 0;
  }
  clear_tinfo_t();
  clear_tinfo_t();
  if ( !v18 )
    goto LABEL_8;
  v75 = sub_CDFA0(v8);
  v76 = *(char *)(v114 + 12);
  *(_OWORD *)&v129[8] = 0;
  v77 = *(_DWORD *)(a1 + 184);
  v78 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 104LL);
  if ( v78 )
  {
    v112 = *(_QWORD *)(a1 + 16);
    v105 = (void *)qalloc_or_throw();
    *(_QWORD *)&v129[16] = v78;
    memcpy(v105, *(const void **)(v112 + 96), 4 * v78);
    *(_QWORD *)&v129[8] = v78;
    *(_QWORD *)v129 = v105;
    sub_192610((__int64)v75, v129, v77, v76);
    if ( v105 )
      qfree();
  }
  else
  {
    *(_QWORD *)v129 = 0;
    sub_192610((__int64)v75, v129, v77, v76);
  }
  v79 = *(char *)(v114 + 13);
  *(_OWORD *)&v129[8] = 0;
  v80 = *(_QWORD *)(a1 + 16);
  v81 = *(_DWORD *)(a1 + 208);
  v82 = *(_QWORD *)(v80 + 128);
  v107 = v81;
  if ( v82 )
  {
    v104 = (void *)qalloc_or_throw();
    *(_QWORD *)&v129[16] = v82;
    memcpy(v104, *(const void **)(v80 + 120), 4 * v82);
    *(_QWORD *)&v129[8] = v82;
    *(_QWORD *)v129 = v104;
    sub_192610((__int64)v75, v129, v107, v79);
    if ( v104 )
      qfree();
  }
  else
  {
    *(_QWORD *)v129 = 0;
    sub_192610((__int64)v75, v129, v81, v79);
  }
  sub_9E320((__int64)v75, (__int64)"spoiled ellipsis regs");
LABEL_19:
  if ( v127 )
  {
    *(_QWORD *)&v128 = 0;
    qfree();
  }
  if ( v125 )
  {
    *(_QWORD *)&v126 = 0;
    qfree();
  }
  if ( v121 )
  {
    *(_QWORD *)&v122 = 0;
    qfree();
  }
  v19 = v119;
  if ( v119 )
  {
    v20 = *v119;
    if ( !v120 )
    {
      *v119 = *v119 & 3 | (unsigned __int64)v119 & 0xFFFFFFFFFFFFFFFCLL;
      v21 = v119;
      v22 = (__m128i)(unsigned __int64)v119;
      *v119 &= ~1uLL;
      *(__m128i *)(v21 + 1) = _mm_unpacklo_epi64(v22, v22);
      *v119 |= 2u;
      goto LABEL_28;
    }
    v98 = (__int64 *)(v20 & 0xFFFFFFFFFFFFFFFCLL);
    v99 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v99 & 2) != 0 )
    {
LABEL_133:
      *v19 = v20 & 3 | (unsigned __int64)v19 & 0xFFFFFFFFFFFFFFFCLL;
      v102 = v119;
      v103 = (__m128i)(unsigned __int64)v119;
      *v119 &= ~1uLL;
      *(__m128i *)(v102 + 1) = _mm_unpacklo_epi64(v103, v103);
      *v119 |= 2u;
      v120 = 0;
LABEL_28:
      if ( v119 )
        qfree();
      return v18;
    }
    v100 = (__int64 *)v98[1];
    if ( (*(_BYTE *)v100 & 2) != 0 )
    {
      v101 = (__int64 *)v98[2];
      if ( (*(_BYTE *)v101 & 2) != 0 )
        goto LABEL_137;
    }
    else
    {
      sub_192250(v100);
      v101 = (__int64 *)v98[2];
      if ( (*(_BYTE *)v101 & 2) != 0 )
        goto LABEL_129;
    }
    sub_192250(v101);
LABEL_129:
    v99 = *v98;
    if ( (*v98 & 2) != 0 )
    {
LABEL_130:
      if ( v20 > 3 )
        qfree();
      v19 = v119;
      v20 = *v119;
      goto LABEL_133;
    }
LABEL_137:
    *v98 = v99 | 2;
    goto LABEL_130;
  }
  return v18;
}

