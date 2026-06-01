__int64 __fastcall sub_1C9210(char *a1, __int64 a2, double a3)
{
  unsigned int v3; // ebx
  __int64 tinfo_size; // rax
  __int64 v6; // rcx
  char v7; // al
  char v8; // [rsp+Fh] [rbp-69h]
  __int64 v9; // [rsp+18h] [rbp-60h] BYREF
  _QWORD v10[11]; // [rsp+20h] [rbp-58h] BYREF

  v10[3] = __readfsqword(0x28u);
  v10[0] = 0;
  v10[1] = 0;
  v3 = sub_1C5030(a1, (__int64)v10);
  if ( (_BYTE)v3 && (tinfo_size = get_tinfo_size(), (unsigned __int64)(tinfo_size - 1) <= 0xFFFFFFFFFFFFFFFDLL) )
  {
    sub_1C9130((__int64)v10, (unsigned int)tinfo_size, tinfo_size - 1, v6, a3);
    v7 = a1[1];
    v9 = 0;
    v8 = v7;
    copy_tinfo_t();
    sub_11D150((__int64)a1, a2, nullptr, &v9, v10, a3);
    clear_tinfo_t();
    a1[1] = v8;
  }
  else
  {
    v3 = 0;
  }
  cleanup_argloc();
  return v3;
}

