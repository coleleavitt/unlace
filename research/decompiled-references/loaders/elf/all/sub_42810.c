__int64 __fastcall sub_42810(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rbp
  const char *v5; // rdi
  const char *v6; // rdi

  v2 = a1[32];
  v3 = a1[31];
  v4 = v3 + 24 * v2;
  if ( v3 != v4 )
  {
    do
    {
      v5 = &s1;
      if ( *(_QWORD *)(v3 + 8) )
        v5 = *(const char **)v3;
      v3 += 24;
      import_module(v5, 0, -1, 0, "linux");
    }
    while ( v4 != v3 );
    v2 = a1[32];
  }
  v6 = ".dynsym";
  if ( !v2 )
    v6 = ".symtab";
  return import_module(v6, 0, a1[34], 0, "linux");
}
