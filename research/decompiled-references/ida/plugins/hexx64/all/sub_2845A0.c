char __fastcall sub_2845A0(__int64 a1, __int64 a2, double a3)
{
  unsigned int v3; // edx
  __int64 v4; // rdx
  char result; // al
  __int64 v6; // rax

  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 == 57 )
  {
    if ( *(_QWORD *)(a1 + 24) == a2 )
      return 0;
    v6 = sub_284360(a1, a2, nullptr, a3);
    return sub_29CC80((_QWORD *)(v6 + 64));
  }
  if ( v3 > 0x39 )
  {
    if ( v3 - 73 > 3 )
      return v3 == 49 || v3 - 17 <= 1;
    return *(_QWORD *)(a1 + 24) == a2;
  }
  if ( v3 == 16 )
    return *(_QWORD *)(a1 + 24) == a2;
  if ( v3 - 22 > 1 )
    return v3 == 49 || v3 - 17 <= 1;
  v4 = *(_QWORD *)(a1 + 24);
  if ( a2 == v4 )
    v4 = *(_QWORD *)(a1 + 32);
  result = 0;
  if ( *(_DWORD *)(v4 + 8) == 61 )
    return sub_255A30(*(__int64 **)(v4 + 24)) == 0;
  return result;
}

