__int64 __fastcall sub_22BB0(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  __int64 v3; // rdx
  int v4; // ecx
  __int64 v5; // rcx
  __int64 result; // rax

  v2 = *(_DWORD **)a2;
  v3 = *(_QWORD *)a2 + 16LL * *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)a2 == v3 )
    return 0;
  while ( 1 )
  {
    if ( *v2 == 2 )
    {
      v4 = v2[1];
      if ( v4 )
        break;
    }
    v2 += 4;
    if ( (_DWORD *)v3 == v2 )
      return 0;
  }
  v5 = (unsigned int)(v4 - 1);
  if ( (unsigned int)v5 > 0xD )
    return 7195;
  result = 4903;
  if ( *(_BYTE *)(a1 + 13692) )
  {
    result = dword_56B80[v5];
    if ( (unsigned int)result < 0x1327 )
      return 4903;
  }
  return result;
}

