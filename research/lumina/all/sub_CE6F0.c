__int64 __fastcall sub_CE6F0(__int64 a1)
{
  __int64 i; // rcx
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 j; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx

  for ( i = 0; ; ++i )
  {
    v2 = *(unsigned __int8 *)(a1 + i);
    v3 = (unsigned __int8)aTrue[i];
    if ( (_DWORD)v2 != (_DWORD)v3 )
      break;
    if ( !*(_BYTE *)(a1 + i) )
      return 0x10000000;
LABEL_3:
    ;
  }
  if ( byte_1BF000[v2] == byte_1BF000[v3] )
    goto LABEL_3;
  for ( j = 0; ; ++j )
  {
    v6 = *(unsigned __int8 *)(a1 + j);
    v7 = (unsigned __int8)aFalse[j];
    if ( (_DWORD)v6 != (_DWORD)v7 )
      break;
    if ( !*(_BYTE *)(a1 + j) )
      return 0x20000000;
LABEL_9:
    ;
  }
  if ( byte_1BF000[v6] == byte_1BF000[v7] )
    goto LABEL_9;
  return 0;
}
