__int64 __fastcall sub_17CB90(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  int v7; // r9d
  __int64 v8; // rax
  __int64 v9; // rbx
  char v10; // al
  char v12[4104]; // [rsp+0h] [rbp-1038h] BYREF
  unsigned __int64 v13; // [rsp+1008h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  if ( a3 )
    sub_1975F0(v12);
  else
    sub_197750(v12, 4096);
  v8 = sub_197540(a1, a2, (unsigned int)v12, a4, 0, v7, v12[0]);
  v9 = v8;
  if ( a5 )
    v10 = sub_17C940(a1, a2);
  else
    v10 = sub_197CA0(v8);
  if ( !v10 )
    return 0;
  return v9;
}
