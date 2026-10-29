__int64 __fastcall sub_1A720(__int64 a1, __int64 *a2, char a3, __int64 a4, __m128i a5, double a6, double a7, __m128 a8)
{
  int dword; // eax
  unsigned __int64 v13; // rbx
  const char *v14; // r8
  __int64 v16; // rax
  unsigned __int64 qword; // r15
  int *v18; // rsi
  unsigned __int64 v19; // r14
  size_t v20; // r9
  __int64 v21; // r8
  char *v22; // r10
  __int64 v23; // rsi
  void *v24; // rdi
  char v25; // al
  __int64 ea_name; // rax
  const char **v27; // rcx
  size_t v28; // r14
  __int64 v29; // rax
  char v30; // al
  size_t v31; // rax
  const char **v32; // rcx
  size_t v33; // rax
  char *v34; // rcx
  int v35; // eax
  size_t v36; // r8
  char *v37; // r9
  __int64 v38; // r14
  size_t v39; // r8
  char *v40; // r10
  __int64 v41; // rsi
  char *v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rax
  char *s2; // [rsp+0h] [rbp-88h]
  char *s2d; // [rsp+0h] [rbp-88h]
  char *s2a; // [rsp+0h] [rbp-88h]
  char *s2b; // [rsp+0h] [rbp-88h]
  char *s2e; // [rsp+0h] [rbp-88h]
  char *s2c; // [rsp+0h] [rbp-88h]
  const char **v51; // [rsp+8h] [rbp-80h]
  size_t v52; // [rsp+8h] [rbp-80h]
  size_t v53; // [rsp+8h] [rbp-80h]
  __int64 v54; // [rsp+8h] [rbp-80h]
  char *s1; // [rsp+10h] [rbp-78h]
  char *s1b; // [rsp+10h] [rbp-78h]
  char *s1a; // [rsp+10h] [rbp-78h]
  char *v58; // [rsp+18h] [rbp-70h]
  char *v59; // [rsp+18h] [rbp-70h]
  char *v60; // [rsp+20h] [rbp-68h]
  __int64 v61; // [rsp+28h] [rbp-60h]
  void *src; // [rsp+30h] [rbp-58h] BYREF
  __int128 v63; // [rsp+38h] [rbp-50h]
  unsigned __int64 v64; // [rsp+48h] [rbp-40h]

  v64 = __readfsqword(0x28u);
  dword = get_dword(a4);
  if ( !dword )
  {
    sub_CB10((__int64)"bad null relative offset at %a\n", *(double *)a5.m128i_i64);
    return 0;
  }
  v13 = dword + a4;
  if ( (unsigned __int8)is_loaded(v13)
    && (v16 = getseg(v13)) != 0
    && !(unsigned __int8)is_spec_segm(*(unsigned __int8 *)(v16 + 184)) )
  {
    qword = v13;
    if ( a3 != 2
      || (qword = get_qword(v13), (unsigned __int8)is_loaded(qword))
      && (v29 = getseg(qword)) != 0
      && !(unsigned __int8)is_spec_segm(*(unsigned __int8 *)(v29 + 184)) )
    {
      v18 = sub_19100(a1, qword, a5, a6, a7, a8);
      if ( v18 )
      {
        sub_C3D0((__int64)&src, v18);
        v19 = v63;
        if ( (_QWORD)v63 )
        {
          v20 = v63 - 1;
          if ( (_QWORD)v63 != 1 )
          {
            v21 = a2[1];
            v22 = (char *)(v63 - 1);
            if ( v21 )
            {
              --v21;
              v22 = (char *)(v20 + v21);
              v19 = v63 + v21;
            }
            v23 = *a2;
            if ( a2[2] < v19 )
            {
              s1a = v22;
              v54 = v21;
              s2c = (char *)(v63 - 1);
              v44 = qvector_reserve(a2, v23, v19, 1);
              v22 = s1a;
              v20 = (size_t)s2c;
              *a2 = v44;
              v23 = v44;
              v21 = v54;
            }
            a2[1] = v19;
            v22[v23] = 0;
            memcpy((void *)(v21 + *a2), src, v20);
          }
        }
        v24 = src;
        if ( !src )
          goto LABEL_19;
        goto LABEL_18;
      }
      return 0;
    }
    v14 = "indirect";
  }
  else
  {
    v14 = "relative";
    if ( a3 != 2 )
    {
LABEL_4:
      sub_CB10((__int64)"bad %s offset at %a\n", v14, *(double *)a5.m128i_i64);
      return 0;
    }
    qword = v13;
  }
  s2 = (char *)v14;
  v25 = is_spec_ea(qword);
  v14 = s2;
  if ( !v25 )
    goto LABEL_4;
  a5.m128i_i64[0] = 0;
  v63 = 0;
  src = nullptr;
  ea_name = get_ea_name(&src, qword, 0, 0);
  v27 = (const char **)&off_284E0;
  s1 = (char *)src;
  if ( ea_name <= 0 )
  {
    sub_CB10((__int64)"bad %s offset at %a (no imported name)\n", s2, 0.0);
LABEL_28:
    if ( src )
    {
      *(_QWORD *)&v63 = 0;
      qfree(src);
    }
    return 0;
  }
  while ( 1 )
  {
    v51 = v27;
    s2d = (char *)*v27;
    v28 = strlen(*v27);
    if ( !strncmp(s1, s2d, v28) )
      break;
    v27 = v51 + 1;
    if ( &unk_28510 == (_UNKNOWN *)(v51 + 1) )
      goto LABEL_27;
  }
  if ( !v28 )
  {
LABEL_27:
    sub_CB10((__int64)"bad type string name at %a (not a Swift mangled name)\n", 0.0);
    goto LABEL_28;
  }
  v61 = ((_QWORD)v63 == 0) + (_QWORD)v63 - 1LL;
  v31 = strlen(s1);
  v32 = (const char **)off_284C0;
  v52 = v31;
  while ( 1 )
  {
    s2a = (char *)v32;
    v58 = (char *)*v32;
    v33 = strlen(*v32);
    v34 = s2a;
    if ( v52 >= v33 )
    {
      v60 = s2a;
      s2b = (char *)v33;
      v35 = strncmp(&s1[v52 - v33], v58, v33);
      v34 = v60;
      if ( !v35 )
        break;
    }
    v32 = (const char **)(v34 + 8);
    if ( v32 == (const char **)&unk_284D0 )
      goto LABEL_44;
  }
  if ( !s2b )
  {
LABEL_44:
    sub_CB10((__int64)"bad type string name at %a (no descriptor suffix)\n", 0.0);
    goto LABEL_28;
  }
  v36 = v61 - v28;
  v37 = &s1[v28];
  v38 = a2[1];
  v39 = v36 - (_QWORD)s2b;
  v40 = (char *)v39;
  if ( v38 )
  {
    --v38;
    v40 = (char *)(v39 + v38);
  }
  v41 = *a2;
  v42 = v40 + 1;
  if ( a2[2] < (unsigned __int64)(v40 + 1) )
  {
    v59 = v40;
    s1b = v37;
    v53 = v39;
    s2e = v40 + 1;
    v43 = qvector_reserve(a2, v41, v42, 1);
    v40 = v59;
    v42 = s2e;
    *a2 = v43;
    v41 = v43;
    v37 = s1b;
    v39 = v53;
  }
  a2[1] = (__int64)v42;
  v40[v41] = 0;
  memmove((void *)(v38 + *a2), v37, v39);
  v24 = src;
  if ( !src )
    goto LABEL_19;
LABEL_18:
  *(_QWORD *)&v63 = 0;
  *(double *)a5.m128i_i64 = qfree(v24);
LABEL_19:
  if ( (*(_BYTE *)(a1 + 240) & 4) != 0 )
  {
    create_data(a4 - 1, 0, 1, -1);
    v30 = sub_DDD0(a4, *(double *)a5.m128i_i64);
    if ( v13 != qword )
    {
      if ( v30 )
      {
        create_data(v13, 805306368, 8, -1);
        if ( !(unsigned __int8)op_offset(v13, 0, 9, -1, 0, 0) )
          sub_CB10((__int64)"could not create offset at %a\n", *(double *)a5.m128i_i64);
      }
    }
  }
  return 1;
}

