unsigned __int64 __fastcall sub_32E30(__int64 a1, __int64 a2, const char **a3, __int64 a4, char a5)
{
  size_t v7; // r8
  int v8; // r9d
  const char *v9; // r14
  void *v10; // rdi
  char *v11; // rbp
  __int64 v12; // r15
  __int64 v13; // rbx
  size_t v14; // r11
  char *v15; // rax
  char *v16; // r13
  size_t v17; // r9
  __int64 v18; // r15
  __int64 v19; // r12
  __int64 v20; // rsi
  size_t v21; // rdx
  char *v22; // rbp
  __int64 v23; // r14
  size_t v24; // rbx
  int v25; // ebx
  unsigned __int64 v26; // rdx
  __int64 v27; // r12
  size_t v28; // r10
  _BYTE *v29; // rsi
  unsigned __int64 v30; // rdx
  const void *v31; // r12
  const char **v32; // rbx
  const char **v33; // r12
  size_t v34; // r13
  unsigned __int64 v35; // r10
  const char *v36; // rax
  char *v37; // r12
  const char *v38; // r12
  size_t v39; // rax
  __int64 v40; // r8
  size_t v41; // r10
  size_t v42; // r11
  _BYTE *v43; // rsi
  size_t v44; // rdx
  __int64 v45; // r12
  __int64 v46; // rbx
  char *v47; // rax
  void *v48; // rdi
  unsigned __int64 v49; // rdx
  char *v50; // r11
  char *v51; // r14
  char *v52; // rdi
  const char *v53; // rsi
  char *v54; // r14
  int v55; // r13d
  _BOOL8 v56; // rax
  size_t v57; // rdx
  __int64 v58; // rax
  char *v59; // rdx
  __int64 v60; // rbp
  __int64 v61; // rbx
  char *v62; // rax
  void *v63; // rdi
  const char **v65; // [rsp+0h] [rbp-130h]
  unsigned __int64 v66; // [rsp+8h] [rbp-128h]
  size_t v67; // [rsp+8h] [rbp-128h]
  size_t v68; // [rsp+8h] [rbp-128h]
  unsigned __int64 v69; // [rsp+8h] [rbp-128h]
  size_t v70; // [rsp+8h] [rbp-128h]
  size_t v71; // [rsp+10h] [rbp-120h]
  size_t v72; // [rsp+10h] [rbp-120h]
  __int64 v73; // [rsp+10h] [rbp-120h]
  size_t v74; // [rsp+18h] [rbp-118h]
  size_t v75; // [rsp+18h] [rbp-118h]
  size_t v76; // [rsp+18h] [rbp-118h]
  const char **v77; // [rsp+20h] [rbp-110h]
  size_t v81; // [rsp+48h] [rbp-E8h]
  void *v82; // [rsp+58h] [rbp-D8h] BYREF
  __int128 v83; // [rsp+60h] [rbp-D0h]
  void *v84; // [rsp+78h] [rbp-B8h] BYREF
  __int128 v85; // [rsp+80h] [rbp-B0h]
  void *ptr; // [rsp+98h] [rbp-98h] BYREF
  __int64 v87; // [rsp+A0h] [rbp-90h]
  __int64 v88; // [rsp+B8h] [rbp-78h] BYREF
  __int128 v89; // [rsp+C0h] [rbp-70h]
  char *s1; // [rsp+D8h] [rbp-58h] BYREF
  __int128 v91; // [rsp+E0h] [rbp-50h]
  unsigned __int64 v92; // [rsp+F0h] [rbp-40h]

  v92 = __readfsqword(0x28u);
  v83 = 0;
  v82 = nullptr;
  sub_30310(a2, (__int64 *)&v82);
  v65 = a3;
  v77 = &a3[a4];
  do
  {
    v84 = nullptr;
    v85 = 0;
    sub_31930((__int64)&ptr, *v65);
    v9 = (const char *)ptr;
    v88 = 0;
    v89 = 0;
    v10 = ptr;
    if ( v87 && (v11 = (char *)ptr + v87 - 1, ptr < v11) )
    {
      v12 = 0;
      v13 = 0;
      do
      {
        v15 = strchr(v9, 10);
        v16 = v15;
        v14 = v11 - v9;
        if ( !v15 || (v14 = v15 - v9, v15 != v9) )
        {
          if ( *((_QWORD *)&v89 + 1) < (unsigned __int64)(v13 + 1) )
          {
            v68 = v14;
            v88 = sub_1987B0(&v88, v12, v13 + 1, 24);
            v13 = v89;
            v12 = v88;
            v14 = v68;
          }
          v17 = v14;
          v18 = v12 + 24 * v13;
          *(_OWORD *)(v18 + 8) = 0;
          *(_QWORD *)v18 = 0;
          *(_QWORD *)&v89 = v89 + 1;
          v19 = *(_QWORD *)(v18 + 8);
          if ( v19 )
            v17 = --v19 + v14;
          v20 = *(_QWORD *)v18;
          v21 = v17 + 1;
          if ( v17 != -1 )
          {
            v74 = v14;
            v71 = v17;
            v67 = v17 + 1;
            v58 = sub_1987B0(v18, v20, v21, 1);
            v14 = v74;
            v17 = v71;
            *(_QWORD *)v18 = v58;
            v20 = v58;
            v21 = v67;
          }
          *(_QWORD *)(v18 + 8) = v21;
          *(_BYTE *)(v20 + v17) = 0;
          memmove((void *)(v19 + *(_QWORD *)v18), v9, v14);
          v12 = v88;
          v13 = v89;
          if ( !v16 )
          {
            v22 = (char *)(v88 + 24 * v89);
            goto LABEL_24;
          }
        }
        v9 = v16 + 1;
      }
      while ( v16 + 1 < v11 );
      v22 = (char *)(v12 + 24 * v13);
LABEL_24:
      *(_QWORD *)&v85 = 0;
      if ( (char *)v12 != v22 )
      {
        while ( 2 )
        {
          v26 = *(_QWORD *)(v12 + 8);
          if ( v26 )
          {
            v30 = v26 - 1;
            v31 = *(const void **)v12;
            s1 = nullptr;
            v91 = 0;
            if ( v30 > 1 )
            {
              v23 = 3;
              v24 = 2;
              goto LABEL_27;
            }
            if ( v30 )
            {
              v23 = 2;
              v24 = 1;
LABEL_27:
              s1 = (char *)sub_1987B0(&s1, 0, v23, 1);
              *(_QWORD *)&v91 = v23;
              memmove(s1, v31, v24);
              s1[v24] = 0;
              if ( (_QWORD)v91 )
              {
                v25 = (unsigned __int8)*s1 - 45;
                if ( *s1 == 45 )
                {
                  v25 = (unsigned __int8)s1[1] - 45;
                  if ( s1[1] == 45 )
                    v25 = (unsigned __int8)s1[2];
                }
                if ( s1 )
                {
                  *(_QWORD *)&v91 = 0;
                  j__free(s1);
                }
                if ( !v25 )
                  goto LABEL_43;
                goto LABEL_34;
              }
              if ( !s1 )
                goto LABEL_34;
              j__free(s1);
              v26 = *(_QWORD *)(v12 + 8);
            }
            else
            {
LABEL_34:
              v26 = *(_QWORD *)(v12 + 8);
            }
          }
          if ( !v26 )
            goto LABEL_43;
          if ( **(_BYTE **)v12 != 64 )
          {
            v7 = v26 - 1;
            if ( v26 != 1 )
            {
              v27 = v85;
              v28 = v26 - 1;
              if ( (_QWORD)v85 )
              {
                v27 = v85 - 1;
                v28 = v7 + v85 - 1;
                v26 += v85 - 1;
              }
              v29 = v84;
              if ( *((_QWORD *)&v85 + 1) < v26 )
              {
                v75 = v7;
                v72 = v28;
                v69 = v26;
                v84 = (void *)sub_1987B0(&v84, v84, v26, 1);
                v7 = v75;
                v29 = v84;
                v28 = v72;
                v26 = v69;
              }
              *(_QWORD *)&v85 = v26;
              v29[v28] = 0;
              memcpy((char *)v84 + v27, *(const void **)v12, v7);
            }
            goto LABEL_43;
          }
          v32 = (const char **)v82;
          v33 = (const char **)((char *)v82 + 24 * v83);
          if ( v82 == v33 )
            goto LABEL_43;
LABEL_49:
          v34 = (size_t)v32[1];
          v35 = 1;
          if ( v34 )
          {
            v35 = (unsigned __int64)v32[1];
            --v34;
          }
          if ( !v26 )
          {
            s1 = nullptr;
            v91 = 0;
            goto LABEL_53;
          }
          v49 = v26 - 1;
          v50 = *(char **)v12;
          if ( v49 >= v35 )
          {
            v51 = v50 + 1;
            s1 = nullptr;
            v91 = 0;
            if ( v34 )
              goto LABEL_72;
LABEL_53:
            if ( !v32[1] )
              goto LABEL_54;
            v54 = nullptr;
            goto LABEL_74;
          }
          s1 = nullptr;
          v56 = v49 != 0;
          v91 = 0;
          v57 = v49 - v56;
          v34 = v57;
          if ( !v57 )
            goto LABEL_53;
          v51 = &v50[v56];
          v35 = v57 + 1;
          if ( v57 == -1 )
          {
            v52 = nullptr;
            v34 = -1;
          }
          else
          {
LABEL_72:
            v66 = v35;
            s1 = (char *)sub_1987B0(&s1, 0, v35, 1);
            v35 = v66;
            v52 = s1;
          }
          *(_QWORD *)&v91 = v35;
          memmove(v52, v51, v34);
          v53 = ::s1;
          s1[v34] = 0;
          v54 = s1;
          if ( v32[1] )
LABEL_74:
            v53 = *v32;
          if ( (_QWORD)v91 )
            v55 = strcmp(v54, v53);
          else
            v55 = -*(unsigned __int8 *)v53;
          if ( v54 )
          {
            *(_QWORD *)&v91 = 0;
            j__free(v54);
          }
          if ( !v55 )
          {
LABEL_54:
            v36 = v32[1];
            v37 = *(char **)v12;
            if ( !v36 )
            {
              v38 = v37 + 1;
              goto LABEL_56;
            }
            v38 = &v37[(_QWORD)v36];
            if ( v38 )
            {
LABEL_56:
              v39 = strlen(v38);
              v40 = v85;
              v41 = v39;
              v42 = v39;
              if ( (_QWORD)v85 )
              {
                v40 = v85 - 1;
                v42 = v39 + v85 - 1;
              }
              v43 = v84;
              v44 = v42 + 1;
              if ( *((_QWORD *)&v85 + 1) < v42 + 1 )
              {
                v81 = v39;
                v76 = v42;
                v73 = v40;
                v70 = v42 + 1;
                v84 = (void *)sub_1987B0(&v84, v84, v44, 1);
                v41 = v81;
                v43 = v84;
                v42 = v76;
                v40 = v73;
                v44 = v70;
              }
              *(_QWORD *)&v85 = v44;
              v12 += 24;
              v43[v42] = 0;
              memmove((char *)v84 + v40, v38, v41);
              if ( v22 == (char *)v12 )
              {
LABEL_61:
                v22 = (char *)v88;
                goto LABEL_62;
              }
              continue;
            }
LABEL_43:
            v12 += 24;
            if ( v22 == (char *)v12 )
              goto LABEL_61;
            continue;
          }
          break;
        }
        v32 += 3;
        if ( v33 == v32 )
          goto LABEL_43;
        v26 = *(_QWORD *)(v12 + 8);
        goto LABEL_49;
      }
LABEL_62:
      if ( v22 )
      {
        v45 = v89;
        if ( (_QWORD)v89 )
        {
          v46 = 0;
          do
          {
            v47 = &v22[24 * v46];
            v48 = *(void **)v47;
            if ( *(_QWORD *)v47 )
            {
              *((_QWORD *)v47 + 1) = 0;
              j__free(v48);
            }
            ++v46;
            v22 = (char *)v88;
          }
          while ( v45 != v46 );
        }
        *(_QWORD *)&v89 = 0;
        j__free(v22);
      }
      v10 = ptr;
    }
    else
    {
      *(_QWORD *)&v85 = 0;
    }
    if ( v10 )
    {
      v87 = 0;
      j__free(v10);
    }
    if ( (unsigned __int64)v85 > 1 )
      sub_32C80(a1, *(_BYTE *)(a2 + 107), (__int64)&v84, a5, v7, v8);
    if ( v84 )
    {
      *(_QWORD *)&v85 = 0;
      j__free(v84);
    }
    ++v65;
  }
  while ( v77 != v65 );
  v59 = (char *)v82;
  if ( v82 )
  {
    v60 = v83;
    if ( (_QWORD)v83 )
    {
      v61 = 0;
      do
      {
        v62 = &v59[24 * v61];
        v63 = *(void **)v62;
        if ( *(_QWORD *)v62 )
        {
          *((_QWORD *)v62 + 1) = 0;
          j__free(v63);
          v59 = (char *)v82;
        }
        ++v61;
      }
      while ( v60 != v61 );
    }
    *(_QWORD *)&v83 = 0;
    j__free(v59);
  }
  return v92 - __readfsqword(0x28u);
}
