void *__fastcall sub_192C0(_QWORD *a1)
{
  void *result; // rax
  _QWORD *v2; // rbx

  result = &unk_65AF8;
  v2 = a1 + 19;
  *a1 = &unk_65AF8;
  do
  {
    if ( *v2 )
    {
      v2[1] = 0;
      result = (void *)qfree();
    }
    v2 -= 3;
  }
  while ( v2 != a1 + 7 );
  return result;
}

