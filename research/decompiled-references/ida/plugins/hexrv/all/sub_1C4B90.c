__int64 __fastcall sub_1C4B90(char *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 tinfo_size; // rax
  char v5; // al
  char v6; // [rsp+Fh] [rbp-69h]
  __int64 v7; // [rsp+18h] [rbp-60h] BYREF
  _QWORD v8[11]; // [rsp+20h] [rbp-58h] BYREF

  v8[3] = __readfsqword(0x28u);
  v8[0] = 0;
  v8[1] = 0;
  v2 = sub_1C09B0(a1, (__int64)v8);
  if ( (_BYTE)v2 && (tinfo_size = get_tinfo_size(), (unsigned __int64)(tinfo_size - 1) <= 0xFFFFFFFFFFFFFFFDLL) )
  {
    sub_1C4AB0((__int64)v8, tinfo_size);
    v5 = a1[1];
    v7 = 0;
    v6 = v5;
    copy_tinfo_t();
    sub_118C90((__int64)a1, a2, nullptr, &v7, v8);
    clear_tinfo_t();
    a1[1] = v6;
  }
  else
  {
    v2 = 0;
  }
  cleanup_argloc();
  return v2;
}

