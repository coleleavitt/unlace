__int64 __fastcall sub_EAE20(__int64 a1, unsigned int a2)
{
  char *v2; // rdx

  v2 = nullptr;
  if ( a1 )
    v2 = *(char **)(a1 + 56);
  return sub_EABB0(0x100Au, (__int64)"close", v2, a2);
}
