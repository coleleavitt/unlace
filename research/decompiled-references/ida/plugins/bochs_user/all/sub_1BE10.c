__int64 __fastcall sub_1BE10(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi

  v3 = a1[134];
  if ( v3 )
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v3 + 64LL))(v3) != 1 )
      return 0xFFFFFFFFLL;
    if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) == 2 )
      sub_1BC60(a1);
    return 1;
  }
  else
  {
    if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 2 )
      return 0xFFFFFFFFLL;
    return 1;
  }
}

