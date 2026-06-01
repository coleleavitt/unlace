unsigned __int64 __fastcall sub_15E0(int a1, char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // r14d
  __int128 v7; // xmm0
  unsigned int v8; // ebp
  _QWORD v10[7]; // [rsp+0h] [rbp-118h] BYREF
  char v11[24]; // [rsp+C0h] [rbp-58h] BYREF
  unsigned __int64 v12; // [rsp+D8h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  if ( (unsigned int)(a1 + 0x1FFF) >> 13 )
  {
    v6 = (unsigned __int8)a2;
    v7 = -1;
    v8 = (unsigned __int8)a2 + ((unsigned int)(a1 + 0x1FFF) >> 13);
    do
    {
      v10[6] = allocate_selector(
                 (unsigned __int64)(unsigned int)((v6 << 16) + 24576) >> 4,
                 a2,
                 a3,
                 a4,
                 a5,
                 a6,
                 (unsigned int)((v6 << 16) + 24576),
                 (unsigned int)((v6 << 16) + 24576) + 0x2000LL,
                 0,
                 0,
                 0,
                 0,
                 0,
                 v7,
                 *((_QWORD *)&v7 + 1),
                 v7,
                 *((_QWORD *)&v7 + 1),
                 v7,
                 *((_QWORD *)&v7 + 1),
                 v7,
                 *((_QWORD *)&v7 + 1),
                 v7,
                 *((_QWORD *)&v7 + 1),
                 v7,
                 *((_QWORD *)&v7 + 1),
                 v7,
                 *((_QWORD *)&v7 + 1),
                 v7,
                 *((_QWORD *)&v7 + 1),
                 -4294967284LL);
      qsnprintf(v11, 16, ".%02X", v6);
      a2 = v11;
      v7 = -1;
      if ( !(unsigned __int8)add_segm_ex(v10, v11, "BANK_RAM", 33) )
        sub_1270((__int64)"Failed adding %s segment\n", v11);
      ++v6;
    }
    while ( v6 != v8 );
  }
  return v12 - __readfsqword(0x28u);
}

