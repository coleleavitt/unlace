void __fastcall sub_C9690(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  if ( (*(_WORD *)(a1 + 20) & 0x9000) != 0 )
    sub_C93F0(a1, a2, a3, a4, a5, a6);
  if ( *(_DWORD *)(a1 + 32) )
  {
    sub_C9250(*(_QWORD *)(a1 + 24), *(_QWORD **)(a1 + 40));
    *(_DWORD *)(a1 + 32) = 0;
  }
  *(_QWORD *)(a1 + 8) = 0;
}
