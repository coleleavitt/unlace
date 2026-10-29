__int64 __fastcall sub_69410(__int64 a1, int a2, int a3)
{
  _DWORD v4[3]; // [rsp+0h] [rbp-28h] BYREF
  char v5; // [rsp+Ch] [rbp-1Ch]
  unsigned __int64 v6; // [rsp+18h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v4[0] = a2;
  v4[2] = a3;
  v4[1] = 0;
  v5 = 0;
  return sub_68DE0(a1, (__int64)v4, 1);
}

