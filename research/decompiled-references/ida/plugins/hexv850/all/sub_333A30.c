__int64 __fastcall sub_333A30(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // r12

  if ( (unsigned int)(*(_DWORD *)a2 - 12) > 1 )
    return 0;
  if ( *(_BYTE *)(a2 + 32) != 10 || (v3 = *(_QWORD *)(a2 + 40), v4 = a2 + 48, *(_BYTE *)v3 != 6) )
  {
    if ( *(_DWORD *)a2 != 12 )
      return 0;
    if ( *(_BYTE *)(a2 + 48) != 10 )
      return 0;
    v3 = *(_QWORD *)(a2 + 56);
    if ( *(_BYTE *)v3 != 6 )
      return 0;
    v4 = a2 + 32;
  }
  v5 = *(_QWORD *)(v3 + 8);
  if ( (unsigned __int8)is_spec_ea() || *(_BYTE *)v4 != 2 )
    return 0;
  v6 = sub_325150(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 16LL), *(_DWORD *)(v4 + 4), 1);
  if ( *(_DWORD *)a2 == 13 )
    v6 = -v6;
  v7 = v6 + v5;
  *a1 = v7;
  return 1;
}

