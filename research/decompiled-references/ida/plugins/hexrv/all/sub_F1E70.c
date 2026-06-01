void __fastcall sub_F1E70(_QWORD *a1)
{
  __int64 v1; // rbx
  void *v2; // rdi

  v1 = a1[9];
  *a1 = off_4AF9E0;
  while ( v1 )
  {
    sub_F1CA0(*(_QWORD **)(v1 + 24));
    v2 = (void *)v1;
    v1 = *(_QWORD *)(v1 + 16);
    operator delete(v2, 0x28u);
  }
}

