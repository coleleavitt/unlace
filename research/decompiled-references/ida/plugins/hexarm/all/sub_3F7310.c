__int64 __fastcall sub_3F7310(
        __int64 a1,
        __int16 a2,
        signed int a3,
        int a4,
        unsigned __int8 a5,
        int a6,
        double a7,
        int a8)
{
  unsigned int v8; // r15d
  __int64 v10; // rax
  signed int v11; // r14d
  int dtype_size; // eax
  int v13; // r8d
  int v14; // ebp
  int v15; // r10d
  __int64 v16; // r11
  __int64 v17; // rax
  __int64 v18; // r11
  int v20; // r12d
  int v21; // eax
  int v22; // ebp
  unsigned int v23; // r9d
  int v24; // r8d
  unsigned __int8 v25; // cl
  int v26; // edx
  unsigned int v27; // esi
  int v29; // [rsp+18h] [rbp-50h]
  __int64 v30; // [rsp+18h] [rbp-50h]
  int v31; // [rsp+20h] [rbp-48h]
  int v34; // [rsp+2Ch] [rbp-3Ch]

  v8 = a5;
  v10 = *(_QWORD *)(a1 + 832);
  v11 = *(_DWORD *)(v10 + 620);
  v34 = *(_DWORD *)(v10 + 624);
  dtype_size = get_dtype_size();
  v13 = a6;
  v14 = 8 * dtype_size;
  if ( a2 == 499 )
  {
    v20 = a6 - 1 - a8;
    v21 = v14 - a8;
    v22 = v20 + v14;
    if ( a8 >= a6 )
      v20 = v22;
    sub_3F7220(a1, 0x16u, a4, a5, v21 - 1, v11, a7);
    v23 = a3;
    v24 = v20;
    v25 = a5;
    v26 = v11;
    v27 = 24;
    return sub_3F7220(a1, v27, v26, v25, v24, v23, a7);
  }
  if ( ((a2 - 498) & 0xFFFD) != 0 )
  {
    if ( !under_debugger )
      sub_3835A0(0xC85Du, a7);
    BUG();
  }
  if ( a8 < a6 )
  {
    v15 = a8 + 1;
    v13 = 0;
    v31 = v14 - a6;
  }
  else
  {
    v31 = 0;
    v15 = a8 - a6 + 1;
  }
  v29 = v15;
  sub_3F7220(a1, 0x17u, a4, a5, v13, v11, a7);
  v16 = -1;
  if ( (unsigned __int64)v29 <= 0x3F )
    v16 = (1LL << v29) - 1;
  if ( v29 != v14 )
  {
    v30 = v16;
    sub_3F56D0(a1, 3u, v8, v16, 0x3BEA45E214ADDC55LL, v34, 0);
    sub_3F56D0(a1, 0x14u, v8, v11, v34, v11, 0);
    v16 = v30;
  }
  if ( a2 != 498 )
  {
    v23 = a3;
    v24 = v31;
    v25 = a5;
    v26 = v11;
    v27 = 22;
    return sub_3F7220(a1, v27, v26, v25, v24, v23, a7);
  }
  v17 = -1;
  v18 = ~(v16 << v31);
  if ( (unsigned __int64)v31 < 0x40 )
    v17 = v18;
  sub_3F56D0(a1, 3u, v8, v17, 0x3BEA45E214ADDC55LL, v34, 0);
  sub_3F6E70(a1, 0x14u, a5, a3, v34, v34, a7, 0, 1);
  sub_3F7220(a1, 0x16u, v11, a5, v31, v11, a7);
  return sub_3F6E70(a1, 0x13u, a5, v34, v11, a3, a7, 0, 1);
}

