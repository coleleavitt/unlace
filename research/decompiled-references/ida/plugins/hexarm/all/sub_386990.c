void *__fastcall sub_386990(_QWORD *a1)
{
  void *result; // rax
  _QWORD *v2; // rbx

  *a1 = off_4E0D40;
  if ( a1[24] )
  {
    a1[25] = 0;
    qfree();
  }
  result = &unk_4E7D28;
  v2 = a1 + 19;
  *a1 = &unk_4E7D28;
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

