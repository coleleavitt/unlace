__int64 __fastcall sub_4C740(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // r9
  void *v6; // rdi
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 416) )
  {
    if ( !*(_QWORD *)(a1 + 408) )
    {
      if ( !unk_2439A0 )
        sub_198E10(3156);
      BUG();
    }
    sub_199DC0();
    interr_exc_t___vtable_at_1764016(
      0x57u,
      (__int64 (__fastcall ***)(_QWORD))((char *)&dword_0 + 3),
      *(const __m128i **)(a1 + 408),
      (const __m128i *)((char *)&dword_0 + 2),
      v2,
      v3);
    sub_199BE0(*(_QWORD *)(a1 + 408));
    interr_exc_t___vtable_at_1764016(
      0x57u,
      (__int64 (__fastcall ***)(_QWORD))((char *)&dword_0 + 3),
      *(const __m128i **)(a1 + 408),
      (const __m128i *)((char *)&dword_0 + 3),
      v4,
      v5);
    j__pthread_detach(*(_QWORD *)(a1 + 408));
    v6 = *(void **)(a1 + 416);
    *(_QWORD *)(a1 + 408) = 0;
    result = sub_199D50(v6);
    *(_QWORD *)(a1 + 416) = 0;
  }
  return result;
}
