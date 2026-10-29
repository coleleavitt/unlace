void __fastcall sub_63BB0(__int64 a1)
{
  void *v2; // rdi
  __int64 v3; // rdi

  *(_QWORD *)a1 = &unk_99A08;
  v2 = *(void **)(a1 + 56);
  if ( v2 )
    operator delete[](v2);
  v3 = *(_QWORD *)(a1 + 216);
  *(_QWORD *)(a1 + 240) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 224) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 24) )
  {
    *(_QWORD *)(a1 + 32) = 0;
    qfree();
  }
}

