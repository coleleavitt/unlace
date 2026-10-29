__int64 __fastcall sub_6470(__int64 a1, double a2)
{
  __int64 v2; // rax
  const char *v3; // rdx

  v2 = *(unsigned __int16 *)(a1 + 24);
  v3 = nullptr;
  if ( (unsigned __int16)v2 <= 0xDEu )
    v3 = *((const char **)&off_105C0 + 2 * v2);
  return sub_5AB0((__int64)"%a(%s): internal error in %s", a2, *(const char **)(a1 + 16), v3);
}

