__int64 __fastcall sub_5440(__int64 a1, __int64 (__fastcall ***a2)(_QWORD, __int64, __int64))
{
  unsigned int v3; // eax
  unsigned int v4; // ebp
  const char *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rdx
  const char *v9; // rsi

  v3 = (**a2)(a2, 1, a1 + 24);
  if ( !(_BYTE)v3 )
    return 0;
  v4 = v3;
  v5 = s1;
  if ( *(_QWORD *)(a1 + 8) )
    v5 = *(const char **)a1;
  v6 = qfopen(v5, "w");
  v7 = v6;
  if ( !v6 )
    return 0;
  v8 = *(_QWORD *)(a1 + 40);
  v9 = s1;
  if ( v8 )
  {
    v9 = *(const char **)(a1 + 32);
    --v8;
  }
  qfwrite(v6, v9, v8);
  qfclose(v7);
  return v4;
}
