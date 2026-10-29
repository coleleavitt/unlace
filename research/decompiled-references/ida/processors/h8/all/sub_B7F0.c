char __fastcall sub_B7F0(__int64 a1, __int64 a2)
{
  unsigned __int8 next_byte; // r12
  unsigned __int8 v3; // bp
  char v5; // dl
  char v6; // cl
  __int64 v7; // rdx
  char v8; // al
  __int16 v9; // dx
  __int128 v10; // [rsp+0h] [rbp-58h] BYREF
  __int128 v11; // [rsp+10h] [rbp-48h]
  __int64 v12; // [rsp+20h] [rbp-38h]
  unsigned __int64 v13; // [rsp+28h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  next_byte = insn_get_next_byte();
  v3 = insn_get_next_byte();
  if ( !(unsigned __int8)sub_69D0(a2, v3) )
    return 0;
  v5 = *(_BYTE *)(a2 + 73);
  v10 = 0;
  v11 = 0;
  v12 = 0;
  *(_DWORD *)(a2 + 28) = 2 - (v5 & 1);
  if ( !(unsigned __int8)sub_AAD0(a1, a2, (__int64)&v10, next_byte) )
    return 0;
  v6 = *(_BYTE *)(a2 + 45);
  v7 = a2 + 40;
  *(_DWORD *)(a2 + 28) = 0;
  if ( (v3 & 8) != 0 )
    sub_83F0(a1, a2, v7, v6);
  else
    sub_8370(a1, a2, v7, v6);
  v8 = BYTE1(v10);
  *(_BYTE *)(a2 + 43) = BYTE2(v10);
  v9 = WORD3(v10);
  *(_BYTE *)(a2 + 74) = v8;
  *(_WORD *)(a2 + 46) = v9;
  *(_QWORD *)(a2 + 64) = (char)v12;
  *(_QWORD *)(a2 + 48) = v11;
  *(_BYTE *)(a2 + 75) = BYTE1(v12);
  if ( ((v8 - 2) & 0xFD) == 0 )
    *(_BYTE *)(a2 + 44) |= 0x40u;
  *(_BYTE *)(a2 + 72) = 2;
  *(_DWORD *)(a2 + 28) = 3;
  return sub_7A80(a2, a2 + 80, v3 & 7, 0x25u, 0);
}

