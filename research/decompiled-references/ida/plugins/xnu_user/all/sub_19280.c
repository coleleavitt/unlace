unsigned __int64 __fastcall sub_19280(_QWORD *a1)
{
  const char **v1; // rbp
  __int64 v2; // rax
  const char *v3; // r15
  __int16 v4; // r14
  const char *v5; // r13
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v9; // rax
  const char *v10; // [rsp+10h] [rbp-E8h] BYREF
  __int16 v11; // [rsp+18h] [rbp-E0h]
  _WORD v12[75]; // [rsp+1Ah] [rbp-DEh] BYREF
  char v13; // [rsp+B0h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+B8h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  sub_473F0();
  memset(v12, 0, sizeof(v12));
  v1 = &v10;
  v10 = "KERNEL_BOUNDS";
  v11 = 6918;
  *(_QWORD *)&v12[11] = "DEBUG_UEFI";
  *(_QWORD *)&v12[27] = "UEFI_SYMBOLS";
  *(_QWORD *)&v12[43] = "KDK_PATH";
  *(_QWORD *)&v12[59] = "KEXT_POLICY";
  *(_QWORD *)&v12[19] = a1 + 268;
  v12[31] = 7681;
  *(_QWORD *)&v12[35] = a1 + 263;
  *(_QWORD *)&v12[51] = a1 + 238;
  v12[15] = 7171;
  v12[47] = 6657;
  v12[63] = 7426;
  *(_QWORD *)&v12[67] = a1 + 243;
  v2 = a1[126];
  do
  {
    v3 = *v1;
    v4 = *((_WORD *)v1 + 4);
    v5 = v1[2];
    v6 = a1[125];
    if ( a1[127] < (unsigned __int64)(v2 + 1) )
    {
      v9 = qvector_reserve();
      a1[125] = v9;
      v6 = v9;
      v2 = a1[126];
    }
    v1 += 4;
    v7 = 32 * v2 + v6;
    *(_QWORD *)v7 = v3;
    *(_WORD *)(v7 + 8) = v4;
    *(_QWORD *)(v7 + 16) = v5;
    *(_QWORD *)(v7 + 24) = 0;
    v2 = a1[126] + 1LL;
    a1[126] = v2;
  }
  while ( &v13 != (char *)v1 );
  return v14 - __readfsqword(0x28u);
}

