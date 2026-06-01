int sub_54B0()
{
  char v1; // [rsp+Dh] [rbp-13h] BYREF
  char v2; // [rsp+Eh] [rbp-12h] BYREF
  char v3; // [rsp+Fh] [rbp-11h] BYREF
  unsigned __int64 v4; // [rsp+10h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  sub_73C0(&qword_E2C0, &qword_CBF0[-130], qword_CBF0, 0, &v3, &v2, &v1);
  return __cxa_atexit(func, &qword_E2C0, &off_BFC0);
}

