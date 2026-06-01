__int64 __fastcall sub_F000(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  _QWORD v5[5]; // [rsp+0h] [rbp-48h] BYREF
  int v6; // [rsp+28h] [rbp-20h]
  unsigned __int64 v7; // [rsp+38h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  v5[3] = a1;
  v5[0] = off_70DF0;
  v5[4] = a2;
  v6 = a3;
  v5[1] = 0;
  v5[2] = 0;
  v3 = callui(86, v5, 2, &callui);
  v5[0] = &off_72228;
  qsem_free();
  return v3;
}

