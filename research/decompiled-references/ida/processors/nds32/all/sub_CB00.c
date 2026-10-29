__int64 __fastcall sub_CB00(__int64 a1, __int64 a2, unsigned int a3)
{
  _BYTE *v6; // rax
  int v7; // r13d
  unsigned int v8; // r13d
  __int64 v9; // rax
  __int16 v10; // dx
  unsigned __int16 v11; // dx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  unsigned __int8 v14; // r15
  __int64 sreg; // rax
  __int64 v16; // r12
  __int16 v17; // ax
  _DWORD *v18; // rdi
  __int64 v19; // rcx
  _DWORD *v20; // rsi
  __int16 v21; // ax
  __int64 v22; // rax
  __int128 v23; // [rsp+0h] [rbp-318h] BYREF
  __int64 v24; // [rsp+10h] [rbp-308h]
  __int64 v25; // [rsp+18h] [rbp-300h]
  __int64 v26; // [rsp+20h] [rbp-2F8h]
  _BYTE v27[6]; // [rsp+28h] [rbp-2F0h] BYREF
  __int16 v28; // [rsp+2Eh] [rbp-2EAh]
  char v29; // [rsp+51h] [rbp-2C7h]
  __int16 v30; // [rsp+56h] [rbp-2C2h]
  char v31; // [rsp+79h] [rbp-29Fh]
  __int64 v32; // [rsp+80h] [rbp-298h]
  _BYTE v33[8]; // [rsp+168h] [rbp-1B0h] BYREF
  __int128 v34; // [rsp+170h] [rbp-1A8h] BYREF
  __int64 v35; // [rsp+180h] [rbp-198h]
  __int64 v36; // [rsp+188h] [rbp-190h]
  __int64 v37; // [rsp+190h] [rbp-188h]
  _BYTE v38[40]; // [rsp+198h] [rbp-180h] BYREF
  __int64 v39; // [rsp+1C0h] [rbp-158h]
  __int64 v40; // [rsp+1C8h] [rbp-150h]
  char v41; // [rsp+1E1h] [rbp-137h]
  _QWORD v42[8]; // [rsp+2D8h] [rbp-40h] BYREF

  v42[0] = __readfsqword(0x28u);
  if ( !(_BYTE)a3 )
    return 0;
  if ( *(_WORD *)(a2 + 24) != 94 )
    return 0;
  if ( *(_BYTE *)(a2 + 41) != 1 )
    return 0;
  if ( *(_BYTE *)(a2 + 81) != 5 )
    return 0;
  v6 = v27;
  v23 = -1;
  v24 = -1;
  v25 = 0;
  v26 = 0;
  do
  {
    *(_WORD *)v6 = 0;
    v6 += 40;
    *((_WORD *)v6 - 19) = 0;
    *((_WORD *)v6 - 18) = 0;
    *((_DWORD *)v6 - 2) = 0;
    *((_WORD *)v6 - 17) = 0;
    *((_OWORD *)v6 - 2) = 0;
    *((_QWORD *)v6 - 2) = 0;
  }
  while ( v33 != v6 );
  if ( (int)((__int64 (__fastcall *)(__int128 *, _QWORD, _BYTE *, double))decode_insn)(
              &v23,
              *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26),
              v33,
              0.0) <= 0
    || (v25 & 0xFFFB) != 0x72
    || v27[1] != 1
    || v29 != 1
    || v31 != 5
    || *(_WORD *)(a2 + 46) != v28
    || v28 != v30 )
  {
    return 0;
  }
  v7 = *(_DWORD *)(a2 + 88) << 12;
  if ( (_WORD)v25 == 118 )
    v8 = v32 | v7;
  else
    v8 = (__int16)v32 + v7;
  *(_WORD *)(a2 + 24) = 93;
  *(_BYTE *)(a2 + 81) = 5;
  *(_QWORD *)(a2 + 88) = v8 & *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & v8;
  v10 = WORD1(v25);
  *(_BYTE *)(a2 + 85) = 2;
  v11 = *(_WORD *)(a2 + 26) + v10;
  *(_QWORD *)(a2 + 96) = v9;
  *(_WORD *)(a2 + 26) = v11;
  if ( (*(_BYTE *)(a1 + 168) & 8) == 0 )
    return a3;
  v35 = -1;
  v36 = 0;
  v12 = v38;
  v37 = 0;
  v34 = -1;
  do
  {
    *(_WORD *)v12 = 0;
    v12 += 5;
    *((_WORD *)v12 - 19) = 0;
    *((_WORD *)v12 - 18) = 0;
    *((_DWORD *)v12 - 2) = 0;
    *((_WORD *)v12 - 17) = 0;
    *((_OWORD *)v12 - 2) = 0;
    *(v12 - 2) = 0;
  }
  while ( v42 != v12 );
  if ( (int)decode_insn(&v34, v11 + *(_QWORD *)(a2 + 16), v11, v42, 0, 0, 0.0, v23, *((_QWORD *)&v23 + 1), v24) <= 0
    || (unsigned __int16)v36 > 0x14u )
  {
    return a3;
  }
  v13 = 1310804;
  v14 = _bittest64(&v13, (unsigned __int16)v36);
  if ( !v14 )
  {
    if ( (unsigned __int16)v36 > 0xEu )
      return a3;
    v22 = 21504;
    if ( !_bittest64(&v22, (unsigned __int16)v36) )
      return a3;
  }
  if ( (v39 & 0xFFFF00000000FF00LL) != 0x1D000000000300LL )
    return a3;
  if ( v40 != *(unsigned __int16 *)(a2 + 46) )
    return a3;
  if ( v41 )
    return a3;
  sreg = get_sreg(v35, 34);
  if ( sreg == -1 )
    return a3;
  v16 = sreg + (int)v8;
  if ( !(unsigned __int8)is_mapped(v16) )
    return a3;
  v17 = 13;
  if ( v14 )
    v17 = 5;
  *(_WORD *)(a2 + 24) = v17;
  v18 = (_DWORD *)(a2 + 40);
  v19 = 9;
  v20 = v38;
  *(_BYTE *)(a2 + 33) = 5;
  v21 = WORD1(v36);
  while ( v19 )
  {
    *v18++ = *v20++;
    --v19;
  }
  *(_QWORD *)(a2 + 96) = v16;
  *(_WORD *)(a2 + 81) = 2;
  *(_WORD *)(a2 + 26) += v21;
  return a3;
}

