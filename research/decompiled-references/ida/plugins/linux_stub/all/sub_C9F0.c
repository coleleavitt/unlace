__int64 __fastcall sub_C9F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebx
  _QWORD v8[7]; // [rsp+0h] [rbp-38h] BYREF

  v8[5] = __readfsqword(0x28u);
  v8[3] = a1;
  v8[0] = off_37A48;
  v8[1] = 0;
  v8[2] = 0;
  v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(86, v8, 2, &callui, a5, a6);
  v8[0] = &off_38328;
  qsem_free();
  return v6;
}

