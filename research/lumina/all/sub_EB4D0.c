__int64 __fastcall sub_EB4D0(__int64 a1, signed int a2, _DWORD *a3)
{
  unsigned int v4; // r13d
  int v5; // ebx
  time_t v7; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-30h]

  v4 = a2;
  v8 = __readfsqword(0x28u);
  memset(a3, 0, a2);
  dword_242250 = getpid();
  v5 = sub_EAA90("/dev/urandom", 0, 0);
  if ( v5 >= 0 )
  {
    while ( (int)off_241228(v5, a3, a2) < 0 && *__errno_location() == 4 )
      ;
    if ( off_241180(v5) )
      sub_EAE20(0, 0xA423u);
  }
  else
  {
    v4 = 12;
    time(&v7);
    *(_QWORD *)a3 = v7;
    a3[2] = dword_242250;
  }
  return v4;
}
