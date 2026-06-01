__int64 __fastcall sub_44FA0(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rdi

  clear_tinfo_t(a1 + 8);
  v5 = a1[5];
  if ( v5 )
  {
    a1[6] = 0;
    qfree(v5, a2, v4, a3);
  }
  v6 = a1[2];
  if ( v6 )
  {
    a1[3] = 0;
    qfree(v6, a2, v4, a3);
  }
  return cleanup_argloc(a1);
}
