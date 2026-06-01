__int64 __fastcall sub_3E6170(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // rax
  _QWORD v5[6]; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v6; // [rsp+30h] [rbp-18h]
  unsigned __int64 v7; // [rsp+38h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 8);
  v5[2] = a2;
  v5[1] = 0;
  v5[4] = 0;
  v5[0] = off_4D6A50;
  v5[5] = v3;
  v6 = 0;
  v5[3] = a3;
  sub_11BD20(a3, v5);
  return v6;
}

