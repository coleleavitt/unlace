void *__fastcall sub_AA70(_QWORD *a1)
{
  void *result; // rax
  _QWORD *v2; // rbx

  result = &unk_3CA80;
  v2 = a1 + 19;
  *a1 = &unk_3CA80;
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
