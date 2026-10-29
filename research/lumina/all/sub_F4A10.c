__int64 __fastcall sub_F4A10(__int64 a1, __int64 a2, char ***a3)
{
  unsigned int v3; // eax
  __int64 v4; // r9
  char *v5; // rsi

  v3 = sub_CD0F0(*a3);
  v5 = nullptr;
  if ( v3 <= 0x23 )
    v5 = off_23C0E0[v3];
  return sub_F48B0(a1, v5, -1, 1u, nullptr, v4);
}
