unsigned __int64 __fastcall sub_3D0F0(_QWORD *a1)
{
  char *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // r8
  __int16 v5; // r15
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v11; // [rsp+0h] [rbp-298h]
  _QWORD v12[72]; // [rsp+10h] [rbp-288h] BYREF
  char v13; // [rsp+250h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+258h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  memset(v12, 0, sizeof(v12));
  v12[0] = "MAXPACKETSIZE";
  LOWORD(v12[1]) = 258;
  LOWORD(v12[9]) = 770;
  v12[2] = &qword_8F6A8;
  v12[4] = "DEFAULT_CONFIG";
  v12[8] = "REMOTE_TIMEOUT";
  v12[12] = "STUB_OPTIONS";
  v12[20] = "EXT_CMDLINE";
  v12[16] = &unk_71F21;
  LOWORD(v12[21]) = 1793;
  LOWORD(v12[5]) = 513;
  v12[11] = 32;
  BYTE1(v12[13]) = 4;
  LOWORD(v12[17]) = 1538;
  v12[24] = "EXT_INITSP";
  v12[32] = &unk_71F21;
  v12[36] = "NOACK_MODE";
  v12[40] = "SINGLE_STEP";
  v12[44] = "X86_SWBP_PLUS1";
  v12[48] = "X86_USE_CSIP";
  v12[52] = "IDA_FEATURES";
  v12[56] = "ARCH_MAP";
  v12[60] = "FEATURE_MAP";
  v12[64] = "UNIQUE_REGISTER_MAP";
  LOWORD(v12[65]) = 5894;
  v12[68] = "ARM_UPDATE_CPSR";
  LOWORD(v12[69]) = 6146;
  v12[6] = a1 + 111;
  v12[10] = a1 + 114;
  v12[18] = a1 + 120;
  v12[22] = a1 + 122;
  LOWORD(v12[45]) = 4610;
  v1 = (char *)v12;
  LOWORD(v12[53]) = 5126;
  LOWORD(v12[25]) = 2818;
  v12[28] = "CONFIGURATIONS";
  LOWORD(v12[29]) = 3078;
  BYTE1(v12[33]) = 13;
  LOWORD(v12[37]) = 4098;
  v12[39] = 40;
  LOWORD(v12[41]) = 4354;
  v12[43] = 48;
  v12[47] = 56;
  LOWORD(v12[49]) = 4866;
  v12[51] = 64;
  LOWORD(v12[57]) = 5382;
  LOWORD(v12[61]) = 5638;
  v12[71] = 72;
  v12[26] = a1 + 151;
  v12[38] = a1 + 115;
  v12[42] = a1 + 116;
  v12[46] = a1 + 117;
  v12[50] = a1 + 118;
  v12[70] = a1 + 119;
  v2 = a1[126];
  do
  {
    v4 = *(_QWORD *)v1;
    v5 = *((_WORD *)v1 + 4);
    v6 = *((_QWORD *)v1 + 2);
    v7 = *((_QWORD *)v1 + 3);
    v8 = a1[125];
    if ( a1[127] < (unsigned __int64)(v2 + 1) )
    {
      v11 = *(_QWORD *)v1;
      v9 = qvector_reserve();
      v4 = v11;
      a1[125] = v9;
      v8 = v9;
      v2 = a1[126];
    }
    v1 += 32;
    v3 = 32 * v2 + v8;
    *(_QWORD *)v3 = v4;
    *(_WORD *)(v3 + 8) = v5;
    *(_QWORD *)(v3 + 16) = v6;
    *(_QWORD *)(v3 + 24) = v7;
    v2 = a1[126] + 1LL;
    a1[126] = v2;
  }
  while ( &v13 != v1 );
  return v14 - __readfsqword(0x28u);
}

