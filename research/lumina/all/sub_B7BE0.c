__int64 __fastcall sub_B7BE0(__int64 a1, __int64 a2, const char *a3)
{
  unsigned int v4; // r12d
  const char *v5; // rax
  const char *v6; // rbx

  v4 = 0;
  v5 = (const char *)sub_195A60(a2);
  if ( !v5 )
    return v4;
  v6 = v5;
  if ( !strcasecmp(v5, "idb") || !strcasecmp(v6, "i64") )
  {
    v4 = 1;
    sub_B79C0(a1, a3);
    return v4;
  }
  return 0;
}
