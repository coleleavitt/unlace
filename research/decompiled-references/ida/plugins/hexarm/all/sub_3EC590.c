unsigned __int64 __fastcall sub_3EC590(_QWORD *a1, double a2)
{
  int custom_refinfo; // eax
  char v3; // r13
  __int64 v4; // rax
  char v5; // r13
  __int64 v6; // rsi
  int v7; // eax
  char v8; // r13
  __int64 v9; // rax
  char v10; // r13
  __int64 v11; // rsi
  int v12; // eax
  char v13; // r12
  __int64 v14; // rax
  char v15; // r12
  __int64 v16; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // [rsp+8h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  custom_refinfo = find_custom_refinfo();
  if ( custom_refinfo == -1 )
  {
    if ( !under_debugger )
      sub_3835A0(0xCCD5u, a2);
LABEL_17:
    BUG();
  }
  v3 = custom_refinfo;
  v4 = a1[39];
  v5 = v3 | 0x40;
  v6 = a1[38];
  if ( a1[40] < (unsigned __int64)(v4 + 1) )
  {
    v18 = qvector_reserve();
    a1[38] = v18;
    v6 = v18;
    v4 = a1[39];
  }
  *(_BYTE *)(v6 + v4) = v5;
  ++a1[39];
  v7 = find_custom_refinfo();
  if ( v7 == -1 )
  {
    if ( !under_debugger )
      sub_3835A0(0xCCD6u, a2);
    goto LABEL_17;
  }
  v8 = v7;
  v9 = a1[39];
  v10 = v8 | 0x40;
  v11 = a1[38];
  if ( a1[40] < (unsigned __int64)(v9 + 1) )
  {
    v19 = qvector_reserve();
    a1[38] = v19;
    v11 = v19;
    v9 = a1[39];
  }
  *(_BYTE *)(v11 + v9) = v10;
  ++a1[39];
  v12 = find_custom_refinfo();
  if ( v12 == -1 )
  {
    if ( !under_debugger )
      sub_3835A0(0xCE2Eu, a2);
    goto LABEL_17;
  }
  v13 = v12;
  v14 = a1[42];
  v15 = v13 | 0x40;
  v16 = a1[41];
  if ( a1[43] < (unsigned __int64)(v14 + 1) )
  {
    v20 = qvector_reserve();
    a1[41] = v20;
    v16 = v20;
    v14 = a1[42];
  }
  *(_BYTE *)(v16 + v14) = v15;
  ++a1[42];
  return v21 - __readfsqword(0x28u);
}

