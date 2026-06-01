unsigned __int64 __fastcall sub_216900(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rdi
  __int64 (__fastcall **v4)(); // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 112);
  v5 = __readfsqword(0x28u);
  v4 = off_4DF680;
  sub_2BC2C0(v2, a2, (__int64)&v4);
  return v5 - __readfsqword(0x28u);
}

