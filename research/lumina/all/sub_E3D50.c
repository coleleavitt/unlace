unsigned __int64 __fastcall sub_E3D50(__int64 *a1)
{
  __int64 v1; // rax
  __int64 i; // r12
  unsigned __int64 result; // rax

  v1 = *a1;
  for ( i = a1[1]; *a1 > (unsigned __int64)(a1 + 2); v1 = *a1 )
  {
    *a1 = v1 - 24;
    sub_D8D00((__int64)a1, *(unsigned __int16 *)(v1 + 2), (__int64 *)(v1 + 8));
  }
  result = sub_DBD10(i, "parser stack overflow");
  a1[1] = i;
  return result;
}
