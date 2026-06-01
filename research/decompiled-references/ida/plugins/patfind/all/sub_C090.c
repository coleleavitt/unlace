void __fastcall sub_C090(__int64 a1)
{
  void *v2; // rdi

  v2 = *(void **)(a1 + 16);
  if ( v2 )
    operator delete[](v2);
  if ( *(_QWORD *)a1 )
    operator delete[](*(void **)a1);
}

