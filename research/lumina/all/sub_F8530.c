__int64 __fastcall sub_F8530(__int64 a1, __int64 a2, unsigned int a3, double a4)
{
  __int64 result; // rax
  char v6; // al
  char *v7; // rsi
  __int64 v8; // r8
  int v10; // r13d
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax

  if ( !a1 )
    return a2 != 0;
  if ( !a2 )
    return 1;
  if ( *(_DWORD *)a1 != *(_DWORD *)a2 )
    return 1;
  if ( *(int *)a1 <= 0 )
    return 0;
  v6 = *(_BYTE *)(a2 + 24);
  v7 = *(char **)(a1 + 8);
  v8 = *(_QWORD *)(a2 + 8);
  if ( *(_BYTE *)(a1 + 24) != v6 )
    return 1;
  v10 = 0;
  while ( 1 )
  {
    result = sub_F80F0(0, v7, v8, a3, a4);
    if ( (_DWORD)result )
      break;
    if ( ++v10 >= *(_DWORD *)a1 )
      return 0;
    v11 = 24LL * v10;
    v12 = a1 + v11;
    v13 = a2 + v11;
    v8 = *(_QWORD *)(v13 + 8);
    v7 = *(char **)(v12 + 8);
    if ( *(_BYTE *)(v12 + 24) != *(_BYTE *)(v13 + 24) )
      return 1;
  }
  return result;
}
