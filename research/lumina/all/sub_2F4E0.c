void __fastcall sub_2F4E0(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi

  v2 = *(void **)(a1 + 32);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 40) = 0;
    j__free(v2);
  }
  v3 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    j__free(v3);
  }
}
