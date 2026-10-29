__int64 __fastcall sub_9D40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // ebx
  __int64 v7; // [rsp+0h] [rbp-28h] BYREF
  __int128 v8; // [rsp+8h] [rbp-20h]
  unsigned __int64 v9; // [rsp+18h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  v7 = 0;
  v8 = 0;
  v5 = sub_9940(a2, a3, a4, a5, (__int64)&v7);
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree();
  }
  return v5;
}

