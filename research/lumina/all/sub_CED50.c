__int64 __fastcall sub_CED50(__int64 a1)
{
  __int64 i; // rcx
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 j; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 k; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx

  for ( i = 0; ; ++i )
  {
    v2 = *(unsigned __int8 *)(a1 + i);
    v3 = (unsigned __int8)aRowid[i];
    if ( (_DWORD)v2 != (_DWORD)v3 )
      break;
    if ( !*(_BYTE *)(a1 + i) )
      return 1;
LABEL_3:
    ;
  }
  if ( byte_1BF000[v2] == byte_1BF000[v3] )
    goto LABEL_3;
  for ( j = 0; ; ++j )
  {
    v6 = *(unsigned __int8 *)(a1 + j);
    v7 = (unsigned __int8)aRowid_0[j];
    if ( (_DWORD)v6 != (_DWORD)v7 )
      break;
    if ( !*(_BYTE *)(a1 + j) )
      return 1;
LABEL_9:
    ;
  }
  if ( byte_1BF000[v6] == byte_1BF000[v7] )
    goto LABEL_9;
  for ( k = 0; ; ++k )
  {
    v9 = *(unsigned __int8 *)(a1 + k);
    v10 = (unsigned __int8)aOid[k];
    if ( (_DWORD)v9 != (_DWORD)v10 )
      break;
    if ( !*(_BYTE *)(a1 + k) )
      return 1;
LABEL_15:
    ;
  }
  if ( byte_1BF000[v9] == byte_1BF000[v10] )
    goto LABEL_15;
  return 0;
}
