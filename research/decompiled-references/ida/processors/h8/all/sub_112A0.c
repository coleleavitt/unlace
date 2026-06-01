__int64 __fastcall sub_112A0(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 392) != -1 )
  {
    if ( *(_QWORD *)(a1 + 400) != -1 )
      op_offset();
    op_offset();
    **(_DWORD **)(a1 + 376) |= 0x200u;
  }
  sub_106C0(a1, 3);
  return 1;
}

