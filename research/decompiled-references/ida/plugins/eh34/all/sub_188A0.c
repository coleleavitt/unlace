__int64 __fastcall sub_188A0(__int64 a1, __int64 a2, const char *a3)
{
  const char *v4; // rsi
  const char *v6; // [rsp+0h] [rbp-28h] BYREF
  __int128 v7; // [rsp+8h] [rbp-20h]
  unsigned __int64 v8; // [rsp+18h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v6 = nullptr;
  v7 = 0;
  sub_FB10((__int64 *)&v6, (__int64)"c:\\temp\\hrdebug-%s.txt", a3);
  v4 = s1;
  if ( (_QWORD)v7 )
    v4 = v6;
  nullsub_42(a2, v4);
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree(v6);
  }
  return 0;
}

