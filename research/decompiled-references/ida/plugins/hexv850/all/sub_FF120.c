__int64 __fastcall sub_FF120(_QWORD *a1)
{
  __int64 *v2; // rdi
  _QWORD *v3; // rbx

  v2 = a1 + 27;
  v3 = a1 + 19;
  *(v2 - 27) = (__int64)off_4B0CA0;
  sub_62200(v2);
  sub_62200(a1 + 23);
  *a1 = &unk_4BEC88;
  do
  {
    if ( *v3 )
    {
      v3[1] = 0;
      qfree();
    }
    v3 -= 3;
  }
  while ( v3 != a1 + 7 );
  return qfree();
}

