__int64 __fastcall sub_6510(__int64 a1, const char *a2, __int64 *a3)
{
  void *v5; // rax
  void *v6; // rax
  char *v7; // rax

  if ( *(_QWORD *)a1 )
    return 1;
  v5 = dlopen(a2, 2);
  *(_QWORD *)a1 = v5;
  if ( !v5 )
  {
    if ( a3 )
    {
      v7 = dlerror();
      sub_6450(a3, (__int64)"%s", v7);
    }
    return 0;
  }
  v6 = dlsym(v5, "rust_demangle_callback");
  *(_QWORD *)(a1 + 8) = v6;
  if ( !v6 )
  {
    if ( *(_QWORD *)a1 )
    {
      dlclose(*(void **)a1);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 8) = 0;
    }
    if ( a3 )
    {
      sub_6450(a3, (__int64)"Could not find function rust_demangle_callback in %s", a2);
      return 0;
    }
    return 0;
  }
  return 1;
}

