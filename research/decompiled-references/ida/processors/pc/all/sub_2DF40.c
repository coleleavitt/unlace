__int64 __fastcall sub_2DF40(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  __int64 v5; // r13
  unsigned __int64 *func; // r14
  unsigned int v7; // eax
  unsigned __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rax
  int v11; // eax
  unsigned __int16 v12; // ax
  int v13; // eax
  __int64 v14; // rcx
  _QWORD v15[7]; // [rsp+0h] [rbp-38h] BYREF

  v15[1] = __readfsqword(0x28u);
  if ( a1[20] )
    goto LABEL_2;
  v5 = a1[18];
  v3 = a3;
  if ( (getinf() & 0xF) == 6 && (*(_BYTE *)(a2 + 28) & 0x10) != 0 )
    goto LABEL_2;
  if ( *(_WORD *)(a2 + 24) != 92 || *(_WORD *)(a2 + 46) != 5 || *(_BYTE *)(a2 + 81) != 4 )
    goto LABEL_2;
  if ( *(_BYTE *)(a2 + 112) )
  {
    if ( (*(_DWORD *)(a2 + 28) & 0x10) != 0 && (*(_BYTE *)(a2 + 33) & 2) != 0 || (*(_BYTE *)(a2 + 113) & 0x38) != 0x20 )
      goto LABEL_2;
    goto LABEL_11;
  }
  v11 = *(_DWORD *)(a2 + 28) & 0x1018;
  if ( v11 != 4096 && v11 != 8 )
    goto LABEL_11;
  v12 = *(_WORD *)(a2 + 86);
  if ( v12 == 0xFFFF )
  {
    sub_21490();
    goto LABEL_33;
  }
  if ( v12 > 7u )
  {
LABEL_33:
    sub_21470(57);
LABEL_34:
    if ( !sub_22E80(a1) )
    {
      sub_22DA0(a1, *(_QWORD *)(a2 + 16));
      sub_22F00((__int64)a1);
      v13 = sub_215A0(*(_DWORD *)(a2 + 28));
      v10 = v14 - v3 - v13;
      if ( *(_DWORD *)(*(_QWORD *)(a1[18] + 32LL) + 24LL) != 8 )
        v10 = (int)v10;
      goto LABEL_20;
    }
LABEL_18:
    sub_22E80(a1);
    v8 = sub_22F00((__int64)a1);
    v10 = v8 - v3 - v9;
    if ( *(_DWORD *)(*(_QWORD *)(v5 + 32) + 24LL) != 8 )
      v10 = (int)v10;
LABEL_20:
    a1[20] = v10;
    LODWORD(v3) = 1;
    sub_216A0(a1 + 6, *(_QWORD *)(a2 + 16));
    return (unsigned int)v3;
  }
  if ( dword_94FA0[v12] == -1 || v12 <= 3u )
    goto LABEL_2;
LABEL_11:
  LOBYTE(v3) = _bittest((const int *)&v3, sub_71FC0(5, 1));
  if ( (_BYTE)v3 )
  {
LABEL_2:
    LODWORD(v3) = 0;
    return (unsigned int)v3;
  }
  func = (unsigned __int64 *)get_func();
  v7 = sub_229C0(a2, a2 + 80);
  v15[0] = 0;
  if ( func )
    v7 = sub_2C040(v5, *func, *(_QWORD *)(a2 + 16), v7, -1, v15);
  if ( v7 == 4 )
  {
    v5 = a1[18];
    v3 = *(_QWORD *)(a2 + 96) + v15[0];
    if ( *(_DWORD *)(*(_QWORD *)(v5 + 32) + 24LL) != 8 )
      v3 = (int)v3;
    v15[0] = v3;
    if ( v3 >= 0 )
      goto LABEL_18;
    goto LABEL_34;
  }
  return (unsigned int)v3;
}
