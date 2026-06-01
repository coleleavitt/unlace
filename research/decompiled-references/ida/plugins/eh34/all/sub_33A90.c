_QWORD *__fastcall sub_33A90(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 (__fastcall *hexdsp)(__int64, __int64 *, _QWORD); // rax
  int i; // ebx
  void (__fastcall *v10)(__int64, _QWORD *, _QWORD *); // rax
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, __int64 *, _QWORD); // rax
  __int64 v14; // [rsp+0h] [rbp-68h] BYREF
  int v15; // [rsp+8h] [rbp-60h]
  _QWORD v16[11]; // [rsp+10h] [rbp-58h] BYREF

  v16[3] = __readfsqword(0x28u);
  *a1 = 0;
  a1[1] = 0;
  sub_32560(&v14, a4);
  hexdsp = (__int64 (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp(&v14, a4);
  for ( i = hexdsp(227, &v14, 0); v15 != i; i = v12(227, &v14, (unsigned int)(i + 1)) )
  {
    sub_320D0(v16, a3, *(_QWORD *)(a2 + 536) + 16LL * i);
    v10 = (void (__fastcall *)(__int64, _QWORD *, _QWORD *))get_hexdsp(v16, a3);
    v10(207, a1, v16);
    v11 = v16[0];
    qfree(v16[0]);
    v12 = (__int64 (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp(v11, a1);
  }
  qfree(v14);
  return a1;
}

