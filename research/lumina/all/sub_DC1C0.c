__int64 *__fastcall sub_DC1C0(__int64 a1, size_t a2)
{
  __int64 *v2; // rax
  __int64 *v3; // rcx

  v2 = sub_DBFF0(a1, a2);
  v3 = v2;
  if ( v2 )
    return (__int64 *)memset(v2, 0, a2);
  return v3;
}
