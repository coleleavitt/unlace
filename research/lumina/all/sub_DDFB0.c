__int64 __fastcall sub_DDFB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // edx

  v2 = *(_QWORD *)(a1 + 40);
  v3 = *(_DWORD *)(v2 + 24);
  if ( !v3 || (unsigned __int8)(*(_BYTE *)a2 - 53) > 4u && *(_BYTE *)a2 != 45 )
    return sub_DDED0(v2, a2, v3);
  sub_DDED0(*(_QWORD *)(a1 + 40), *(_QWORD *)(a2 + 16), 0);
  if ( !**(_BYTE **)(v2 + 8) )
  {
    if ( (unsigned __int8)sub_C6820(*(unsigned __int8 **)(a2 + 16)) != 66 )
      sub_DDED0(v2, *(_QWORD *)(a2 + 24), 0);
    v3 = *(_DWORD *)(v2 + 24);
    return sub_DDED0(v2, a2, v3);
  }
  return 1;
}
