unsigned __int64 __fastcall sub_2B80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD v9[2]; // [rsp+0h] [rbp-F8h] BYREF
  __int128 v10; // [rsp+10h] [rbp-E8h]
  __int64 v11; // [rsp+20h] [rbp-D8h]
  __int64 v12; // [rsp+28h] [rbp-D0h]
  __int64 v13; // [rsp+30h] [rbp-C8h]
  __int128 v14; // [rsp+38h] [rbp-C0h]
  __int128 v15; // [rsp+48h] [rbp-B0h]
  __int128 v16; // [rsp+58h] [rbp-A0h]
  __int128 v17; // [rsp+68h] [rbp-90h]
  __int128 v18; // [rsp+78h] [rbp-80h]
  __int128 v19; // [rsp+88h] [rbp-70h]
  __int128 v20; // [rsp+98h] [rbp-60h]
  __int128 v21; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v22; // [rsp+B8h] [rbp-40h]
  unsigned __int64 v23; // [rsp+C8h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  set_selector(a1, 0);
  v10 = 0;
  v22 = 0xFFFFFFFF00000000LL;
  v11 = 0;
  v13 = a1;
  v9[0] = a2;
  v9[1] = a3;
  v12 = 16777729;
  v14 = -1;
  v15 = -1;
  v16 = -1;
  v17 = -1;
  v18 = -1;
  v19 = -1;
  v20 = -1;
  v21 = -1;
  if ( !(unsigned __int8)((__int64 (__fastcall *)(_QWORD *, __int64, __int64, __int64))add_segm_ex)(v9, a4, a5, 33) )
    sub_2AD0(0);
  return v23 - __readfsqword(0x28u);
}
