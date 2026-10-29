__int64 __fastcall sub_C3CE0(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi

  if ( *(_BYTE *)a2 != 9 )
    return 0;
  v3 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)(**(_QWORD **)(a1 + 48) + 8LL * *(int *)(v3 + 16)) )
    return 0;
  sub_C3BC0((_QWORD *)(a1 + 56), (int *)(v3 + 16));
  return 0;
}

