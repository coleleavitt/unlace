__int64 __fastcall sub_8FD0(__int64 a1)
{
  void *v2; // rax
  void *v3; // rbp
  void *v4; // rax
  size_t v6; // rax
  size_t v7; // r12
  void *v8; // rdi
  size_t v9; // r13
  const char *dli_fname; // r12
  size_t v11; // rax
  size_t v12; // rbp
  __int64 v13; // rax
  void *v14; // rdi
  size_t v15; // r13
  __int64 v16; // rax
  Dl_info s; // [rsp+0h] [rbp-458h] BYREF
  char data[1032]; // [rsp+20h] [rbp-438h] BYREF
  unsigned __int64 v19; // [rsp+428h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  memset(data, 0, 0x400u);
  if ( dl_iterate_phdr((int (*)(struct dl_phdr_info *, size_t, void *))callback, data) )
  {
    v6 = strlen(data);
    v7 = v6;
    if ( v6 )
    {
      v8 = *(void **)a1;
      v9 = v6 + 1;
      if ( *(_QWORD *)(a1 + 16) < v6 + 1 )
      {
        v13 = qvector_reserve();
        *(_QWORD *)a1 = v13;
        v8 = (void *)v13;
      }
      *(_QWORD *)(a1 + 8) = v9;
      memmove(v8, data, v7);
      *(_BYTE *)(*(_QWORD *)a1 + v7) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = 0;
    }
    *(_QWORD *)(a1 + 24) = dlopen(data, 5);
  }
  else
  {
    v2 = dlopen(nullptr, 1);
    v3 = v2;
    if ( !v2 )
      return 0;
    v4 = dlsym(v2, "PyFunction_New");
    if ( !v4 || !dladdr(v4, &s) )
      return 0;
    dli_fname = s.dli_fname;
    *(_QWORD *)(a1 + 24) = v3;
    if ( dli_fname && (v11 = strlen(dli_fname), (v12 = v11) != 0) )
    {
      v14 = *(void **)a1;
      v15 = v11 + 1;
      if ( *(_QWORD *)(a1 + 16) < v11 + 1 )
      {
        v16 = qvector_reserve();
        *(_QWORD *)a1 = v16;
        v14 = (void *)v16;
      }
      *(_QWORD *)(a1 + 8) = v15;
      memmove(v14, dli_fname, v12);
      *(_BYTE *)(*(_QWORD *)a1 + v12) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = 0;
    }
  }
  return 1;
}

