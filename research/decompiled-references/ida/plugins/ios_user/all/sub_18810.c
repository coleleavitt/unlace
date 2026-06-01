unsigned __int64 __fastcall sub_18810(_QWORD *a1)
{
  const char **v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rsi
  const char *v4; // r15
  __int16 v5; // r14
  const char *v6; // r13
  __int64 v7; // rsi
  __int64 v8; // rax
  const char *v10; // [rsp+10h] [rbp-108h] BYREF
  __int16 v11; // [rsp+18h] [rbp-100h]
  _WORD v12[91]; // [rsp+1Ah] [rbp-FEh] BYREF
  char v13; // [rsp+D0h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+D8h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  sub_3D0F0();
  memset(v12, 0, sizeof(v12));
  v1 = &v10;
  v10 = "DEVICE_ID";
  v11 = 3585;
  *(_QWORD *)&v12[11] = "AUTOLAUNCH";
  *(_QWORD *)&v12[27] = "SYMBOL_PATH";
  *(_QWORD *)&v12[43] = "MD_PATH";
  *(_QWORD *)&v12[59] = "SYSLOG_FLAGS";
  *(_QWORD *)&v12[75] = "DISABLE_DYLD_NOTIFY";
  *(_QWORD *)&v12[3] = a1 + 245;
  *(_QWORD *)&v12[19] = a1 + 254;
  *(_QWORD *)&v12[35] = a1 + 242;
  *(_QWORD *)&v12[51] = a1 + 248;
  v12[31] = 2049;
  *(_QWORD *)&v12[67] = a1 + 251;
  *(_QWORD *)&v12[83] = (char *)a1 + 2033;
  v2 = a1[126];
  v12[15] = 2563;
  v12[47] = 3841;
  v12[63] = 2305;
  v12[79] = 6403;
  do
  {
    v4 = *v1;
    v5 = *((_WORD *)v1 + 4);
    v6 = v1[2];
    v7 = a1[125];
    if ( a1[127] < (unsigned __int64)(v2 + 1) )
    {
      v8 = qvector_reserve();
      a1[125] = v8;
      v7 = v8;
      v2 = a1[126];
    }
    v1 += 4;
    v3 = 32 * v2 + v7;
    *(_QWORD *)v3 = v4;
    *(_WORD *)(v3 + 8) = v5;
    *(_QWORD *)(v3 + 16) = v6;
    *(_QWORD *)(v3 + 24) = 0;
    v2 = a1[126] + 1LL;
    a1[126] = v2;
  }
  while ( &v13 != (char *)v1 );
  return v14 - __readfsqword(0x28u);
}

