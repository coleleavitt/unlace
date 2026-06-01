unsigned __int64 __fastcall sub_1760(__int64 a1, __int64 a2, __int64 a3, __int64 a4, const char *a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v14; // [rsp+8h] [rbp-F0h]
  __int128 v15; // [rsp+10h] [rbp-E8h]
  __int64 v16; // [rsp+20h] [rbp-D8h]
  __int64 v17; // [rsp+28h] [rbp-D0h]
  __int64 v18; // [rsp+30h] [rbp-C8h]
  __int128 v19; // [rsp+38h] [rbp-C0h]
  __int128 v20; // [rsp+48h] [rbp-B0h]
  __int128 v21; // [rsp+58h] [rbp-A0h]
  __int128 v22; // [rsp+68h] [rbp-90h]
  __int128 v23; // [rsp+78h] [rbp-80h]
  __int128 v24; // [rsp+88h] [rbp-70h]
  __int128 v25; // [rsp+98h] [rbp-60h]
  __int128 v26; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v27; // [rsp+B8h] [rbp-40h]
  unsigned __int64 v28; // [rsp+C8h] [rbp-30h]

  v28 = __readfsqword(0x28u);
  set_selector(a1, 0);
  v15 = 0;
  v17 = 16777217;
  v16 = 0;
  v27 = 0xFFFFFFFF00000000LL;
  v18 = a1;
  v13 = a2;
  v14 = a3;
  v19 = -1;
  v20 = -1;
  v21 = -1;
  v22 = -1;
  v23 = -1;
  v24 = -1;
  v25 = -1;
  v26 = -1;
  BYTE1(v17) = strcmp(a5, "STACK") == 0 ? 5 : 2;
  if ( !(unsigned __int8)((__int64 (__fastcall *)(__int64 *, __int64, const char *, __int64))add_segm_ex)(
                           &v13,
                           a4,
                           a5,
                           33) )
    sub_16B0(0, a4, v8, v9, v10, v11, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27);
  return v28 - __readfsqword(0x28u);
}
