unsigned __int64 __fastcall sub_1750(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v5[2]; // [rsp+0h] [rbp-E8h] BYREF
  __int128 v6; // [rsp+10h] [rbp-D8h]
  __int64 v7; // [rsp+20h] [rbp-C8h]
  __int64 v8; // [rsp+28h] [rbp-C0h]
  __int64 v9; // [rsp+30h] [rbp-B8h]
  __int128 v10; // [rsp+38h] [rbp-B0h]
  __int128 v11; // [rsp+48h] [rbp-A0h]
  __int128 v12; // [rsp+58h] [rbp-90h]
  __int128 v13; // [rsp+68h] [rbp-80h]
  __int128 v14; // [rsp+78h] [rbp-70h]
  __int128 v15; // [rsp+88h] [rbp-60h]
  __int128 v16; // [rsp+98h] [rbp-50h]
  __int128 v17; // [rsp+A8h] [rbp-40h]
  unsigned __int64 v18; // [rsp+B8h] [rbp-30h]
  unsigned __int64 v19; // [rsp+C8h] [rbp-20h]

  v19 = __readfsqword(0x28u);
  set_selector(a1, 0);
  v5[0] = a2;
  v6 = 0;
  v18 = 0xFFFFFFFF00000000LL;
  v7 = 0;
  v9 = a1;
  v5[1] = a3;
  v8 = 513;
  v10 = -1;
  v11 = -1;
  v12 = -1;
  v13 = -1;
  v14 = -1;
  v15 = -1;
  v16 = -1;
  v17 = -1;
  if ( !(unsigned __int8)((__int64 (__fastcall *)(_QWORD *, const char *, const char *, __int64))add_segm_ex)(
                           v5,
                           "TEXT",
                           "CODE",
                           33) )
    sub_16A0(0);
  return v19 - __readfsqword(0x28u);
}
