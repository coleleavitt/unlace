__int64 __fastcall sub_1D300(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned int v5; // r12d
  __int64 qword; // rax

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
  v4 = v3 & a3;
  if ( v4 == -1 )
    return 0;
  if ( v3 == v4 )
    return 0;
  v5 = is_loaded();
  if ( !(_BYTE)v5 )
    return 0;
  if ( *(_BYTE *)(a1 + 13692) )
    qword = get_qword();
  else
    qword = (unsigned int)get_dword();
  *a2 = qword;
  return v5;
}

