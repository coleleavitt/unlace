__int64 __fastcall sub_2C0C0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  _QWORD *func; // r15
  __int64 v6; // rax
  __int16 v7; // r14
  __int64 v8; // r13
  __int16 word; // r12
  __int16 v10; // ax
  __int64 v11; // rcx
  __int64 v12; // r8
  char *v13; // rax
  __int64 v14; // r9
  __int64 v15; // rax
  char *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r12
  __int64 v22; // rax
  int flags; // eax
  __int64 v24; // rbx
  __int64 v25; // [rsp+0h] [rbp-358h]
  __int16 v26; // [rsp+Eh] [rbp-34Ah]
  __int64 v27; // [rsp+10h] [rbp-348h]
  __int64 v28; // [rsp+18h] [rbp-340h]
  _BYTE v29[32]; // [rsp+20h] [rbp-338h] BYREF
  __int128 v30; // [rsp+40h] [rbp-318h] BYREF
  __int64 v31; // [rsp+50h] [rbp-308h]
  __int64 v32; // [rsp+58h] [rbp-300h]
  __int64 v33; // [rsp+60h] [rbp-2F8h]
  char v34; // [rsp+68h] [rbp-2F0h] BYREF
  __int16 v35; // [rsp+6Eh] [rbp-2EAh]
  char v36; // [rsp+91h] [rbp-2C7h]
  __int16 v37; // [rsp+96h] [rbp-2C2h]
  __int64 v38; // [rsp+98h] [rbp-2C0h]
  __int64 v39; // [rsp+A0h] [rbp-2B8h]
  __int64 v40; // [rsp+C0h] [rbp-298h]
  _BYTE v41[8]; // [rsp+1A8h] [rbp-1B0h] BYREF
  __int128 v42; // [rsp+1B0h] [rbp-1A8h] BYREF
  __int64 v43; // [rsp+1C0h] [rbp-198h]
  __int64 v44; // [rsp+1C8h] [rbp-190h]
  __int64 v45; // [rsp+1D0h] [rbp-188h]
  char v46; // [rsp+1D8h] [rbp-180h] BYREF
  __int16 v47; // [rsp+1DEh] [rbp-17Ah]
  char v48; // [rsp+201h] [rbp-157h]
  __int16 v49; // [rsp+206h] [rbp-152h]
  __int64 v50; // [rsp+208h] [rbp-150h]
  char v51; // [rsp+229h] [rbp-12Fh]
  _QWORD v52[8]; // [rsp+318h] [rbp-40h] BYREF

  v52[0] = __readfsqword(0x28u);
  if ( *(_WORD *)(a2 + 26) != 4 )
    return 0;
  v3 = *(_QWORD *)(a2 + 16);
  if ( (v3 & 3) != 0 )
    return 0;
  func = (_QWORD *)get_func(v3);
  v6 = *(_QWORD *)(a2 + 16);
  if ( func )
  {
    if ( *func != v6 )
      return 0;
  }
  v7 = *(_WORD *)(a2 + 46);
  v8 = v6 + *(unsigned __int16 *)(a2 + 26);
  v25 = *(_QWORD *)(a2 + 88);
  word = get_word(v8);
  v10 = get_word(v8 + 2);
  if ( (word & 0xF800) != 0xF000 )
    return 0;
  if ( (v10 & 0xF800) != 0x800 )
    return 0;
  v31 = -1;
  v13 = &v34;
  v32 = 0;
  v33 = 0;
  v30 = -1;
  do
  {
    *(_WORD *)v13 = 0;
    v13 += 40;
    *((_WORD *)v13 - 19) = 0;
    *((_WORD *)v13 - 18) = 0;
    *((_DWORD *)v13 - 2) = 0;
    *((_WORD *)v13 - 17) = 0;
    *((_OWORD *)v13 - 2) = 0;
    *((_QWORD *)v13 - 2) = 0;
  }
  while ( v41 != v13 );
  if ( !(unsigned int)decode_insn(&v30, v8, v41, v11, v12, 0, 0.0) || WORD1(v32) != 4 )
    return 0;
  if ( (_WORD)v32 == 204 )
  {
    v27 = v38;
  }
  else if ( (_WORD)v32 == 205 )
  {
    v27 = v39;
  }
  else
  {
    if ( (_WORD)v32 != 31 || v36 != 1 || v37 != 64 )
      return 0;
    v27 = v8 + v40;
  }
  v42 = -1;
  v26 = v35;
  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
  v43 = -1;
  v44 = 0;
  v45 = 0;
  v28 = v15;
  v16 = &v46;
  do
  {
    *(_WORD *)v16 = 0;
    v16 += 40;
    *((_WORD *)v16 - 19) = 0;
    *((_WORD *)v16 - 18) = 0;
    *((_DWORD *)v16 - 2) = 0;
    *((_WORD *)v16 - 17) = 0;
    *((_OWORD *)v16 - 2) = 0;
    *((_QWORD *)v16 - 2) = 0;
  }
  while ( v52 != (_QWORD *)v16 );
  if ( !(unsigned int)decode_insn(&v42, v8 + 4, v52, 0, 0, v14, 0.0)
    || (_DWORD)v44 != (_DWORD)&loc_40015
    || v7 != v47
    || v48 != 5
    || v50 != 16
    || !(unsigned int)decode_insn(&v42, v8 + 8, v17, v18, v19, v20, 0.0)
    || (_DWORD)v44 != 131074
    || v48 != 1
    || v51 )
  {
    return 0;
  }
  if ( v26 == v47 )
  {
    if ( v7 != v49 )
      return 0;
  }
  else if ( v7 != v47 || v26 != v49 )
  {
    return 0;
  }
  v21 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & ((v28 & v27) + (v25 << 16));
  if ( get_sreg(*(_QWORD *)(a2 + 16), 68) != v21 )
    return 0;
  v22 = get_flags_ex(*(_QWORD *)(a2 + 16), 4) & 0xF000000;
  if ( v22 == 83886080 )
  {
    if ( !(unsigned __int8)get_refinfo(v29, *(_QWORD *)(a2 + 16), 1) || !sub_2B420(*(_QWORD *)(a2 + 16), (__int64)v29) )
      goto LABEL_36;
    goto LABEL_35;
  }
  if ( !v22 )
LABEL_35:
    op_offset(
      *(_QWORD *)(a2 + 16),
      1,
      *(_BYTE *)(a1 + 608) | 0x40u,
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v21 - 32752),
      v8,
      32752);
LABEL_36:
  flags = get_flags_ex(v8, 4);
  if ( (~(_WORD)flags & 0x600) != 0 )
  {
    auto_mark_range(v8, v8 + 1, 20);
  }
  else if ( (_WORD)v32 != 31 || (flags & 0xF000000) == 0 )
  {
    op_offset(v8, 2, 4, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v21 - 32752), v8, 32752);
  }
  if ( !func )
  {
    v24 = *(_QWORD *)(a2 + 16);
    auto_mark_range(v24, v24 + 1, 20);
    auto_mark_range(v24, v24 + 1, 30);
  }
  return 1;
}
