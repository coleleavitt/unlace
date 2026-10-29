__int64 __fastcall sub_1C050(__int64 a1, const char *a2, __int64 *a3)
{
  void *v6; // rax
  void *v7; // rax
  void *v8; // rdi
  void *v9; // rax
  void *v10; // rdi
  void *v11; // rax
  char *v12; // rax

  if ( *(_QWORD *)a1 )
    return 1;
  v6 = dlopen(a2, 2);
  *(_QWORD *)a1 = v6;
  if ( !v6 )
  {
    if ( a3 )
    {
      v12 = dlerror();
      sub_10D20(a3, (__int64)"%s", v12);
    }
    return 0;
  }
  v7 = dlsym(v6, "swift_demangle_getDemangledName");
  v8 = *(void **)a1;
  *(_QWORD *)(a1 + 8) = v7;
  if ( !v7 )
  {
    if ( v8 )
    {
      dlclose(v8);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 24) = 0;
      *(_OWORD *)(a1 + 8) = 0;
    }
    if ( a3 )
    {
      sub_10D20(a3, (__int64)"Could not find function swift_demangle_getDemangledName in %s", a2);
      return 0;
    }
    return 0;
  }
  v9 = dlsym(v8, "swift_demangle_getSimplifiedDemangledName");
  v10 = *(void **)a1;
  *(_QWORD *)(a1 + 16) = v9;
  if ( !v9 )
  {
    if ( v10 )
    {
      dlclose(v10);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 24) = 0;
      *(_OWORD *)(a1 + 8) = 0;
    }
    if ( a3 )
    {
      sub_10D20(a3, (__int64)"Could not find function swift_demangle_getSimplifiedDemangledName in %s", a2);
      return 0;
    }
    return 0;
  }
  v11 = dlsym(v10, "swift_demangle_getModuleName");
  *(_QWORD *)(a1 + 24) = v11;
  if ( !v11 )
  {
    if ( *(_QWORD *)a1 )
    {
      dlclose(*(void **)a1);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 24) = 0;
      *(_OWORD *)(a1 + 8) = 0;
    }
    if ( a3 )
    {
      sub_10D20(a3, (__int64)"Could not find function swift_demangle_getModuleName in %s", a2);
      return 0;
    }
    return 0;
  }
  return 1;
}

