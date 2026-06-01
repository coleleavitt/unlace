unsigned __int64 __fastcall sub_211D50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdi
  __int64 (__fastcall **v8)(); // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-10h]

  v6 = *(_QWORD *)(a1 + 112);
  v9 = __readfsqword(0x28u);
  v8 = off_4B20E8;
  ((void (__fastcall *)(__int64, __int64, __int64 (__fastcall ***)(), __int64, __int64, __int64))sub_2B76C0)(
    v6,
    a2,
    &v8,
    a4,
    a5,
    a6);
  return v9 - __readfsqword(0x28u);
}

