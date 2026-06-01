unsigned __int64 __fastcall sub_1CCB0(unsigned int a1)
{
  __int64 v2; // [rsp+Ch] [rbp-2034h] BYREF
  int v3; // [rsp+14h] [rbp-202Ch] BYREF
  _BYTE v4[8200]; // [rsp+18h] [rbp-2028h] BYREF
  unsigned __int64 v5; // [rsp+2020h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  v2 = 0;
  v3 = 0;
  if ( !(*(unsigned int (__fastcall **)(__int64, _QWORD, __int64 *, _BYTE *, __int64, int *, char *))(*(_QWORD *)qword_44A20 + 160LL))(
          qword_44A20,
          a1,
          &v2,
          v4,
          1024,
          &v3,
          (char *)&v2 + 4) )
  {
    sub_EF20(a1, &v2, 12, 109);
    if ( v3 )
      sub_EF20(a1, v4, (unsigned int)(8 * v3), 110);
  }
  return v5 - __readfsqword(0x28u);
}
