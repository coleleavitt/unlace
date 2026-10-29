void *__fastcall sub_59A0(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  void *v3; // rdx

  v2 = a1[2];
  v3 = &unk_190F8;
  if ( v2 && a2 < v2 - 1 && a1[4] )
    return (void *)(a2 + a1[1]);
  return v3;
}

