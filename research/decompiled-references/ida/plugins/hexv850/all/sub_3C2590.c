__int64 __fastcall sub_3C2590(__int64 a1, int a2)
{
  __int64 result; // rax

  result = 65280;
  if ( *(int *)(*(_QWORD *)(a1 + 304) + 4LL * a2) <= 14 )
    return 0xFFFFFFFFLL;
  return result;
}

