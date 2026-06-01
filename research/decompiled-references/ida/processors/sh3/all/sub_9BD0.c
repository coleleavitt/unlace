__int64 __fastcall sub_9BD0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi

  if ( *(_QWORD *)(a1 + 392) != -1 )
  {
    v2 = *(_QWORD *)(a1 + 904);
    if ( v2 != -1 )
      op_offset(v2, 0, 2, -1, 0, 0);
  }
  v3 = *(_QWORD *)(a1 + 896);
  if ( v3 != -1 )
    op_offset(v3, 0, 2, -1, 0, 0);
  if ( *(_QWORD *)(a1 + 400) != -1 )
    **(_DWORD **)(a1 + 376) &= ~0x2000u;
  return 1;
}

