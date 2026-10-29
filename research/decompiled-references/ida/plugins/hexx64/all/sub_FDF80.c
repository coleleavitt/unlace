__int64 __fastcall sub_FDF80(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  __m128i v9; // xmm2
  __int64 v10; // rax
  __int64 v11; // rax
  __m128i v12; // xmm0
  __int64 v13; // rax
  unsigned __int64 v14; // r15
  bool v15; // zf
  unsigned __int8 *v16; // r12
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  char *v19; // rdi
  __int64 v20; // r13
  int v21; // r13d
  __int64 v22; // rcx
  __int64 v23; // r14
  __int64 i; // r15
  __int32 *v25; // r14
  __int32 *j; // r15
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // r13d
  __int64 v30; // r15
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rcx
  size_t v34; // r15
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // r13d
  __int64 v38; // rax
  __int64 v39; // r14
  __int64 v40; // r12
  __int64 v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rcx
  void *v44; // r15
  unsigned __int64 v45; // rbx
  __m128i v46; // xmm0
  __int64 v47; // rdi
  __int64 v48; // rdi
  __int64 v49; // r12
  __int64 v50; // r15
  __int64 *v51; // rbx
  __int64 v52; // rdi
  __int64 v53; // rdi
  unsigned __int64 v55; // r13
  int *v56; // rdx
  unsigned __int64 v57; // r15
  size_t v58; // rax
  unsigned __int64 v59; // r15
  __int64 v60; // r13
  __int32 v61; // r15d
  __int64 v62; // rax
  const __m128i *v63; // rdi
  const void *v64; // r8
  void *v65; // rax
  void *v66; // rdi
  __int64 v67; // rax
  void *v68; // [rsp+0h] [rbp-2D0h]
  const void *v69; // [rsp+8h] [rbp-2C8h]
  __int64 v72; // [rsp+20h] [rbp-2B0h]
  __int64 v73; // [rsp+28h] [rbp-2A8h]
  int v74; // [rsp+34h] [rbp-29Ch]
  size_t v76; // [rsp+48h] [rbp-288h]
  __m128i v77; // [rsp+50h] [rbp-280h] BYREF
  _QWORD v78[2]; // [rsp+60h] [rbp-270h] BYREF
  const __m128i *v79; // [rsp+70h] [rbp-260h] BYREF
  __int128 v80; // [rsp+78h] [rbp-258h]
  void *src; // [rsp+90h] [rbp-240h] BYREF
  size_t n[3]; // [rsp+98h] [rbp-238h]
  __int64 v83[2]; // [rsp+B0h] [rbp-220h] BYREF
  __int64 v84; // [rsp+C0h] [rbp-210h]
  void *dest[2]; // [rsp+C8h] [rbp-208h] BYREF
  __int128 v86; // [rsp+D8h] [rbp-1F8h]
  __int64 v87; // [rsp+E8h] [rbp-1E8h]
  __int128 v88; // [rsp+F0h] [rbp-1E0h]
  __int64 v89; // [rsp+100h] [rbp-1D0h]
  int v90; // [rsp+108h] [rbp-1C8h]
  int v91; // [rsp+10Ch] [rbp-1C4h]
  __int64 v92; // [rsp+110h] [rbp-1C0h]
  __m128i v93; // [rsp+120h] [rbp-1B0h] BYREF
  __int64 v94; // [rsp+130h] [rbp-1A0h]
  __int64 v95; // [rsp+138h] [rbp-198h]
  __int128 v96; // [rsp+140h] [rbp-190h]
  __int64 v97; // [rsp+150h] [rbp-180h]
  __int128 v98; // [rsp+158h] [rbp-178h]
  __int64 v99; // [rsp+168h] [rbp-168h]
  __int64 v100; // [rsp+170h] [rbp-160h]
  char v101[8]; // [rsp+178h] [rbp-158h] BYREF
  __int64 v102; // [rsp+180h] [rbp-150h]
  __int64 v103; // [rsp+188h] [rbp-148h]
  __int64 v104; // [rsp+198h] [rbp-138h]
  __int64 v105; // [rsp+1A0h] [rbp-130h]
  __int64 v106; // [rsp+1D0h] [rbp-100h]
  __int64 v107; // [rsp+1D8h] [rbp-F8h]
  __int64 v108; // [rsp+1E8h] [rbp-E8h]
  __int64 v109; // [rsp+1F0h] [rbp-E0h]
  __int64 v110; // [rsp+200h] [rbp-D0h]
  __int64 v111; // [rsp+208h] [rbp-C8h]
  __int64 v112; // [rsp+210h] [rbp-C0h]
  __int64 v113; // [rsp+218h] [rbp-B8h]
  __int64 v114; // [rsp+220h] [rbp-B0h]
  __int64 v115; // [rsp+228h] [rbp-A8h]
  __int128 v116; // [rsp+230h] [rbp-A0h]
  int v117; // [rsp+240h] [rbp-90h]
  __int16 v118; // [rsp+244h] [rbp-8Ch]
  __m128i si128; // [rsp+248h] [rbp-88h]
  __int128 v120; // [rsp+258h] [rbp-78h]
  __m128i v121; // [rsp+268h] [rbp-68h]
  __int128 v122; // [rsp+278h] [rbp-58h]
  int tinfo_property; // [rsp+288h] [rbp-48h]
  __int16 v124; // [rsp+28Ch] [rbp-44h]
  char v125; // [rsp+28Eh] [rbp-42h]
  unsigned __int64 v126; // [rsp+298h] [rbp-38h]

  v126 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a4 + 64) != 8 )
  {
    if ( !under_debugger )
      sub_383060(0xC3B5u, a5);
    goto LABEL_101;
  }
  v95 = 0;
  v97 = 0;
  v6 = *(_QWORD *)(a4 + 72);
  *(_DWORD *)(a2 + 24) |= 8u;
  v7 = *(_QWORD *)(a2 + 480);
  v73 = v6;
  v8 = *(_QWORD *)(a2 + 64);
  v99 = 0;
  v100 = 0;
  v9 = (__m128i)v8;
  v10 = *(_QWORD *)(v8 + 1496);
  v93 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a2, v9);
  v94 = v10;
  v96 = 0;
  v98 = 0;
  sub_D10B0((__int64)v101, v7, 0);
  v116 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
  v121 = 0;
  v110 = a2;
  v111 = 0;
  v112 = 0;
  v113 = 0;
  v114 = 0;
  v115 = 0;
  v117 = -1;
  v118 = 0;
  tinfo_property = 0;
  v124 = 0;
  v125 = 0;
  v120 = -1;
  v122 = 0;
  v11 = sub_D7360(v93.m128i_i64[0], *(_QWORD *)(v93.m128i_i64[0] + 56));
  v12 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v11, (__m128i)(unsigned __int64)v11);
  v121 = v12;
  sub_E9680(&v93, a4, 0, *(double *)v12.m128i_i64);
  if ( !si128.m128i_i8[0] )
  {
    copy_tinfo_t();
    DWORD1(v122) = get_tinfo_property();
    tinfo_property = get_tinfo_property();
  }
  v13 = sub_EFB00((__int64)&v93);
  v72 = v13;
  if ( !v13 )
  {
    if ( !under_debugger )
      sub_383060(0xC3B6u, *(double *)v12.m128i_i64);
    goto LABEL_101;
  }
  v14 = 0;
  v15 = *(_QWORD *)(v13 + 32) == 0;
  v74 = 0;
  v77.m128i_i64[0] = (__int64)v78;
  if ( !v15 )
  {
    while ( 1 )
    {
      v16 = (unsigned __int8 *)(80 * v14 + *(_QWORD *)(v72 + 24));
      v17 = *v16;
      if ( (unsigned __int8)v17 > 0xFu )
        break;
      v18 = 32802;
      if ( !_bittest64(&v18, v17) )
        break;
      v19 = (char *)(80 * v14 + *(_QWORD *)(v72 + 24));
      v78[0] = 0;
      v78[1] = 0;
      if ( !(unsigned __int8)sub_1C5030(v19, v77.m128i_i64[0]) )
      {
        if ( !under_debugger )
          sub_383060(0xCAA6u, *(double *)v12.m128i_i64);
        goto LABEL_101;
      }
      if ( v14 >= *(_QWORD *)(v73 + 32) )
        goto LABEL_11;
      v20 = *(_QWORD *)(v73 + 24) + 80 * v14;
      if ( *(_BYTE *)v20 != 9 )
        goto LABEL_11;
      v56 = *(int **)(v20 + 8);
      v57 = v56[4];
      if ( *(_QWORD *)(*(_QWORD *)v56 + 440LL) < v57 )
      {
        if ( !under_debugger )
          sub_383060(0xC83Au, *(double *)v12.m128i_i64);
        goto LABEL_101;
      }
      v76 = *(_QWORD *)(*(_QWORD *)v56 + 432LL);
      if ( (unsigned int)compare_arglocs()
        || (v58 = v76 + 104 * v57, (*(_BYTE *)(v58 + 25) & 4) != 0)
        || *(_QWORD *)(*(_QWORD *)(v20 + 8) + 8LL) + *(int *)(v20 + 4) > *(int *)(v58 + 88) )
      {
LABEL_11:
        v12.m128i_i64[0] = 0;
        v79 = nullptr;
        v80 = 0;
        v21 = *((_DWORD *)v16 + 1);
        v22 = a1[180];
        v83[0] = 0;
        v83[1] = 0;
        v84 = 0;
        *(_OWORD *)dest = 0;
        sub_1C31B0(v77.m128i_i64[0], (__int64)v83, v21, v22, 0);
        if ( v73 )
        {
          v23 = *(_QWORD *)(v73 + 24);
          for ( i = v23 + 80LL * *(_QWORD *)(v73 + 32); i != v23; v23 += 80 )
          {
            if ( *(_BYTE *)v23 == 9
              && (unsigned __int8)sub_FDB60(
                                    &v79,
                                    v83,
                                    (__int64)a1,
                                    v77.m128i_i64[0],
                                    v21,
                                    *(_DWORD *)(*(_QWORD *)(v23 + 8) + 16LL)) )
            {
              break;
            }
          }
        }
        v25 = (__int32 *)a1[57];
        for ( j = &v25[a1[58]]; j != v25; ++v25 )
        {
          if ( *(_DWORD *)(a1[54] + 104LL * *v25) == 1
            && (unsigned __int8)sub_FDB60(&v79, v83, (__int64)a1, v77.m128i_i64[0], v21, *v25) )
          {
            break;
          }
        }
        if ( v84 )
        {
          dest[0] = nullptr;
          qfree(v84);
        }
        qfree(v83[0]);
        v29 = *((_DWORD *)v16 + 1);
        if ( (_QWORD)v80 == 1 && v79->m128i_i32[0] == v29 )
        {
          v60 = v79[1].m128i_i32[0];
          v61 = v79[1].m128i_i32[2];
          *v16 = 9;
          v62 = j__qalloc_or_throw(24, (__int64)v83, v27, v28);
          *(_QWORD *)v62 = a1;
          v63 = v79;
          *(_QWORD *)(v62 + 8) = v60;
          *(_DWORD *)(v62 + 16) = v61;
          *((_QWORD *)v16 + 1) = v62;
          if ( v63 )
          {
            *(_QWORD *)&v80 = 0;
            qfree((__int64)v63);
          }
        }
        else
        {
          src = nullptr;
          *(_OWORD *)n = 0;
          v30 = *(_QWORD *)(a4 + 24);
          src = (void *)qvector_reserve((__int64)&src, 0, 1, 1);
          v31 = v77.m128i_i64[0];
          n[0] = 1;
          *(_BYTE *)src = 0;
          LODWORD(v83[0]) = 0;
          copy_argloc();
          v84 = v30;
          v34 = n[0];
          LODWORD(dest[0]) = 1;
          dest[1] = nullptr;
          v86 = 0;
          if ( n[0] )
          {
            dest[1] = (void *)qalloc_or_throw(n[0], v31, v32, v33);
            *((_QWORD *)&v86 + 1) = v34;
            memcpy(dest[1], src, v34);
            *(_QWORD *)&v86 = v34;
          }
          v12.m128i_i64[0] = 0;
          v87 = 0;
          v88 = 0;
          v89 = 0;
          copy_tinfo_t();
          v90 = v29;
          v91 = 0;
          v92 = 0;
          if ( src )
          {
            n[0] = 0;
            qfree((__int64)src);
          }
          if ( *((_QWORD *)v16 + 5) > 1u
            && !sub_213140((__int64)a1, *((const char **)v16 + 4), 4)
            && &dest[1] != (void **)(v16 + 32) )
          {
            v55 = *((_QWORD *)v16 + 5);
            if ( v55 > 1 )
            {
              v64 = *((const void **)v16 + 4);
              v65 = dest[1];
              if ( *((_QWORD *)&v86 + 1) < v55 )
              {
                v69 = *((const void **)v16 + 4);
                v65 = (void *)qvector_reserve((__int64)&dest[1], (__int64)dest[1], *((_QWORD *)v16 + 5), 1);
                dest[1] = v65;
                v64 = v69;
              }
              *(_QWORD *)&v86 = v55;
              memmove(v65, v64, v55 - 1);
              *((_BYTE *)dest[1] + v55 - 1) = 0;
            }
            else
            {
              *(_QWORD *)&v86 = 0;
            }
          }
          v37 = sub_1F6560((__int64)a1, (__int64)v83, 0);
          if ( v37 == -1 )
          {
            if ( !under_debugger )
              sub_383060(0xCD94u, 0.0);
            goto LABEL_101;
          }
          *v16 = 9;
          v38 = j__qalloc_or_throw(24, (__int64)v83, v35, v36);
          *(_QWORD *)v38 = a1;
          *(_QWORD *)(v38 + 8) = 0;
          *(_DWORD *)(v38 + 16) = v37;
          *((_QWORD *)v16 + 1) = v38;
          v39 = v80;
          v40 = *(_QWORD *)(a4 + 24);
          v41 = *(_QWORD *)(a3 + 16);
          while ( v39 )
          {
            --v39;
            v41 = sub_D1D10(
                    a2,
                    v41,
                    v40,
                    v79[2 * v39 + 1].m128i_u32[2],
                    v37,
                    v79[2 * v39 + 1].m128i_i32[0],
                    0.0,
                    v79[2 * v39 + 1].m128i_i32[1],
                    v79[2 * v39].m128i_u32[0]);
          }
          clear_tinfo_t();
          if ( v87 )
          {
            *(_QWORD *)&v88 = 0;
            qfree(v87);
          }
          if ( dest[1] )
          {
            *(_QWORD *)&v86 = 0;
            qfree((__int64)dest[1]);
          }
          cleanup_argloc();
          if ( v79 )
          {
            *(_QWORD *)&v80 = 0;
            qfree((__int64)v79);
          }
        }
      }
      else
      {
        sub_125180((__int64)v16, (unsigned __int8 *)v20);
        *((_QWORD *)v16 + 2) = *(_QWORD *)(v20 + 16);
        copy_tinfo_t();
        if ( v16 + 32 != (unsigned __int8 *)(v20 + 32) )
        {
          v59 = *(_QWORD *)(v20 + 40);
          if ( v59 > 1 )
          {
            v66 = *((void **)v16 + 4);
            v68 = *(void **)(v20 + 32);
            if ( *((_QWORD *)v16 + 6) < v59 )
            {
              v67 = qvector_reserve((__int64)(v16 + 32), (__int64)v66, v59, 1);
              *((_QWORD *)v16 + 4) = v67;
              v66 = (void *)v67;
            }
            *((_QWORD *)v16 + 5) = v59;
            memmove(v66, v68, v59 - 1);
            *(_BYTE *)(*((_QWORD *)v16 + 4) + v59 - 1) = 0;
          }
          else
          {
            *((_QWORD *)v16 + 5) = 0;
          }
        }
        copy_argloc();
        *((_DWORD *)v16 + 18) = *(_DWORD *)(v20 + 72);
      }
      cleanup_argloc();
      v14 = ++v74;
      if ( (unsigned __int64)v74 >= *(_QWORD *)(v72 + 32) )
        goto LABEL_43;
    }
    if ( !under_debugger )
      sub_383060(0xC3B7u, *(double *)v12.m128i_i64);
LABEL_101:
    BUG();
  }
LABEL_43:
  *(_DWORD *)(v72 + 280) |= 1u;
  sub_648D0((__int64 *)(v72 + 240), (const void **)(v72 + 96), *(double *)v12.m128i_i64);
  v44 = nullptr;
  v45 = *(_QWORD *)(v72 + 120);
  if ( v45 )
  {
    v44 = (void *)qalloc_or_throw(16 * v45, v72 + 96, v42, v43);
    memcpy(v44, *(const void **)(v72 + 112), 16 * v45);
  }
  v46 = _mm_unpacklo_epi64((__m128i)v45, (__m128i)v45);
  v47 = *(_QWORD *)(v72 + 256);
  if ( v47 )
  {
    *(_QWORD *)(v72 + 264) = 0;
    v77 = v46;
    qfree(v47);
    v46 = _mm_load_si128(&v77);
  }
  *(_QWORD *)(v72 + 256) = v44;
  *(__m128i *)(v72 + 264) = v46;
  clear_tinfo_t();
  if ( v115 )
  {
    *(_QWORD *)&v116 = 0;
    qfree(v115);
  }
  qfree(v113);
  qfree(v111);
  if ( v108 )
  {
    v109 = 0;
    qfree(v108);
  }
  if ( v106 )
  {
    v107 = 0;
    qfree(v106);
  }
  if ( v104 )
  {
    v105 = 0;
    qfree(v104);
  }
  if ( v102 )
  {
    v103 = 0;
    qfree(v102);
  }
  qfree(v99);
  v48 = v97;
  if ( v97 )
  {
    v49 = v98;
    if ( (_QWORD)v98 )
    {
      v50 = 0;
      do
      {
        v51 = (__int64 *)(v48 + 48 * v50);
        v52 = v51[3];
        if ( v52 )
        {
          v51[4] = 0;
          qfree(v52);
        }
        v53 = *v51;
        if ( *v51 )
        {
          v51[1] = 0;
          qfree(v53);
        }
        v48 = v97;
        ++v50;
      }
      while ( v49 != v50 );
    }
    *(_QWORD *)&v98 = 0;
    qfree(v48);
  }
  if ( v95 )
  {
    *(_QWORD *)&v96 = 0;
    qfree(v95);
  }
  return v72;
}

