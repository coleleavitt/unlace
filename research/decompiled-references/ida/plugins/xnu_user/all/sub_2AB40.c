void *__fastcall sub_2AB40(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // rcx
  void *v3; // rbx

  v2 = a1[2];
  v3 = &unk_82629;
  if ( v2 && a2 < v2 - 1 && a1[4] )
  {
    v3 = (void *)(a2 + a1[1]);
    qlgetz();
  }
  return v3;
}

