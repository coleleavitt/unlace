__int64 __fastcall sub_9040(__int64 a1, double a2)
{
  __int64 v2; // rax
  const char *v3; // rdx

  v2 = *(unsigned __int16 *)(a1 + 24);
  v3 = nullptr;
  if ( (unsigned __int16)v2 <= 0x8Fu )
    v3 = off_14D40[2 * v2];
  return sub_6A60((__int64)"%a(%s): internal error in %s", a2, *(const char **)(a1 + 16), v3);
}

