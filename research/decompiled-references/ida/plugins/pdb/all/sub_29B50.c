__int64 __fastcall sub_29B50(__int64 a1)
{
  __int64 v1; // rax
  bool v2; // cc
  const char *v3; // rsi
  __int64 v4; // rax
  int v5; // edx
  __int64 result; // rax
  int v7; // ecx
  unsigned int v8; // eax
  int v9; // ecx
  unsigned int v10; // ecx
  int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // [rsp+0h] [rbp-1038h] BYREF
  __int64 v14; // [rsp+8h] [rbp-1030h]
  _BYTE v15[4104]; // [rsp+10h] [rbp-1028h] BYREF
  unsigned __int64 v16; // [rsp+1018h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  netnode_check(&v13, "$ PE header", 0, 0);
  v1 = netnode_altval(v13, -2, 65);
  v2 = *(_QWORD *)(a1 + 8) <= 1u;
  *(_QWORD *)(a1 + 96) = v1;
  if ( v2 )
  {
    v3 = "*.pdb";
    if ( *(_QWORD *)(a1 + 32) <= 1u )
      goto LABEL_5;
    v3 = *(const char **)(a1 + 24);
  }
  else
  {
    v3 = *(const char **)a1;
  }
  if ( !v3 )
    v3 = "*.pdb";
LABEL_5:
  qstrncpy(v15, v3, 4096);
  v4 = (*(_DWORD *)(a1 + 112) >> 1) & 1;
  if ( (*(_DWORD *)(a1 + 112) & 0x10) != 0 )
    v4 = (*(_DWORD *)(a1 + 112) >> 1) & 1 | 2LL;
  v14 = v4;
  v5 = sub_29A80();
  result = 0;
  if ( v5 )
  {
    sub_291E0((__int64 *)a1, v15);
    v7 = *(_DWORD *)(a1 + 112);
    v8 = v7 & 0xFFFFFFFD;
    v9 = v7 | 2;
    if ( (v14 & 1) != 0 )
      v8 = v9;
    v10 = v8;
    v11 = v8 | 0x10;
    v12 = v10 & 0xFFFFFFEF;
    if ( (v14 & 2) == 0 )
      v11 = v12;
    *(_DWORD *)(a1 + 112) = v11;
    return 1;
  }
  return result;
}

