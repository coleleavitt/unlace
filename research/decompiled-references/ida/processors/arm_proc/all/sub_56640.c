__int64 __fastcall sub_56640(const char **a1, const char *a2)
{
  unsigned int v2; // r12d
  const char **v3; // rbp
  const char *v4; // r13
  __int64 v5; // rax
  void (__fastcall ***v6)(void *); // r13
  int v7; // edx
  int v8; // eax
  void (__fastcall *v9)(void *); // rdx
  void (__fastcall *v10)(void *); // rax
  size_t v11; // rax
  unsigned __int64 v12; // r15
  size_t v13; // rbx
  void (__fastcall *v15)(void *); // rax
  void (__fastcall *v16)(void *); // rdx
  void (__fastcall *v17)(void *); // rax
  void *v18; // [rsp+20h] [rbp-58h]

  v2 = 0;
  v3 = a1;
  v4 = *a1;
  if ( !*a1 )
    return (unsigned int)-1;
  while ( 1 )
  {
    v11 = strlen(v4);
    v12 = v11 + 1;
    v13 = v11;
    v18 = (void *)qvector_reserve();
    memmove(v18, v4, v13);
    *((_BYTE *)v18 + v13) = 0;
    if ( v12 <= 1 )
      goto LABEL_14;
    v5 = operator new(0x30u);
    *(_QWORD *)v5 = &off_A0628;
    *(_OWORD *)(v5 + 16) = 0;
    v6 = (void (__fastcall ***)(void *))v5;
    *(_DWORD *)(v5 + 8) = 1;
    *(_OWORD *)(v5 + 32) = 0;
    if ( (unsigned int)qregcomp() )
    {
      if ( v6 )
      {
        v15 = (*v6)[2];
        if ( (char *)v15 == (char *)sub_38540 )
        {
          *v6 = (void (__fastcall **)(void *))&off_A0628;
          qregfree();
          operator delete(v6, 0x30u);
          if ( !v18 )
            goto LABEL_16;
        }
        else
        {
          ((void (__fastcall *)(void (__fastcall ***)(void *), void *))v15)(v6, v18);
          if ( !v18 )
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
        if ( !v18 )
          goto LABEL_16;
      }
      qfree();
      goto LABEL_16;
    }
    if ( v18 )
      qfree();
    if ( !v6 )
      goto LABEL_16;
    v7 = qregexec();
    v8 = *((_DWORD *)v6 + 2) - 1;
    if ( !v7 )
      break;
    *((_DWORD *)v6 + 2) = v8;
    ++v3;
    ++v2;
    if ( v8 )
    {
LABEL_12:
      v4 = *v3;
      if ( !*v3 )
        return (unsigned int)-1;
    }
    else
    {
      v9 = **v6;
      if ( v9 == sub_387B0 )
      {
        v10 = (*v6)[2];
        if ( (char *)v10 == (char *)sub_38540 )
        {
          *v6 = (void (__fastcall **)(void *))&off_A0628;
          qregfree();
          operator delete(v6, 0x30u);
        }
        else
        {
          ((void (__fastcall *)(void (__fastcall ***)(void *), const char *))v10)(v6, a2);
        }
        goto LABEL_12;
      }
      ((void (__fastcall *)(void (__fastcall ***)(void *), const char *))v9)(v6, a2);
      v4 = *v3;
      if ( !*v3 )
        return (unsigned int)-1;
    }
  }
  *((_DWORD *)v6 + 2) = v8;
  if ( !v8 )
  {
    v16 = **v6;
    if ( v16 == sub_387B0 )
    {
      v17 = (*v6)[2];
      if ( (char *)v17 == (char *)sub_38540 )
      {
        *v6 = (void (__fastcall **)(void *))&off_A0628;
        qregfree();
        operator delete(v6, 0x30u);
      }
      else
      {
        ((void (__fastcall *)(void (__fastcall ***)(void *), const char *))v17)(v6, a2);
      }
    }
    else
    {
      ((void (__fastcall *)(void (__fastcall ***)(void *), const char *))v16)(v6, a2);
    }
  }
  return v2;
}

