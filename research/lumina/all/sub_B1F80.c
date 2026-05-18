unsigned __int64 __fastcall sub_B1F80(_QWORD *a1, __int64 *a2)
{
  const char *v2; // r13
  size_t v3; // rdx

  v2 = s1;
  sub_B19C0((__int64)(a1 + 2), a2);
  if ( a1[15] )
    v2 = (const char *)a1[14];
  if ( v2 )
  {
    v3 = strlen(v2) + 1;
  }
  else
  {
    v3 = 1;
    v2 = "";
  }
  sub_9E3C0(a2, v2, v3);
  return sub_B1E90(a1 + 17, a2);
}
