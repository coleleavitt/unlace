__int64 __fastcall sub_B4BA0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rdx

  if ( *(_BYTE *)a2 != 4 )
    return 0;
  if ( (unsigned __int8)sub_11C220(*(_QWORD *)(a2 + 8)) )
  {
    v4 = *(_QWORD *)(a1 + 48);
    v5 = *(_QWORD **)(v4 + 296);
    v6 = &v5[*(_QWORD *)(v4 + 304)];
    if ( v5 == v6 )
      return (unsigned __int8)sub_B3930(v4, *(_DWORD *)(a1 + 56), a2) ^ 1u;
    while ( *(_QWORD *)(a2 + 8) != *v5 )
    {
      if ( v6 == ++v5 )
        return (unsigned __int8)sub_B3930(v4, *(_DWORD *)(a1 + 56), a2) ^ 1u;
    }
    if ( v5 == v6 )
      return (unsigned __int8)sub_B3930(v4, *(_DWORD *)(a1 + 56), a2) ^ 1u;
  }
  return 0;
}

