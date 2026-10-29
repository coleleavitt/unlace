void __fastcall sub_3EDD40(__int64 a1, int a2, int a3, int a4, double a5)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // r15d
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rdx
  _DWORD *v13; // rdx
  bool v14; // zf
  int v15; // r14d
  __int64 v16; // [rsp+0h] [rbp-98h]
  __int64 v19; // [rsp+10h] [rbp-88h]
  int v21; // [rsp+1Ch] [rbp-7Ch]
  __int64 v22; // [rsp+20h] [rbp-78h] BYREF
  int v23; // [rsp+28h] [rbp-70h]
  __int64 v24; // [rsp+30h] [rbp-68h] BYREF
  int v25; // [rsp+38h] [rbp-60h]
  unsigned __int64 v26; // [rsp+40h] [rbp-58h] BYREF
  __int64 v27; // [rsp+48h] [rbp-50h]
  unsigned __int64 v28; // [rsp+58h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 65) != 10 )
  {
    if ( !under_debugger )
      sub_37CFE0(0xCE5Bu, a5);
LABEL_12:
    BUG();
  }
  v5 = *(_QWORD *)(a1 + 72);
  v6 = (unsigned int)v5;
  if ( (unsigned int)v5 > 0xF )
  {
    if ( !under_debugger )
      sub_37CFE0(0xCEF1u, a5);
    goto LABEL_12;
  }
  v7 = *(_QWORD *)(a1 + 832);
  v8 = *(_QWORD *)(v7 + 584);
  if ( !v8 )
    sub_3E4140(a5);
  v9 = *(_DWORD *)(*(_QWORD *)(v7 + 576) + 4 * v8 - 4);
  *(_QWORD *)(v7 + 584) = v8 - 1;
  sub_3ED6D0(a1, v6, v9, a5);
  v19 = sub_63550(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
  v10 = sub_63550(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
  v11 = sub_63550(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50), 0);
  v12 = *(_QWORD *)(a1 + 832);
  v23 = v9;
  v16 = v11;
  v13 = *(_DWORD **)(v12 + 528);
  v22 = 0x100000001LL;
  LODWORD(v13) = *v13;
  v26 = 0xFFFFFFFF00000000LL;
  v24 = 0x100000001LL;
  v27 = 0;
  LODWORD(v11) = *(_DWORD *)(v10 + 72);
  v25 = (int)v13;
  v21 = v11;
  sub_1181E0((__int64)&v26);
  LOBYTE(v26) = 7;
  LODWORD(v27) = v21;
  sub_3EBC10(a1, 44, (unsigned __int8 *)&v22, (unsigned __int8 *)&v24, (unsigned __int8 *)&v26);
  sub_1181E0((__int64)&v26);
  sub_1181E0((__int64)&v24);
  sub_1181E0((__int64)&v22);
  v14 = *(_BYTE *)(a1 + 105) == 5;
  *(_QWORD *)(a1 + 16) = v19;
  if ( v14 )
    sub_3EC020(a1, *(_QWORD *)(a1 + 112), 1, a2, *(unsigned __int16 *)(a1 + 842));
  sub_3E8420(a1, 4u, *(unsigned __int16 *)(a1 + 842), a2, 0x3BEA45E214ADDC55LL, a4, 0);
  v27 = 0;
  v26 = 0xFFFFFFFF00000000LL;
  v15 = *(_DWORD *)(v16 + 72);
  sub_1181E0((__int64)&v26);
  LOBYTE(v26) = 7;
  LODWORD(v27) = v15;
  sub_3EBC10(a1, 55, (unsigned __int8 *)&v26, nullptr, nullptr);
  sub_1181E0((__int64)&v26);
  *(_QWORD *)(a1 + 16) = v10;
  sub_3E8420(a1, 4u, *(unsigned __int16 *)(a1 + 842), a3, 0x3BEA45E214ADDC55LL, a4, 0);
  *(_QWORD *)(a1 + 16) = v16;
  sub_3E62F0(*(_QWORD *)(a1 + 832), v9);
}

