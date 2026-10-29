unsigned __int64 __fastcall sub_3765B0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r9
  __int64 v4; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  v1 = qalloc_or_throw();
  sub_375E20(v1, a1, (__int64)"local types");
  v4 = 0;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(16, 0, v1, &v4, &callui, v2);
  return v5 - __readfsqword(0x28u);
}

