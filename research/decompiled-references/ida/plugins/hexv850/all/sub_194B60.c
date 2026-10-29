__int64 __fastcall sub_194B60(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  if ( *(_DWORD *)(a2 + 24) == -1 )
    *(_DWORD *)(a2 + 24) = *(_DWORD *)(result + 24);
  if ( *(_DWORD *)(a2 + 28) == -1 )
    *(_DWORD *)(a2 + 28) = *(_DWORD *)(result + 28);
  if ( *(_QWORD *)(a2 + 8) == -1 )
    *(_QWORD *)(a2 + 8) = *(_QWORD *)(result + 8);
  if ( *(_QWORD *)(a2 + 16) == -1 )
  {
    result = *(_QWORD *)(result + 16);
    *(_QWORD *)(a2 + 16) = result;
  }
  return result;
}

