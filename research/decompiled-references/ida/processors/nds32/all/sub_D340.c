__int64 __fastcall sub_D340(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v6; // rax
  unsigned __int64 v7; // r10
  __int64 v8; // r12
  __int64 v9; // rbp
  __int64 v10; // rax
  char *v12; // rax
  __int64 v13; // rdx
  int v14; // r13d
  __int16 v15; // r13
  char *v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rsi
  int v19; // ebp
  __int64 spd; // rax
  __int64 v21; // rdx
  int v22; // eax
  int v23; // eax
  char v24; // dl
  __int64 v25; // rax
  __int16 v26; // [rsp+Eh] [rbp-1AAh]
  __int128 v27; // [rsp+10h] [rbp-1A8h] BYREF
  __int64 v28; // [rsp+20h] [rbp-198h]
  __int64 v29; // [rsp+28h] [rbp-190h]
  __int64 v30; // [rsp+30h] [rbp-188h]
  char v31; // [rsp+38h] [rbp-180h] BYREF
  char v32; // [rsp+39h] [rbp-17Fh]
  unsigned __int16 v33; // [rsp+3Eh] [rbp-17Ah]
  __int64 v34; // [rsp+60h] [rbp-158h]
  char v35; // [rsp+89h] [rbp-12Fh]
  unsigned __int16 v36; // [rsp+8Eh] [rbp-12Ah]
  __int64 v37; // [rsp+B8h] [rbp-100h]
  _QWORD v38[8]; // [rsp+178h] [rbp-40h] BYREF

  v38[0] = __readfsqword(0x28u);
  if ( !a2 )
    return v38[0] - __readfsqword(0x28u);
  v3 = *(unsigned __int16 *)(a3 + 26);
  v6 = sub_D160(a1, a3);
  v8 = v7 + v3;
  v9 = v6;
  if ( !v6 )
  {
    v10 = *(unsigned __int16 *)(a3 + 24);
    if ( (_WORD)v10 != 469 )
      goto LABEL_4;
    if ( (*(_QWORD *)(a3 + 40) & 0xFFFF00000000FF00LL) != 0x1F000000000100LL )
      return v38[0] - __readfsqword(0x28u);
    if ( (*(_QWORD *)(a3 + 80) & 0xFFFF00000000FF00LL) == 0x1C000000000100LL && (*(_BYTE *)(a2 + 16) & 0x10) != 0 )
    {
      v21 = -(*(_QWORD *)(a2 + 56) + get_spd(a2, v7) + *(unsigned __int16 *)(a2 + 40));
      return add_auto_stkpnt(a2, v8, v21);
    }
    if ( *(_BYTE *)(a3 + 81) != 1 )
      return v38[0] - __readfsqword(0x28u);
    v26 = *(_WORD *)(a3 + 86);
    if ( v26 == 31 )
      return v38[0] - __readfsqword(0x28u);
    v28 = -1;
    v12 = &v31;
    v13 = (__int64)v38;
    v29 = 0;
    v30 = 0;
    v27 = -1;
    do
    {
      *(_WORD *)v12 = 0;
      v12 += 40;
      *((_WORD *)v12 - 19) = 0;
      *((_WORD *)v12 - 18) = 0;
      *((_DWORD *)v12 - 2) = 0;
      *((_WORD *)v12 - 17) = 0;
      *((_OWORD *)v12 - 2) = 0;
      *((_QWORD *)v12 - 2) = 0;
    }
    while ( v38 != (_QWORD *)v12 );
    v14 = 20;
    while ( 1 )
    {
      if ( *(_QWORD *)a2 >= v7 || (v7 = decode_prev_insn(&v27, v7, v13, 0.0), v7 == -1) )
      {
LABEL_25:
        LOWORD(v10) = *(_WORD *)(a3 + 24);
LABEL_4:
        if ( (v10 & 0xFFFD) == 0x19 && *(_BYTE *)(a3 + 81) == 3 )
        {
          v15 = *(_WORD *)(a3 + 86);
          if ( v15 != 31 && (*(_BYTE *)(a3 + 168) & 1) != 0 )
          {
            v28 = -1;
            v16 = &v31;
            v17 = (__int64)v38;
            v29 = 0;
            v30 = 0;
            v27 = -1;
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
            while ( v38 != (_QWORD *)v16 );
            v18 = *(_QWORD *)(a3 + 16);
            v19 = 20;
            while ( *(_QWORD *)a2 < v18 )
            {
              v18 = decode_prev_insn(&v27, v18, v17, 0.0);
              if ( v18 == -1 )
                break;
              if ( (_WORD)v29 == 114 )
              {
                if ( v32 == 1 && v15 == v33 )
                {
                  v17 = 0x1F000000000100LL;
                  if ( (v34 & 0xFFFF00000000FF00LL) == 0x1F000000000100LL && v35 == 5 )
                    goto LABEL_41;
                }
              }
              else if ( (_WORD)v29 == 469 && v32 == 1 && v15 == v33 )
              {
                v17 = 0x1F000000000100LL;
                if ( (v34 & 0xFFFF00000000FF00LL) == 0x1F000000000100LL )
                {
LABEL_41:
                  spd = get_spd(a2, *(_QWORD *)(a3 + 16));
                  if ( spd )
                    add_auto_stkpnt(a2, v8, -spd);
                  return v38[0] - __readfsqword(0x28u);
                }
              }
              if ( !--v19 )
                return v38[0] - __readfsqword(0x28u);
            }
          }
        }
        return v38[0] - __readfsqword(0x28u);
      }
      if ( (_WORD)v29 != 469 )
        break;
      if ( v32 == 1 && v26 == v33 )
      {
        v13 = 0x1F000000000100LL;
        if ( (v34 & 0xFFFF00000000FF00LL) == 0x1F000000000100LL )
        {
          if ( v9 )
            add_auto_stkpnt(a2, v8, v9);
          goto LABEL_25;
        }
      }
LABEL_16:
      if ( !--v14 )
        goto LABEL_25;
    }
    if ( (unsigned __int16)(v29 - 25) > 3u || BYTE1(v34) != 3 || v26 != HIWORD(v34) )
      goto LABEL_16;
    if ( v33 != 31 || (v22 = 0, v36 != 31) )
    {
      if ( v36 < v33 )
      {
        v22 = 0;
      }
      else
      {
        v22 = 1;
        if ( v36 >= (unsigned __int16)(v33 + 1) )
        {
          if ( (((_BYTE)v36 - (_BYTE)v33) & 1) == 0 || (v22 = 2, v36 >= (unsigned __int16)(v33 + 2)) )
          {
            do
              v22 += 2;
            while ( v36 >= (unsigned __int16)(v33 + v22) );
          }
        }
      }
    }
    v13 = (unsigned int)SBYTE1(v30);
    v23 = (v37 & 1) + v22 - (((v37 & 2) == 0) - 1) - (((v37 & 4) == 0) - 1) - (((v37 & 8) == 0) - 1);
    if ( (unsigned __int8)(BYTE1(v30) - 6) > 7u )
    {
      if ( (unsigned __int8)(BYTE1(v30) - 14) > 7u )
        goto LABEL_58;
      v24 = BYTE1(v30) - 14;
    }
    else
    {
      v24 = BYTE1(v30) - 6;
    }
    v13 = v24 & 2;
    if ( (_DWORD)v13 )
    {
      v25 = -4 * v23;
LABEL_54:
      v9 += v25;
      goto LABEL_16;
    }
LABEL_58:
    v25 = 4 * v23;
    goto LABEL_54;
  }
  v21 = v6;
  return add_auto_stkpnt(a2, v8, v21);
}

