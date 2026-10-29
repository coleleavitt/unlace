__int64 __fastcall sub_10190(__int64 a1, __int64 a2, unsigned __int64 a3, double a4, double a5)
{
  unsigned int v5; // r12d
  __int64 qword; // rbx
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // r12
  __int64 v12; // rax
  char *v13; // rsi
  __int64 ea_name; // rax
  const char **v15; // r14
  const char *v16; // r13
  size_t v17; // r15
  __int64 i; // r12
  __int64 v19; // r13
  const char *v20; // r15
  size_t v21; // r14
  _QWORD *v22; // r15
  __int64 v23; // r13
  const char *v24; // rax
  void *v25; // r14
  const char *v26; // rsi
  const char *v27; // rdi
  int v28; // eax
  _QWORD *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  const char *v32; // rdi
  const char *v33; // rsi
  char *s1; // [rsp+0h] [rbp-A8h]
  _QWORD *v35; // [rsp+8h] [rbp-A0h]
  char *s2; // [rsp+10h] [rbp-98h]
  const char *v37; // [rsp+18h] [rbp-90h]
  __int64 v38; // [rsp+28h] [rbp-80h] BYREF
  char *v39; // [rsp+30h] [rbp-78h] BYREF
  __int128 v40; // [rsp+38h] [rbp-70h]
  char *v41; // [rsp+50h] [rbp-58h] BYREF
  __int128 v42; // [rsp+58h] [rbp-50h]
  unsigned __int64 v43; // [rsp+68h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  if ( a3 <= 7 )
    return 0;
  qword = get_qword(a3 - 8);
  if ( (unsigned __int8)is_loaded(qword) )
  {
    v9 = getseg(qword);
    if ( v9 )
    {
      if ( !(unsigned __int8)is_spec_segm(*(unsigned __int8 *)(v9 + 184)) )
      {
        v41 = nullptr;
        v42 = 0;
        v41 = (char *)qvector_reserve(&v41, 0, 8, 8);
        v10 = qword;
        do
        {
          v11 = get_qword(v10);
          if ( !(unsigned __int8)is_loaded(v11) || (unsigned __int8)segtype(v11) != 2 )
          {
            sub_CB10((__int64)"bad offset to a function at %a\n", 0.0);
            goto LABEL_36;
          }
          v12 = v42;
          v13 = v41;
          if ( *((_QWORD *)&v42 + 1) < (unsigned __int64)(v42 + 1) )
          {
            v41 = (char *)qvector_reserve(&v41, v41, v42 + 1, 8);
            v13 = v41;
            v12 = v42;
          }
          v10 += 8;
          *(_QWORD *)&v13[8 * v12] = v11;
          *(_QWORD *)&v42 = v42 + 1;
        }
        while ( qword + 64 != v10 );
        sub_FA00(a1, 9, qword, 0, 0.0, a5);
        if ( (*(_BYTE *)(a1 + 240) & 4) != 0 )
          sub_100A0(qword, (int *)a2, "WV", 0.0);
        for ( i = 0; i != 8; ++i )
        {
          while ( 1 )
          {
            v19 = *(_QWORD *)&v41[i * 8];
            auto_mark_range(v19, v19 + 1, 20);
            auto_mark_range(v19, v19 + 1, 30);
            if ( (*(_BYTE *)(a1 + 240) & 4) != 0 )
              break;
            if ( ++i == 8 )
              goto LABEL_27;
          }
          sub_100A0(*(_QWORD *)&v41[i * 8], (int *)a2, off_279A0[i], 0.0);
        }
LABEL_27:
        v38 = 0;
        if ( (unsigned __int8)sub_7980(&v38, qword) )
        {
          if ( (unsigned __int8)sub_BCA0((__int64)&v39, qword, v38, "size") )
            *(_DWORD *)(a2 + 104) = (_DWORD)v39;
          if ( (unsigned __int8)sub_BCA0((__int64)&v39, qword, v38, "flags") )
          {
            if ( ((unsigned __int8)((_BYTE)v39 + 1) & (unsigned __int8)v39) != 0 )
              sub_CB10((__int64)"bad alignment in the flags (%X) in the value-witness table at %a\n", (_DWORD)v39, 0.0);
            else
              *(_DWORD *)(a2 + 108) = log2floor((unsigned int)(unsigned __int8)v39 + 1);
          }
          if ( (unsigned __int8)sub_BCA0((__int64)&v39, qword, v38, "extraInhabitantCount") )
            *(_BYTE *)(a2 + 112) = v39 != nullptr;
        }
        clear_tinfo_t();
LABEL_36:
        if ( v41 )
        {
          *(_QWORD *)&v42 = 0;
          qfree(v41);
        }
        return 0;
      }
    }
  }
  v5 = is_spec_ea(qword);
  if ( !(_BYTE)v5 )
  {
    sub_CB10((__int64)"bad offset to the value-witness table at %a\n", a4);
    return 0;
  }
  v40 = 0;
  v39 = nullptr;
  ea_name = get_ea_name(&v39, qword, 0, 0);
  v15 = (const char **)&off_284E0;
  s1 = v39;
  if ( ea_name <= 0 )
  {
    sub_CB10((__int64)"bad offset to the value-witness table at %a (no imported name)\n", 0.0);
    goto LABEL_18;
  }
  while ( 1 )
  {
    v16 = *v15;
    v17 = strlen(*v15);
    if ( !strncmp(s1, v16, v17) )
      break;
    if ( ++v15 == (const char **)&unk_28510 )
      goto LABEL_17;
  }
  if ( !v17 )
  {
LABEL_17:
    sub_CB10((__int64)"bad value-witness table name at %a (not a Swift mangled name)\n", 0.0);
    goto LABEL_18;
  }
  v41 = nullptr;
  v42 = 0;
  v20 = &s1[v17];
  v21 = strlen(v20);
  v41 = (char *)qvector_reserve(&v41, 0, v21 + 1, 1);
  *(_QWORD *)&v42 = v21 + 1;
  memmove(v41, v20, v21);
  v41[v21] = 0;
  v22 = (_QWORD *)qword_28790;
  s2 = v41;
  if ( !qword_28790 )
    goto LABEL_64;
  v23 = v42;
  v24 = ::s1;
  v25 = &unk_28788;
  if ( (_QWORD)v42 )
    v24 = v41;
  v37 = v24;
  while ( 1 )
  {
    v30 = v22[5];
    if ( !v23 )
      break;
    if ( v30 )
      goto LABEL_52;
    v35 = v22;
    v26 = s2;
    v27 = ::s1;
LABEL_45:
    v28 = strcmp(v27, v26);
    v29 = (_QWORD *)v22[2];
    v22 = (_QWORD *)v22[3];
    if ( v28 >= 0 )
    {
      v25 = v35;
      v22 = v29;
    }
    if ( !v22 )
      goto LABEL_56;
  }
  if ( v30 )
  {
LABEL_52:
    v27 = (const char *)v22[4];
    v26 = v37;
    v35 = v22;
    goto LABEL_45;
  }
  while ( 1 )
  {
    v31 = v22[2];
    if ( !v31 )
      break;
    v25 = v22;
    v22 = (_QWORD *)v22[2];
    if ( *(_QWORD *)(v31 + 40) )
      goto LABEL_52;
  }
  v25 = v22;
LABEL_56:
  if ( v25 == &unk_28788 )
    goto LABEL_64;
  if ( *((_QWORD *)v25 + 5) )
  {
    v32 = ::s1;
    v33 = *((const char **)v25 + 4);
    if ( v23 )
      v32 = s2;
LABEL_60:
    if ( strcmp(v32, v33) >= 0 )
      goto LABEL_61;
LABEL_64:
    if ( s2 )
    {
      *(_QWORD *)&v42 = 0;
      qfree(s2);
    }
    sub_CB10((__int64)"unsupported value-witness table name '%s' at %a\n", s1, 0.0);
LABEL_18:
    v5 = 0;
  }
  else
  {
    if ( v23 )
    {
      v32 = s2;
      v33 = ::s1;
      goto LABEL_60;
    }
LABEL_61:
    if ( s2 )
    {
      *(_QWORD *)&v42 = 0;
      qfree(s2);
    }
    *(_QWORD *)(a2 + 104) = *((_QWORD *)v25 + 7);
    *(_BYTE *)(a2 + 112) = *((_BYTE *)v25 + 64);
  }
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v39);
  }
  return v5;
}

