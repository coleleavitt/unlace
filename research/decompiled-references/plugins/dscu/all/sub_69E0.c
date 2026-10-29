__int64 __fastcall sub_69E0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 *v4; // rbx
  __int64 v5; // rdi

  *a1 = off_1E690;
  v2 = a1[27];
  if ( v2 )
  {
    a1[28] = 0;
    qfree(v2);
  }
  v3 = a1[24];
  if ( v3 )
  {
    a1[25] = 0;
    qfree(v3);
  }
  v4 = a1 + 19;
  *a1 = &unk_1EB20;
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
  return qfree(a1);
}
