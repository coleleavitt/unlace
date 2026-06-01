__int64 __fastcall sub_102A0(_QWORD *a1, const char *a2)
{
  __int64 *v3; // r12
  __int64 *v4; // rbx
  __int64 v5; // rdi

  v3 = a1 + 7;
  v4 = a1 + 19;
  *a1 = off_197D0;
  qfree(a1[26], a2);
  *a1 = &unk_19C30;
  do
  {
    v5 = *v4;
    if ( *v4 )
    {
      v4[1] = 0;
      qfree(v5, a2);
    }
    v4 -= 3;
  }
  while ( v4 != v3 );
  return qfree(a1, a2);
}

