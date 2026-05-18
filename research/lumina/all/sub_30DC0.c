__int64 __fastcall sub_30DC0(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (*(_BYTE *)(a1 + 488) & 1) == 0 )
  {
    if ( !unk_2439A0 )
      sub_198E10(0);
    BUG();
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 312) + 40LL))(
         *(_QWORD *)(a1 + 312),
         a2,
         a3 + 16,
         a3 + 40) )
  {
    return 0;
  }
  if ( *(_QWORD *)(a2 + 24) <= 1u )
    sub_2DC20((__int64 *)(a2 + 16), "Set password operation failed");
  return 0xFFFFFFFFLL;
}
