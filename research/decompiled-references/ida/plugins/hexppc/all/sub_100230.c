void *__fastcall sub_100230(_QWORD *a1)
{
  __int64 *v2; // rdi
  _QWORD *v3; // rbx
  __int64 *v4; // rdi
  _QWORD *v5; // rbp
  void *result; // rax

  v2 = a1 + 27;
  v3 = a1 + 19;
  *(v2 - 27) = (__int64)off_4CA420;
  sub_63240(v2);
  v4 = a1 + 23;
  v5 = a1 + 7;
  sub_63240(v4);
  result = &unk_4D8D28;
  *(v5 - 7) = &unk_4D8D28;
  do
  {
    if ( *v3 )
    {
      v3[1] = 0;
      result = (void *)qfree();
    }
    v3 -= 3;
  }
  while ( v3 != v5 );
  return result;
}

