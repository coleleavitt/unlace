__int64 __fastcall sub_D3B30(__int64 a1, int a2, _QWORD *a3, _DWORD *a4, int a5)
{
  __int64 v5; // rax
  int i; // edx
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  __int64 j; // rdx
  __int64 result; // rax
  int v12; // [rsp+30h] [rbp-28h]

  v12 = (int)a3;
  if ( a2 == 1000 )
  {
    **(_QWORD **)(a1 + 32) = a3;
    return 0;
  }
  if ( a2 == 1001 )
    return sub_D37F0(a1, a3, (int)a4, a5);
  v5 = 0;
  for ( i = 1002; ; i = dword_1BA940[2 * v5] )
  {
    v7 = (unsigned int)v5;
    if ( a2 == i )
      break;
    if ( ++v5 == 16 )
      return 1;
  }
  v8 = *(_QWORD *)(a1 + 48);
  if ( v12 > 0 )
  {
    v9 = v8 | dword_1BA940[2 * (unsigned int)v5 + 1];
    *(_QWORD *)(a1 + 48) = v9;
LABEL_9:
    if ( v8 != v9 )
    {
      for ( j = *(_QWORD *)(a1 + 8); j; j = *(_QWORD *)(j + 16) )
        *(_BYTE *)(j + 198) = *(_BYTE *)(j + 198) & 0xFC | 1;
    }
    goto LABEL_12;
  }
  if ( !v12 )
  {
    v9 = v8 & ~(unsigned __int64)dword_1BA940[2 * (unsigned int)v5 + 1];
    *(_QWORD *)(a1 + 48) = v9;
    goto LABEL_9;
  }
LABEL_12:
  result = 0;
  if ( a4 )
    *a4 = (dword_1BA940[2 * v7 + 1] & *(_QWORD *)(a1 + 48)) != 0;
  return result;
}
