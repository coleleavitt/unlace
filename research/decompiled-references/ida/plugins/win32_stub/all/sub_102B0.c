_BOOL8 sub_102B0()
{
  int v0; // r12d
  __int64 v1; // rbx
  __int64 v2; // rax
  bool v3; // r13

  v0 = callui(1067);
  v1 = qalloc_or_throw();
  sub_10060(v1, v0);
  v2 = callui(16);
  v3 = v2 == 0;
  if ( !v2 && callui(60) )
  {
    callui(127);
    callui(131);
  }
  return v3;
}

