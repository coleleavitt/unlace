int __fastcall sub_6220(__int64 a1)
{
  void *v2; // rdi
  int result; // eax

  v2 = *(void **)a1;
  if ( v2 )
  {
    result = dlclose(v2);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
  }
  return result;
}

