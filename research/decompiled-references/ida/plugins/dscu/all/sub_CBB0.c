__int64 __fastcall sub_CBB0(__int64 (__fastcall **a1)(_QWORD, _BYTE *))
{
  unsigned int v1; // r13d
  __int64 v2; // rax
  __int64 (__fastcall **v3)(_QWORD, _BYTE *); // rbx
  int v4; // r12d
  int *v6; // rax
  const char *v7; // rax
  __int64 (__fastcall **v8[4])(_QWORD, _BYTE *); // [rsp+0h] [rbp-1058h] BYREF
  char v9[4104]; // [rsp+20h] [rbp-1038h] BYREF
  unsigned __int64 v10; // [rsp+1028h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  qtmpnam(v9, 4096);
  set_file_ext(v9, 4096, v9, "txt");
  v2 = qfopen(v9, "wb");
  if ( v2 )
  {
    v3 = (__int64 (__fastcall **)(_QWORD, _BYTE *))v2;
    sub_5CB0((__int64)"Printing regions");
    v8[1] = a1;
    v8[2] = v3;
    v8[0] = (__int64 (__fastcall **)(_QWORD, _BYTE *))&off_1E5B8;
    v4 = sub_A4E0((__int64)a1, v8);
    LOBYTE(v1) = v4 == 0;
    qfclose(v3);
    if ( !v4 )
      sub_CA10((__int64)"%s\n", v9);
    callui(24, 10, 0);
  }
  else
  {
    v6 = __errno_location();
    v1 = 0;
    v7 = (const char *)winerr((unsigned int)*v6);
    sub_CA10((__int64)"Error: failed to open %s: %s\n", v9, v7);
  }
  return v1;
}

