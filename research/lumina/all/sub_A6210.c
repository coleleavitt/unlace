unsigned __int64 __fastcall sub_A6210(_QWORD *a1, __int64 *a2)
{
  const char *v2; // r12
  size_t v4; // rdx
  const char *v5; // rsi
  const char *v6; // r12
  size_t v7; // rdx

  v2 = s1;
  if ( a1[3] )
    v2 = (const char *)a1[2];
  if ( v2 )
  {
    v4 = strlen(v2) + 1;
  }
  else
  {
    v4 = 1;
    v2 = "";
  }
  v5 = v2;
  v6 = s1;
  sub_9E3C0(a2, v5, v4);
  if ( a1[6] )
    v6 = (const char *)a1[5];
  if ( v6 )
  {
    v7 = strlen(v6) + 1;
  }
  else
  {
    v7 = 1;
    v6 = "";
  }
  sub_9E3C0(a2, v6, v7);
  return sub_69D50(a2);
}
