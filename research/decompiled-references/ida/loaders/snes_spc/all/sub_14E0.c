unsigned __int64 __fastcall sub_14E0(__int64 a1, double a2, double a3)
{
  __int64 v4; // [rsp+8h] [rbp-F0h] BYREF
  __int64 v5; // [rsp+10h] [rbp-E8h]
  __int64 v6; // [rsp+18h] [rbp-E0h]
  __int128 v7; // [rsp+20h] [rbp-D8h]
  __int64 v8; // [rsp+30h] [rbp-C8h]
  __int64 v9; // [rsp+38h] [rbp-C0h]
  __int64 selector; // [rsp+40h] [rbp-B8h]
  __int128 v11; // [rsp+48h] [rbp-B0h]
  __int128 v12; // [rsp+58h] [rbp-A0h]
  __int128 v13; // [rsp+68h] [rbp-90h]
  __int128 v14; // [rsp+78h] [rbp-80h]
  __int128 v15; // [rsp+88h] [rbp-70h]
  __int128 v16; // [rsp+98h] [rbp-60h]
  __int128 v17; // [rsp+A8h] [rbp-50h]
  __int128 v18; // [rsp+B8h] [rbp-40h]
  unsigned __int64 v19; // [rsp+C8h] [rbp-30h]
  unsigned __int64 v20; // [rsp+D8h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  set_processor_type("spc700", 1);
  v4 = -1;
  netnode_check(&v4, "$ spc700", 0, 1);
  netnode_hashset(v4, "device", "spc700", 0, 72);
  v7 = 0;
  v11 = -1;
  v12 = -1;
  v13 = -1;
  v14 = -1;
  v15 = -1;
  v16 = -1;
  v17 = -1;
  v18 = -1;
  v5 = 0;
  v8 = 0;
  v9 = 0;
  selector = 0;
  v19 = 0xFFFFFFFF00000000LL;
  v6 = 0x10000;
  selector = allocate_selector(0);
  if ( !(unsigned int)file2base(a1, 256, v5, v6, 1) )
    sub_1430((__int64)"Failed mapping 0x%x -> [0x%a, 0x%a)\n", 256, NAN, a3);
  if ( !(unsigned __int8)add_segm(selector, v5, v6, "RAM", 0, 32) )
    sub_1430((__int64)"Failed adding RAM segment\n");
  setinf(14, selector);
  sub_1360((__int64)"You have just loaded a SNES SPC-700 sound file.\n"
                    "\n"
                    "Please move to what you think is an entry point and press 'C' to start the auto analysis.");
  return v20 - __readfsqword(0x28u);
}

