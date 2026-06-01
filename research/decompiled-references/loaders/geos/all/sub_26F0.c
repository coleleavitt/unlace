unsigned __int64 __fastcall sub_26F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, const char *a5, __int64 a6)
{
  __int64 v9; // rax
  _QWORD v11[2]; // [rsp+0h] [rbp-F8h] BYREF
  char v12; // [rsp+28h] [rbp-D0h]
  char v13; // [rsp+29h] [rbp-CFh]
  char v14; // [rsp+2Bh] [rbp-CDh]
  __int64 v15; // [rsp+30h] [rbp-C8h]
  __int128 v16; // [rsp+88h] [rbp-70h]
  __int128 v17; // [rsp+98h] [rbp-60h]
  __int128 v18; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v19; // [rsp+B8h] [rbp-40h]
  unsigned __int64 v20; // [rsp+C8h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  v16 = -1;
  v17 = -1;
  v18 = -1;
  v19 = 0xFFFFFFFF00000000LL;
  v9 = setup_selector(a1, a2, a3, a4, a5, a6, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1);
  v11[0] = a2;
  v15 = v9;
  v11[1] = a3;
  v12 = 1;
  v14 = 0;
  v13 = strcmp(a5, "STACK") == 0 ? 5 : 2;
  add_segm_ex(v11, a4, a5, 33);
  return v20 - __readfsqword(0x28u);
}
