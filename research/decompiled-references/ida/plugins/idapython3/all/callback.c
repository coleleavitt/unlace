__int64 __fastcall callback(struct dl_phdr_info *a1, size_t a2, void *a3)
{
  const char *dlpi_name; // rdi
  void *v5; // rax
  void *v6; // rbp

  dlpi_name = a1->dlpi_name;
  if ( !dlpi_name )
    return 0;
  if ( !*dlpi_name )
    return 0;
  v5 = dlopen(dlpi_name, 5);
  v6 = v5;
  if ( !v5 )
    return 0;
  if ( !dlsym(v5, "PyFunction_New") )
  {
    dlclose(v6);
    return 0;
  }
  qstrncpy();
  dlclose(v6);
  return 1;
}

