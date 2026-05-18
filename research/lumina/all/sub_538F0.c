__int64 __fastcall sub_538F0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6, char **a7)
{
  unsigned int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // r9

  sub_4BB70((const __m128i *)"Loading licenses...");
  v11 = sub_52D00(a1, a2, a3, a4, a5, a6, a7);
  interr_exc_t___vtable_at_1764016(
    0x18u,
    (__int64 (__fastcall ***)(_QWORD))&byte_9[1],
    nullptr,
    (const __m128i *)&interr_exc_t___vtable_at_1764016,
    v12,
    v13);
  return v11;
}
