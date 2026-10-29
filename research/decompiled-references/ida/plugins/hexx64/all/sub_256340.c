__int64 __fastcall sub_256340(__int64 a1, __int64 a2, double a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  int v5; // edx

  *(_DWORD *)(a1 + 8) |= 1u;
  while ( 1 )
  {
    result = sub_255A80(
               *(__int64 **)(a1 + 64),
               a2,
               *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8),
               a3);
    v4 = *(_QWORD *)(a1 + 64);
    v5 = *(_DWORD *)(v4 + 8);
    if ( (v5 & 8) == 0 )
      break;
    *(_DWORD *)(v4 + 8) = v5 & 0xFFFFFFF7;
  }
  return result;
}

