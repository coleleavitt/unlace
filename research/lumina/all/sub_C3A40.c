__int64 __fastcall sub_C3A40(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = a2 + 4;
  do
    ++v2;
  while ( *(char *)(v2 - 1) < 0 && a2 + 13 > v2 );
  return v2 - a2;
}
