__int64 __fastcall sub_9DF40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v8; // rcx
  _QWORD v11[11]; // [rsp+0h] [rbp-58h] BYREF

  v8 = *(unsigned int *)(a4 + 4);
  v11[3] = __readfsqword(0x28u);
  v11[0] = 0xFFFFFFFF00000000LL;
  v11[1] = 0;
  sub_11BE50(v11, a2, a5, v8, -1, 0);
  sub_9DDF0(a1, a2, a3, a4, (__int64)v11, a6);
  sub_1181E0(v11);
  return a1;
}

