void *__fastcall sub_324050(_QWORD *a1)
{
  void *result; // rax
  _QWORD *v2; // rbx

  result = &unk_4CBCC8;
  v2 = a1 + 19;
  *a1 = &unk_4CBCC8;
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

