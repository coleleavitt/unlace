void *__fastcall sub_FF7B0(_QWORD *a1)
{
  __int64 *v2; // rdi
  _QWORD *v3; // rbx
  __int64 *v4; // rdi
  _QWORD *v5; // rbp
  void *result; // rax

  v2 = a1 + 27;
  v3 = a1 + 19;
  *(v2 - 27) = (__int64)off_4AFD40;
  sub_62900(v2);
  v4 = a1 + 23;
  v5 = a1 + 7;
  sub_62900(v4);
  result = &unk_4BDC88;
  *(v5 - 7) = &unk_4BDC88;
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

