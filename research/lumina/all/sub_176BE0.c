__int64 __fastcall sub_176BE0(unsigned __int8 *a1, int a2)
{
  unsigned __int8 *v2; // rax
  unsigned __int8 v3; // dl

  v2 = sub_176840(a1, 0);
  if ( v2 )
  {
    v3 = *v2;
    if ( *v2 == 2 || v3 == 9 )
    {
      *((_QWORD *)v2 + 1) += a2;
      return 1;
    }
    if ( v3 == 3 )
    {
      sub_191940(v2 + 8, &unk_1D0EA0, v2 + 8, a2 == -1);
      return 1;
    }
    sub_18FA40(61);
  }
  return 0;
}
