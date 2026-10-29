__int64 __fastcall sub_56640(const char **a1, const char *a2)
{
  unsigned int v2; // r12d
  const char **v3; // rbp
  const char *v4; // r13
  __int64 v5; // rax
  void *v6; // rsi
  void (__fastcall ***v7)(void *); // r13
  int v8; // edx
  int v9; // eax
  void (__fastcall *v10)(void *); // rdx
  void (__fastcall *v11)(void *); // rax
  size_t v12; // rax
  size_t v13; // r15
  size_t v14; // rbx
  __int64 v15; // rdi
  void (__fastcall *v17)(void *); // rax
  void (__fastcall *v18)(void *); // rdx
  void (__fastcall *v19)(void *); // rax
  void *v21; // [rsp+20h] [rbp-58h] BYREF
  __int128 v22; // [rsp+28h] [rbp-50h]
  unsigned __int64 v23; // [rsp+38h] [rbp-40h]

  v2 = 0;
  v3 = a1;
  v23 = __readfsqword(0x28u);
  v4 = *a1;
  if ( !*a1 )
    return (unsigned int)-1;
  while ( 1 )
  {
    v21 = 0;
    v22 = 0;
    v12 = strlen(v4);
    v13 = v12 + 1;
    v14 = v12;
    v21 = (void *)qvector_reserve((__int64)&v21, 0, v12 + 1, 1);
    *(_QWORD *)&v22 = v13;
    memmove(v21, v4, v14);
    *((_BYTE *)v21 + v14) = 0;
    if ( (unsigned __int64)v22 <= 1 )
      goto LABEL_14;
    v5 = operator new(0x30u);
    *(_QWORD *)v5 = &off_A0628;
    v6 = v21;
    *(_OWORD *)(v5 + 16) = 0;
    v7 = (void (__fastcall ***)(void *))v5;
    *(_DWORD *)(v5 + 8) = 1;
    *(_OWORD *)(v5 + 32) = 0;
    if ( (unsigned int)qregcomp() )
    {
      if ( v7 )
      {
        v17 = (*v7)[2];
        if ( (char *)v17 == (char *)sub_38540 )
        {
          *v7 = (void (__fastcall **)(void *))&off_A0628;
          qregfree();
          operator delete(v7, 0x30u);
          v15 = (__int64)v21;
          if ( !v21 )
            goto LABEL_16;
        }
        else
        {
          ((void (__fastcall *)(void (__fastcall ***)(void *), void *))v17)(v7, v6);
          v15 = (__int64)v21;
          if ( !v21 )
          {
LABEL_16:
            if ( strcasecmp(*v3, a2) )
              return (unsigned int)-1;
            return v2;
          }
        }
      }
      else
      {
LABEL_14:
        v15 = (__int64)v21;
        if ( !v21 )
          goto LABEL_16;
      }
      *(_QWORD *)&v22 = 0;
      qfree(v15);
      goto LABEL_16;
    }
    if ( v21 )
    {
      *(_QWORD *)&v22 = 0;
      qfree((__int64)v21);
    }
    if ( !v7 )
      goto LABEL_16;
    v8 = qregexec();
    v9 = *((_DWORD *)v7 + 2) - 1;
    if ( !v8 )
      break;
    *((_DWORD *)v7 + 2) = v9;
    ++v3;
    ++v2;
    if ( v9 )
    {
LABEL_12:
      v4 = *v3;
      if ( !*v3 )
        return (unsigned int)-1;
    }
    else
    {
      v10 = **v7;
      if ( v10 == sub_387B0 )
      {
        v11 = (*v7)[2];
        if ( (char *)v11 == (char *)sub_38540 )
        {
          *v7 = (void (__fastcall **)(void *))&off_A0628;
          qregfree();
          operator delete(v7, 0x30u);
        }
        else
        {
          ((void (__fastcall *)(void (__fastcall ***)(void *), const char *))v11)(v7, a2);
        }
        goto LABEL_12;
      }
      ((void (__fastcall *)(void (__fastcall ***)(void *), const char *))v10)(v7, a2);
      v4 = *v3;
      if ( !*v3 )
        return (unsigned int)-1;
    }
  }
  *((_DWORD *)v7 + 2) = v9;
  if ( !v9 )
  {
    v18 = **v7;
    if ( v18 == sub_387B0 )
    {
      v19 = (*v7)[2];
      if ( (char *)v19 == (char *)sub_38540 )
      {
        *v7 = (void (__fastcall **)(void *))&off_A0628;
        qregfree();
        operator delete(v7, 0x30u);
      }
      else
      {
        ((void (__fastcall *)(void (__fastcall ***)(void *), const char *))v19)(v7, a2);
      }
    }
    else
    {
      ((void (__fastcall *)(void (__fastcall ***)(void *), const char *))v18)(v7, a2);
    }
  }
  return v2;
}
