__int64 __fastcall sub_3B10(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 6;
  if ( *(_DWORD *)(a2 + 8) == 35 && *(_QWORD *)(a2 + 40) == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 144LL) )
  {
    result = 3;
    if ( !*(_QWORD *)(a2 + 56) )
      return 7;
  }
  return result;
}

