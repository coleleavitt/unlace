__int64 __fastcall sub_C3F40(__int64 a1, int a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 296LL);
  if ( !result )
    return 0;
  while ( *(_DWORD *)(result + 4) != a2 || *(_DWORD *)result != *(_DWORD *)(a1 + 32) && a2 >= 0 )
  {
    result = *(_QWORD *)(result + 24);
    if ( !result )
      return result;
  }
  return *(_QWORD *)(result + 8);
}
