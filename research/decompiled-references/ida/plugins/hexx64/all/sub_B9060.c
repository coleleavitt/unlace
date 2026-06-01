__int64 __fastcall sub_B9060(__int64 a1, __int64 a2, double a3)
{
  __int64 v5; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // rdx

  if ( *(_BYTE *)a2 != 4 )
    return 0;
  if ( (unsigned __int8)sub_1206E0(*(_QWORD *)(a2 + 8)) )
  {
    v5 = *(_QWORD *)(a1 + 48);
    v6 = *(_QWORD **)(v5 + 296);
    v7 = &v6[*(_QWORD *)(v5 + 304)];
    if ( v6 == v7 )
      return (unsigned __int8)sub_B7DF0(v5, *(_DWORD *)(a1 + 56), a2, a3) ^ 1u;
    while ( *(_QWORD *)(a2 + 8) != *v6 )
    {
      if ( v7 == ++v6 )
        return (unsigned __int8)sub_B7DF0(v5, *(_DWORD *)(a1 + 56), a2, a3) ^ 1u;
    }
    if ( v6 == v7 )
      return (unsigned __int8)sub_B7DF0(v5, *(_DWORD *)(a1 + 56), a2, a3) ^ 1u;
  }
  return 0;
}

