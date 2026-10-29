__int64 __fastcall sub_D9DB0(__int64 a1, unsigned __int8 a2, double a3, __int64 a4, int a5, int a6, int a7)
{
  unsigned __int16 v7; // ax
  __int64 v8; // rdx

  if ( a1 )
  {
    v7 = *(_WORD *)(a1 + 20);
    v8 = v7;
    if ( (v7 & 0x202) == 0x202 && *(_BYTE *)(a1 + 22) == a2 )
      return *(_QWORD *)(a1 + 8);
    if ( (v7 & 1) == 0 )
    {
      LOWORD(v8) = v7 & 0x202;
      return sub_D9BE0(a1, a2, a3, v8, a5, a6, a7);
    }
  }
  return 0;
}
