__int64 __fastcall sub_AE20(__int64 a1)
{
  unsigned int v1; // ebx
  _QWORD v3[7]; // [rsp+0h] [rbp-38h] BYREF

  v3[5] = __readfsqword(0x28u);
  v3[3] = a1;
  v3[0] = off_36F70;
  v3[1] = 0;
  v3[2] = 0;
  v1 = callui(86, v3, 2);
  v3[0] = &off_375E8;
  qsem_free();
  return v1;
}

