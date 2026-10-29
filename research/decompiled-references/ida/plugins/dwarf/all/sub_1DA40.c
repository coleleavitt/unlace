unsigned __int64 __fastcall sub_1DA40(const char **a1, __int64 a2, __int64 a3)
{
  const char *v3; // rcx
  int v4; // r12d
  const char *v5; // rax
  const char *v6; // rbx
  unsigned int v8; // r14d
  size_t v9; // r13
  _QWORD *func; // rax
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // rax
  void *v16; // rax
  const char *v17; // rdx
  const char *v18; // r12
  const char *i; // rbx
  const char *v20; // rax
  __int64 v21; // rdi
  const char *v22; // rdi
  __int64 ea_name; // rax
  __int64 v25; // r13
  bool v26; // r14
  __int64 v27; // rax
  __int64 name_ea; // rax
  __int64 flags; // rax
  __int64 qword; // rax
  void *v31; // [rsp+0h] [rbp-48h] BYREF
  __int128 v32; // [rsp+8h] [rbp-40h]
  unsigned __int64 v33; // [rsp+18h] [rbp-30h]

  v3 = "s";
  v4 = 0;
  v5 = a1[4];
  v6 = a1[3];
  v33 = __readfsqword(0x28u);
  if ( !(40LL * (_QWORD)v5) )
    goto LABEL_18;
  do
  {
    func = (_QWORD *)get_func(*(_QWORD *)v6, a2, a3, v3);
    if ( v6[32] )
    {
      if ( func )
      {
        v8 = 57105;
        if ( *func == *(_QWORD *)v6 )
          v8 = (((get_flags_ex(*(_QWORD *)v6, 4) & 0x8000) == 0) << 9) | 0xDD11;
        goto LABEL_6;
      }
    }
    else
    {
      if ( (get_flags_ex(*(_QWORD *)v6, 4) & 0xC000) == 0x4000 )
      {
        ea_name = get_ea_name(0, *(_QWORD *)v6, 29, 0);
        v25 = *((_QWORD *)v6 + 1);
        v26 = ea_name <= 0;
        v27 = getinf(19);
        a2 = v25;
        name_ea = get_name_ea(v27, v25);
        v14 = name_ea;
        if ( name_ea == -1
          || (a2 = 4, flags = get_flags_ex(name_ea, 4), (flags & 0x600) != 0x400)
          || (flags & 0xF00000) != 0x500000 )
        {
LABEL_29:
          if ( !v26 )
            goto LABEL_10;
          goto LABEL_15;
        }
LABEL_36:
        a2 = 4;
        if ( (unsigned __int8)getinf_flag(3, 4) )
          qword = get_qword(v14);
        else
          qword = (unsigned int)get_dword(v14);
        if ( *(_QWORD *)v6 == qword )
          goto LABEL_10;
        goto LABEL_29;
      }
      v11 = *((_QWORD *)v6 + 1);
      v12 = getinf(19);
      v13 = get_name_ea(v12, v11);
      v14 = v13;
      if ( v13 != -1 )
      {
        v15 = get_flags_ex(v13, 4);
        if ( (v15 & 0x600) == 0x400 && (v15 & 0xF00000) == 0x500000 )
        {
          v26 = 1;
          goto LABEL_36;
        }
      }
    }
LABEL_15:
    v8 = 56593;
LABEL_6:
    v31 = nullptr;
    v32 = 0;
    v9 = *((_QWORD *)v6 + 2);
    if ( v9 )
    {
      v16 = (void *)qalloc_or_throw(*((_QWORD *)v6 + 2));
      *((_QWORD *)&v32 + 1) = v9;
      v31 = v16;
      memcpy(v16, *((const void **)v6 + 1), v9);
      *(_QWORD *)&v32 = v9;
    }
    validate_name(&v31, 6, 1);
    a2 = *((_QWORD *)v6 + 1);
    v4 += (unsigned __int8)set_name(*(_QWORD *)v6, a2, v8);
    if ( v31 )
    {
      *(_QWORD *)&v32 = 0;
      qfree(v31);
    }
LABEL_10:
    v6 += 40;
    a3 = 5LL * (_QWORD)a1[4];
  }
  while ( v6 != &a1[3][40 * (_QWORD)a1[4]] );
  v3 = "";
  if ( v4 != 1 )
    v3 = "s";
LABEL_18:
  sub_1D740((__int64)"%s: %d symbol%s applied\n", *a1, v4, v3);
  v17 = a1[3];
  if ( v17 )
  {
    v18 = a1[4];
    if ( v18 )
    {
      for ( i = nullptr; i != v18; ++i )
      {
        v20 = &v17[40 * (_QWORD)i];
        v21 = *((_QWORD *)v20 + 1);
        if ( v21 )
        {
          *((_QWORD *)v20 + 2) = 0;
          qfree(v21);
          v17 = a1[3];
        }
      }
    }
    a1[4] = nullptr;
    qfree(v17);
  }
  v22 = *a1;
  if ( *a1 )
  {
    a1[1] = nullptr;
    qfree(v22);
  }
  return v33 - __readfsqword(0x28u);
}

