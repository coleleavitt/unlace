__int64 __fastcall sub_104C0(__int64 a1, char a2)
{
  return ((1LL << (a2 - 1)) ^ ((1LL << a2) - 1) & a1) - (1LL << (a2 - 1));
}
