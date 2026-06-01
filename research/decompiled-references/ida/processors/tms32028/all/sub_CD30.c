__int64 __fastcall sub_CD30(unsigned __int8 *a1, __int64 a2, __int64 a3)
{
  char v5; // dl
  char v6; // al
  unsigned __int16 *v8; // rbx
  __int64 i; // rbp
  int v10; // edx
  unsigned __int16 v11; // ax
  int v12; // r13d
  char v13; // al
  unsigned __int8 v14; // cl
  unsigned __int8 v15; // al
  __int64 v16; // rax
  unsigned __int16 v17; // ax
  __int64 v18; // rcx
  __int16 v19; // dx
  __int64 v20; // rax
  unsigned __int16 v21; // ax
  unsigned __int8 v22; // al
  int v23; // ecx
  char v24; // al
  char v25; // di
  int v26; // eax
  int v27; // edx
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int8 v30; // al
  char v31; // cl
  int v32; // edx
  char v33; // al
  unsigned __int8 v34; // al
  __int16 v35; // ax
  int v36; // ecx
  int v37; // edi
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // eax
  int v41; // edx
  __int64 v42; // rax
  __int64 v43; // rax
  unsigned __int8 v44; // al
  __int64 v45; // rax
  unsigned __int8 v46; // al
  int v47; // ecx
  char v48; // al
  char v49; // di
  int v50; // eax
  int v51; // edx
  __int64 v52; // rax
  unsigned __int16 v53; // ax
  unsigned __int8 v54; // al
  unsigned __int8 v55; // al
  __int64 v56; // rax
  __int64 v57; // rax
  int v58; // eax
  int v59; // edx
  __int64 v60; // rax
  bool v61; // zf
  char v62; // al
  unsigned __int8 v63; // r9
  unsigned __int16 v64; // dx
  char v65; // di
  int v66; // ecx
  unsigned int v67; // edx
  unsigned __int8 v68; // cl
  __int16 v69; // dx
  char v70; // al
  char v71; // al
  __int16 v72; // ax
  unsigned __int8 v73; // al
  char v74; // [rsp+Dh] [rbp-3Bh]
  unsigned __int8 v75; // [rsp+Eh] [rbp-3Ah]
  char v76; // [rsp+Fh] [rbp-39h]

  v5 = sub_12270(*(_QWORD *)(a2 + 16));
  v6 = *(_BYTE *)(a3 + 10);
  if ( v5 )
  {
    if ( (v6 & 2) == 0 )
      return 0;
  }
  else if ( (v6 & 1) == 0 )
  {
    return 0;
  }
  *(_WORD *)(a2 + 24) = *(_WORD *)(a3 + 8);
  *(_DWORD *)(a2 + 28) = *(unsigned __int16 *)(a3 + 28);
  *(_BYTE *)(a2 + 33) = *(_BYTE *)(a3 + 30);
  if ( (*(_BYTE *)(a3 + 10) & 4) != 0 )
  {
    *((_WORD *)a1 + 125) = get_wide_byte();
    *(_WORD *)(a2 + 26) = 2;
  }
  v8 = (unsigned __int16 *)(a3 + 12);
  for ( i = a2 + 41; a2 + 361 != i; i += 40 )
  {
    v10 = *v8;
    if ( !(_WORD)v10 )
      break;
    v11 = *v8;
    LOBYTE(v11) = 0;
    if ( v11 == 15616 )
    {
      *(_BYTE *)i = 5;
      v36 = 32 - (v10 & 0x1F);
      v37 = (unsigned __int8)v10 >> 5;
      if ( v37 > v36 )
        LOBYTE(v37) = 32 - (v10 & 0x1F);
      *(_QWORD *)(i + 7) = ((1 << v37) - 1)
                         & ((unsigned int)((a1[251] << 8) | a1[250] | (a1[248] << 16) | (a1[249] << 24)) >> (v36 - v37));
      goto LABEL_39;
    }
    if ( v11 > 0x3D00u )
    {
      if ( v11 == 21504 )
      {
        *(_BYTE *)i = 9;
        *(_BYTE *)(i + 32) = a1[248] & 7;
      }
      else if ( v11 > 0x5400u )
      {
        if ( v11 == 28672 )
        {
          *(_BYTE *)i = 5;
          *(_QWORD *)(i + 7) = 0;
          *(_BYTE *)(i + 4) = 3;
        }
        else
        {
          if ( v11 <= 0x7000u )
          {
            if ( v11 == 25088 )
            {
              *((_WORD *)a1 + 125) = get_wide_byte();
              *(_WORD *)(a2 + 26) = 2;
              *(_BYTE *)i = 7;
              v38 = *((unsigned __int16 *)a1 + 125);
              *(_BYTE *)(i + 1) = 1;
              *(_BYTE *)(i + 4) = 9;
              *(_QWORD *)(i + 15) = v38 | 0x3F0000;
              *(_BYTE *)(i + 32) = 2;
            }
            else if ( v11 <= 0x6200u )
            {
              if ( v11 == 24576 )
              {
                *(_BYTE *)i = 7;
                v44 = (a1[248] & 0x7F) + 2;
                if ( *(_BYTE *)v8 != 1 )
                  v44 = a1[248];
                v45 = *(_QWORD *)(a2 + 16) + (char)v44;
                *(_BYTE *)(i + 1) = 0;
                *(_QWORD *)(i + 15) = v45;
                *(_BYTE *)(i + 4) = 9;
              }
              else
              {
                if ( v11 != 24832 )
                  return 0;
                *((_WORD *)a1 + 125) = get_wide_byte();
                *(_WORD *)(a2 + 26) = 2;
                *(_BYTE *)i = 7;
                v20 = *(_QWORD *)(a2 + 16) + *((__int16 *)a1 + 125);
                *(_BYTE *)(i + 1) = 1;
                *(_QWORD *)(i + 15) = v20;
                *(_BYTE *)(i + 4) = 9;
              }
            }
            else if ( v11 == 25344 )
            {
              *((_WORD *)a1 + 125) = get_wide_byte();
              *(_WORD *)(a2 + 26) = 2;
              *(_BYTE *)i = 7;
              v40 = a1[248];
              v41 = *((unsigned __int16 *)a1 + 125);
              *(_BYTE *)(i + 1) = 1;
              *(_BYTE *)(i + 4) = 9;
              *(_QWORD *)(i + 15) = v41 | (v40 << 16) & 0x3F0000;
            }
            else
            {
              if ( v11 != 25600 )
                return 0;
              *((_WORD *)a1 + 125) = get_wide_byte();
              *(_WORD *)(a2 + 26) = 2;
              *(_BYTE *)i = 2;
              v17 = *v8;
              *(_BYTE *)(i + 32) = *v8;
              v18 = *((unsigned __int16 *)a1 + 125);
              if ( (_BYTE)v17 == 2 )
              {
                v18 |= 0x3F0000uLL;
                v19 = 62;
              }
              else
              {
                v19 = 0;
                if ( (_BYTE)v17 != 3 )
                  v19 = 4 * ((_BYTE)v17 == 4) + 62;
              }
              *(_QWORD *)(i + 15) = v18;
              *(_BYTE *)(i + 1) = 1;
              *(_WORD *)(i + 23) = v19;
              *(_BYTE *)(i + 4) = 0;
            }
            goto LABEL_39;
          }
          if ( v11 == 0xE000 )
          {
            if ( a1[251] != (_BYTE)v10 )
              return 0;
            goto LABEL_39;
          }
          if ( v11 > 0xE000u )
          {
            if ( v11 == 0xE100 )
            {
              if ( (a1[251] & 0xF0) != (unsigned __int8)v10 )
                return 0;
            }
            else if ( v11 != 0xE200 || (a1[251] & 0xF8) != (unsigned __int8)v10 )
            {
              return 0;
            }
            goto LABEL_39;
          }
          if ( v11 != 28928 )
          {
            if ( v11 != 29184 )
              return 0;
            *(_BYTE *)i = 13;
            v21 = *v8;
            *(_BYTE *)(i + 32) = *v8;
            if ( (_BYTE)v21 == 1 )
            {
              *((_WORD *)a1 + 125) = get_wide_byte();
              *(_WORD *)(a2 + 26) = 2;
              *(_QWORD *)(i + 7) = (32 * ((a1[251] << 8) | a1[250] | (a1[248] << 16) | (a1[249] << 24))) & 0x7FF0000
                                 | (a1[251] << 8) & 0x7FF
                                 | (unsigned int)a1[250];
            }
            else
            {
              if ( (_BYTE)v21 )
                return 0;
              *(_QWORD *)(i + 7) = a1[248];
            }
            goto LABEL_39;
          }
          *((_WORD *)a1 + 125) = get_wide_byte();
          *(_WORD *)(a2 + 26) = 2;
          v54 = a1[251];
          if ( v54 == 15 )
          {
            if ( (a1[250] & 3) == 2 )
            {
              v70 = a1[250] >> 2;
              if ( (unsigned __int8)(v70 - 4) <= 7u )
              {
                v71 = v70 + 64;
                *(_BYTE *)i = 1;
                *(_WORD *)(i + 5) = v71;
                *(_BYTE *)(i + 4) = *((_BYTE *)qword_1B500 + v71);
                goto LABEL_39;
              }
            }
          }
          else if ( v54 == 18 )
          {
            v55 = a1[250];
            if ( (v55 & 0xF9) == 0x20 )
            {
              *(_BYTE *)i = 1;
              v73 = ((v55 >> 1) & 3) + 123;
              *(_WORD *)(i + 5) = v73;
              *(_BYTE *)(i + 4) = *((_BYTE *)qword_1B500 + v73);
              if ( *(_WORD *)(a2 + 24) == 180 )
                *(_WORD *)(a2 + 24) = 232;
              goto LABEL_39;
            }
          }
          *(_BYTE *)i = 2;
          *(_BYTE *)(i + 32) = 4;
          v56 = *((unsigned __int16 *)a1 + 125);
          *(_BYTE *)(i + 1) = 1;
          *(_QWORD *)(i + 15) = v56;
          *(_WORD *)(i + 23) = 66;
          *(_BYTE *)(i + 4) = 0;
        }
      }
      else
      {
        if ( v11 != 17664 )
        {
          if ( v11 <= 0x4500u )
          {
            if ( v11 == 16896 )
            {
              *(_BYTE *)(a2 + 115) = 17;
            }
            else if ( v11 <= 0x4200u )
            {
              if ( v11 == 0x4000 )
              {
                if ( (_BYTE)v10 == 2 )
                {
                  v46 = a1[251];
                }
                else if ( (unsigned __int8)v10 == 1 )
                {
                  v46 = a1[248];
                }
                else
                {
                  v46 = a1[249];
                }
                *(_BYTE *)(a2 + 115) = v46 & 0xF | 0x10;
              }
              else
              {
                if ( v11 != 16640 )
                  return 0;
                *(_BYTE *)(a2 + 115) = 16;
              }
            }
            else if ( v11 == 17152 )
            {
              *(_BYTE *)(a2 + 115) = 32;
            }
            else
            {
              if ( v11 != 17408 )
                return 0;
              *(_BYTE *)(a2 + 115) = 48;
            }
            goto LABEL_39;
          }
          if ( v11 == 20480 )
          {
            *(_BYTE *)i = 12;
            v31 = v10 & 0xF0;
            v32 = v10 & 0xF;
            if ( v32 )
            {
              if ( (_BYTE)v32 == 1 )
                v33 = a1[248] & 0xF;
              else
                v33 = a1[251] & 0xF;
            }
            else
            {
              v33 = a1[249] & 0xF;
            }
            *(_BYTE *)(i + 32) = v31 | v33;
            goto LABEL_39;
          }
          if ( v11 <= 0x5000u )
          {
            if ( ((v11 - 18176) & 0xFE00) != 0 )
            {
              if ( v11 != 17920 )
                return 0;
              if ( (_BYTE)v10 )
                v30 = a1[251];
              else
                v30 = a1[249];
              *(_BYTE *)(a2 + 115) = ((v30 & 7) + 1) | 0x10;
            }
            else
            {
              v61 = v11 == 18176;
              v62 = -64;
              if ( v61 )
                v62 = 0x80;
              *(_BYTE *)(a2 + 75) = v62 | ((int)a1[250] >> (8 - v10)) & ((1 << v10) - 1);
            }
            goto LABEL_39;
          }
          if ( v11 == 20992 )
          {
            *(_BYTE *)i = 11;
            *(_BYTE *)(i + 32) = *v8;
            goto LABEL_39;
          }
          if ( v11 != 21248 )
          {
            if ( v11 != 20736 )
              return 0;
            *(_BYTE *)i = 12;
            *(_BYTE *)(i + 32) = *v8;
            goto LABEL_39;
          }
          goto LABEL_143;
        }
        *(_BYTE *)(a2 + 115) = 64;
      }
    }
    else
    {
      if ( v11 == 12288 )
      {
        if ( (_BYTE)v10 == 2 )
          v42 = a1[251];
        else
          v42 = a1[248];
        *(_BYTE *)i = 5;
        *(_QWORD *)(i + 7) = v42;
        goto LABEL_39;
      }
      if ( v11 > 0x3000u )
      {
        if ( v11 == 13824 )
        {
          *(_BYTE *)i = 5;
          v35 = *((_WORD *)a1 + 124);
          *(_BYTE *)(i + 32) = 2;
          *(_QWORD *)(i + 7) = v35 & 0x3FF;
        }
        else
        {
          if ( v11 <= 0x3600u )
          {
            if ( v11 == 13056 )
            {
              *((_WORD *)a1 + 125) = get_wide_byte();
              *(_WORD *)(a2 + 26) = 2;
              *(_BYTE *)i = 5;
              *(_QWORD *)(i + 7) = *((__int16 *)a1 + 125);
            }
            else if ( v11 <= 0x3300u )
            {
              if ( v11 == 12544 )
              {
                *(_BYTE *)i = 5;
                *(_QWORD *)(i + 7) = (char)a1[248];
              }
              else
              {
                if ( v11 != 12800 )
                  return 0;
                *((_WORD *)a1 + 125) = get_wide_byte();
                *(_WORD *)(a2 + 26) = 2;
                *(_BYTE *)i = 5;
                if ( (unsigned __int8)*v8 == 4 )
                {
                  *(_QWORD *)(i + 7) = (unsigned __int16)((unsigned int)((a1[251] << 8)
                                                                       | a1[250]
                                                                       | (a1[248] << 16)
                                                                       | (a1[249] << 24)) >> 4);
                }
                else
                {
                  v29 = *((unsigned __int16 *)a1 + 125);
                  *(_BYTE *)(i + 32) = *v8;
                  *(_QWORD *)(i + 7) = v29;
                }
              }
            }
            else if ( v11 == 13312 )
            {
              *(_BYTE *)i = 5;
              *(_QWORD *)(i + 7) = (a1[248] & 0xF) + 1LL;
            }
            else
            {
              if ( v11 != 13568 )
                return 0;
              *(_BYTE *)i = 5;
              *(_QWORD *)(i + 7) = *(unsigned __int8 *)v8;
            }
            goto LABEL_39;
          }
          if ( v11 == 14592 )
          {
            *(_BYTE *)i = 5;
            v47 = 32 - *(unsigned __int8 *)v8;
            v48 = 16;
            if ( v47 <= 16 )
              v48 = 32 - *(_BYTE *)v8;
            v49 = v48;
            v50 = a1[250] | (a1[248] << 16) | (a1[249] << 24);
            v51 = a1[251];
            *(_BYTE *)(i + 4) = 1;
            *(_QWORD *)(i + 7) = (unsigned __int16)(((1 << v49) - 1) & (((v51 << 8) | (unsigned int)v50) >> (v47 - v49)));
            goto LABEL_39;
          }
          if ( v11 <= 0x3900u )
          {
            if ( v11 == 14080 )
            {
              *((_WORD *)a1 + 125) = get_wide_byte();
              *(_WORD *)(a2 + 26) = 2;
              *(_BYTE *)i = 5;
              v58 = a1[248];
              v59 = *((unsigned __int16 *)a1 + 125);
              *(_BYTE *)(i + 32) = 3;
              *(_BYTE *)(i + 4) = 1;
              *(_QWORD *)(i + 7) = v59 | (v58 << 16) & 0x3F0000;
            }
            else
            {
              if ( v11 != 14336 )
                return 0;
              *(_BYTE *)i = 5;
              v23 = 32 - *(unsigned __int8 *)v8;
              v24 = 16;
              if ( v23 <= 16 )
                v24 = 32 - *(_BYTE *)v8;
              v25 = v24;
              v26 = a1[250] | (a1[248] << 16) | (a1[249] << 24);
              v27 = a1[251];
              *(_BYTE *)(i + 4) = 3;
              *(_QWORD *)(i + 7) = (int)((((1 << v25) - 1) & (((v27 << 8) | (unsigned int)v26) >> (v23 - v25))) << 16);
            }
            goto LABEL_39;
          }
          if ( v11 != 15104 )
          {
            if ( v11 == 15360 )
            {
              *(_BYTE *)i = 5;
              if ( *(_BYTE *)v8 == 2 )
                v15 = a1[251] & 1;
              else
                v15 = a1[248] & 1;
              *(_QWORD *)(i + 7) = v15;
              goto LABEL_39;
            }
            if ( v11 != 14848 )
              return 0;
LABEL_143:
            *(_BYTE *)i = 5;
            *(_QWORD *)(i + 7) = a1[248] & 0x1F;
            goto LABEL_39;
          }
          *((_WORD *)a1 + 125) = get_wide_byte();
          *(_WORD *)(a2 + 26) = 2;
          *(_BYTE *)i = 5;
          v39 = *((unsigned __int16 *)a1 + 125);
          *(_BYTE *)(i + 32) = 5;
          *(_QWORD *)(i + 7) = v39;
        }
      }
      else
      {
        if ( v11 == 1536 )
        {
          *(_BYTE *)i = 1;
          v43 = *(unsigned __int8 *)v8;
          *(_BYTE *)(i + 32) = 4;
          *(_WORD *)(i + 5) = v43;
          *(_BYTE *)(i + 4) = *((_BYTE *)qword_1B500 + v43);
          goto LABEL_39;
        }
        if ( v11 <= 0x600u )
        {
          if ( v11 == 768 )
          {
            *(_BYTE *)i = 1;
            v57 = *(unsigned __int8 *)v8;
            *(_BYTE *)(i + 32) = 2;
            *(_WORD *)(i + 5) = v57;
            *(_BYTE *)(i + 4) = *((_BYTE *)qword_1B500 + v57);
          }
          else if ( v11 <= 0x300u )
          {
            if ( v11 == 256 )
            {
              *(_BYTE *)i = 1;
              v52 = *(unsigned __int8 *)v8;
              *(_WORD *)(i + 5) = v52;
              *(_BYTE *)(i + 4) = *((_BYTE *)qword_1B500 + v52);
            }
            else
            {
              if ( v11 != 512 )
                return 0;
              *(_BYTE *)i = 1;
              v28 = *(unsigned __int8 *)v8;
              *(_BYTE *)(i + 32) = 1;
              *(_WORD *)(i + 5) = v28;
              *(_BYTE *)(i + 4) = *((_BYTE *)qword_1B500 + v28);
            }
          }
          else if ( v11 == 1024 )
          {
            *(_BYTE *)i = 8;
            v53 = *v8;
            *(_BYTE *)(i + 32) = *v8;
            if ( (unsigned __int8)(v53 - 8) <= 2u || (_BYTE)v53 == 2 )
            {
              *(_BYTE *)(i + 4) = 2;
            }
            else
            {
              *(_BYTE *)(i + 4) = 1;
              if ( (_BYTE)v53 == 0x80 )
                *(_BYTE *)(i + 32) = a1[251] & 0x1F | 0x80;
            }
          }
          else
          {
            if ( v11 != 1280 )
              return 0;
            *(_BYTE *)i = 1;
            v16 = *(unsigned __int8 *)v8;
            *(_BYTE *)(i + 32) = 5;
            *(_WORD *)(i + 5) = v16;
            *(_BYTE *)(i + 4) = *((_BYTE *)qword_1B500 + v16);
          }
          goto LABEL_39;
        }
        if ( v11 == 2560 )
        {
          *(_BYTE *)i = 1;
          v34 = a1[248];
          *(_BYTE *)(i + 4) = 0;
          *(_WORD *)(i + 5) = (v34 & 7) + 11;
          goto LABEL_39;
        }
        if ( v11 <= 0xA00u )
        {
          if ( v11 == 1792 )
          {
            *(_BYTE *)i = 1;
            v60 = *(unsigned __int8 *)v8;
            *(_BYTE *)(i + 32) = 3;
            *(_WORD *)(i + 5) = v60;
            *(_BYTE *)(i + 4) = *((_BYTE *)qword_1B500 + v60);
          }
          else
          {
            if ( v11 != 2048 )
              return 0;
            *(_BYTE *)i = 1;
            v22 = a1[248];
            *(_BYTE *)(i + 4) = 0;
            *(_WORD *)(i + 5) = ((v22 >> 3) & 7) + 11;
          }
          goto LABEL_39;
        }
        if ( v11 == 8448 )
        {
          v76 = *v8;
          if ( (_BYTE)v10 == 3 )
          {
            v10 = a1[250];
            v76 = 2;
            v75 = 2;
          }
          else
          {
            if ( (_BYTE)v10 == 2 )
            {
              v10 = a1[251];
            }
            else
            {
              v10 = a1[248];
              v76 = 2;
            }
            v75 = 2;
          }
        }
        else if ( v11 > 0x2100u )
        {
          if ( v11 == 8704 )
          {
            *(_BYTE *)i = 3;
            *(_BYTE *)(i + 32) = 2;
            *(_WORD *)(i + 5) = 0;
            *(_BYTE *)(i + 33) = *v8;
            goto LABEL_39;
          }
          if ( v11 != 8960 )
            return 0;
          v76 = 2;
          v75 = 2;
        }
        else
        {
          if ( v11 == 3840 )
            goto LABEL_236;
          if ( v11 <= 0xF00u )
          {
            if ( v11 == 3328 )
            {
              *(_BYTE *)i = 1;
              v63 = 3;
              goto LABEL_175;
            }
            if ( v11 <= 0xD00u )
            {
              if ( ((v11 - 2816) & 0xFE00) != 0 )
                return 0;
              *(_BYTE *)i = 1;
              if ( (v10 & 0xFE00) == 0xC00 || v11 == 2816 )
              {
                v63 = 3;
LABEL_175:
                v64 = *v8;
                if ( (*v8 & 0x20) != 0 )
                {
                  --v63;
                  LOBYTE(v64) = v64 & 0xDF;
                }
                v65 = v64 & 0x40;
                if ( (v64 & 0x40) != 0 )
                  LOBYTE(v64) = v64 & 0xBF;
                v66 = 32 - (unsigned __int8)v64;
                if ( v63 > v66 )
                  v63 = 32 - v64;
                v67 = ((1 << v63) - 1)
                    & ((unsigned int)((a1[251] << 8) | a1[250] | (a1[248] << 16) | (a1[249] << 24)) >> (v66 - v63));
                v68 = ((1 << v63) - 1)
                    & ((unsigned int)((a1[251] << 8) | a1[250] | (a1[248] << 16) | (a1[249] << 24)) >> (v66 - v63));
                if ( v65 )
                  v68 = ((v67 & 4) != 0) | (2 * v67) & 6;
                v69 = 68;
                if ( v11 != 2816 )
                {
                  v69 = 76;
                  if ( v11 != 3072 )
                  {
                    v69 = 84;
                    if ( v11 != 3328 )
                    {
                      v69 = 94;
                      if ( v11 != 3584 )
                      {
                        v69 = 103;
                        if ( v11 != 3840 )
                          v69 = 9 * (v11 != 4096) + 112;
                      }
                    }
                  }
                }
                *(_BYTE *)(i + 4) = 1;
                *(_WORD *)(i + 5) = v69 + v68;
                goto LABEL_39;
              }
LABEL_234:
              v63 = 2;
              goto LABEL_175;
            }
            if ( v11 != 3584 )
              return 0;
LABEL_236:
            *(_BYTE *)i = 1;
LABEL_237:
            v63 = 4;
            goto LABEL_175;
          }
          if ( v11 != 0x2000 )
          {
            if ( v11 > 0x2000u || (v10 & 0xFE00) != 0x1000 )
              return 0;
            *(_BYTE *)i = 1;
            if ( v11 != 4096 )
              goto LABEL_234;
            goto LABEL_237;
          }
          if ( (_BYTE)v10 == 3 )
          {
            v10 = a1[250];
          }
          else if ( (_BYTE)v10 == 2 )
          {
            v10 = a1[251];
          }
          else
          {
            v10 = a1[248];
          }
          v76 = 1;
          v75 = 1;
        }
        v12 = v10;
        v74 = v10;
        LOBYTE(v12) = (unsigned __int8)v10 >> 3;
        v13 = sub_12250(*(_QWORD *)(a2 + 16));
        if ( v13 )
        {
          if ( (unsigned __int8)(v12 - 30) <= 1u )
            return 0;
          *(_BYTE *)(i + 4) = v75 != 1;
          *(_BYTE *)(i + 31) = v76;
          if ( v74 < 0 )
          {
LABEL_28:
            *(_BYTE *)i = 3;
            *(_WORD *)(i + 23) = 66;
            v14 = v74 & 7;
            switch ( (char)v12 )
            {
              case 16:
                *(_WORD *)(i + 32) = 513;
                *(_WORD *)(i + 5) = (unsigned __int8)(v14 + 3);
                break;
              case 17:
                *(_WORD *)(i + 32) = 257;
                *(_WORD *)(i + 5) = (unsigned __int8)(v14 + 3);
                break;
              case 18:
                *(_WORD *)(i + 32) = 1281;
                *(_WORD *)(i + 5) = (unsigned __int8)(v14 + 3);
                break;
              case 19:
                *(_WORD *)(i + 32) = 1537;
                *(_WORD *)(i + 5) = (unsigned __int8)(v14 + 3);
                break;
              case 20:
                *(_BYTE *)i = 1;
                *(_WORD *)(i + 5) = v14 + 8 * (v75 == 1) + 3;
                break;
              case 22:
                *(_WORD *)(i + 5) = (unsigned __int8)(v14 + 33);
                *(_WORD *)(i + 32) = 2;
                break;
              case 23:
                switch ( v14 )
                {
                  case 0u:
                    *(_WORD *)(i + 5) = 0;
                    *(_WORD *)(i + 32) = 2;
                    break;
                  case 1u:
                    *(_WORD *)(i + 5) = 0;
                    *(_WORD *)(i + 32) = 514;
                    break;
                  case 2u:
                    *(_WORD *)(i + 5) = 0;
                    *(_WORD *)(i + 32) = 258;
                    break;
                  case 3u:
                    *(_WORD *)(i + 5) = 0;
                    *(_WORD *)(i + 32) = 1282;
                    break;
                  case 4u:
                    *(_WORD *)(i + 5) = 0;
                    *(_WORD *)(i + 32) = 1794;
                    break;
                  case 5u:
                    *(_WORD *)(i + 5) = 27;
                    *(_WORD *)(i + 32) = 512;
                    break;
                  case 6u:
                    *(_WORD *)(i + 5) = 27;
                    *(_WORD *)(i + 32) = 256;
                    break;
                  case 7u:
                    *(_BYTE *)(i + 32) = 3;
                    break;
                }
                break;
              default:
                switch ( v74 )
                {
                  case -88:
                    *(_BYTE *)i = 1;
                    *(_WORD *)(i + 5) = 1;
                    break;
                  case -87:
                    *(_BYTE *)i = 1;
                    *(_WORD *)(i + 5) = 2 * (v75 == 1);
                    break;
                  case -86:
                    *(_BYTE *)i = 1;
                    *(_WORD *)(i + 5) = 23;
                    break;
                  case -85:
                    *(_BYTE *)i = 1;
                    v72 = 22;
                    if ( v75 == 1 )
                      v72 = 24;
                    goto LABEL_212;
                  case -84:
                    *(_BYTE *)i = 1;
                    v72 = 32 - v75;
LABEL_212:
                    *(_WORD *)(i + 5) = v72;
                    break;
                  case -83:
                    *(_BYTE *)i = 1;
                    *(_WORD *)(i + 5) = 27;
                    break;
                  case -82:
                    *(_WORD *)(i + 5) = 0;
                    *(_WORD *)(i + 32) = 2050;
                    break;
                  case -81:
                    *(_WORD *)(i + 5) = 0;
                    *(_WORD *)(i + 32) = 2306;
                    break;
                  default:
                    if ( v13 )
                    {
                      *(_BYTE *)(i + 32) = 2;
                      *(_WORD *)(i + 5) = (unsigned __int8)(v14 + 33);
                      switch ( v12 )
                      {
                        case 24:
                          *(_BYTE *)(i + 33) = 2;
                          break;
                        case 25:
                          *(_BYTE *)(i + 33) = 1;
                          break;
                        case 26:
                          *(_BYTE *)(i + 33) = 5;
                          break;
                        case 27:
                          *(_BYTE *)(i + 33) = 7;
                          break;
                        case 28:
                          *(_BYTE *)(i + 33) = 8;
                          break;
                        case 29:
                          *(_BYTE *)(i + 33) = 9;
                          break;
                        default:
                          goto LABEL_39;
                      }
                    }
                    else
                    {
                      *(_BYTE *)i = 4;
                      if ( (v74 & 0xC0) == 0x40 )
                      {
                        *(_WORD *)(i + 5) = 27;
                        *(_QWORD *)(i + 15) = v74 & 0x3F;
                      }
                      else
                      {
                        *(_QWORD *)(i + 15) = v12 & 7;
                        *(_WORD *)(i + 5) = (unsigned __int8)(v14 + 3);
                      }
                    }
                    break;
                }
                break;
            }
            goto LABEL_39;
          }
        }
        else
        {
          *(_BYTE *)(i + 4) = v75 != 1;
          *(_BYTE *)(i + 31) = v76;
          if ( (unsigned __int8)v74 > 0x3Fu )
            goto LABEL_28;
        }
        *(_BYTE *)i = 4;
        *(_WORD *)(i + 5) = 63;
        *(_QWORD *)(i + 15) = (unsigned __int8)v74;
      }
    }
LABEL_39:
    ++v8;
  }
  return *(unsigned __int16 *)(a2 + 26);
}

