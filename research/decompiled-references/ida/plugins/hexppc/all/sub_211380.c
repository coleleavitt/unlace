_BOOL8 __fastcall sub_211380(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  _BOOL8 result; // rax

  result = 0;
  if ( a4 && *(_QWORD *)(a1 + 32) != *(_QWORD *)(a1 + 48) && *(_BYTE *)a2 == 9 )
    return *(_DWORD *)(*(_QWORD *)(a2 + 8) + 16LL) == *(_DWORD *)(a1 + 56);
  return result;
}

