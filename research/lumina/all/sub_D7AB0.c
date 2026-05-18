void __fastcall sub_D7AB0(__int64 *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v5; // rdi

  v5 = *a1;
  if ( a2 )
  {
    sub_D7810(v5, a2);
    v5 = *a1;
  }
  if ( a3 )
    sub_D7810(v5, a3);
}
