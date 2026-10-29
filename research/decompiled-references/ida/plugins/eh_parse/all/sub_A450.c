__int64 __fastcall sub_A450(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  char *v4; // r13
  char *v5; // rbx
  unsigned int v6; // r14d
  char *v7; // rbp
  const char *v8; // rdi
  __int64 v10; // rbx
  __int64 v11; // r13
  __int64 v12; // rbx
  char v13; // al
  struct _Unwind_Exception *v14; // rbx
  __int64 v15; // [rsp+8h] [rbp-50h] BYREF
  char *s1; // [rsp+10h] [rbp-48h] BYREF
  __int128 v17; // [rsp+18h] [rbp-40h]
  unsigned __int64 v18; // [rsp+28h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  v1 = a1[9];
  if ( (unsigned __int64)(v1 - 1) > 0xFFFFFFFFFFFFFFFDLL )
    return (unsigned int)-1;
  v2 = *a1;
  s1 = nullptr;
  v17 = 0;
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(v2 + 8) + 4LL) - 12) <= 1 && !(unsigned __int8)getinf_flag(3, 4) )
    v1 = (unsigned int)v1 & 0xFFFFFFFE;
  if ( get_ea_name(&s1, v1, 512, 0) > 0 )
  {
LABEL_4:
    if ( (unsigned __int64)v17 <= 1 )
    {
      if ( !under_debugger )
      {
        v14 = (struct _Unwind_Exception *)interr(30572);
        if ( s1 )
        {
          *(_QWORD *)&v17 = 0;
          qfree(s1);
        }
        _Unwind_Resume(v14);
      }
      BUG();
    }
    v4 = s1;
    v5 = sub_9F40(s1);
    if ( !strncmp(v5, "objc_", 5u) )
    {
      v6 = 2;
    }
    else
    {
      v6 = strncmp(v5, "gcc_", 4u);
      if ( v6 )
      {
        if ( !strncmp(v5, "gxx_", 4u) )
        {
          v6 = 1;
        }
        else
        {
          v6 = 1;
          if ( strncmp(v5, "gnat_", 5u) )
          {
LABEL_25:
            v6 = -1;
            goto LABEL_19;
          }
        }
      }
    }
    for ( ; *v5 != 95; ++v5 )
      ;
    v7 = v5 + 1;
    if ( !strncmp(v5 + 1, "personality_", 0xCu) )
    {
      if ( v5[1] != 95 )
      {
        do
          ++v7;
        while ( *v7 != 95 );
      }
      if ( v7[1] == 118 && v7[2] == 48 || !strncmp(v7 + 1, "seh0", 4u) )
      {
        v8 = v7 + 3;
LABEL_15:
        if ( !strncmp(v8, "_CXXABI_1.3", 0xBu) )
          v6 |= 0x10000u;
        if ( *(_DWORD *)(*(_QWORD *)(*a1 + 8LL) + 4LL) == 13 )
          v6 |= 0x20000u;
        goto LABEL_19;
      }
      if ( v7[1] == 115 && v7[2] == 106 && v7[3] == 48 )
      {
        v6 |= 0x100u;
        v8 = v7 + 4;
        goto LABEL_15;
      }
    }
    goto LABEL_25;
  }
  if ( (unsigned __int8)sub_13780(*a1, a1[9], &v15) )
  {
    v10 = v15;
    if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(*a1 + 8LL) + 4LL) - 12) > 1 )
    {
      v11 = a1[9];
LABEL_35:
      if ( v11 == v10 )
        goto LABEL_27;
      v12 = v15;
      goto LABEL_37;
    }
    if ( v15 == -1 )
    {
      if ( a1[9] == -1 )
        goto LABEL_27;
      getinf_flag(3, 4);
    }
    else
    {
      v13 = getinf_flag(3, 4);
      v11 = a1[9];
      if ( !v13 )
        v10 = (unsigned int)v10 & 0xFFFFFFFE;
      if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(*a1 + 8LL) + 4LL) - 12) > 1 )
        goto LABEL_35;
      if ( v11 == -1 )
      {
        v12 = v15;
LABEL_47:
        if ( v12 != -1 && !(unsigned __int8)getinf_flag(3, 4) )
          v12 = (unsigned int)v12 & 0xFFFFFFFE;
LABEL_37:
        if ( get_ea_name(&s1, v12, 512, 0) > 0 )
          goto LABEL_4;
        goto LABEL_27;
      }
      if ( !(unsigned __int8)getinf_flag(3, 4) )
        v11 = (unsigned int)v11 & 0xFFFFFFFE;
      if ( v10 == v11 )
        goto LABEL_27;
    }
    v12 = v15;
    if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(*a1 + 8LL) + 4LL) - 12) > 1 )
      goto LABEL_37;
    goto LABEL_47;
  }
LABEL_27:
  v4 = s1;
  v6 = -1;
LABEL_19:
  if ( v4 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v4);
  }
  return v6;
}

