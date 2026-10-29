unsigned __int64 __fastcall sub_1320(
        unsigned __int64 a1,
        __int64 a2,
        const char *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD v8[7]; // [rsp+0h] [rbp-E8h] BYREF
  unsigned __int64 v9; // [rsp+C8h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v8[6] = allocate_selector(
            a1 >> 4,
            a2,
            a3,
            a4,
            a5,
            a6,
            a1,
            a2,
            0,
            0,
            0,
            0,
            0,
            -1,
            -1,
            -1,
            -1,
            -1,
            -1,
            -1,
            -1,
            -1,
            -1,
            -1,
            -1,
            -1,
            -1,
            -1,
            -1,
            -4294967284LL);
  if ( !(unsigned __int8)add_segm_ex(v8, a3, 0, 33) )
    sub_1270((__int64)"Failed adding %s segment\n", a3);
  return v9 - __readfsqword(0x28u);
}
