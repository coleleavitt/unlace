__int64 __fastcall sub_18480(__int64 a1)
{
  __int64 result; // rax
  const char *v2; // rdx
  bool v3; // zf
  const char *v4; // [rsp+0h] [rbp-48h] BYREF
  __int64 v5; // [rsp+8h] [rbp-40h]
  char v6; // [rsp+18h] [rbp-30h]
  unsigned __int64 v7; // [rsp+28h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  *(_BYTE *)(a1 + 736) = 1;
  sub_53D00(&v4, a1 + 168, 2, 0);
  result = 1;
  if ( v6 )
  {
    v2 = s1;
    if ( v5 )
      v2 = v4;
    sub_17F40(
      a1,
      (__int64)"AUTOHIDE REGISTRY\n[WARN] populate_eh34_caches failed: %s, disabling C++ exception analysis\n",
      v2);
    v3 = v6 == 0;
    *(_BYTE *)(a1 + 704) = 0;
    if ( !v3 )
    {
      if ( v4 )
      {
        v5 = 0;
        qfree(v4);
      }
    }
    return 0;
  }
  return result;
}
