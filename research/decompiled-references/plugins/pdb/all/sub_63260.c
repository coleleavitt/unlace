__int64 __fastcall sub_63260(__int64 a1)
{
  unsigned int v1; // esi

  v1 = *(_DWORD *)(a1 + 94);
  if ( v1 > 0xFFF && !sub_5F700((_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL), v1) )
    return 0;
  return v1;
}
