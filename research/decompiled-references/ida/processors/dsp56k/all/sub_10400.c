__int64 __fastcall sub_10400(__int64 a1, double a2)
{
  __int64 v2; // rax
  const char *v3; // rdx

  v2 = *(unsigned __int16 *)(a1 + 24);
  v3 = nullptr;
  if ( (unsigned __int16)v2 <= 0x84u )
    v3 = *((const char **)&off_1AB60 + 2 * v2);
  return sub_DF80((__int64)"%a(%s): internal error in %s", a2, *(const char **)(a1 + 16), v3);
}

