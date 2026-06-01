__int64 __fastcall sub_2ADC10(int *a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v5; // r14
  char *v6; // rsi
  __int64 v7; // rax
  int v9; // [rsp+0h] [rbp-48h] BYREF
  int *v10; // [rsp+8h] [rbp-40h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v3 = *a2;
  if ( *(int *)(*a2 + 152) <= 0 )
    return 0xFFFFFFFFLL;
  v5 = 0;
  while ( 1 )
  {
    v9 = 0;
    v6 = (char *)s1;
    v7 = *(_QWORD *)(v3 + 128) + 32 * v5;
    if ( *(_QWORD *)(v7 + 8) )
      v6 = *(char **)v7;
    sub_38A790(v3, v6, 0, 0, (__int64)&v9, 0, 0);
    if ( v9 == 2 && !(unsigned int)sub_3307E0(a1, v10) )
      break;
    v3 = *a2;
    if ( *(_DWORD *)(*a2 + 152) <= (int)++v5 )
      return 0xFFFFFFFFLL;
  }
  return (unsigned int)v5;
}

