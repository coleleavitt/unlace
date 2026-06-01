__int64 __fastcall sub_79A0(unsigned __int64 a1, int a2, __int64 a3, __int64 a4, void *a5)
{
  __int64 v5; // r13
  int v6; // r15d
  __int64 v7; // rsi
  __int64 v8; // r12
  unsigned int v9; // r11d
  char v10; // bl
  char v11; // bp
  __int64 v12; // r9
  int v13; // eax
  int v14; // r11d
  int v15; // eax
  int v16; // r11d
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  int v20; // eax
  bool v21; // sf
  int v22; // eax
  int v24; // eax
  int v25; // eax
  int v26; // r11d
  __int16 v27; // bx
  char *v28; // rax
  __int16 v29; // dx
  __int16 v30; // r13
  char *v31; // rdi
  __int16 v32; // bp
  int v33; // ebx
  int v34; // [rsp+10h] [rbp-298h]
  unsigned int v35; // [rsp+14h] [rbp-294h]
  __int64 v37; // [rsp+20h] [rbp-288h]
  __int64 v38; // [rsp+30h] [rbp-278h]
  __int16 v40; // [rsp+3Ch] [rbp-26Ch]
  __int16 v41; // [rsp+3Eh] [rbp-26Ah]
  __int64 v42; // [rsp+48h] [rbp-260h] BYREF
  __int64 v43; // [rsp+54h] [rbp-254h]
  int v44; // [rsp+5Ch] [rbp-24Ch]
  _DWORD v45[44]; // [rsp+60h] [rbp-248h]
  _DWORD v46[44]; // [rsp+110h] [rbp-198h]
  _DWORD v47[42]; // [rsp+1C0h] [rbp-E8h]
  unsigned __int64 v48; // [rsp+268h] [rbp-40h]

  v5 = 0;
  v6 = 0;
  v7 = 0;
  v48 = __readfsqword(0x28u);
  v41 = -1;
  v40 = -1;
  v35 = 40;
  v8 = 0;
  v45[0] = 0;
  v34 = 0;
  v47[0] = 0;
  v46[0] = 40;
  v38 = ((unsigned __int8)(a1 >> 13) ^ (unsigned __int8)(a1 >> 20)) & 0x7F;
LABEL_2:
  while ( 2 )
  {
    while ( 2 )
    {
      while ( 2 )
      {
        v43 = 0;
        v9 = 5;
        v10 = byte_11320[v8];
        v44 = 0;
        if ( (v10 & 0x40) != 0 )
        {
          v7 = 5;
          LODWORD(v43) = sub_7800(v6, 5, 5);
        }
        v11 = v10 & 0x30;
        v12 = v10 & 8;
        if ( (v10 & 0x30) == 0x20 )
        {
          v7 = v9;
          v25 = sub_7800(v6, v9, 16);
          v12 = v10 & 8;
          if ( (v25 & 0x8000) == 0 )
            v25 += v6;
          v9 = v26 + 16;
          HIDWORD(v43) = v25;
          if ( (_BYTE)v12 )
          {
LABEL_9:
            v7 = v9;
            v15 = sub_7800(v6, v9, 16);
            v12 = 8;
            if ( (v15 & 0x8000) == 0 )
              v15 += v6;
            v9 = v16 + 16;
            v44 = v15;
          }
        }
        else
        {
          if ( v11 == 48 )
          {
            v7 = v9 - 1;
            v24 = sub_7800(v6, v7, 12);
            v12 = v10 & 8;
            BYTE1(v24) |= 0x80u;
            v44 = v24;
            goto LABEL_12;
          }
          if ( v11 == 16 )
          {
            v7 = v9;
            v13 = sub_7800(v6, v9, 8);
            v12 = v10 & 8;
            v9 = v14 + 8;
            HIDWORD(v43) = v6 + v13;
          }
          if ( (_BYTE)v12 )
            goto LABEL_9;
        }
LABEL_12:
        v17 = v35;
        if ( (v10 & 0x40) != 0 )
          v17 = v35 - (unsigned int)v43;
        v18 = v45[v5];
        v19 = (a1 >> v17) & 1;
        if ( v18 == 1 )
        {
          v45[v5] = 2;
          if ( !(_DWORD)v19 )
            goto LABEL_25;
LABEL_36:
          if ( v11 )
          {
            if ( v11 != 48 )
            {
              v20 = HIDWORD(v43);
              goto LABEL_21;
            }
            ++v45[v5];
            v20 = v44;
LABEL_31:
            if ( v20 >= 0 )
              goto LABEL_22;
            goto LABEL_32;
          }
          ++v45[v5];
          if ( !(_BYTE)v12 )
            goto LABEL_27;
LABEL_30:
          v20 = v44;
          goto LABEL_31;
        }
        if ( v18 == 2 )
          goto LABEL_25;
        if ( v18 )
          goto LABEL_27;
        v45[v5] = 1;
        if ( (_DWORD)v19 )
        {
          v45[v5] = 2;
          goto LABEL_36;
        }
        if ( v10 >= 0 )
          goto LABEL_25;
        if ( (v10 & 0xF8) != 0x80 )
        {
          v20 = ((int)(v9 + 7) >> 3) + v6;
          goto LABEL_21;
        }
        v33 = v10 & 7;
        v7 = (unsigned int)v17;
        while ( (a1 & (1LL << ((unsigned __int8)v17 - (unsigned __int8)v19))) == 0 )
        {
          v19 = (unsigned int)(v19 + 1);
          if ( v33 < (int)v19 )
            goto LABEL_61;
        }
        v17 = (unsigned int)v17;
        if ( v33 >= (int)v19 )
        {
LABEL_25:
          v45[v5] = 3;
          if ( !(_BYTE)v12 && v11 != 48 )
          {
LABEL_27:
            v21 = --v34 < 0;
            v22 = v34;
            if ( v21 )
              return (unsigned int)v41;
LABEL_28:
            v5 = v22;
            v8 = (int)v47[v22];
            v6 = v47[v22];
            v35 = v46[v22];
            continue;
          }
          goto LABEL_30;
        }
        break;
      }
LABEL_61:
      v17 = (unsigned int)(v17 - v33);
      v20 = v6 + ((int)(v9 + 7) >> 3);
LABEL_21:
      if ( v20 >= 0 )
      {
LABEL_22:
        if ( (v20 & 0x8000) == 0 )
        {
          v5 = ++v34;
          v8 = v20;
          v35 = v17 - 1;
          v6 = v20;
          v46[v34] = v17 - 1;
          v47[v34] = v20;
          v45[v34] = 0;
          continue;
        }
        v27 = v20 & 0x7FFF;
        if ( v20 > 0xFFFF )
        {
          if ( !under_debugger )
            interr(10215, v7, v19, v17, a5, v12);
          BUG();
        }
        a5 = &unk_13080;
        v37 = v5;
        while ( 1 )
        {
          v28 = (char *)&unk_13080 + 40 * ((*((_WORD *)&unk_CDC0 + 4 * v27 + 1) >> 4) & 0x7FF);
          if ( a2 != (unsigned __int8)v28[2] )
            goto LABEL_48;
          v29 = *((_WORD *)v28 + 15);
          v30 = *((_WORD *)&unk_CDC0 + 4 * v27 + 2);
          if ( (v29 & 0x180) == 0 )
            goto LABEL_47;
          if ( (v29 & 0x80) != 0 )
            break;
          v7 = a1;
          v31 = (char *)&unk_22680 + 64 * (unsigned __int64)(unsigned __int8)v28[26];
          (*((void (__fastcall **)(char *, unsigned __int64, __int64 *, void *, void *, __int64))v31 + 1))(
            v31,
            a1,
            &v42,
            &unk_CDC0,
            &unk_13080,
            v12);
          a5 = &unk_13080;
          if ( 64 - v42 == ((a1 >> 27) & 0x3F) + 1 )
            goto LABEL_47;
          if ( *((char *)&unk_CDC0 + 8 * v27 + 3) >= 0 )
          {
LABEL_55:
            v5 = v37;
            goto LABEL_2;
          }
LABEL_49:
          if ( ++v27 < 0 )
            goto LABEL_55;
        }
        if ( !v38 )
        {
LABEL_47:
          if ( v40 < v30 )
          {
            v32 = v30;
            v41 = v27;
            v5 = v37;
            v40 = v32;
            continue;
          }
        }
LABEL_48:
        if ( *((char *)&unk_CDC0 + 8 * v27 + 3) >= 0 )
          goto LABEL_55;
        goto LABEL_49;
      }
      break;
    }
LABEL_32:
    if ( v20 != -1 )
      continue;
    break;
  }
  v21 = --v34 < 0;
  v22 = v34;
  if ( !v21 )
    goto LABEL_28;
  return (unsigned int)v41;
}

