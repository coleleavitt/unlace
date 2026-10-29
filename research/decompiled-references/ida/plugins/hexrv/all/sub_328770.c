_BOOL8 __fastcall sub_328770(_QWORD *a1)
{
  _BOOL4 v1; // ebx
  __int128 v3; // [rsp+20h] [rbp-B8h] BYREF
  char *s1; // [rsp+30h] [rbp-A8h]
  __int128 v5; // [rsp+38h] [rbp-A0h]
  __int64 v6; // [rsp+48h] [rbp-90h]
  __int128 v7; // [rsp+50h] [rbp-88h]
  __int128 v8; // [rsp+60h] [rbp-78h]
  __int64 v9; // [rsp+90h] [rbp-48h]
  int v10; // [rsp+98h] [rbp-40h]
  __int64 v11; // [rsp+A0h] [rbp-38h]
  char v12; // [rsp+A8h] [rbp-30h]
  unsigned __int64 v13; // [rsp+B8h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v12 = 0;
  s1 = nullptr;
  v6 = 0;
  v9 = 1;
  v10 = -1;
  v11 = 0;
  v3 = 0;
  v5 = 0;
  v7 = 0;
  v8 = 0;
  v1 = (unsigned int)sub_328550(&v3, (__int64)a1, 0) != -1
    && (_BYTE)v8
    && ((unsigned __int8)v8 & 0xFu) <= 9
    && (_QWORD)v5
    && !strcmp(s1, "unused")
    && get_tinfo_size() == 4
    && get_tinfo_size() == 4
    && ((*a1 & 0x100) == 0 || !get_tinfo_pdata());
  clear_tinfo_t();
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree();
  }
  if ( s1 )
  {
    *(_QWORD *)&v5 = 0;
    qfree();
  }
  return v1;
}

