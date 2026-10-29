__int64 __fastcall sub_5A80(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  int v4; // eax
  int v5; // ecx
  char v6; // r12
  char v7; // al
  __int16 v8; // cx
  int v9; // r15d
  int v10; // r14d
  int v11; // r13d
  char v13; // [rsp+2h] [rbp-46h]
  char v14; // [rsp+3h] [rbp-45h]
  int v15; // [rsp+4h] [rbp-44h]
  int v16; // [rsp+4h] [rbp-44h]
  int v17; // [rsp+8h] [rbp-40h]
  int v18; // [rsp+Ch] [rbp-3Ch]

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(unsigned __int16 *)(a2 + 24);
  v5 = *(_DWORD *)(v3 + 104);
  if ( v4 < v5 || v4 >= *(_DWORD *)(v3 + 108) )
  {
    *(_BYTE *)(a1 + 224) = 1;
    is_forced_operand();
    is_forced_operand();
    is_forced_operand();
    goto LABEL_19;
  }
  v15 = *(_DWORD *)(*(_QWORD *)(v3 + 112) + 16LL * (v4 - v5) + 8);
  *(_BYTE *)(a1 + 224) = ~(_BYTE)v15;
  *(_BYTE *)(a1 + 224) &= 1u;
  v6 = is_forced_operand();
  v13 = is_forced_operand();
  v7 = is_forced_operand();
  v8 = v15;
  v14 = v7;
  v9 = v15 & 8;
  v10 = v15 & 0x10;
  v11 = v15 & 0x4000;
  v16 = v15 & 0x200;
  v17 = v8 & 0x400;
  v18 = v8 & 4;
  if ( (v8 & 0x100) != 0 )
    sub_58A0(a1, (unsigned __int8 *)(a2 + 40), v6, a3, 1, a2);
  if ( v16 )
    sub_58A0(a1, (unsigned __int8 *)(a2 + 80), v13, a3, 1, a2);
  if ( v17 )
    sub_58A0(a1, (unsigned __int8 *)(a2 + 120), v14, a3, 1, a2);
  if ( v18 )
    sub_58A0(a1, (unsigned __int8 *)(a2 + 40), v6, a3, 0, a2);
  if ( v9 )
    sub_58A0(a1, (unsigned __int8 *)(a2 + 80), v13, a3, 0, a2);
  if ( v10 )
    sub_58A0(a1, (unsigned __int8 *)(a2 + 120), v14, a3, 0, a2);
  if ( !v11 )
  {
LABEL_19:
    if ( !*(_BYTE *)(a1 + 224) )
      return 1;
    goto LABEL_17;
  }
  remember_problem();
  if ( *(_BYTE *)(a1 + 224) )
LABEL_17:
    add_cref();
  return 1;
}

