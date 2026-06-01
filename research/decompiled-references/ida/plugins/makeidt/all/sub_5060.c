void __fastcall __noreturn sub_5060(__int64 a1)
{
  char v1[4096]; // [rsp+0h] [rbp-2028h] BYREF
  char v2[4104]; // [rsp+1000h] [rbp-1028h] BYREF
  unsigned __int64 v3; // [rsp+2008h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  get_root_filename();
  set_file_ext();
  set_file_ext();
  sub_3740(a1, v1, v2);
  qexit();
}

