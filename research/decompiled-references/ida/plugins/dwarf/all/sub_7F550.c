void *__fastcall sub_7F550(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // rcx
  void *v3; // rbx

  v2 = a1[2];
  v3 = &unk_ABD75;
  if ( v2 && a2 < v2 - 1 && a1[4] )
  {
    v3 = (void *)(a2 + a1[1]);
    qlgetz(a1[4], a1[5] + a2, v3, v2 - a2);
  }
  return v3;
}

