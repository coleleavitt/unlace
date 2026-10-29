__int64 __fastcall sub_250F80(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx
  int v4; // edx

  *(_DWORD *)(a1 + 8) |= 1u;
  while ( 1 )
  {
    result = sub_2506C0(*(__int64 **)(a1 + 64), a2, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8));
    v3 = *(_QWORD *)(a1 + 64);
    v4 = *(_DWORD *)(v3 + 8);
    if ( (v4 & 8) == 0 )
      break;
    *(_DWORD *)(v3 + 8) = v4 & 0xFFFFFFF7;
  }
  return result;
}

