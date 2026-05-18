__int64 __fastcall sub_1978B0(int a1, void *a2, signed __int64 a3)
{
  unsigned int v4; // eax
  unsigned int v5; // ebp

  if ( a3 < 0 )
  {
    if ( !unk_2439A0 )
      sub_198E10(1225);
    BUG();
  }
  v4 = read(a1, a2, a3);
  v5 = v4;
  if ( v4 != a3 )
    sub_18FA40(2 * (v4 != -1) + 1);
  return v5;
}
