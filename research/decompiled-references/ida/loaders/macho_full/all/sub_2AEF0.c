__int64 __fastcall sub_2AEF0(
        __int64 (__fastcall **a1)(__int64 *a1, __int64 a2, _QWORD *a3, __m128i a4, __m128i a5, double a6),
        __int64 a2,
        __int64 a3,
        __int64 (__fastcall **a4)(__int64 *a1, __int64 a2, _QWORD *a3, __m128i a4, __m128i a5, double a6),
        __int64 (__fastcall **a5)(__int64 *a1, __int64 a2, _QWORD *a3, __m128i a4, __m128i a5, double a6),
        double a6,
        double a7,
        double a8)
{
  __int64 (__fastcall *v10)(__int64 *, __int64, _QWORD *, __m128i, __m128i, double); // rax
  int v12; // eax
  int v13; // eax
  __int64 (__fastcall **v15[5])(__int64 *, __int64, _QWORD *, __m128i, __m128i, double); // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v10 = *a1;
  v16 = __readfsqword(0x28u);
  v12 = *((_DWORD *)v10 + 1);
  if ( (v12 & 0xFFFFFFFD) != 0xD && v12 )
    return sub_196C0((__int64)"AUTOHIDE REGISTRY\nIDA does not yet support Mach-O relocation information for this CPU");
  if ( (unsigned __int8)qgetenv() )
    return sub_112F0((__int64)"Relocation processsing skipped.\n", 0);
  v13 = *(_DWORD *)(a2 + 364);
  if ( (v13 & 0x50) == 0 && (v13 & 1) == 0 )
    sub_19440((__int64)"Applying relocations");
  v15[1] = a1;
  v15[0] = (__int64 (__fastcall **)(__int64 *, __int64, _QWORD *, __m128i, __m128i, double))&off_64698;
  v15[2] = (__int64 (__fastcall **)(__int64 *, __int64, _QWORD *, __m128i, __m128i, double))a2;
  v15[3] = a4;
  v15[4] = a5;
  sub_2AB20(a3, v15, a6, a7, a8);
  return v16 - __readfsqword(0x28u);
}

