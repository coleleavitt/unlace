unsigned __int64 __fastcall sub_B1700(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // r14
  size_t v6; // rdx
  __int64 v7; // r15
  size_t v8; // rax
  const char *v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rbp
  __int64 v12; // rdi
  _BYTE v14[5]; // [rsp+23h] [rbp-45h] BYREF
  unsigned __int64 v15[8]; // [rsp+28h] [rbp-40h] BYREF

  v4 = 0;
  v15[0] = __readfsqword(0x28u);
  v5 = a1[3];
  sub_69D50(a2);
  if ( v5 )
  {
    do
    {
      v7 = a1[2] + 32 * v4;
      v8 = sub_196CD0(v14, v15) - (_QWORD)v14;
      if ( v8 )
        sub_9E3C0(a2, v14, v8);
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
      ++v4;
      sub_9E3C0(a2, v9, v6);
    }
    while ( v5 != v4 );
  }
  v10 = a1[6];
  v11 = 0;
  sub_69D50(a2);
  if ( v10 )
  {
    do
    {
      v12 = 5 * v11++;
      sub_B1550(a1[5] + 16 * v12, a2);
    }
    while ( v11 != v10 );
  }
  return v15[0] - __readfsqword(0x28u);
}
