__int64 __fastcall sub_7010(__int64 a1, double a2)
{
  __int64 v2; // rax
  const char *v3; // rdx

  v2 = *(unsigned __int16 *)(a1 + 24);
  v3 = nullptr;
  if ( (unsigned __int16)v2 <= 0x68u )
    v3 = *((const char **)&off_12CE0 + 2 * v2);
  return sub_5B90((__int64)"%a(%s): internal error in %s", a2, *(const char **)(a1 + 16), v3);
}

