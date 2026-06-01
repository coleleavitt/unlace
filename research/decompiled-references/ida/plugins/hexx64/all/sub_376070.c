unsigned __int64 __fastcall sub_376070(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // r9
  __int64 v7; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v4 = qalloc_or_throw(240, a2, a3, a4);
  sub_3758E0(v4, a1, (__int64)"local types");
  v7 = 0;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(16, 0, v4, &v7, &callui, v5);
  return v8 - __readfsqword(0x28u);
}

