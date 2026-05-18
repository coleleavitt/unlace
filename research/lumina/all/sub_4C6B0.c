__int64 __fastcall sub_4C6B0(_QWORD *arg)
{
  const __m128i *v1; // rax
  __int64 v2; // r9

  if ( arg[52] || arg[51] )
  {
    if ( !unk_2439A0 )
      sub_198E10(3155);
    BUG();
  }
  sub_4BD60(arg[4], (__int64)"Starting monitor thread\n");
  arg[52] = sub_199C00(nullptr, 0);
  v1 = (const __m128i *)sub_19A480((void *(*)(void *))start_routine, arg);
  arg[51] = v1;
  return interr_exc_t___vtable_at_1764016(
           0x57u,
           (__int64 (__fastcall ***)(_QWORD))((char *)&dword_0 + 3),
           v1,
           (const __m128i *)((char *)&dword_0 + 1),
           (__int64)interr_exc_t___vtable_at_1764016,
           v2);
}
