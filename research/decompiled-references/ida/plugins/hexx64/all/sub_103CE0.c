__int64 __fastcall sub_103CE0(_QWORD *a1, double a2)
{
  _QWORD *v3; // rdi
  __int64 *v4; // rbx
  __int64 v5; // rdi

  v3 = a1 + 27;
  v4 = a1 + 19;
  *(v3 - 27) = off_4DD2C0;
  sub_66C80((__int64)v3, a2);
  sub_66C80((__int64)(a1 + 23), a2);
  *a1 = &unk_4EBE48;
  do
  {
    v5 = *v4;
    if ( *v4 )
    {
      v4[1] = 0;
      qfree(v5);
    }
    v4 -= 3;
  }
  while ( v4 != a1 + 7 );
  return qfree((__int64)a1);
}

