__int64 __fastcall sub_16F570(_BYTE *a1)
{
  _BYTE *v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // rbp

  v1 = sub_11C940(a1, 1);
  if ( !v1 )
    return 0;
  if ( v1[64] != 8 )
    return 1;
  v2 = *((_QWORD *)v1 + 9);
  if ( (unsigned int)(*(_DWORD *)(v2 + 284) - 32) > 1 )
    return 1;
  v3 = *(_QWORD *)(v2 + 24);
  v4 = v3 + 80LL * *(_QWORD *)(v2 + 32);
  if ( v4 != v3 )
  {
    while ( *(_BYTE *)v3 != 4 || !(unsigned __int8)sub_16F570(*(_QWORD *)(v3 + 8)) )
    {
      v3 += 80;
      if ( v4 == v3 )
        return 0;
    }
    return 1;
  }
  return 0;
}

