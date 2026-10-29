void __fastcall sub_B3F50(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi

  v2 = *(void **)(a1 + 48);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    j__free(v2);
  }
  v3 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    j__free(v3);
  }
}
