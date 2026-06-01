__int64 __fastcall sub_3F360(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  unsigned __int64 v7; // [rsp+0h] [rbp-1028h] BYREF
  _BYTE v8[4096]; // [rsp+8h] [rbp-1020h] BYREF
  unsigned __int64 v9; // [rsp+1008h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  a1[7] = a2;
  a1[9] = a2;
  a1[522] = a3;
  v7 = a2;
  qmemcpy(v8, a1 + 10, sizeof(v8));
  v5 = sub_3E700(a1, &v7);
  a1[523] = a4;
  a1[8] = v5 + 40;
  return 0;
}

