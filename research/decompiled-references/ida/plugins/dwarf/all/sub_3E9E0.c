unsigned __int64 __fastcall sub_3E9E0(__int64 a1, __int64 a2, __int16 a3, __int64 a4, __int64 a5, __int64 a6)
{
  const __m128i *v8; // rbx
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v13; // r14
  __int64 v14; // rax
  __int16 v15; // ax
  _QWORD *v16; // r14
  char *v17; // r15
  char *v18; // r12
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rsi
  __int64 v23; // rdi
  char *v24; // r15
  size_t v25; // r13
  __int64 v26; // rax
  __int64 v27; // rax
  __m128i v28; // xmm0
  char *v29; // r13
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  char *v33; // rdx
  __int64 v34; // rdi
  int v35; // edx
  __int64 v36; // rax
  __int16 v37; // ax
  int v38; // edx
  size_t v39; // rax
  size_t v40; // r13
  char *v41; // r12
  const char *v42; // r15
  __int64 v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // r9
  __int64 v46; // r15
  _BYTE *v47; // r8
  char *v48; // rax
  size_t v49; // r10
  char **v50; // rbx
  int v51; // r12d
  size_t v52; // r13
  __int64 v53; // r9
  size_t v54; // r11
  __int64 v55; // rdx
  __int64 v56; // rdi
  __int64 v57; // rax
  __m128i v58; // xmm0
  __int64 v59; // rdx
  __int16 v60; // cx
  unsigned __int64 v61; // r12
  const char *v62; // rdi
  __int64 v63; // r12
  size_t v64; // rax
  size_t v65; // r13
  size_t v66; // r8
  __int64 v67; // rdx
  void *v68; // rdi
  size_t v69; // rdx
  const __m128i *v70; // r12
  __int64 v71; // rax
  __int64 v72; // rax
  unsigned int v73; // eax
  const char *v74; // rdx
  const void *v75; // r15
  void *v76; // rdi
  __int64 v77; // rax
  char *v78; // [rsp+0h] [rbp-B0h]
  __int64 v79; // [rsp+0h] [rbp-B0h]
  const __m128i *v80; // [rsp+0h] [rbp-B0h]
  __int64 v81; // [rsp+0h] [rbp-B0h]
  __int64 v82; // [rsp+0h] [rbp-B0h]
  size_t v83; // [rsp+0h] [rbp-B0h]
  __int64 v84; // [rsp+8h] [rbp-A8h]
  __int64 v85; // [rsp+8h] [rbp-A8h]
  __int64 v86; // [rsp+8h] [rbp-A8h]
  size_t v87; // [rsp+8h] [rbp-A8h]
  size_t v88; // [rsp+8h] [rbp-A8h]
  const char *src; // [rsp+10h] [rbp-A0h]
  char *srca; // [rsp+10h] [rbp-A0h]
  __int64 v91; // [rsp+18h] [rbp-98h]
  __int64 v92; // [rsp+28h] [rbp-88h]
  const __m128i *v93; // [rsp+30h] [rbp-80h]
  bool v94; // [rsp+47h] [rbp-69h] BYREF
  __int64 v95; // [rsp+48h] [rbp-68h] BYREF
  char *s; // [rsp+50h] [rbp-60h] BYREF
  __int64 v97; // [rsp+58h] [rbp-58h] BYREF
  __m128i v98; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v99; // [rsp+70h] [rbp-40h]

  v8 = (const __m128i *)a1;
  v99 = __readfsqword(0x28u);
  *(_QWORD *)a1 = &off_C7980;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 80) = a4;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = a2;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  *(_WORD *)(a1 + 140) = a3;
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_WORD *)(a1 + 142) &= 0xF800u;
  if ( a1 == a4 )
  {
    if ( a6 )
      goto LABEL_4;
  }
  else if ( a6 )
  {
    goto LABEL_25;
  }
  if ( a1 != a4 )
  {
LABEL_4:
    v9 = sub_28270(a4, a2, a6);
    v11 = v10;
    v8[7].m128i_i64[0] = v9;
    v8[7].m128i_i64[1] = v10;
    if ( (v9 & 0x7FFFFFFFFFFFFFFFLL) == 0 || v9 == -1 )
      goto LABEL_6;
    v13 = v10;
    if ( v10 )
    {
      v95 = 0;
      v14 = *(_QWORD *)(v10 + 88);
      s = nullptr;
      v91 = v14;
      v15 = v8[8].m128i_i16[6];
      if ( v15 == 21 || v15 == 1 )
        goto LABEL_11;
      if ( (unsigned int)sub_28770(&s, v10, v8[6].m128i_i64[1], (__int64)&v95) )
        goto LABEL_51;
      v24 = s;
      v25 = strlen(s);
      if ( !v25 || !strncmp(v24, "<anonymous", 0xAu) || !strcmp(v24, "__unknown__") )
        goto LABEL_51;
      if ( v8 == (const __m128i *)a4 )
        goto LABEL_34;
      v26 = *(_QWORD *)(a4 + 152);
      if ( *(_DWORD *)(v26 + 124) != 1 || *(_DWORD *)(v26 + 120) > 0xFBDu || v25 <= 2 || *v24 != 46 || v24[1] != 95 )
        goto LABEL_34;
      v35 = 2;
      v36 = 2;
      do
      {
        if ( (unsigned __int8)(v24[v36] - 48) > 9u )
          break;
        v36 = ++v35;
      }
      while ( v35 < v25 );
      if ( v25 == v36 )
      {
LABEL_51:
        if ( v8[8].m128i_i16[6] != 57 )
        {
LABEL_11:
          s = nullptr;
          goto LABEL_12;
        }
        v24 = "`anonymous namespace'";
        s = "`anonymous namespace'";
      }
      else
      {
LABEL_34:
        if ( !v24 )
          goto LABEL_12;
        if ( !strncmp(v24, "typedef ", 8u) )
        {
          s = strrchr(v24, 32);
          v24 = s;
        }
      }
      v37 = v8[8].m128i_i16[6];
      v38 = *(_DWORD *)(v8[5].m128i_i64[0] + 164);
      if ( v37 == 22 )
      {
        if ( (*(_BYTE *)(v11 + 376) & 1) == 0 || (*(_BYTE *)(*(_QWORD *)(v11 + 128) + 298LL) & 1) == 0 )
          goto LABEL_57;
        if ( v38 != 22 )
          goto LABEL_59;
      }
      else
      {
        if ( (unsigned __int16)v37 > 0x16u )
        {
          if ( v37 != 23 )
          {
LABEL_57:
            if ( v38 == 22 && !strncmp(v24, "noalg.", 6u) )
              goto LABEL_107;
            if ( *(_QWORD *)(a5 + 8) > 1u )
            {
              v74 = *(const char **)a5;
              v70 = v8 + 1;
              sub_20160(v8[1].m128i_i64, (__int64)"%s::%s", v74, v24);
              v71 = v8[1].m128i_i64[1];
              goto LABEL_116;
            }
            goto LABEL_59;
          }
        }
        else if ( v37 != 2 && v37 != 19 )
        {
          goto LABEL_57;
        }
        v80 = v8;
        v86 = a5;
        v50 = &off_C83C0;
        v51 = v38;
        while ( 1 )
        {
          v52 = (size_t)v50[1];
          if ( !strncmp(v24, *v50, v52) )
            break;
          v50 += 2;
          if ( &unk_C83F0 == (_UNKNOWN *)v50 )
          {
            v38 = v51;
            v8 = v80;
            a5 = v86;
            goto LABEL_57;
          }
        }
        v24 += v52;
        v8 = v80;
        s = v24;
        if ( v51 != 22 )
          goto LABEL_59;
      }
      if ( !strncmp(v24, "noalg.", 6u) )
      {
LABEL_107:
        v24 += 6;
        s = v24;
LABEL_60:
        v39 = strlen(v24);
        v40 = v39;
        if ( !v39 )
          goto LABEL_61;
        v68 = (void *)v8[1].m128i_i64[0];
        v69 = v39 + 1;
        v70 = v8 + 1;
        if ( v8[2].m128i_i64[0] < v39 + 1 )
        {
          v83 = v39 + 1;
          v72 = qvector_reserve(&v8[1], v8[1].m128i_i64[0], v69, 1);
          v8[1].m128i_i64[0] = v72;
          v69 = v83;
          v68 = (void *)v72;
        }
        v8[1].m128i_i64[1] = v69;
        memmove(v68, v24, v40);
        *(_BYTE *)(v8[1].m128i_i64[0] + v40) = 0;
        v71 = v8[1].m128i_i64[1];
LABEL_116:
        v93 = v70;
        v97 = 0;
        v98 = 0;
        if ( v71 )
        {
          src = (const char *)v8[1].m128i_i64[0];
          v41 = strstr(src, ", ");
        }
        else
        {
          v41 = nullptr;
          src = ::src;
        }
        goto LABEL_62;
      }
LABEL_59:
      if ( !v24 )
      {
LABEL_61:
        v8[1].m128i_i64[1] = 0;
        v41 = nullptr;
        v93 = v8 + 1;
        v97 = 0;
        src = ::src;
        v98 = 0;
LABEL_62:
        v42 = src;
        v43 = 0;
        while ( 1 )
        {
          if ( !v41 )
          {
            if ( v42 == src )
            {
              v56 = v43;
            }
            else
            {
              if ( *v42 && v42 )
              {
                v63 = v98.m128i_i64[0];
                v64 = strlen(v42);
                v65 = v64;
                v66 = v64;
                if ( v63 )
                {
                  --v63;
                  v66 = v64 + v63;
                }
                v67 = v66 + 1;
                if ( v98.m128i_i64[1] < v66 + 1 )
                {
                  v88 = v66;
                  v82 = v66 + 1;
                  v97 = qvector_reserve(&v97, v43, v67, 1);
                  v66 = v88;
                  v43 = v97;
                  v67 = v82;
                }
                v98.m128i_i64[0] = v67;
                *(_BYTE *)(v43 + v66) = 0;
                memmove((void *)(v63 + v97), v42, v65);
                v43 = v97;
              }
              v56 = v8[1].m128i_i64[0];
              v57 = v8[2].m128i_i64[0];
              v8[1].m128i_i64[0] = v43;
              v58 = _mm_loadu_si128(&v98);
              v97 = v56;
              v98.m128i_i64[1] = v57;
              *(__m128i *)((char *)v8 + 24) = v58;
            }
            if ( v56 )
            {
              v98.m128i_i64[0] = 0;
              qfree(v56);
            }
            v59 = 1;
            if ( *(_DWORD *)(v8[5].m128i_i64[0] + 164) == 22 )
              v59 = 524289;
            v60 = v8[8].m128i_i16[6];
            if ( (unsigned __int16)v60 <= 0x28u )
            {
              if ( ((1LL << v60) & 0xC80016) == 0 )
              {
                if ( ((1LL << v60) & 0x10000002000LL) != 0 )
                  validate_name(v93, 2, 1);
                goto LABEL_92;
              }
              validate_name(v93, 8, v59);
              v62 = ::src;
              if ( v8[1].m128i_i64[1] )
                v62 = (const char *)v8[1].m128i_i64[0];
              if ( !(unsigned __int8)is_valid_typename(v62) )
              {
LABEL_6:
                sub_34840((__int64)v8, 5u);
                return v99 - __readfsqword(0x28u);
              }
            }
LABEL_92:
            v61 = v8[1].m128i_u64[1];
            if ( v61 > 1 )
            {
              v75 = (const void *)v8[1].m128i_i64[0];
              v76 = (void *)v8[2].m128i_i64[1];
              if ( v8[3].m128i_i64[1] < v61 )
              {
                v77 = qvector_reserve(&v8[2].m128i_u64[1], v8[2].m128i_i64[1], v8[1].m128i_i64[1], 1);
                v8[2].m128i_i64[1] = v77;
                v76 = (void *)v77;
              }
              v8[3].m128i_i64[0] = v61;
              memmove(v76, v75, v61 - 1);
              *(_BYTE *)(v8[2].m128i_i64[1] + v61 - 1) = 0;
            }
            else
            {
              v8[3].m128i_i64[0] = 0;
            }
            sub_34B90((__int64)v8);
LABEL_12:
            v16 = *(_QWORD **)(v13 + 144);
            v17 = (char *)v16[11];
            v78 = (char *)(v16 + 10);
            if ( v17 )
            {
              v18 = (char *)(v16 + 10);
              do
              {
                while ( 1 )
                {
                  v19 = sub_849A0(v17 + 32, &v8[7]);
                  v20 = *((_QWORD *)v17 + 2);
                  v21 = *((_QWORD *)v17 + 3);
                  if ( v19 < 0 )
                    break;
                  v18 = v17;
                  v17 = *((char **)v17 + 2);
                  if ( !v20 )
                    goto LABEL_17;
                }
                v17 = *((char **)v17 + 3);
              }
              while ( v21 );
LABEL_17:
              if ( v78 != v18 && (int)sub_849A0(&v8[7], v18 + 32) >= 0 )
              {
LABEL_19:
                *((_QWORD *)v18 + 6) = v8;
                if ( v8 == (const __m128i *)a4 )
                  return v99 - __readfsqword(0x28u);
                if ( (*(unsigned int (__fastcall **)(__int64, __int64 *, __int64 *))(v91 + 160))(
                       v8[6].m128i_i64[1],
                       &v97,
                       &v95) )
                {
                  goto LABEL_21;
                }
                goto LABEL_27;
              }
            }
            else
            {
              v18 = (char *)(v16 + 10);
            }
            v27 = operator new(0x38u);
            v28 = _mm_loadu_si128(v8 + 7);
            v29 = (char *)v27;
            v27 += 32;
            *(_QWORD *)(v27 + 16) = 0;
            *(__m128i *)v27 = v28;
            v84 = v27;
            v32 = sub_3E8B0(v16 + 9, v18, v27, v30, v31);
            v18 = (char *)v32;
            if ( v33 )
            {
              if ( v32 || v78 == v33 )
              {
                v34 = 1;
              }
              else
              {
                srca = v33;
                v73 = sub_849A0(v84, v33 + 32);
                v33 = srca;
                v34 = v73 >> 31;
              }
              v18 = v29;
              std::_Rb_tree_insert_and_rebalance(v34, v29, v33, v78);
              ++v16[14];
            }
            else if ( v29 )
            {
              operator delete(v29, 0x38u);
            }
            goto LABEL_19;
          }
          v49 = v41 - v42;
          if ( v41 != v42 )
          {
            v53 = v98.m128i_i64[0];
            v54 = v41 - v42;
            if ( v98.m128i_i64[0] )
            {
              v53 = v98.m128i_i64[0] - 1;
              v54 = v49 + v98.m128i_i64[0] - 1;
            }
            v55 = v54 + 1;
            if ( v98.m128i_i64[1] < v54 + 1 )
            {
              v92 = v53;
              v87 = v54;
              v81 = v54 + 1;
              v97 = qvector_reserve(&v97, v43, v55, 1);
              v53 = v92;
              v43 = v97;
              v49 = v41 - v42;
              v54 = v87;
              v55 = v81;
            }
            v98.m128i_i64[0] = v55;
            *(_BYTE *)(v43 + v54) = 0;
            memmove((void *)(v53 + v97), v42, v49);
            v43 = v97;
          }
          v46 = v98.m128i_i64[0];
          if ( v98.m128i_i64[0] )
          {
            v44 = v98.m128i_i64[0] + 1;
            v45 = v98.m128i_i64[0];
            v46 = v98.m128i_i64[0] - 1;
            if ( v98.m128i_i64[1] >= (unsigned __int64)(v98.m128i_i64[0] + 1) )
              goto LABEL_64;
          }
          else
          {
            v44 = 2;
            v45 = 1;
            if ( v98.m128i_i64[1] >= 2uLL )
              goto LABEL_64;
          }
          v85 = v45;
          v79 = v44;
          v97 = qvector_reserve(&v97, v43, v44, 1);
          v45 = v85;
          v43 = v97;
          v44 = v79;
LABEL_64:
          v98.m128i_i64[0] = v44;
          *(_BYTE *)(v43 + v45) = 0;
          v47 = (_BYTE *)(v46 + v97);
          v42 = v41 + 2;
          *v47 = 44;
          v48 = strstr(v41 + 2, ", ");
          v43 = v97;
          v41 = v48;
        }
      }
      goto LABEL_60;
    }
    if ( !under_debugger )
      interr(30743);
LABEL_129:
    BUG();
  }
LABEL_25:
  if ( under_debugger )
    goto LABEL_129;
  interr(30742);
LABEL_27:
  sub_345A0((__int64)v8, v97);
LABEL_21:
  v22 = v8[6].m128i_i64[1];
  v23 = v8[5].m128i_i64[0];
  v94 = 0;
  if ( (unsigned __int8)sub_2C350(v23, v22, 0x3Cu, &v94) && v94 )
    v8[8].m128i_i8[15] |= 2u;
  return v99 - __readfsqword(0x28u);
}

