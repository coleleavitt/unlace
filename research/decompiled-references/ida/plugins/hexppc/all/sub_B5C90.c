__int64 __fastcall sub_B5C90(_QWORD *a1)
{
  __int64 v1; // rbx
  void *v2; // rdi

  v1 = a1[9];
  *a1 = off_4C91A0;
  while ( v1 )
  {
    sub_B5A80(*(_QWORD **)(v1 + 24));
    v2 = (void *)v1;
    v1 = *(_QWORD *)(v1 + 16);
    operator delete(v2, 0x28u);
  }
  return j__qfree();
}

