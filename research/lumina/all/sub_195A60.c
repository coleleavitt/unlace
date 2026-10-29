char *__fastcall sub_195A60(__int64 a1)
{
  const char *v1; // rax
  char *v2; // rax

  if ( !a1 )
    return nullptr;
  v1 = (const char *)sub_1976D0(a1);
  v2 = strrchr(v1, 46);
  if ( v2 )
    return v2 + 1;
  else
    return nullptr;
}
