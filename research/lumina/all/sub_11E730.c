void __fastcall sub_11E730(
        __int64 *a1,
        __int64 a2,
        __int64 (__fastcall *a3)(__int64, _QWORD *, _QWORD, _QWORD),
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rdi
  __int64 v8; // rdi

  sub_11E660(a1[1], a2, a3, a4, a5, a6);
  v7 = a1[3];
  a1[1] = 0;
  sub_C91C0(v7, a2);
  v8 = a1[4];
  a1[3] = 0;
  sub_C91C0(v8, a2);
  a1[4] = 0;
}
