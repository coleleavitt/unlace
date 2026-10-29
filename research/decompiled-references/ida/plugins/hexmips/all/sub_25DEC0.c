unsigned __int64 __fastcall sub_25DEC0(
        void **a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        char *a5,
        _QWORD *a6,
        unsigned int a7)
{
  char *v8; // rcx
  char v9; // al
  __int64 v10; // rdi
  void **v11; // r12
  char *v12; // rax
  char *v13; // rsi
  char v14; // dl
  char *v16; // rax
  char *v17; // rsi
  char v18; // dl
  __int64 v19; // rdi
  char *v20; // r12
  size_t v21; // rax
  char *v22; // rdx
  char *v23; // rcx
  char v24; // al
  size_t v25; // r14
  char *v30; // [rsp+28h] [rbp-488h]
  char *v31; // [rsp+50h] [rbp-460h] BYREF
  __int128 v32; // [rsp+58h] [rbp-458h]
  char s[1023]; // [rsp+70h] [rbp-440h] BYREF
  char v34; // [rsp+46Fh] [rbp-41h] BYREF
  char v35; // [rsp+470h] [rbp-40h] BYREF
  unsigned __int64 v36; // [rsp+478h] [rbp-38h]

  v36 = __readfsqword(0x28u);
  v30 = s;
  while ( 1 )
  {
    v8 = v30;
    v9 = *a5++;
    *v30 = v9;
    if ( !v9 )
      break;
    ++v30;
    if ( v8 + 1 == &v34 )
    {
      v34 = 0;
      break;
    }
  }
  if ( a7 <= 0x40 || (a7 & 0x40000000) != 0 )
  {
    tag_addr();
    if ( v30 >= &v35 )
    {
      if ( !under_debugger )
        sub_37E160(520);
LABEL_46:
      BUG();
    }
    v16 = nullptr;
    if ( v30 == &v34 )
    {
LABEL_35:
      v34 = 0;
      v30 = &v34;
    }
    else
    {
      while ( 1 )
      {
        v17 = v30;
        v18 = *v16++;
        *v30 = v18;
        if ( !v18 )
          break;
        ++v30;
        if ( v17 + 1 == &v34 )
          goto LABEL_35;
      }
    }
  }
  v10 = a6[5];
  v11 = a1;
  if ( v10 )
    v11 = (void **)sub_252A70(v10, a1);
  v31 = nullptr;
  v32 = 0;
  tag_addr();
  if ( v30 >= &v35 )
  {
    if ( !under_debugger )
      sub_37E160(520);
    goto LABEL_46;
  }
  v12 = v31;
  if ( v30 == &v34 )
  {
LABEL_23:
    v34 = 0;
    v30 = &v34;
    goto LABEL_14;
  }
  while ( 1 )
  {
    v13 = v30;
    v14 = *v12++;
    *v30 = v14;
    if ( !v14 )
      break;
    ++v30;
    if ( v13 + 1 == &v34 )
      goto LABEL_23;
  }
  if ( v30 >= &v35 )
  {
    if ( !under_debugger )
      sub_37E160(519);
    goto LABEL_46;
  }
LABEL_14:
  *v30 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a6 + 8LL))(a6)
    || (v19 = a6[5]) == 0
    || (v31 = (char *)*v11, LODWORD(v32) = a7, (v20 = (char *)sub_253270(v19, (unsigned __int64 *)&v31, 0)) == nullptr) )
  {
    (*(void (**)(_QWORD *, _QWORD, char *, ...))*a6)(a6, a4, "%s\n", s);
    return v36 - __readfsqword(0x28u);
  }
  if ( (int)(*(_DWORD *)(a2 + 596) - a3 - a4) > 0 )
    add_spaces();
  v21 = strlen(s);
  v22 = &s[v21];
  if ( &s[v21] >= &v35 )
  {
    if ( !under_debugger )
      sub_37E160(520);
    goto LABEL_46;
  }
  v23 = (char *)&unk_40EEB6;
  if ( v21 == 1023 )
  {
LABEL_37:
    *v22 = 0;
  }
  else
  {
    while ( 1 )
    {
      v24 = *v23++;
      *v22 = v24;
      if ( !v24 )
        break;
      if ( ++v22 == &v34 )
        goto LABEL_37;
    }
  }
  v31 = nullptr;
  v32 = 0;
  v25 = strlen(s);
  v31 = (char *)qvector_reserve();
  *(_QWORD *)&v32 = v25 + 1;
  memmove(v31, s, v25);
  v31[v25] = 0;
  sub_25B160(
    (__int64)a1,
    a7,
    a4,
    (void (__fastcall ***)(_QWORD, _QWORD, void *, __int64))a6,
    (__int64 *)&v31,
    *(_DWORD *)(a2 + 596) - a4,
    *(_DWORD *)(a2 + 596) - a4 + 3,
    v20);
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree();
  }
  return v36 - __readfsqword(0x28u);
}

