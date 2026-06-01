__int64 __fastcall sub_5AC60(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // r12
  __int32 v5; // ebx
  const char *v6; // r15
  const char *v7; // rax
  size_t v8; // rax
  __int64 v9; // r15
  size_t v10; // r14
  __int64 v11; // rax
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  char *v15; // rbp
  __m128i v16; // xmm0
  __m128i v17; // xmm1
  __int64 v18; // rax
  char *v19; // rdi
  size_t v20; // r14
  __int64 v21; // rax
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdi
  char *v25; // r13
  __m128i v26; // xmm0
  __m128i v27; // xmm1
  __int64 v28; // rax
  char *v29; // rdi
  __m128i v30; // xmm0
  __int64 v31; // rax
  __int64 v32; // r14
  _QWORD *v33; // r13
  char v34; // r14
  int v35; // eax
  size_t v36; // rax
  unsigned int v37; // ebx
  size_t v38; // rax
  __int64 v39; // r14
  size_t v40; // r15
  char *v41; // rax
  _QWORD *v42; // r14
  _QWORD *v43; // r15
  char *v44; // rbp
  _QWORD *v45; // rbx
  char *v46; // r15
  const char *v47; // rdi
  int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // rsi
  const char *v51; // rax
  const char *v52; // rsi
  const void *v53; // r15
  size_t v54; // rax
  size_t v55; // rbp
  __m128i v56; // xmm0
  __int64 v57; // rax
  __int64 v58; // rax
  size_t v59; // rax
  __int64 v60; // r15
  size_t v61; // r14
  __int64 v62; // rax
  unsigned __int64 v63; // rsi
  unsigned __int64 v64; // rcx
  unsigned __int64 v65; // rdx
  __m128i v66; // xmm0
  __int64 v67; // rax
  __int64 v69; // rax
  char *v70; // rax
  size_t v71; // rax
  __int64 v72; // r15
  size_t v73; // r14
  char *v74; // rax
  _QWORD *v75; // r15
  _QWORD *v76; // r14
  char *v77; // rbp
  _QWORD *v78; // rbx
  __int64 v79; // r13
  char *v80; // r12
  const char *v81; // rdi
  int v82; // eax
  __int64 v83; // rcx
  __int64 v84; // rsi
  const char *v85; // rax
  const char *v86; // rdx
  const void *v87; // rbp
  size_t v88; // rax
  size_t v89; // r13
  __int64 v90; // rax
  char *v91; // rbp
  __m128i v92; // xmm0
  __int64 v93; // r13
  __int64 v94; // rax
  char *v95; // rdi
  size_t v96; // rax
  size_t v97; // r8
  bool v98; // zf
  void *v99; // rdi
  size_t v100; // r13
  __int64 v101; // rax
  void *v102; // rdi
  __int64 v103; // rdx
  __int64 v104; // rax
  __int64 v105; // rax
  void *v106; // rdi
  size_t v107; // r14
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  __m128i v112; // [rsp+18h] [rbp-8C0h] BYREF
  __m128i v113; // [rsp+28h] [rbp-8B0h] BYREF
  __int64 v114; // [rsp+38h] [rbp-8A0h]
  char **p_s2; // [rsp+40h] [rbp-898h] BYREF
  char **v116; // [rsp+48h] [rbp-890h] BYREF
  char *haystack; // [rsp+50h] [rbp-888h]
  __int128 v118; // [rsp+58h] [rbp-880h]
  char *s2; // [rsp+70h] [rbp-868h] BYREF
  __m128i v120; // [rsp+78h] [rbp-860h] BYREF
  char s[1024]; // [rsp+90h] [rbp-848h] BYREF
  unsigned __int64 v122; // [rsp+898h] [rbp-40h]

  v4 = a1;
  v5 = 0;
  v114 = a4;
  v122 = __readfsqword(0x28u);
  *(_BYTE *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 8) = 0;
  haystack = nullptr;
  v118 = 0;
  while ( qgetline() >= 0 )
  {
    ++v5;
    if ( (unsigned __int64)v118 > 1 && strstr(haystack, "///") )
    {
      v6 = (const char *)skip_spaces();
      v7 = &v6[strlen(v6)];
      if ( v6 < v7 )
      {
        do
        {
          if ( *(v7 - 1) != 10 )
            break;
          *--v7 = 0;
        }
        while ( v7 != v6 );
      }
      if ( a3 == 1 )
      {
        if ( (unsigned __int8)sub_58BF0(v6, "func", 4u, s, 1024, 0) )
        {
          v32 = v114;
          qstrncpy();
          v33 = sub_59640(v4, *(char **)(v32 + 16), 1);
          v34 = sub_58BF0(v6, "purge", 5u, s, 1024, 0);
          if ( v34 )
          {
            if ( (unsigned int)qsscanf() != 1 || (v35 = strlen(s), (_DWORD)s2 != v35) )
            {
LABEL_39:
              sub_59130(v4);
              v37 = 36;
              goto LABEL_71;
            }
          }
          if ( (unsigned __int8)sub_58BF0(v6, "entry", 5u, s, 1024, 0) )
          {
            v112.m128i_i64[0] = (__int64)strchr(s, 46);
            v96 = strlen(s);
            v97 = v96;
            if ( v96 )
            {
              v102 = (void *)v33[5];
              v103 = v96 + 1;
              if ( v33[7] < v96 + 1 )
              {
                v113.m128i_i64[0] = v96;
                v112.m128i_i64[1] = v96 + 1;
                v108 = qvector_reserve();
                v33[5] = v108;
                v97 = v113.m128i_i64[0];
                v102 = (void *)v108;
                v103 = v112.m128i_i64[1];
              }
              v33[6] = v103;
              v112.m128i_i64[1] = v97;
              memmove(v102, s, v97);
              v98 = v112.m128i_i64[0] == 0;
              *(_BYTE *)(v33[5] + v112.m128i_i64[1]) = 0;
              if ( !v98 )
              {
LABEL_105:
                if ( v34 )
                  sub_EBD0((__int64)"warning: %s (%d): purge should not be specified", *(const char **)v114, v5);
                *((_DWORD *)v33 + 8) = 1;
                qstrncpy();
                sub_367B0(*(_QWORD *)(v114 + 32));
                goto LABEL_36;
              }
            }
            else
            {
              v98 = v112.m128i_i64[0] == 0;
              v33[6] = 0;
              if ( !v98 )
                goto LABEL_105;
            }
            *((_DWORD *)v33 + 8) = 2;
          }
          else
          {
            *((_DWORD *)v33 + 8) = 0;
          }
LABEL_36:
          if ( (unsigned __int8)sub_58BF0(v6, "retval", 6u, s, 1024, 0) )
          {
            if ( (unsigned int)qsscanf() != 1 )
              goto LABEL_39;
            v36 = strlen(s);
            if ( (int)s2 != v36 )
              goto LABEL_39;
          }
        }
      }
      else
      {
        if ( a3 != 2 )
        {
          if ( !under_debugger )
            interr();
          BUG();
        }
        if ( (unsigned __int8)sub_58BF0(v6, "stub", 4u, s, 1024, 0) )
        {
          qstrlwr();
          s2 = nullptr;
          v112.m128i_i64[0] = v4 + 176;
          v120 = 0;
          v8 = strlen(s);
          v9 = v8 + 1;
          v10 = v8;
          s2 = (char *)qvector_reserve();
          v120.m128i_i64[0] = v9;
          memmove(s2, s, v10);
          s2[v10] = 0;
          v11 = *(_QWORD *)(v4 + 184);
          v12 = *(_QWORD *)(v4 + 176);
          v13 = *(_QWORD *)(v4 + 192);
          v14 = v11 + 1;
          if ( (unsigned __int64)&s2 < v12 || (unsigned __int64)&s2 >= v12 + 24 * v13 )
          {
            if ( v13 < v14 )
            {
              v58 = qvector_reserve();
              *(_QWORD *)(v4 + 176) = v58;
              v12 = v58;
              v11 = *(_QWORD *)(v4 + 184);
            }
            v30 = _mm_loadu_si128(&v120);
            v31 = v12 + 24 * v11;
            *(_QWORD *)v31 = s2;
            *(__m128i *)(v31 + 8) = v30;
            ++*(_QWORD *)(v4 + 184);
          }
          else
          {
            v15 = s2;
            v16 = _mm_loadl_epi64(&v120);
            s2 = nullptr;
            v17 = _mm_loadl_epi64((const __m128i *)&v120.m128i_u64[1]);
            v120 = 0;
            if ( v13 < v14 )
            {
              v113.m128i_i64[0] = v17.m128i_i64[0];
              v112.m128i_i64[1] = v16.m128i_i64[0];
              v90 = qvector_reserve();
              *(_QWORD *)(v4 + 176) = v90;
              v12 = v90;
              v17 = _mm_loadl_epi64(&v113);
              v11 = *(_QWORD *)(v4 + 184);
              v16 = _mm_loadl_epi64((const __m128i *)&v112.m128i_u64[1]);
            }
            v18 = v12 + 24 * v11;
            *(_QWORD *)v18 = v15;
            *(__m128i *)(v18 + 8) = _mm_unpacklo_epi64(v16, v17);
            v19 = s2;
            ++*(_QWORD *)(v4 + 184);
            if ( v19 )
              goto LABEL_99;
          }
        }
        else if ( (unsigned __int8)sub_58BF0(v6, "load", 4u, s, 1024, 0) )
        {
          qstrlwr();
          s2 = nullptr;
          v112.m128i_i64[1] = v4 + 152;
          v120 = 0;
          v20 = strlen(s);
          v112.m128i_i64[0] = v20 + 1;
          s2 = (char *)qvector_reserve();
          v120.m128i_i64[0] = v112.m128i_i64[0];
          memmove(s2, s, v20);
          s2[v20] = 0;
          v21 = *(_QWORD *)(v4 + 160);
          v22 = *(_QWORD *)(v4 + 152);
          v23 = *(_QWORD *)(v4 + 168);
          v24 = v21 + 1;
          if ( (unsigned __int64)&s2 < v22 || (unsigned __int64)&s2 >= v22 + 24 * v23 )
          {
            if ( v23 < v24 )
            {
              v69 = qvector_reserve();
              *(_QWORD *)(v4 + 152) = v69;
              v22 = v69;
              v21 = *(_QWORD *)(v4 + 160);
            }
            v56 = _mm_loadu_si128(&v120);
            v57 = v22 + 24 * v21;
            *(_QWORD *)v57 = s2;
            *(__m128i *)(v57 + 8) = v56;
            ++*(_QWORD *)(v4 + 160);
          }
          else
          {
            v25 = s2;
            v26 = _mm_loadl_epi64(&v120);
            s2 = nullptr;
            v27 = _mm_loadl_epi64((const __m128i *)&v120.m128i_u64[1]);
            v120 = 0;
            if ( v23 < v24 )
            {
              v113.m128i_i64[0] = v27.m128i_i64[0];
              v112.m128i_i64[0] = v26.m128i_i64[0];
              v101 = qvector_reserve();
              *(_QWORD *)(v4 + 152) = v101;
              v22 = v101;
              v27 = _mm_loadl_epi64(&v113);
              v21 = *(_QWORD *)(v4 + 160);
              v26 = _mm_loadl_epi64(&v112);
            }
            v28 = v22 + 24 * v21;
            *(_QWORD *)v28 = v25;
            *(__m128i *)(v28 + 8) = _mm_unpacklo_epi64(v26, v27);
            v29 = s2;
            ++*(_QWORD *)(v4 + 160);
            if ( v29 )
            {
              v120.m128i_i64[0] = 0;
              qfree();
            }
          }
          if ( (unsigned __int8)sub_58BF0(v6, "R0UserEntry", 0xBu, (_BYTE *)(v4 + 200), 100, 0) )
          {
            qsplitfile();
            qstrncat();
            qstrncat();
            qstrncpy();
          }
        }
        else if ( (unsigned __int8)sub_58BF0(v6, "path", 4u, s, 1024, 1) )
        {
          v112.m128i_i64[0] = (__int64)strchr(s, 61);
          if ( !v112.m128i_i64[0] )
            goto LABEL_39;
          s2 = nullptr;
          v120 = 0;
          *(_BYTE *)v112.m128i_i64[0] = 0;
          v38 = strlen(s);
          v39 = v38 + 1;
          v40 = v38;
          v41 = (char *)qvector_reserve();
          v120.m128i_i64[0] = v39;
          s2 = v41;
          memmove(v41, s, v40);
          v42 = (_QWORD *)(v4 + 64);
          s2[v40] = 0;
          v43 = *(_QWORD **)(v4 + 72);
          if ( !v43 )
            goto LABEL_57;
          v44 = (char *)s1;
          v112.m128i_i32[2] = v5;
          v113.m128i_i64[0] = v4 + 64;
          v45 = v43;
          v113.m128i_i64[1] = v120.m128i_i64[0];
          v46 = s2;
          if ( v120.m128i_i64[0] )
            v44 = s2;
          do
          {
            while ( 1 )
            {
              v47 = s1;
              if ( v45[5] )
                v47 = (const char *)v45[4];
              v48 = strcasecmp(v47, v44);
              v49 = v45[2];
              v50 = v45[3];
              if ( v48 >= 0 )
                break;
              v45 = (_QWORD *)v45[3];
              if ( !v50 )
                goto LABEL_51;
            }
            v42 = v45;
            v45 = (_QWORD *)v45[2];
          }
          while ( v49 );
LABEL_51:
          v5 = v112.m128i_i32[2];
          v51 = v46;
          if ( v42 == (_QWORD *)v113.m128i_i64[0] )
            goto LABEL_57;
          v52 = s1;
          if ( v42[5] )
            v52 = (const char *)v42[4];
          if ( !v113.m128i_i64[1] )
            v51 = s1;
          if ( strcasecmp(v51, v52) < 0 )
          {
LABEL_57:
            p_s2 = &s2;
            v42 = (_QWORD *)sub_5AB40((_QWORD *)(v4 + 56), v42, (__int64 **)&p_s2);
          }
          v53 = (const void *)(v112.m128i_i64[0] + 1);
          v54 = strlen((const char *)(v112.m128i_i64[0] + 1));
          v55 = v54;
          if ( v54 )
          {
            v99 = (void *)v42[7];
            v100 = v54 + 1;
            if ( v42[9] < v54 + 1 )
            {
              v104 = qvector_reserve();
              v42[7] = v104;
              v99 = (void *)v104;
            }
            v42[8] = v100;
            memmove(v99, v53, v55);
            *(_BYTE *)(v42[7] + v55) = 0;
          }
          else
          {
            v42[8] = 0;
          }
          if ( s2 )
            goto LABEL_99;
        }
        else if ( (unsigned __int8)sub_58BF0(v6, "env", 3u, s, 1024, 1) )
        {
          s2 = nullptr;
          v112.m128i_i64[0] = v4 + 32;
          v120 = 0;
          v59 = strlen(s);
          v60 = v59 + 1;
          v61 = v59;
          s2 = (char *)qvector_reserve();
          v120.m128i_i64[0] = v60;
          memmove(s2, s, v61);
          s2[v61] = 0;
          v62 = *(_QWORD *)(v4 + 40);
          v63 = *(_QWORD *)(v4 + 32);
          v64 = *(_QWORD *)(v4 + 48);
          v65 = v62 + 1;
          if ( (unsigned __int64)&s2 < v63 || (unsigned __int64)&s2 >= v63 + 24 * v64 )
          {
            if ( v64 < v65 )
            {
              v105 = qvector_reserve();
              *(_QWORD *)(v4 + 32) = v105;
              v63 = v105;
              v62 = *(_QWORD *)(v4 + 40);
            }
            v66 = _mm_loadu_si128(&v120);
            v67 = v63 + 24 * v62;
            *(_QWORD *)v67 = s2;
            *(__m128i *)(v67 + 8) = v66;
            ++*(_QWORD *)(v4 + 40);
          }
          else
          {
            v91 = s2;
            v92 = _mm_loadl_epi64(&v120);
            s2 = nullptr;
            v93 = v120.m128i_i64[1];
            v120 = 0;
            if ( v64 < v65 )
            {
              v112.m128i_i64[1] = v92.m128i_i64[0];
              v110 = qvector_reserve();
              *(_QWORD *)(v4 + 32) = v110;
              v63 = v110;
              v92 = _mm_loadl_epi64((const __m128i *)&v112.m128i_u64[1]);
              v62 = *(_QWORD *)(v4 + 40);
            }
            v94 = v63 + 24 * v62;
            *(_QWORD *)v94 = v91;
            *(__m128i *)(v94 + 8) = _mm_unpacklo_epi64(v92, (__m128i)(unsigned __int64)v93);
            v95 = s2;
            ++*(_QWORD *)(v4 + 40);
            if ( v95 )
              goto LABEL_99;
          }
        }
        else if ( (unsigned __int8)sub_58BF0(v6, "map", 3u, s, 1024, 1) )
        {
          v70 = strchr(s, 61);
          v112.m128i_i64[0] = (__int64)v70;
          if ( !v70 )
            goto LABEL_39;
          *v70 = 0;
          s2 = nullptr;
          v120 = 0;
          v71 = strlen(s);
          v72 = v71 + 1;
          v73 = v71;
          v74 = (char *)qvector_reserve();
          v120.m128i_i64[0] = v72;
          s2 = v74;
          memmove(v74, s, v73);
          v75 = (_QWORD *)(v4 + 112);
          s2[v73] = 0;
          v76 = *(_QWORD **)(v4 + 120);
          if ( !v76 )
            goto LABEL_114;
          v77 = (char *)s1;
          v112.m128i_i32[2] = v5;
          v113.m128i_i64[0] = v4 + 112;
          v78 = v76;
          v79 = v4;
          v113.m128i_i64[1] = v120.m128i_i64[0];
          v80 = s2;
          if ( v120.m128i_i64[0] )
            v77 = s2;
          do
          {
            while ( 1 )
            {
              v81 = s1;
              if ( v78[5] )
                v81 = (const char *)v78[4];
              v82 = strcasecmp(v81, v77);
              v83 = v78[2];
              v84 = v78[3];
              if ( v82 >= 0 )
                break;
              v78 = (_QWORD *)v78[3];
              if ( !v84 )
                goto LABEL_85;
            }
            v75 = v78;
            v78 = (_QWORD *)v78[2];
          }
          while ( v83 );
LABEL_85:
          v85 = v80;
          v5 = v112.m128i_i32[2];
          v4 = v79;
          if ( (_QWORD *)v113.m128i_i64[0] == v75 )
            goto LABEL_114;
          v86 = s1;
          if ( v75[5] )
            v86 = (const char *)v75[4];
          if ( !v113.m128i_i64[1] )
            v85 = s1;
          if ( strcasecmp(v85, v86) < 0 )
          {
LABEL_114:
            v116 = &s2;
            v75 = (_QWORD *)sub_5AB40((_QWORD *)(v4 + 104), v75, (__int64 **)&v116);
          }
          v87 = (const void *)(v112.m128i_i64[0] + 1);
          v88 = strlen((const char *)(v112.m128i_i64[0] + 1));
          v89 = v88;
          if ( v88 )
          {
            v106 = (void *)v75[7];
            v107 = v88 + 1;
            if ( v75[9] < v88 + 1 )
            {
              v109 = qvector_reserve();
              v75[7] = v109;
              v106 = (void *)v109;
            }
            v75[8] = v107;
            memmove(v106, v87, v89);
            *(_BYTE *)(v75[7] + v89) = 0;
          }
          else
          {
            v75[8] = 0;
          }
          if ( s2 )
          {
LABEL_99:
            v120.m128i_i64[0] = 0;
            qfree();
          }
        }
        else if ( *(_BYTE *)(v4 + 26) && !strncmp(v6, "nosearchpath", 0xCu) )
        {
          *(_BYTE *)(v4 + 26) = 0;
        }
        else if ( *(_BYTE *)(v4 + 25) && !strncmp(v6, "noactivationcontext", 0x13u) )
        {
          *(_BYTE *)(v4 + 25) = 0;
        }
      }
    }
  }
  v37 = 0;
LABEL_71:
  if ( haystack )
  {
    *(_QWORD *)&v118 = 0;
    qfree();
  }
  return v37;
}

