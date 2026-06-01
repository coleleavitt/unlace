__int64 __fastcall sub_11F60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // [rsp+0h] [rbp-38h] BYREF
  __int128 v5; // [rsp+8h] [rbp-30h]
  __int64 v6; // [rsp+18h] [rbp-20h]
  int v7; // [rsp+20h] [rbp-18h]
  unsigned __int64 v8; // [rsp+28h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v4 = 0;
  v6 = 0;
  v7 = 0;
  v5 = 0;
  sub_6FF0(a1, (__int64)&v4, a3);
  sub_11D90(*(_QWORD *)(a1 + 33312), (__int64)"value = %llu\n", (_QWORD)v5);
  return 1;
}
