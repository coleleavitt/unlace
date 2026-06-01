unsigned __int64 __fastcall sub_180B0(__int64 a1)
{
  const char *v2; // rdx
  bool v3; // zf
  const char *v4; // [rsp+0h] [rbp-48h] BYREF
  __int64 v5; // [rsp+8h] [rbp-40h]
  char v6; // [rsp+18h] [rbp-30h]
  unsigned __int64 v7; // [rsp+28h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  *(_BYTE *)(a1 + 736) = 1;
  sub_56C40(&v4, a1 + 168);
  if ( v6 )
  {
    v2 = s1;
    if ( v5 )
      v2 = v4;
    sub_17F40(a1, (__int64)"AUTOHIDE REGISTRY\n[WARN] rebuild_cache failed: %s, disabling C++ exception analysis\n", v2);
    v3 = v6 == 0;
    *(_BYTE *)(a1 + 704) = 0;
    if ( !v3 && v4 )
    {
      v5 = 0;
      qfree(v4);
    }
  }
  else
  {
    *(_BYTE *)(a1 + 704) = 1;
  }
  return v7 - __readfsqword(0x28u);
}
