__int64 __fastcall sub_22FB0(char a1, int a2, __int64 a3, __int64 a4)
{
  char *v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64, __int64); // rax
  __int64 v9; // rax
  __int64 result; // rax

  if ( a2 == 160 )
    return 0;
  v7 = sub_22F20(a2);
  if ( !v7 )
    return 0;
  v8 = **(__int64 (__fastcall ***)(__int64, __int64, __int64))a4;
  if ( v8 == sub_21CD0 )
    v9 = (*(__int64 (__fastcall **)(char *, __int64))(a4 + 8))(v7, a3);
  else
    v9 = v8(a4, (__int64)v7, a3);
  result = *(_QWORD *)(v9 + 8);
  if ( a2 == 15 )
    result += a1 == 0 ? 8LL : 4LL;
  return result;
}

