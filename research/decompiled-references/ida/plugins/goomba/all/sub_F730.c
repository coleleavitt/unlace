__int64 __fastcall sub_F730(int *a1, __int64 a2)
{
  unsigned int v2; // edx
  unsigned int (__fastcall *hexdsp)(__int64, int *, _QWORD *); // rax
  _QWORD v5[9]; // [rsp+0h] [rbp-48h] BYREF

  v2 = 0;
  v5[7] = __readfsqword(0x28u);
  if ( (unsigned int)(*a1 - 8) > 1 && *a1 <= 41 && a1[17] <= 8 )
  {
    memset(&v5[1], 0, 40);
    v5[0] = off_4D7D8;
    hexdsp = (unsigned int (__fastcall *)(__int64, int *, _QWORD *))get_hexdsp(a1, a2, 0);
    LOBYTE(v2) = hexdsp(342, a1, v5) != 0;
  }
  return v2;
}

