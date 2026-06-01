__int64 __fastcall sub_58790(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rdx
  unsigned __int64 v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 result; // rax

  v3 = (_QWORD *)*a1;
  v4 = a1[1];
  v5 = v3;
  v6 = &v3[v4];
  if ( v3 != v6 )
  {
    do
    {
      if ( a2 == *v5 )
        break;
      ++v5;
    }
    while ( v6 != v5 );
  }
  v7 = v5 - v3;
  v8 = v7;
  if ( v7 >= v4 )
    return 0;
  while ( 1 )
  {
    v9 = v3[v8];
    if ( *(_QWORD *)(v9 + 320) > 1u )
    {
      if ( strstr(*(const char **)(v9 + 312), "$<") )
      {
        result = sub_58520((__int64)a1, (_QWORD *)v9, v7);
        if ( (_BYTE)result )
          break;
      }
    }
    if ( ++v8 >= a1[1] )
      return 0;
    v3 = (_QWORD *)*a1;
  }
  return result;
}
