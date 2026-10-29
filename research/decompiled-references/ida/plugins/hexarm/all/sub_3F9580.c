__int64 __fastcall sub_3F9580(__int64 a1, int a2, int a3, double a4)
{
  __int64 v5; // rbx
  __int16 v6; // r15
  unsigned __int8 v7; // bp
  unsigned __int64 dtype_size; // r12
  int v9; // r12d
  __int64 v10; // rax
  int v11; // r14d
  int v12; // eax
  int v13; // ebp
  int v14; // ebx
  int v15; // r14d
  int v16; // r13d
  int v17; // r12d
  int v18; // r15d
  int v19; // r8d
  int v20; // ecx
  int v22; // [rsp+Ch] [rbp-4Ch]
  unsigned __int8 v23; // [rsp+Ch] [rbp-4Ch]
  unsigned __int64 v24; // [rsp+10h] [rbp-48h]
  unsigned __int8 v25; // [rsp+10h] [rbp-48h]
  unsigned __int8 v26; // [rsp+18h] [rbp-40h]

  v5 = a1;
  v6 = *(_WORD *)(a1 + 48);
  v22 = sub_3EE210(a1, a1 + 104, a4);
  v26 = sub_3EE470(a1, a1 + 104, 0, a4);
  v7 = sub_3EE470(v5, v5 + 64, 0, a4);
  sub_3EE110(a1, a1 + 104, a4);
  dtype_size = get_dtype_size();
  v24 = dtype_size / (unsigned int)sub_3EE210(a1, a1 + 104, a4);
  v9 = v24;
  sub_3EE110(a1, a1 + 104, a4);
  v10 = get_dtype_size();
  if ( ((v6 - 754) & 0xFFFD) == 0 )
  {
    if ( v10 == 16 )
    {
      a3 += 8;
      v9 = (int)v24 / 2;
      goto LABEL_4;
    }
LABEL_10:
    if ( !under_debugger )
      sub_3835A0(0xCBF3u, a4);
    BUG();
  }
  if ( v10 != 8 )
    goto LABEL_10;
LABEL_4:
  v11 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 632LL);
  if ( v9 > 0 )
  {
    v12 = v22;
    v25 = v7;
    v13 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 632LL);
    v14 = a3;
    v15 = v9;
    v23 = (unsigned __int16)(v6 - 755) <= 1u;
    v16 = 0;
    v17 = 2 * v12;
    v18 = v12;
    do
    {
      v19 = v13;
      v20 = v14;
      ++v16;
      v14 += v18;
      v13 += v17;
      sub_3F8F20(a1, v26, v25, v20, v19, v23);
    }
    while ( v15 != v16 );
    v5 = a1;
    v11 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 632LL);
  }
  return sub_3F6E70(v5, 4u, 8u, v11, 0x3BEA45E214ADDC55LL, a2, a4, 0, 1);
}

