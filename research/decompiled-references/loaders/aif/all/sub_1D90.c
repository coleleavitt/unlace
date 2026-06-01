unsigned __int64 __fastcall sub_1D90(unsigned __int16 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rbp
  __int64 v10; // [rsp+0h] [rbp-108h] BYREF
  __int64 v11; // [rsp+8h] [rbp-100h] BYREF
  _QWORD v12[2]; // [rsp+10h] [rbp-F8h] BYREF
  __int128 v13; // [rsp+20h] [rbp-E8h]
  __int64 v14; // [rsp+30h] [rbp-D8h]
  __int64 v15; // [rsp+38h] [rbp-D0h]
  __int64 v16; // [rsp+40h] [rbp-C8h]
  __int128 v17; // [rsp+48h] [rbp-C0h]
  __int128 v18; // [rsp+58h] [rbp-B0h]
  __int128 v19; // [rsp+68h] [rbp-A0h]
  __int128 v20; // [rsp+78h] [rbp-90h]
  __int128 v21; // [rsp+88h] [rbp-80h]
  __int128 v22; // [rsp+98h] [rbp-70h]
  __int128 v23; // [rsp+A8h] [rbp-60h]
  __int128 v24; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v25; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v26; // [rsp+D8h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  set_selector(a1, 0);
  v13 = 0;
  v25 = 0xFFFFFFFF00000000LL;
  v14 = 0;
  v16 = a1;
  v12[0] = a2;
  v12[1] = a3;
  v15 = 16777729;
  v17 = -1;
  v18 = -1;
  v19 = -1;
  v20 = -1;
  v21 = -1;
  v22 = -1;
  v23 = -1;
  v24 = -1;
  if ( !(unsigned __int8)add_segm_ex(v12, a4, a5, 37) )
    sub_1CE0(0);
  v8 = getseg(a2);
  v10 = -1;
  netnode_check(&v10, "$ arm segflags", 0, 1);
  v11 = 2048;
  netnode_supset(v10, a2, &v11, 8, 321);
  update_segm(v8);
  return v26 - __readfsqword(0x28u);
}
