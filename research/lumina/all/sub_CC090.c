__int64 __fastcall sub_CC090(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 17)
    || (result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 72) + 56LL))(*(_QWORD *)(a1 + 72)),
        !(_DWORD)result) )
  {
    if ( *(_BYTE *)(a1 + 22) != 5 || a2 == 4 )
      *(_BYTE *)(a1 + 22) = a2;
    return 0;
  }
  return result;
}
