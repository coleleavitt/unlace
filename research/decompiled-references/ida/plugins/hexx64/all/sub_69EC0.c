__int64 __fastcall sub_69EC0(__int64 a1, __int64 a2, double a3)
{
  _UNKNOWN **v4; // [rsp+0h] [rbp-38h] BYREF
  int v5; // [rsp+8h] [rbp-30h]
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  sub_668F0(a2, a3);
  v4 = &off_4DBBB8;
  v5 = *(_DWORD *)(a2 + 72);
  return sub_68750(a1, (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))&v4);
}

