void __fastcall sub_75660(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi

  v2 = *(void **)(a1 + 120);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 128) = 0;
    j__free(v2);
  }
  v3 = *(void **)(a1 + 96);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 104) = 0;
    j__free(v3);
  }
  v4 = *(void **)(a1 + 64);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 72) = 0;
    j__free(v4);
  }
  v5 = *(void **)(a1 + 32);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 40) = 0;
    j__free(v5);
  }
  v6 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    j__free(v6);
  }
}
