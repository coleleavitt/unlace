unsigned __int64 __fastcall sub_61130(__int64 a1, __int64 *a2)
{
  __int64 v2; // r14
  size_t v4; // rax
  __int64 v5; // rbx
  size_t v6; // rdx
  __int64 v7; // r15
  size_t v8; // rax
  const char *v9; // rsi
  _BYTE v11[5]; // [rsp+13h] [rbp-45h] BYREF
  _QWORD v12[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  v12[0] = __readfsqword(0x28u);
  v4 = sub_196CD0(v11, v12) - (_QWORD)v11;
  if ( v4 )
    sub_5F5C0(a2, v11, v4);
  v5 = 0;
  if ( v2 )
  {
    do
    {
      v7 = *(_QWORD *)(a1 + 16) + 32 * v5;
      v8 = sub_196CD0(v11, v12) - (_QWORD)v11;
      if ( v8 )
        sub_5F5C0(a2, v11, v8);
      v9 = s1;
      if ( *(_QWORD *)(v7 + 16) )
        v9 = *(const char **)(v7 + 8);
      if ( v9 )
      {
        v6 = strlen(v9) + 1;
      }
      else
      {
        v6 = 1;
        v9 = "";
      }
      ++v5;
      sub_5F5C0(a2, v9, v6);
    }
    while ( v2 != v5 );
  }
  return v12[0] - __readfsqword(0x28u);
}
