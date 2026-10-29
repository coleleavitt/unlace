__int64 __fastcall sub_4100(_QWORD *a1, _DWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rdi
  unsigned __int64 v5; // rdx
  __int64 v7; // rsi
  unsigned __int8 v8; // r12
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  unsigned int v15; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v16; // [rsp+8h] [rbp-20h]

  v2 = a1[3];
  v16 = __readfsqword(0x28u);
  v4 = v2 + 1;
  v5 = a1[4];
  if ( v5 < v2 + 1 )
    sub_3890((__int64)"couldn't read template type @0x%llx", v2);
  v7 = a1[1];
  v8 = *(_BYTE *)(v7 + v2);
  a1[5] = v2;
  a1[3] = v4;
  if ( (unsigned __int8)(v8 + 4) > 2u )
  {
    *a2 = sub_E660(v8);
  }
  else
  {
    v9 = v7 + v4;
    v10 = v5 + v7;
    if ( v9 >= v10 || (v11 = sub_E440(v9, v10, &v15)) == 0 )
      sub_3890((__int64)"read_opcode: couldn't read code after byte prefix");
    v12 = a1[3];
    v13 = v15;
    a1[5] = v12;
    a1[3] = v12 + v11;
    *a2 = sub_E5E0(v8, v13);
  }
  return 1;
}

