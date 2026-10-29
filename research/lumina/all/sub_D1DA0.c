void __fastcall sub_D1DA0(__int64 a1, __int64 a2)
{
  while ( *(_BYTE *)(a1 - 1) || *(_BYTE *)(a1 - 2) || *(_BYTE *)(a1 - 3) || *(_BYTE *)(a1 - 4) )
    --a1;
  sub_C91C0(a1 - 4, a2);
}
