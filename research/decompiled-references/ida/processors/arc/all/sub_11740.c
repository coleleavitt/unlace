__int64 __fastcall sub_11740(__int64 a1)
{
  unsigned int v2; // ebp
  __int64 v4; // r12
  unsigned __int8 v5; // r12
  unsigned __int8 v6; // al
  bool v7; // r14
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  unsigned __int8 v9; // al
  bool v10; // dl
  bool v11; // cc
  bool v12; // al
  int v13; // eax
  int v14; // r12d
  int v15; // eax
  char v16; // al
  __int16 v17; // r14
  __int64 v18; // rax
  __int64 v19; // r13
  unsigned int *v20; // rdx
  unsigned int v21; // eax
  unsigned int v22; // ecx
  int v23; // eax
  int v24; // eax
  unsigned __int64 *v25; // rax
  __int64 v26; // r14
  unsigned __int8 v27; // r14
  unsigned __int8 v28; // al
  bool v29; // r15
  __int64 (__fastcall *v30)(__int64, __int64); // rdx
  bool v31; // al
  char v32; // al
  int v33; // ecx
  unsigned __int64 v34; // rdx
  __int64 v35; // rdi
  char v36; // al
  __int64 v37; // rdi
  __int64 v38; // rdx
  int v39; // eax
  char v40; // al
  __m128i si128; // [rsp+0h] [rbp-1D8h] BYREF
  __int64 v42; // [rsp+10h] [rbp-1C8h]
  __int128 v43; // [rsp+18h] [rbp-1C0h]
  char v44; // [rsp+28h] [rbp-1B0h]
  char v45; // [rsp+29h] [rbp-1AFh]
  __int128 v46; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v47; // [rsp+40h] [rbp-198h]
  __int64 v48; // [rsp+48h] [rbp-190h]
  __int64 v49; // [rsp+50h] [rbp-188h]
  _BYTE v50[5]; // [rsp+58h] [rbp-180h] BYREF
  unsigned __int8 v51; // [rsp+5Dh] [rbp-17Bh]
  __int16 v52; // [rsp+86h] [rbp-152h]
  char v53; // [rsp+A9h] [rbp-12Fh]
  __int64 v54; // [rsp+B0h] [rbp-128h]
  unsigned __int64 v55; // [rsp+198h] [rbp-40h] BYREF

  v55 = __readfsqword(0x28u);
  if ( *(_WORD *)(a1 + 40) != 1 || (unsigned __int8)(*(_BYTE *)(a1 + 97) - 3) > 1u )
    return 0;
  v4 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v4 + 1) )
    goto LABEL_33;
  v2 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(a1, a1 + 56, *(_QWORD *)(a1 + 864));
  if ( !(_BYTE)v2 )
    return 0;
  v5 = *(_BYTE *)(v4 + 5);
  v6 = *(_BYTE *)(a1 + 61);
  v7 = v5 <= 0xF9u;
  if ( v6 <= 0xF9u )
  {
    if ( v6 >= v5 || v5 > 0xF9u || *(_BYTE *)(a1 + 8) && v6 == 2 )
      goto LABEL_14;
  }
  else if ( v6 >= v5 && v5 > 0xF9u )
  {
    goto LABEL_14;
  }
  v8 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v8 == sub_B740 )
    return 0;
  v9 = v8(a1, a1 + 56);
  v10 = v7 || v9 < v5;
  v11 = v9 <= 0xF9u;
  v12 = v9 < v5 && v7;
  if ( !v11 )
    v12 = v10;
  if ( v12 )
    return 0;
LABEL_14:
  v13 = *(_DWORD *)(a1 + 44);
  switch ( v13 & 6 )
  {
    case 2:
      v23 = v13 & 0x18;
      if ( !v23 )
      {
        v24 = *(unsigned __int8 *)(a1 + 97);
        if ( (_BYTE)v24 != 3 )
        {
          if ( (_BYTE)v24 == 4 )
          {
            v14 = 1;
LABEL_24:
            v17 = *(_WORD *)(a1 + 102);
LABEL_25:
            v18 = *(_QWORD *)(a1 + 32);
            v19 = *(_QWORD *)(a1 + 112);
            *(_DWORD *)(a1 + 912) = 1;
            *(_QWORD *)(a1 + 896) = v18;
LABEL_26:
            *(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) = (unsigned int)v19;
            v20 = *(unsigned int **)(a1 + 376);
            v21 = *v20 & 0xFFFFFBFB;
            if ( v14 != 2 )
            {
              v22 = *v20 & 0xFFFFFBFB;
              v21 |= 4u;
              BYTE1(v22) |= 4u;
              if ( v14 != 4 )
                v21 = v22;
            }
            *v20 = v21;
            goto LABEL_30;
          }
          return 0;
        }
        v45 = 0;
        v14 = 1;
        v43 = 0;
LABEL_68:
        v33 = *(unsigned __int16 *)(a1 + 102);
        v34 = *(_QWORD *)(a1 + 32);
        v35 = *(_QWORD *)(a1 + 888);
        v44 = 0;
        v42 = 0;
        si128 = _mm_load_si128((const __m128i *)&xmmword_1F660);
        v36 = sub_11140(v35, a1 + 16, v34, v33, &si128);
        v37 = v42;
        if ( v36 )
        {
          v38 = si128.m128i_i64[1];
          LODWORD(v19) = si128.m128i_i32[0];
          v39 = v44;
          v17 = *(char *)(a1 + 128);
        }
        else
        {
          if ( v14 != 1
            || (v40 = sub_11140(*(_QWORD *)(a1 + 888), a1 + 16, *(_QWORD *)(a1 + 32), *(char *)(a1 + 128), &si128),
                v37 = v42,
                !v40) )
          {
            if ( v37 )
              qfree(v37);
            return 0;
          }
          v38 = si128.m128i_i64[1];
          LODWORD(v19) = si128.m128i_i32[0];
          v39 = v44;
          v17 = *(_WORD *)(a1 + 102);
        }
        *(_QWORD *)(a1 + 896) = v38;
        *(_DWORD *)(a1 + 912) = v39;
        if ( v37 )
          qfree(v37);
        goto LABEL_26;
      }
      if ( v23 != 24 )
        return 0;
      v14 = 1;
LABEL_20:
      v16 = *(_BYTE *)(a1 + 97);
      if ( v16 != 3 )
      {
        if ( v16 == 4 && (*(_BYTE *)(a1 + 128) == 1 || v14 == 1) )
          goto LABEL_24;
        return 0;
      }
      v45 = 0;
      v43 = 0;
      goto LABEL_68;
    case 4:
      v14 = 2;
      break;
    case 0:
      v14 = 4;
      break;
    default:
      return 0;
  }
  v15 = v13 & 0x18;
  if ( v15 )
  {
    if ( v15 != 24 )
      return 0;
    goto LABEL_20;
  }
  v47 = -1;
  v48 = 0;
  v25 = (unsigned __int64 *)v50;
  v49 = 0;
  v46 = -1;
  do
  {
    *(_WORD *)v25 = 0;
    v25 += 5;
    *((_WORD *)v25 - 19) = 0;
    *((_WORD *)v25 - 18) = 0;
    *((_DWORD *)v25 - 2) = 0;
    *((_WORD *)v25 - 17) = 0;
    *((_OWORD *)v25 - 2) = 0;
    *(v25 - 2) = 0;
  }
  while ( &v55 != v25 );
  if ( decode_prev_insn(&v46, *(_QWORD *)(a1 + 32), 0.0) == -1 || (_WORD)v48 != 34 )
    return 0;
  v26 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v26 + 1) )
  {
LABEL_33:
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)a1 + 8LL))(
          a1,
          v50,
          *(_QWORD *)(a1 + 864)) )
    return 0;
  v27 = *(_BYTE *)(v26 + 5);
  v28 = v51;
  v29 = v27 <= 0xF9u;
  if ( v51 > 0xF9u )
  {
    if ( v51 >= v27 && v27 > 0xF9u )
      goto LABEL_60;
    v30 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
    if ( v30 == sub_B740 )
      goto LABEL_79;
  }
  else
  {
    if ( v51 >= v27 || v27 > 0xF9u || v51 == 2 && *(_BYTE *)(a1 + 8) )
      goto LABEL_60;
    v30 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
    if ( v30 == sub_B740 )
      goto LABEL_58;
  }
  v28 = v30(a1, (__int64)v50);
  if ( v28 <= 0xF9u )
  {
LABEL_58:
    v31 = v29 && v28 < v27;
    goto LABEL_59;
  }
LABEL_79:
  v31 = v29 || v28 < v27;
LABEL_59:
  if ( v31 )
    return 0;
LABEL_60:
  if ( v14 != 2 || v53 && (v53 != 5 || v54 != 2) )
    return 0;
  v17 = v52;
  v32 = *(_BYTE *)(a1 + 97);
  if ( v32 != 3 )
  {
    if ( v32 == 4 )
      goto LABEL_25;
    return 0;
  }
  *(_QWORD *)(a1 + 896) = -1;
  *(_DWORD *)(a1 + 912) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) = 0;
  **(_DWORD **)(a1 + 376) &= 0xFFFFFBFB;
LABEL_30:
  if ( (*(_BYTE *)(a1 + 44) & 1) != 0 )
    **(_DWORD **)(a1 + 376) |= 0x2000u;
  *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v17;
  *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = 2;
  return v2;
}

