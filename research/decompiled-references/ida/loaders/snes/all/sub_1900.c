unsigned __int64 __fastcall sub_1900(int a1, char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebp
  int v7; // r15d
  int v8; // r14d
  __int128 v9; // xmm0
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v14; // [rsp+0h] [rbp-128h]
  _QWORD *v15; // [rsp+8h] [rbp-120h]
  _QWORD v16[24]; // [rsp+10h] [rbp-118h] BYREF
  char v17[24]; // [rsp+D0h] [rbp-58h] BYREF
  unsigned __int64 v18; // [rsp+E8h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  v6 = (unsigned int)(a1 + 0x7FFF) >> 15;
  if ( v6 )
  {
    v7 = 0;
    v8 = 112;
    v15 = v16;
    v9 = -1;
    do
    {
      if ( v8 == 126 )
      {
        v12 = 1040384;
        v11 = 16678912;
        v10 = 16646144;
        v8 = 254;
      }
      else
      {
        v10 = (unsigned int)(v8 << 16);
        v11 = v10 + 0x8000;
        v12 = v10 >> 4;
      }
      v16[23] = -4294967284LL;
      v16[22] = *((_QWORD *)&v9 + 1);
      v16[6] = allocate_selector(
                 v12,
                 a2,
                 v11,
                 a4,
                 a5,
                 a6,
                 v14,
                 v15,
                 v10,
                 v11,
                 0,
                 0,
                 0,
                 0,
                 0,
                 v9,
                 *((_QWORD *)&v9 + 1),
                 v9,
                 *((_QWORD *)&v9 + 1),
                 v9,
                 *((_QWORD *)&v9 + 1),
                 v9,
                 *((_QWORD *)&v9 + 1),
                 v9,
                 *((_QWORD *)&v9 + 1),
                 v9,
                 *((_QWORD *)&v9 + 1),
                 v9,
                 *((_QWORD *)&v9 + 1),
                 v9);
      qsnprintf(v17, 16, ".%02X", v8);
      a2 = v17;
      v9 = -1;
      if ( !(unsigned __int8)add_segm_ex(v15, v17, "BANK_RAM", 33) )
        sub_1270((__int64)"Failed adding %s segment\n", v17);
      ++v7;
      ++v8;
    }
    while ( v6 != v7 );
  }
  return v18 - __readfsqword(0x28u);
}

