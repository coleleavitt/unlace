__int64 __fastcall sub_69230(__int64 a1)
{
  _QWORD *v1; // rax
  int v3; // eax
  _QWORD *v4; // rdi
  __int64 v6; // rdi
  _OWORD *v7; // rsi
  __int64 v8; // rbx
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // [rsp+8h] [rbp-F0h] BYREF
  __int128 v13; // [rsp+10h] [rbp-E8h] BYREF
  __int64 (__fastcall **v14)(); // [rsp+20h] [rbp-D8h] BYREF
  int v15; // [rsp+28h] [rbp-D0h]
  _BYTE v16[16]; // [rsp+30h] [rbp-C8h] BYREF
  int v17; // [rsp+40h] [rbp-B8h]
  _QWORD v18[2]; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+60h] [rbp-98h]
  __int128 v20; // [rsp+68h] [rbp-90h]
  _OWORD v21[4]; // [rsp+80h] [rbp-78h] BYREF
  __int64 v22; // [rsp+C0h] [rbp-38h]
  unsigned __int64 v23; // [rsp+C8h] [rbp-30h]

  v1 = *(_QWORD **)(a1 + 32);
  v23 = __readfsqword(0x28u);
  LODWORD(v18[0]) = 0;
  *(_QWORD *)&v21[0] = 0;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *, _OWORD *))(v1[32] + 112LL))(
         *(_QWORD *)(*v1 + 24LL),
         17,
         v18,
         v21);
  v4 = *(_QWORD **)(a1 + 32);
  if ( !v3 && LODWORD(v18[0]) )
    return sub_9A0A0(v4);
  LODWORD(v18[0]) = 0;
  *(_QWORD *)&v21[0] = 0;
  if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, _QWORD *, _OWORD *))(v4[32] + 112LL))(
         *(_QWORD *)(*v4 + 24LL),
         2,
         v18,
         v21)
    || !LODWORD(v18[0]) )
  {
    return -1;
  }
  v6 = *(_QWORD *)(a1 + 32);
  v13 = 0;
  sub_945B0(v6, &v13, 2);
  v7 = *(_OWORD **)(*(_QWORD *)(a1 + 32) + 256LL);
  sub_89A30(v16, v7, &v13);
  if ( v17 == 1 )
  {
    v7 = v21;
    v22 = 0;
    memset(v21, 0, sizeof(v21));
    if ( (unsigned __int8)sub_874F0(v16, v21, 0) )
    {
      v9 = *(__int64 **)(a1 + 32);
      v10 = *v9;
      v14 = &off_C8770;
      v15 = 1;
      v11 = *(_QWORD *)(v10 + 16);
      v18[1] = v21;
      v19 = 0;
      v18[0] = v11;
      v20 = 0;
      v7 = (_OWORD *)v9[32];
      if ( (unsigned __int8)sub_89AD0(v18, v7, &v12, &v14) )
      {
        v8 = v12;
        if ( v19 )
        {
          *(_QWORD *)&v20 = 0;
          qfree(v19);
        }
        goto LABEL_10;
      }
      if ( (debug & 0x40000) != 0 )
        sub_16DD0((__int64)"DWARF: failed to evaluate locdesc\n");
      if ( v19 )
      {
        *(_QWORD *)&v20 = 0;
        qfree(v19);
      }
    }
    sub_85110(v16, v7);
    sub_84A10(&v13);
    return -1;
  }
  if ( (debug & 0x40000) != 0 )
    sub_16DD0((__int64)"DWARF: item has DW_AT_location, but more than 1 locdesc. Unsupported.\n");
  v8 = -1;
LABEL_10:
  sub_85110(v16, v7);
  sub_84A10(&v13);
  return v8;
}
