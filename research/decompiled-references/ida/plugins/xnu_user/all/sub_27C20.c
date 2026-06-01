__int64 __fastcall sub_27C20(double a1, __int64 a2, __int64 a3)
{
  __m128i *v4; // rbx
  __int64 v5; // rbp
  unsigned __int64 v6; // r14
  __int64 v8; // r15
  __int64 v9; // rbp
  __int64 v10; // rax
  __m128i *v11; // rax
  __m128i *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned __int64 v15; // rbp
  const char *v16; // rsi
  __int64 v17; // [rsp+10h] [rbp-E8h] BYREF
  __int128 v18; // [rsp+18h] [rbp-E0h]
  const char *v19; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v20; // [rsp+38h] [rbp-C0h]
  unsigned __int64 v21; // [rsp+50h] [rbp-A8h] BYREF
  char v22[8]; // [rsp+58h] [rbp-A0h] BYREF
  char v23[24]; // [rsp+60h] [rbp-98h] BYREF
  char v24[24]; // [rsp+78h] [rbp-80h] BYREF
  int v25; // [rsp+90h] [rbp-68h]
  char v26[28]; // [rsp+94h] [rbp-64h] BYREF
  int v27; // [rsp+B0h] [rbp-48h]
  unsigned __int64 v28; // [rsp+B8h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v4 = (__m128i *)sub_15850();
  if ( (unsigned __int64)sub_30490(v4, v4[85].m128i_u32[1]) >> 32 )
  {
    v5 = v4[93].m128i_i64[1];
    if ( v5 != -1 && v4[94].m128i_i64[0] && v4[95].m128i_i64[0] > 1uLL )
    {
      free_idcv();
      *(_BYTE *)a3 = 2;
      *(_QWORD *)(a3 + 8) = v5;
      return 0;
    }
    if ( !(unsigned __int8)sub_27700(v4, a1) )
    {
      sub_140F0((__int64)"Failed to find the kernel base\n");
      free_idcv();
      *(_BYTE *)a3 = 2;
      *(_QWORD *)(a3 + 8) = -1;
      return 0;
    }
    v6 = v4[93].m128i_u64[1];
    sub_58A20(v4);
    (*(void (__fastcall **)(__m128i *, _QWORD, __int64, _QWORD))(v4->m128i_i64[0] + 192))(v4, 0, 1, 0);
LABEL_8:
    v4[100].m128i_i8[0] = 1;
    invalidate_dbgmem_config();
    free_idcv();
    *(_BYTE *)a3 = 2;
    *(_QWORD *)(a3 + 8) = v6;
    return 0;
  }
  v17 = 0;
  v19 = nullptr;
  v18 = 0;
  v20 = 0;
  if ( !(unsigned __int8)sub_23460((unsigned int *)v4, &v17, (__int64 *)&v19) )
  {
    v16 = src;
    if ( (_QWORD)v20 )
      v16 = v19;
    sub_140F0((__int64)"Error: %s\n", v16);
    goto LABEL_36;
  }
  v8 = v18;
  v6 = -1;
  v9 = 0;
  if ( !(_QWORD)v18 )
    goto LABEL_12;
  do
  {
    while ( 1 )
    {
      v10 = 40 * v9 + v17;
      if ( *(_DWORD *)v10 == 2 )
        break;
      if ( v8 == ++v9 )
        goto LABEL_18;
    }
    if ( (unsigned __int8)sub_2EDF0(&v4[106].m128i_u64[1], *(_QWORD *)(v10 + 8)) )
      v6 = *(_QWORD *)(v17 + 40 * v9 + 8);
    ++v9;
  }
  while ( v8 != v9 );
LABEL_18:
  if ( v6 == -1 )
  {
LABEL_12:
    sub_140F0((__int64)"Failed to find the kernel in the EFI memory map\n");
LABEL_36:
    free_idcv();
    *(_BYTE *)a3 = 2;
    *(_QWORD *)(a3 + 8) = -1;
    goto LABEL_28;
  }
  v11 = (__m128i *)v4[88].m128i_i64[1];
  if ( !v11 )
    goto LABEL_26;
  v12 = v4 + 88;
  do
  {
    while ( 1 )
    {
      v13 = v11[1].m128i_i64[0];
      v14 = v11[1].m128i_i64[1];
      if ( v11[2].m128i_i64[0] < v6 )
        break;
      v12 = v11;
      v11 = (__m128i *)v11[1].m128i_i64[0];
      if ( !v13 )
        goto LABEL_24;
    }
    v11 = (__m128i *)v11[1].m128i_i64[1];
  }
  while ( v14 );
LABEL_24:
  if ( v12 != &v4[88] && (v15 = v12[2].m128i_u64[0], v6 >= v15) )
  {
    free_idcv();
    *(_BYTE *)a3 = 2;
    *(_QWORD *)(a3 + 8) = v15;
  }
  else
  {
LABEL_26:
    sub_1BFD0((__int64)&v21);
    if ( (unsigned __int8)sub_2F010(&v4[106].m128i_u64[1], v26, v22, v24, v6) )
    {
      v21 = v6;
      v25 = 25;
      v27 = 25;
      sub_19AC0((__int64)v23, "kernel");
      sub_59020(v4, &v21);
      (*(void (__fastcall **)(__m128i *, _QWORD, __int64, _QWORD))(v4->m128i_i64[0] + 192))(v4, 0, 1, 0);
      sub_1C760(&v21);
      if ( v19 )
      {
        *(_QWORD *)&v20 = 0;
        qfree();
      }
      if ( v17 )
      {
        *(_QWORD *)&v18 = 0;
        qfree();
      }
      goto LABEL_8;
    }
    sub_140F0((__int64)"Failed to parse the kernel image at %a\n", 0.0);
    free_idcv();
    *(_BYTE *)a3 = 2;
    *(_QWORD *)(a3 + 8) = -1;
    sub_1C760(&v21);
  }
LABEL_28:
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree();
  }
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree();
  }
  return 0;
}

