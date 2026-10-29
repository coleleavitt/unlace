__int64 __fastcall sub_110F20(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 v7; // [rsp+0h] [rbp-58h] BYREF
  __int128 v8; // [rsp+8h] [rbp-50h]
  __int128 v9; // [rsp+18h] [rbp-40h]
  unsigned __int64 v10; // [rsp+28h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  v7 = 0;
  v8 = 0;
  v9 = 0;
  if ( (unsigned __int8)sub_120220(a1, a2, a3, (int)&v7) && (v5 = sub_120220(a1, a2, a4, 0), (_BYTE)v5) )
    sub_1558B0((int *)&v7);
  else
    v5 = 0;
  sub_155800((unsigned int *)&v7);
  return v5;
}

