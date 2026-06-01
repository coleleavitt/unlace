_QWORD *__fastcall sub_320D0(_QWORD *a1, __int64 a2, __int64 a3)
{
  void (__fastcall *hexdsp)(__int64, _QWORD *, __int64); // rax
  void (__fastcall *v5)(__int64, _QWORD *, __int64); // rax
  void (__fastcall *v6)(__int64, _QWORD *, __int64); // rax
  void (__fastcall *v7)(__int64, _QWORD *, __int64); // rax
  void (__fastcall *v8)(__int64, _QWORD *, _QWORD *); // rax
  void (__fastcall *v9)(__int64, _QWORD *, _QWORD *); // rax
  void (__fastcall *v10)(__int64, _QWORD *, _QWORD *); // rax
  _QWORD v12[2]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v13[9]; // [rsp+10h] [rbp-48h] BYREF

  v13[3] = __readfsqword(0x28u);
  v12[0] = 0;
  v12[1] = 0;
  hexdsp = (void (__fastcall *)(__int64, _QWORD *, __int64))get_hexdsp(a1, a2);
  hexdsp(203, v12, a2);
  v5 = (void (__fastcall *)(__int64, _QWORD *, __int64))get_hexdsp(203, v12);
  v5(224, v12, a3);
  *a1 = 0;
  a1[1] = 0;
  v6 = (void (__fastcall *)(__int64, _QWORD *, __int64))get_hexdsp(224, v12);
  v6(203, a1, a2);
  v13[0] = 0;
  v13[1] = 0;
  v7 = (void (__fastcall *)(__int64, _QWORD *, __int64))get_hexdsp(203, a1);
  v7(203, v13, a3);
  v8 = (void (__fastcall *)(__int64, _QWORD *, _QWORD *))get_hexdsp(203, v13);
  v8(210, a1, v12);
  v9 = (void (__fastcall *)(__int64, _QWORD *, _QWORD *))get_hexdsp(210, a1);
  v9(210, v13, v12);
  v10 = (void (__fastcall *)(__int64, _QWORD *, _QWORD *))get_hexdsp(210, v13);
  v10(207, a1, v13);
  qfree(v13[0]);
  qfree(v12[0]);
  return a1;
}

