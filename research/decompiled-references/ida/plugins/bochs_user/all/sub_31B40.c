__int64 __fastcall sub_31B40(__int64 a1, __m128i **a2)
{
  __int64 v2; // rax
  __int64 v3; // rdi

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 2704) + 48LL);
  if ( !*(_BYTE *)(v2 + 48) )
    return 4294967290LL;
  *(_BYTE *)(v2 + 48) = 0;
  v3 = *(_QWORD *)(a1 + 2768);
  if ( !*(_QWORD *)(v3 + 64) )
    return 4294967291LL;
  if ( (unsigned __int8)sub_31830((__int64 **)(v3 + 56), a2, 1) )
    return 1;
  return 4294967291LL;
}

