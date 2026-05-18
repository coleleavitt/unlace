__int64 __fastcall sub_C1030(_QWORD *a1, const char *a2, __int64 a3)
{
  size_t v3; // rax
  size_t v4; // r12
  size_t v5; // rbp
  char *v6; // rbx
  char *v7; // rax
  char **p_s2; // rbx
  char *v9; // rax
  char *v10; // r15
  const char *v11; // r14
  const char *v12; // rax
  __int64 v13; // r13
  const char *v14; // rbx
  const char *v15; // r12
  const char *v16; // rbp
  const char *v17; // rsi
  const char *v18; // rdi
  int v19; // eax
  const char *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  const char *v23; // rsi
  size_t v24; // rax
  size_t v25; // rbp
  char *v26; // rdi
  const char *v27; // rax
  const char *v28; // r13
  size_t v29; // rax
  size_t v30; // rbp
  size_t v31; // r12
  char *v32; // rax
  const char *v33; // r15
  char *v34; // r12
  const char *v35; // rbx
  __int64 v36; // r14
  char *v37; // r13
  char *v38; // rbp
  const char *v39; // r12
  const char *v40; // rsi
  const char *v41; // rdi
  int v42; // eax
  const char *v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rdx
  const char *v46; // rsi
  size_t v47; // rax
  size_t v48; // r12
  void *v49; // rdi
  size_t v50; // r13
  const char *v51; // rbp
  void *v52; // rdi
  size_t v53; // r12
  const char *v54; // r12
  unsigned int v55; // ebx
  __int64 v57; // rax
  __m128i *v58; // rax
  size_t v59; // rbx
  size_t v60; // rbp
  size_t v61; // r13
  char *v62; // r12
  __int64 v63; // rax
  char *v64; // rsi
  __m128i si128; // xmm0
  size_t v66; // rdx
  size_t v67; // r14
  __int64 v68; // rax
  const char *v69; // [rsp+0h] [rbp-D8h]
  char *v70; // [rsp+8h] [rbp-D0h]
  char *v72; // [rsp+18h] [rbp-C0h]
  char *v73; // [rsp+18h] [rbp-C0h]
  char **v75; // [rsp+38h] [rbp-A0h] BYREF
  char *s; // [rsp+40h] [rbp-98h] BYREF
  __int128 v77; // [rsp+48h] [rbp-90h]
  void *src; // [rsp+60h] [rbp-78h] BYREF
  size_t n[3]; // [rsp+68h] [rbp-70h]
  char *s2; // [rsp+80h] [rbp-58h] BYREF
  __int128 v81; // [rsp+88h] [rbp-50h]
  unsigned __int64 v82; // [rsp+98h] [rbp-40h]

  v82 = __readfsqword(0x28u);
  v77 = 0;
  s = nullptr;
  if ( a2 )
  {
    v3 = strlen(a2);
    v4 = v3 + 1;
    v5 = v3;
    s = (char *)sub_1987B0(&s, 0, v3 + 1, 1);
    *(_QWORD *)&v77 = v4;
    memmove(s, a2, v5);
    s[v5] = 0;
    if ( (_QWORD)v77 )
    {
      v6 = s;
      v7 = strchr(s, 59);
      if ( v7 )
      {
        if ( v7 - v6 != -1 )
          goto LABEL_5;
      }
    }
  }
  *(_OWORD *)n = 0;
  src = nullptr;
  v58 = (__m128i *)sub_1987B0(&src, 0, 21, 1);
  src = v58;
  n[0] = 21;
  *v58 = _mm_load_si128((const __m128i *)&xmmword_1B70E0);
  v58[1].m128i_i32[0] = 1030054770;
  *((_BYTE *)src + 20) = 0;
  v59 = n[0];
  s2 = nullptr;
  v81 = 0;
  if ( n[0] )
  {
    s2 = (char *)sub_198760(n[0]);
    *((_QWORD *)&v81 + 1) = v59;
    memcpy(s2, src, v59);
    *(_QWORD *)&v81 = v59;
    v61 = *((_QWORD *)&v81 + 1);
    v62 = s2;
    if ( !(_QWORD)v77 || (v66 = v77 - 1, (_QWORD)v77 == 1) )
    {
      v60 = v59;
      goto LABEL_77;
    }
    --v59;
    v67 = v66 + v59;
    v60 = v77 + v59;
    if ( *((_QWORD *)&v81 + 1) >= (unsigned __int64)v77 + v59 )
      goto LABEL_93;
    v61 = v77 - 1;
LABEL_96:
    s2 = (char *)sub_1987B0(&s2, v62, v60, 1);
    v62 = s2;
    v66 = v61;
LABEL_93:
    *(_QWORD *)&v81 = v60;
    v62[v67] = 0;
    memcpy(&s2[v59], s, v66);
    v62 = s2;
    v61 = *((_QWORD *)&v81 + 1);
    v60 = v81;
    goto LABEL_77;
  }
  v60 = v77;
  if ( (_QWORD)v77 )
  {
    v61 = v77 - 1;
    if ( (_QWORD)v77 == 1 )
    {
      v60 = 0;
      v62 = nullptr;
      goto LABEL_77;
    }
    v67 = v77 - 1;
    v62 = nullptr;
    goto LABEL_96;
  }
  v61 = 0;
  v62 = nullptr;
LABEL_77:
  s2 = nullptr;
  v81 = 0;
  if ( s )
  {
    *(_QWORD *)&v77 = 0;
    j__free(s);
    s = v62;
    *(_QWORD *)&v77 = v60;
    *((_QWORD *)&v77 + 1) = v61;
    if ( s2 )
    {
      *(_QWORD *)&v81 = 0;
      j__free(s2);
    }
  }
  else
  {
    s = v62;
    *(_QWORD *)&v77 = v60;
    *((_QWORD *)&v77 + 1) = v61;
  }
  if ( src )
  {
    n[0] = 0;
    j__free(src);
  }
  v6 = s;
LABEL_5:
  v72 = (char *)sub_1997C0(v6, ";");
  if ( v72 )
  {
    p_s2 = &s2;
    v81 = 0;
    s2 = nullptr;
    v9 = (char *)sub_1987B0(&s2, 0, 10, 1);
    s2 = v9;
    *(_QWORD *)&v81 = 10;
    *(_QWORD *)v9 = 0x6E656B6361625F5FLL;
    v9[8] = 100;
    v10 = s2;
    s2[9] = 0;
    v11 = (const char *)(a1 + 1);
    v69 = (const char *)(a1 + 1);
    if ( !a1[2] )
      goto LABEL_26;
    v12 = s1;
    v13 = v81;
    v14 = (const char *)a1[2];
    v11 = (const char *)(a1 + 1);
    if ( (_QWORD)v81 )
      v12 = v10;
    v15 = v12;
    while ( 1 )
    {
      v21 = *((_QWORD *)v14 + 5);
      if ( !v13 )
        break;
      if ( v21 )
        goto LABEL_19;
      v16 = v14;
      v17 = v10;
      v18 = s1;
LABEL_12:
      v19 = strcmp(v18, v17);
      v20 = *((const char **)v14 + 2);
      v14 = *((const char **)v14 + 3);
      if ( v19 >= 0 )
      {
        v11 = v16;
        v14 = v20;
      }
      if ( !v14 )
      {
        p_s2 = &s2;
        goto LABEL_21;
      }
    }
    if ( !v21 )
    {
      while ( 1 )
      {
        v22 = *((_QWORD *)v14 + 2);
        if ( !v22 )
          break;
        v11 = v14;
        v14 = *((const char **)v14 + 2);
        if ( *(_QWORD *)(v22 + 40) )
          goto LABEL_19;
      }
      v54 = v14;
      p_s2 = &s2;
      v11 = v54;
LABEL_21:
      if ( v11 == v69 )
        goto LABEL_26;
      if ( *((_QWORD *)v11 + 5) )
      {
        v23 = *((const char **)v11 + 4);
        if ( !v13 )
          v10 = (char *)s1;
LABEL_25:
        if ( strcmp(v10, v23) < 0 )
        {
LABEL_26:
          v75 = &s2;
          v11 = sub_C0F10(a1, v11, (void ***)&v75);
        }
      }
      else
      {
        v23 = s1;
        if ( v13 )
          goto LABEL_25;
      }
      v24 = strlen(v72);
      v25 = v24;
      if ( v24 )
      {
        v52 = *((void **)v11 + 7);
        v53 = v24 + 1;
        if ( *((_QWORD *)v11 + 9) < v24 + 1 )
        {
          v63 = sub_1987B0(v11 + 56, *((_QWORD *)v11 + 7), v53, 1);
          *((_QWORD *)v11 + 7) = v63;
          v52 = (void *)v63;
        }
        *((_QWORD *)v11 + 8) = v53;
        memmove(v52, v72, v25);
        *(_BYTE *)(*((_QWORD *)v11 + 7) + v25) = 0;
      }
      else
      {
        *((_QWORD *)v11 + 8) = 0;
      }
      v26 = s2;
      if ( s2 )
        goto LABEL_30;
      while ( 2 )
      {
        v27 = (const char *)sub_1997C0(nullptr, ";");
        v28 = v27;
        if ( !v27 )
          goto LABEL_70;
        v70 = strchr(v27, 61);
        if ( !v70 )
        {
          sub_299F0((char **)a3);
          v55 = 0;
          goto LABEL_71;
        }
        *v70 = 0;
        s2 = nullptr;
        v81 = 0;
        v29 = strlen(v28);
        v30 = v29 + 1;
        v31 = v29;
        v32 = (char *)sub_1987B0(p_s2, 0, v29 + 1, 1);
        *(_QWORD *)&v81 = v30;
        s2 = v32;
        memmove(v32, v28, v31);
        v33 = (const char *)(a1 + 1);
        s2[v31] = 0;
        if ( !a1[2] )
          goto LABEL_53;
        v34 = (char *)s1;
        v73 = (char *)p_s2;
        v33 = (const char *)(a1 + 1);
        v35 = (const char *)a1[2];
        v36 = v81;
        v37 = s2;
        if ( (_QWORD)v81 )
          v34 = s2;
        v38 = v34;
LABEL_42:
        v44 = *((_QWORD *)v35 + 5);
        if ( v36 )
        {
          v39 = v35;
          v40 = v37;
          v41 = s1;
          if ( v44 )
            goto LABEL_38;
        }
        else
        {
          if ( !v44 )
          {
            while ( 1 )
            {
              v45 = *((_QWORD *)v35 + 2);
              if ( !v45 )
                break;
              v33 = v35;
              v35 = *((const char **)v35 + 2);
              if ( *(_QWORD *)(v45 + 40) )
                goto LABEL_46;
            }
            v51 = v35;
            p_s2 = (char **)v73;
            v33 = v51;
LABEL_48:
            if ( v33 == v69 )
              goto LABEL_53;
            if ( *((_QWORD *)v33 + 5) )
            {
              v46 = *((const char **)v33 + 4);
              if ( !v36 )
                v37 = (char *)s1;
LABEL_52:
              if ( strcmp(v37, v46) < 0 )
              {
LABEL_53:
                src = p_s2;
                v33 = sub_C0F10(a1, v33, (void ***)&src);
              }
            }
            else
            {
              v46 = s1;
              if ( v36 )
                goto LABEL_52;
            }
            v47 = strlen(v70 + 1);
            v48 = v47;
            if ( v47 )
            {
              v49 = *((void **)v33 + 7);
              v50 = v47 + 1;
              if ( *((_QWORD *)v33 + 9) < v47 + 1 )
              {
                v57 = sub_1987B0(v33 + 56, *((_QWORD *)v33 + 7), v50, 1);
                *((_QWORD *)v33 + 7) = v57;
                v49 = (void *)v57;
              }
              *((_QWORD *)v33 + 8) = v50;
              memmove(v49, v70 + 1, v48);
              *(_BYTE *)(*((_QWORD *)v33 + 7) + v48) = 0;
            }
            else
            {
              *((_QWORD *)v33 + 8) = 0;
            }
            v26 = s2;
            if ( s2 )
            {
LABEL_30:
              *(_QWORD *)&v81 = 0;
              j__free(v26);
            }
            continue;
          }
LABEL_46:
          v39 = v35;
LABEL_38:
          v41 = *((const char **)v35 + 4);
          v40 = v38;
        }
        break;
      }
      v42 = strcmp(v41, v40);
      v43 = *((const char **)v35 + 2);
      v35 = *((const char **)v35 + 3);
      if ( v42 >= 0 )
      {
        v33 = v39;
        v35 = v43;
      }
      if ( !v35 )
      {
        p_s2 = (char **)v73;
        goto LABEL_48;
      }
      goto LABEL_42;
    }
LABEL_19:
    v18 = *((const char **)v14 + 4);
    v16 = v14;
    v17 = v15;
    goto LABEL_12;
  }
LABEL_70:
  v55 = 1;
  if ( !a1[5] )
  {
    v64 = *(char **)a3;
    if ( *(_QWORD *)(a3 + 16) <= 0x19u )
    {
      v68 = sub_1987B0(a3, v64, 26, 1);
      *(_QWORD *)a3 = v68;
      v64 = (char *)v68;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_1B70F0);
    v55 = 0;
    *(_QWORD *)(a3 + 8) = 26;
    *(__m128i *)v64 = si128;
    *(__m128i *)(v64 + 9) = _mm_load_si128((const __m128i *)&xmmword_1B7100);
    *(_BYTE *)(*(_QWORD *)a3 + 25LL) = 0;
  }
LABEL_71:
  if ( s )
  {
    *(_QWORD *)&v77 = 0;
    j__free(s);
  }
  return v55;
}
