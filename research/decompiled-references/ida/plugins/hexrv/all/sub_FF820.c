__int64 __fastcall sub_FF820(_QWORD *a1)
{
  __int64 *v2; // rdi
  _QWORD *v3; // rbx

  v2 = a1 + 27;
  v3 = a1 + 19;
  *(v2 - 27) = (__int64)off_4AFD40;
  sub_62900(v2);
  sub_62900(a1 + 23);
  *a1 = &unk_4BDC88;
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

