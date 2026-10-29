unsigned __int64 __fastcall sub_2B0630(__int64 a1, __int64 a2, int *a3, unsigned int a4)
{
  int v4; // eax
  _QWORD v7[2]; // [rsp+0h] [rbp-68h] BYREF
  __int128 v8; // [rsp+10h] [rbp-58h]
  __int64 v9; // [rsp+20h] [rbp-48h]
  __int128 v10; // [rsp+28h] [rbp-40h]
  unsigned __int64 v11; // [rsp+38h] [rbp-30h]

  v4 = *a3;
  v11 = __readfsqword(0x28u);
  if ( (unsigned int)(v4 - 3) <= 1 )
  {
    v7[0] = 0;
    v7[1] = 0;
    v9 = 0;
    v8 = 0;
    v10 = 0;
    sub_C98B0();
  }
  sub_324D40(v7, a1, a4);
  copy_tinfo_t();
  clear_tinfo_t();
  return v11 - __readfsqword(0x28u);
}

