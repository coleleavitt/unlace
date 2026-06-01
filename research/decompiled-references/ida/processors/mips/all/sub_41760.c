__int64 __fastcall sub_41760(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, unsigned __int16 a5, int a6)
{
  unsigned __int64 v6; // rbx
  __int64 v9; // rdi
  unsigned int v10; // ecx
  __int64 v11; // rax
  char v12; // al
  __int64 result; // rax
  unsigned __int64 v14; // rbx
  __int64 v15; // rdi
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  __int64 v19; // rbx
  unsigned __int64 v20; // rax
  __int64 v21; // rdi
  unsigned int v22; // ecx
  char v23; // al
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdi
  unsigned int v28; // ecx
  char v29; // al
  __int16 v30; // dx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  unsigned int v42; // ecx
  unsigned int v43; // ecx
  __int64 v44; // rdx
  unsigned int v45; // eax
  unsigned int v46; // eax
  int v47; // ecx
  signed int v48; // eax
  __int64 v49; // rsi
  __int64 v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rdi
  __int64 v53; // rdi
  unsigned int v54; // ecx
  char v55; // al
  __int64 v56; // rdi
  unsigned int v57; // ecx
  char v58; // al
  __int16 v59; // bx
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rdi
  unsigned int v63; // ecx
  char v64; // al
  __int64 v65; // rdi
  unsigned int v66; // ecx
  char v67; // al
  __int64 v68; // rdi
  unsigned int v69; // ecx
  char v70; // al
  __int64 v71; // rax
  __int64 v72; // rax
  unsigned int v73; // eax
  int v74; // ecx
  __int64 v75; // rsi
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 first_seg; // rax
  __int16 v83; // bx
  int v84; // [rsp+10h] [rbp-28h] BYREF
  int v85; // [rsp+14h] [rbp-24h] BYREF
  unsigned __int64 v86; // [rsp+18h] [rbp-20h]

  v86 = __readfsqword(0x28u);
  v6 = a4;
  switch ( a6 )
  {
    case 0:
      return 1;
    case 1:
      v65 = *(_QWORD *)(a2 + 16);
      *(_BYTE *)(a3 + 1) = 1;
      v66 = *(_DWORD *)(a1 + 120);
      if ( v66 > 5 )
        goto LABEL_291;
      if ( ((1LL << v66) & 0x16) != 0 )
        goto LABEL_204;
      if ( ((1LL << v66) & 0x29) == 0 )
      {
LABEL_291:
        if ( !under_debugger )
          goto LABEL_34;
LABEL_302:
        BUG();
      }
      if ( v65 == -1 )
        first_seg = get_first_seg(-1, a2, a3);
      else
        first_seg = getseg(v65);
      if ( first_seg )
      {
        if ( *(_BYTE *)(first_seg + 43) == 2 || (unsigned int)(*(_DWORD *)(a1 + 184) - 4) <= 1 )
LABEL_204:
          v67 = 7;
        else
          v67 = 2;
        *(_BYTE *)(a3 + 5) = v67;
        *(_WORD *)(a3 + 6) = 64;
        *(_BYTE *)(a3 + 41) = 5;
        *(_BYTE *)(a3 + 45) = 2;
        *(_QWORD *)(a3 + 48) = ((4 * (_DWORD)v6) & 0x1FFFFFC ^ 0x1000000LL) - 0x1000000;
        sub_41470(a1, a2, 31, (unsigned __int8 *)a3, 23, 0, -1, -1, -1, -1);
      }
      else
      {
        do
        {
LABEL_287:
          if ( under_debugger )
            goto LABEL_302;
          interr(10206);
LABEL_289:
          if ( under_debugger )
            goto LABEL_302;
LABEL_34:
          while ( 1 )
          {
            interr(10339);
LABEL_35:
            v9 = *(_QWORD *)(a2 + 16);
            *(_BYTE *)(a3 + 1) = 1;
            v17 = *(_DWORD *)(a1 + 120);
            LOWORD(v6) = word_5DDA0[(v6 >> 7) & 7];
            if ( v17 <= 5 )
            {
              if ( ((1LL << v17) & 0x16) != 0 )
                goto LABEL_219;
              if ( ((1LL << v17) & 0x29) != 0 )
                break;
            }
            if ( under_debugger )
              goto LABEL_302;
          }
LABEL_5:
          if ( v9 == -1 )
            v11 = get_first_seg(-1, a2, a3);
          else
            v11 = getseg(v9);
        }
        while ( !v11 );
        if ( *(_BYTE *)(v11 + 43) == 2 || (unsigned int)(*(_DWORD *)(a1 + 184) - 4) <= 1 )
LABEL_219:
          v12 = 7;
        else
          v12 = 2;
        *(_BYTE *)(a3 + 5) = v12;
        *(_WORD *)(a3 + 6) = v6;
      }
      return 1;
    case 2:
      v62 = *(_QWORD *)(a2 + 16);
      *(_BYTE *)(a3 + 1) = 1;
      v63 = *(_DWORD *)(a1 + 120);
      if ( v63 > 5 )
        goto LABEL_295;
      if ( ((1LL << v63) & 0x16) != 0 )
        goto LABEL_200;
      if ( ((1LL << v63) & 0x29) != 0 )
      {
        if ( v62 == -1 )
          v77 = get_first_seg(-1, a2, a3);
        else
          v77 = getseg(v62);
        if ( !v77 )
          goto LABEL_287;
        if ( *(_BYTE *)(v77 + 43) == 2 || (unsigned int)(*(_DWORD *)(a1 + 184) - 4) <= 1 )
LABEL_200:
          v64 = 7;
        else
          v64 = 2;
        *(_BYTE *)(a3 + 5) = v64;
        *(_WORD *)(a3 + 6) = 29;
        *(_BYTE *)(a3 + 41) = 5;
        *(_BYTE *)(a3 + 45) = 1;
        *(_QWORD *)(a3 + 48) = (unsigned __int8)(2 * v6) & 0xFC;
        return 1;
      }
LABEL_295:
      if ( !under_debugger )
        goto LABEL_34;
      goto LABEL_302;
    case 3:
      *(_BYTE *)(a3 + 1) = 5;
      v61 = *(__int16 *)((char *)&unk_5DE20 + (a4 & 0xE));
      *(_BYTE *)(a3 + 5) = 1;
      *(_QWORD *)(a3 + 8) = v61;
      sub_41470(a1, a2, 31, (unsigned __int8 *)a3, 4, 1, -1, -1, -1, -1);
      return 1;
    case 4:
      v53 = *(_QWORD *)(a2 + 16);
      *(_BYTE *)(a3 + 1) = 1;
      v54 = *(_DWORD *)(a1 + 120);
      if ( v54 > 5 )
        goto LABEL_301;
      if ( ((1LL << v54) & 0x16) != 0 )
        goto LABEL_188;
      if ( ((1LL << v54) & 0x29) != 0 )
      {
        if ( v53 == -1 )
          v80 = get_first_seg(-1, a2, a3);
        else
          v80 = getseg(v53);
        if ( !v80 )
          goto LABEL_287;
        if ( *(_BYTE *)(v80 + 43) == 2 || (unsigned int)(*(_DWORD *)(a1 + 184) - 4) <= 1 )
LABEL_188:
          v55 = 7;
        else
          v55 = 2;
        *(_BYTE *)(a3 + 5) = v55;
        *(_WORD *)(a3 + 6) = 29;
        v56 = *(_QWORD *)(a2 + 16);
        *(_BYTE *)(a3 + 41) = 1;
        v57 = *(_DWORD *)(a1 + 120);
        if ( v57 > 5 )
          goto LABEL_289;
        if ( ((1LL << v57) & 0x16) != 0 )
          goto LABEL_191;
        if ( ((1LL << v57) & 0x29) == 0 )
          goto LABEL_289;
        if ( v56 == -1 )
          v76 = get_first_seg(-1, a2, a3);
        else
          v76 = getseg(v56);
        if ( !v76 )
          goto LABEL_287;
        if ( *(_BYTE *)(v76 + 43) == 2 || (unsigned int)(*(_DWORD *)(a1 + 184) - 4) <= 1 )
LABEL_191:
          v58 = 7;
        else
          v58 = 2;
        *(_BYTE *)(a3 + 45) = v58;
        v59 = (v6 >> 1) & 0x1FF;
        *(_WORD *)(a3 + 46) = 29;
        if ( v59 == 510 )
        {
          v60 = -1032;
        }
        else
        {
          v60 = -1028;
          if ( v59 != 511 )
          {
            v60 = 1024;
            if ( v59 )
            {
              v60 = 1028;
              if ( v59 != 1 )
              {
                if ( (unsigned __int16)(v59 - 2) <= 0xFDu )
                  v83 = 4 * v59;
                else
                  v83 = 4 * v59 - 2048;
                v60 = v83;
              }
            }
          }
        }
        *(_BYTE *)(a3 + 81) = 5;
        *(_BYTE *)(a3 + 85) = 1;
        *(_QWORD *)(a3 + 88) = v60;
        return 1;
      }
LABEL_301:
      if ( !under_debugger )
        goto LABEL_34;
      goto LABEL_302;
    case 5:
      *(_BYTE *)(a3 + 1) = 5;
      *(_BYTE *)(a3 + 5) = 1;
      v52 = (a4 >> 1) & 0xF;
      if ( ((a4 >> 1) & 8) != 0 )
        v52 = (unsigned __int8)(a4 >> 1) | 0xFFFFFFF0;
      *(_QWORD *)(a3 + 8) = v52;
      sub_41470(a1, a2, 31, (unsigned __int8 *)a3, 5, 1, -1, -1, -1, -1);
      return 1;
    case 6:
      *(_BYTE *)(a3 + 1) = 5;
      v51 = dword_5DDE0[a4 & 0xF];
      *(_BYTE *)(a3 + 5) = 1;
      *(_QWORD *)(a3 + 8) = v51;
      goto LABEL_53;
    case 7:
      *(_BYTE *)(a3 + 1) = 5;
      *(_BYTE *)(a3 + 5) = 1;
      *(_QWORD *)(a3 + 8) = (4 * (_BYTE)a4) & 0x7C;
      return 1;
    case 8:
      v50 = 0xFFFFFFFFLL;
      *(_BYTE *)(a3 + 1) = 5;
      *(_BYTE *)(a3 + 5) = 0;
      if ( (a4 & 0x7F) != 0x7F )
        v50 = a4 & 0x7F;
      *(_QWORD *)(a3 + 8) = v50;
      goto LABEL_59;
    case 9:
      *(_BYTE *)(a3 + 1) = 5;
      v30 = a5;
      *(_BYTE *)(a3 + 5) = 1;
      *(_QWORD *)(a3 + 8) = (unsigned __int16)a4;
      goto LABEL_74;
    case 10:
      *(_BYTE *)(a3 + 1) = 5;
      *(_BYTE *)(a3 + 5) = 1;
      *(_QWORD *)(a3 + 8) = (__int16)a4;
      goto LABEL_73;
    case 11:
      *(_BYTE *)(a3 + 1) = 5;
      *(_BYTE *)(a3 + 5) = 2;
      *(_QWORD *)(a3 + 8) = a4 & 0xF;
      return 1;
    case 12:
      *(_BYTE *)(a3 + 1) = 5;
      *(_BYTE *)(a3 + 5) = 2;
      *(_QWORD *)(a3 + 8) = (unsigned __int16)a4 >> 6;
      return 1;
    case 13:
      *(_BYTE *)(a3 + 1) = 5;
      *(_BYTE *)(a3 + 5) = 2;
      *(_QWORD *)(a3 + 8) = (a4 >> 16) & 0x3FF;
      return 1;
    case 14:
      *(_BYTE *)(a3 + 1) = 5;
      *(_BYTE *)(a3 + 5) = 1;
      *(_QWORD *)(a3 + 8) = (a4 >> 21) & 0x1F;
      return 1;
    case 15:
      *(_BYTE *)(a3 + 1) = 5;
      *(_BYTE *)(a3 + 5) = 2;
      *(_QWORD *)(a3 + 8) = (a4 >> 3) & 0x7FFFFF;
      return 1;
    case 16:
      result = sub_1C600(a4, a5, &v84, &v85);
      if ( !(_BYTE)result && (*(_BYTE *)(a1 + 188) & 2) != 0 )
        return result;
      v71 = v84;
      *(_BYTE *)(a3 + 1) = 5;
      *(_BYTE *)(a3 + 5) = 0;
      *(_QWORD *)(a3 + 8) = v71;
      v72 = v85;
      *(_BYTE *)(a3 + 41) = 5;
      *(_BYTE *)(a3 + 45) = 0;
      *(_QWORD *)(a3 + 48) = v72;
      return 1;
    case 17:
      *(_BYTE *)(a3 + 1) = 5;
      *(_BYTE *)(a3 + 5) = 0;
      *(_QWORD *)(a3 + 8) = (unsigned __int16)a4 >> 11;
      return 1;
    case 18:
      *(_BYTE *)(a3 + 1) = 5;
      *(_BYTE *)(a3 + 5) = 0;
      *(_QWORD *)(a3 + 8) = (a4 >> 21) & 0x1F;
      return 1;
    case 19:
      *(_BYTE *)(a3 + 4) |= 0x10u;
      *(_BYTE *)(a3 + 1) = 5;
      *(_BYTE *)(a3 + 5) = 0;
      *(_QWORD *)(a3 + 8) = (unsigned __int16)a4 >> 11;
      return 1;
    case 20:
      *(_BYTE *)(a3 + 4) |= 0x10u;
      *(_BYTE *)(a3 + 1) = 5;
      *(_BYTE *)(a3 + 5) = 0;
      *(_QWORD *)(a3 + 8) = ((unsigned __int16)a4 >> 11) + 32LL;
      return 1;
    case 21:
      *(_BYTE *)(a3 + 4) |= 0x10u;
      *(_BYTE *)(a3 + 1) = 5;
      *(_BYTE *)(a3 + 5) = 0;
      *(_QWORD *)(a3 + 8) = (a4 >> 16) & 0x1F;
      return 1;
    case 22:
      *(_BYTE *)(a3 + 1) = 5;
      *(_BYTE *)(a3 + 5) = 1;
      *(_QWORD *)(a3 + 8) = (a4 >> 16) & 0x3FF;
      return 1;
    case 23:
      *(_BYTE *)(a3 + 1) = 8;
      *(_BYTE *)(a3 + 5) = 0;
      *(_QWORD *)(a3 + 8) = (unsigned __int16)a4 >> 12;
      return 1;
    case 24:
      v9 = *(_QWORD *)(a2 + 16);
      *(_BYTE *)(a3 + 1) = 1;
      v38 = *(_DWORD *)(a1 + 120);
      v6 = word_5DE50[v6 & 7];
      if ( v38 > 5 )
        goto LABEL_113;
      if ( ((1LL << v38) & 0x16) != 0 )
        goto LABEL_219;
      if ( ((1LL << v38) & 0x29) != 0 )
        goto LABEL_5;
LABEL_113:
      if ( under_debugger )
        goto LABEL_302;
      goto LABEL_34;
    case 25:
      v9 = *(_QWORD *)(a2 + 16);
      *(_BYTE *)(a3 + 1) = 1;
      v36 = *(_DWORD *)(a1 + 120);
      v6 = *(unsigned __int16 *)((char *)word_5DE50 + (v6 & 0xE));
      if ( v36 > 5 )
        goto LABEL_103;
      if ( ((1LL << v36) & 0x16) != 0 )
        goto LABEL_219;
      if ( ((1LL << v36) & 0x29) != 0 )
        goto LABEL_5;
LABEL_103:
      if ( under_debugger )
        goto LABEL_302;
      goto LABEL_34;
    case 26:
      v9 = *(_QWORD *)(a2 + 16);
      *(_BYTE *)(a3 + 1) = 1;
      v37 = *(_DWORD *)(a1 + 120);
      v6 = word_5DE50[(v6 >> 3) & 7];
      if ( v37 > 5 )
        goto LABEL_108;
      if ( ((1LL << v37) & 0x16) != 0 )
        goto LABEL_219;
      if ( ((1LL << v37) & 0x29) != 0 )
        goto LABEL_5;
LABEL_108:
      if ( under_debugger )
        goto LABEL_302;
      goto LABEL_34;
    case 27:
      v9 = *(_QWORD *)(a2 + 16);
      *(_BYTE *)(a3 + 1) = 1;
      v35 = *(_DWORD *)(a1 + 120);
      v6 = word_5DE50[(v6 >> 4) & 7];
      if ( v35 > 5 )
        goto LABEL_98;
      if ( ((1LL << v35) & 0x16) != 0 )
        goto LABEL_219;
      if ( ((1LL << v35) & 0x29) != 0 )
        goto LABEL_5;
LABEL_98:
      if ( under_debugger )
        goto LABEL_302;
      goto LABEL_34;
    case 28:
      v9 = *(_QWORD *)(a2 + 16);
      *(_BYTE *)(a3 + 1) = 1;
      v34 = *(_DWORD *)(a1 + 120);
      v6 = word_5DE50[(v6 >> 7) & 7];
      if ( v34 > 5 )
        goto LABEL_93;
      if ( ((1LL << v34) & 0x16) != 0 )
        goto LABEL_219;
      if ( ((1LL << v34) & 0x29) != 0 )
        goto LABEL_5;
LABEL_93:
      if ( under_debugger )
        goto LABEL_302;
      goto LABEL_34;
    case 29:
      v9 = *(_QWORD *)(a2 + 16);
      *(_BYTE *)(a3 + 1) = 1;
      v33 = *(_DWORD *)(a1 + 120);
      v6 = word_5DDC0[(v6 >> 7) & 7];
      if ( v33 > 5 )
        goto LABEL_88;
      if ( ((1LL << v33) & 0x16) != 0 )
        goto LABEL_219;
      if ( ((1LL << v33) & 0x29) != 0 )
        goto LABEL_5;
LABEL_88:
      if ( under_debugger )
        goto LABEL_302;
      goto LABEL_34;
    case 30:
      v9 = *(_QWORD *)(a2 + 16);
      *(_BYTE *)(a3 + 1) = 1;
      v32 = *(_DWORD *)(a1 + 120);
      v6 = word_5DE50[(v6 >> 23) & 7];
      if ( v32 > 5 )
        goto LABEL_83;
      if ( ((1LL << v32) & 0x16) != 0 )
        goto LABEL_219;
      if ( ((1LL << v32) & 0x29) != 0 )
        goto LABEL_5;
LABEL_83:
      if ( under_debugger )
        goto LABEL_302;
      goto LABEL_34;
    case 31:
      v9 = *(_QWORD *)(a2 + 16);
      *(_BYTE *)(a3 + 1) = 1;
      v6 = a4 & 0x1F;
      v31 = *(_DWORD *)(a1 + 120);
      if ( v31 > 5 )
        goto LABEL_78;
      if ( ((1LL << v31) & 0x16) != 0 )
        goto LABEL_219;
      if ( ((1LL << v31) & 0x29) != 0 )
        goto LABEL_5;
LABEL_78:
      if ( under_debugger )
        goto LABEL_302;
      goto LABEL_34;
    case 32:
      v9 = *(_QWORD *)(a2 + 16);
      *(_BYTE *)(a3 + 1) = 1;
      v43 = *(_DWORD *)(a1 + 120);
      v6 = (v6 >> 5) & 0x1F;
      if ( v43 > 5 )
        goto LABEL_150;
      if ( ((1LL << v43) & 0x16) != 0 )
        goto LABEL_219;
      if ( ((1LL << v43) & 0x29) != 0 )
        goto LABEL_5;
LABEL_150:
      if ( under_debugger )
        goto LABEL_302;
      goto LABEL_34;
    case 33:
      v9 = *(_QWORD *)(a2 + 16);
      *(_BYTE *)(a3 + 1) = 1;
      v41 = *(_DWORD *)(a1 + 120);
      v6 = (v6 >> 6) & 0x1F;
      if ( v41 > 5 )
        goto LABEL_140;
      if ( ((1LL << v41) & 0x16) != 0 )
        goto LABEL_219;
      if ( ((1LL << v41) & 0x29) != 0 )
        goto LABEL_5;
LABEL_140:
      if ( under_debugger )
        goto LABEL_302;
      goto LABEL_34;
    case 34:
      v9 = *(_QWORD *)(a2 + 16);
      *(_BYTE *)(a3 + 1) = 1;
      LOWORD(v6) = (unsigned __int16)a4 >> 11;
      v42 = *(_DWORD *)(a1 + 120);
      if ( v42 > 5 )
        goto LABEL_145;
      if ( ((1LL << v42) & 0x16) != 0 )
        goto LABEL_219;
      if ( ((1LL << v42) & 0x29) != 0 )
        goto LABEL_5;
LABEL_145:
      if ( under_debugger )
        goto LABEL_302;
      goto LABEL_34;
    case 35:
      v9 = *(_QWORD *)(a2 + 16);
      *(_BYTE *)(a3 + 1) = 1;
      v40 = *(_DWORD *)(a1 + 120);
      v6 = (v6 >> 16) & 0x1F;
      if ( v40 > 5 )
        goto LABEL_135;
      if ( ((1LL << v40) & 0x16) != 0 )
        goto LABEL_219;
      if ( ((1LL << v40) & 0x29) != 0 )
        goto LABEL_5;
LABEL_135:
      if ( under_debugger )
        goto LABEL_302;
      goto LABEL_34;
    case 36:
      v9 = *(_QWORD *)(a2 + 16);
      *(_BYTE *)(a3 + 1) = 1;
      v39 = *(_DWORD *)(a1 + 120);
      v6 = (v6 >> 21) & 0x1F;
      if ( v39 > 5 )
        goto LABEL_130;
      if ( ((1LL << v39) & 0x16) != 0 )
        goto LABEL_219;
      if ( ((1LL << v39) & 0x29) != 0 )
        goto LABEL_5;
LABEL_130:
      if ( under_debugger )
        goto LABEL_302;
      goto LABEL_34;
    case 37:
      *(_BYTE *)(a3 + 1) = 9;
      *(_BYTE *)(a3 + 5) = 2;
      *(_WORD *)(a3 + 6) = (a4 >> 6) & 0x1F;
      *(_WORD *)(a3 + 33) = 260;
      return 1;
    case 38:
      *(_BYTE *)(a3 + 1) = 9;
      *(_BYTE *)(a3 + 5) = 2;
      *(_WORD *)(a3 + 6) = (a4 >> 11) & 0x1F;
      *(_WORD *)(a3 + 33) = 260;
      return 1;
    case 39:
      *(_BYTE *)(a3 + 1) = 9;
      *(_BYTE *)(a3 + 5) = 2;
      *(_WORD *)(a3 + 6) = BYTE2(a4) & 0x1F;
      *(_WORD *)(a3 + 33) = 260;
      return 1;
    case 40:
      *(_BYTE *)(a3 + 1) = 9;
      *(_BYTE *)(a3 + 5) = 2;
      *(_WORD *)(a3 + 6) = (a4 >> 21) & 0x1F;
      *(_WORD *)(a3 + 33) = 260;
      return 1;
    case 41:
      *(_BYTE *)(a3 + 1) = 9;
      *(_BYTE *)(a3 + 5) = 2;
      *(_WORD *)(a3 + 6) = BYTE2(a4) & 0x1F;
      *(_WORD *)(a3 + 33) = 259;
      return 1;
    case 42:
      *(_BYTE *)(a3 + 1) = 9;
      *(_BYTE *)(a3 + 5) = 2;
      *(_WORD *)(a3 + 6) = BYTE2(a4) & 0x1F;
      *(_WORD *)(a3 + 33) = 261;
      return 1;
    case 43:
      *(_BYTE *)(a3 + 1) = 9;
      *(_BYTE *)(a3 + 5) = 2;
      *(_WORD *)(a3 + 6) = BYTE2(a4) & 0x1F;
      *(_WORD *)(a3 + 33) = 258;
      return 1;
    case 44:
      *(_BYTE *)(a3 + 1) = 5;
      *(_BYTE *)(a3 + 5) = 1;
      *(_QWORD *)(a3 + 8) = (a4 >> 11) & 0xF;
      return 1;
    case 45:
      *(_BYTE *)(a3 + 1) = 9;
      *(_BYTE *)(a3 + 5) = 2;
      *(_WORD *)(a3 + 6) = BYTE2(a4) & 0x1F;
      *(_WORD *)(a3 + 33) = 271;
      return 1;
    case 46:
      *(_BYTE *)(a3 + 1) = 9;
      *(_BYTE *)(a3 + 5) = 2;
      *(_WORD *)(a3 + 6) = (a4 >> 21) & 0x1F;
      *(_WORD *)(a3 + 33) = 256;
      return 1;
    case 47:
      *(_BYTE *)(a3 + 1) = 9;
      *(_BYTE *)(a3 + 5) = 2;
      *(_WORD *)(a3 + 6) = BYTE2(a4) & 0x1F;
      *(_WORD *)(a3 + 33) = 270;
      return 1;
    case 48:
      *(_BYTE *)(a3 + 1) = 12;
      v47 = 16;
      v48 = 0x80000000;
      do
      {
        while ( v47 > 63 )
          ++v47;
        v49 = 1LL << v47++;
        v48 |= v49;
      }
      while ( v47 != (((unsigned int)v6 >> 4) & 3) + 17 );
      *(_QWORD *)(a3 + 24) = v48;
      return 1;
    case 49:
      *(_BYTE *)(a3 + 1) = 12;
      v44 = 0;
      v45 = ((unsigned int)a4 >> 21) & 0x1F;
      if ( (a4 & 0x2000000) != 0 )
      {
        v45 -= 16;
        v44 = 0x80000000LL;
      }
      if ( v45 == 9 )
      {
        v44 |= 0x40000000uLL;
        v46 = 7;
      }
      else
      {
        v46 = v45 - 1;
        if ( v46 > 7 )
          goto LABEL_162;
      }
      v73 = v46 + 17;
      v74 = 16;
      do
      {
        v75 = 1LL << v74++;
        v44 |= v75;
      }
      while ( v73 != v74 );
LABEL_162:
      *(_QWORD *)(a3 + 24) = v44;
      return 1;
    case 50:
      *(_BYTE *)(a3 + 1) = 4;
      *(_BYTE *)(a3 + 5) = 0;
      goto LABEL_156;
    case 51:
      *(_BYTE *)(a3 + 1) = 4;
      *(_BYTE *)(a3 + 5) = 2;
      goto LABEL_156;
    case 52:
      *(_BYTE *)(a3 + 1) = 4;
      *(_BYTE *)(a3 + 5) = 7;
LABEL_156:
      *(_QWORD *)(a3 + 16) = (__int64)(a4 << 52) >> 52;
      *(_WORD *)(a3 + 6) = BYTE2(a4) & 0x1F;
      sub_41470(a1, a2, *(_WORD *)(a2 + 24), (unsigned __int8 *)a3, 12, 0, -1, -1, -1, -1);
      return 1;
    case 53:
      *(_BYTE *)(a3 + 1) = 4;
      *(_BYTE *)(a3 + 5) = 0;
      *(_QWORD *)(a3 + 16) = (__int16)a4;
      *(_WORD *)(a3 + 6) = BYTE2(a4) & 0x1F;
      sub_41470(a1, a2, *(_WORD *)(a2 + 24), (unsigned __int8 *)a3, 8, 0, -1, -1, -1, -1);
      return 1;
    case 54:
      *(_BYTE *)(a3 + 1) = 4;
      *(_BYTE *)(a3 + 5) = 1;
      goto LABEL_72;
    case 55:
      *(_BYTE *)(a3 + 1) = 4;
      *(_BYTE *)(a3 + 5) = 2;
      goto LABEL_72;
    case 56:
      *(_BYTE *)(a3 + 1) = 4;
      *(_BYTE *)(a3 + 5) = 7;
      goto LABEL_72;
    case 57:
      *(_BYTE *)(a3 + 1) = 4;
      *(_BYTE *)(a3 + 5) = 3;
      goto LABEL_72;
    case 58:
      *(_BYTE *)(a3 + 1) = 4;
      *(_BYTE *)(a3 + 5) = 4;
LABEL_72:
      *(_QWORD *)(a3 + 16) = (__int16)a4;
      *(_WORD *)(a3 + 6) = BYTE2(a4) & 0x1F;
LABEL_73:
      v30 = *(_WORD *)(a2 + 24);
LABEL_74:
      sub_41470(a1, a2, v30, (unsigned __int8 *)a3, 16, 0, -1, -1, -1, -1);
      return 1;
    case 59:
      *(_BYTE *)(a3 + 1) = 4;
      *(_BYTE *)(a3 + 5) = 2;
      *(_WORD *)(a3 + 6) = 29;
      *(_QWORD *)(a3 + 16) = (4 * (_BYTE)a4) & 0x3C;
      return 1;
    case 60:
      v27 = *(_QWORD *)(a2 + 16);
      *(_BYTE *)(a3 + 1) = 3;
      v28 = *(_DWORD *)(a1 + 120);
      v6 = word_5DE50[(v6 >> 4) & 7];
      if ( v28 > 5 )
        goto LABEL_297;
      if ( ((1LL << v28) & 0x16) != 0 )
        goto LABEL_68;
      if ( ((1LL << v28) & 0x29) != 0 )
      {
        if ( v27 == -1 )
          v79 = get_first_seg(-1, a2, a3);
        else
          v79 = getseg(v27);
        if ( !v79 )
          goto LABEL_287;
        if ( *(_BYTE *)(v79 + 43) == 2 || (unsigned int)(*(_DWORD *)(a1 + 184) - 4) <= 1 )
LABEL_68:
          v29 = 7;
        else
          v29 = 2;
        *(_BYTE *)(a3 + 5) = v29;
        *(_BYTE *)(a3 + 32) = 1;
        *(_WORD *)(a3 + 6) = v6;
        return 1;
      }
LABEL_297:
      if ( !under_debugger )
        goto LABEL_34;
      goto LABEL_302;
    case 61:
      *(_BYTE *)(a3 + 1) = 4;
      *(_BYTE *)(a3 + 5) = 0;
      v26 = a4 & 0xF;
      if ( (a4 & 0xF) == 0xF )
        v26 = -1;
      *(_WORD *)(a3 + 6) = word_5DE50[(a4 >> 4) & 7];
      goto LABEL_61;
    case 62:
      *(_BYTE *)(a3 + 1) = 4;
      *(_BYTE *)(a3 + 5) = 1;
      *(_QWORD *)(a3 + 16) = (2 * (_BYTE)a4) & 0x1E;
      *(_WORD *)(a3 + 6) = word_5DE50[(a4 >> 4) & 7];
      goto LABEL_53;
    case 63:
      *(_BYTE *)(a3 + 1) = 4;
      *(_BYTE *)(a3 + 5) = 2;
      *(_WORD *)(a3 + 6) = word_5DE50[(a4 >> 4) & 7];
      v26 = 4 * (a4 & 0xF);
LABEL_61:
      *(_QWORD *)(a3 + 16) = v26;
      goto LABEL_53;
    case 64:
      *(_BYTE *)(a3 + 1) = 4;
      v25 = (4 * (_WORD)a4) & 0x1FC;
      *(_BYTE *)(a3 + 5) = 2;
      BYTE1(v25) ^= 1u;
      *(_WORD *)(a3 + 6) = 28;
      *(_QWORD *)(a3 + 16) = v25 - 256;
LABEL_59:
      sub_41470(a1, a2, *(_WORD *)(a2 + 24), (unsigned __int8 *)a3, 7, 0, -1, -1, -1, -1);
      return 1;
    case 65:
      *(_BYTE *)(a3 + 1) = 4;
      *(_BYTE *)(a3 + 5) = 2;
      *(_WORD *)(a3 + 6) = 29;
      *(_QWORD *)(a3 + 16) = (4 * (_BYTE)a4) & 0x7C;
      return 1;
    case 66:
      *(_BYTE *)(a3 + 1) = 4;
      *(_BYTE *)(a3 + 5) = 0;
      *(_QWORD *)(a3 + 16) = a4 & 0xF;
      *(_WORD *)(a3 + 6) = word_5DE50[(a4 >> 4) & 7];
LABEL_53:
      sub_41470(a1, a2, *(_WORD *)(a2 + 24), (unsigned __int8 *)a3, 4, 0, -1, -1, -1, -1);
      return 1;
    case 67:
      v21 = *(_QWORD *)(a2 + 16);
      *(_BYTE *)(a3 + 1) = 3;
      v22 = *(_DWORD *)(a1 + 120);
      v6 = (int)((32 * ((v6 >> 16) & 0x1F)) | (v6 >> 21) & 0x1F);
      if ( v22 > 5 )
        goto LABEL_299;
      if ( ((1LL << v22) & 0x16) != 0 )
        goto LABEL_50;
      if ( ((1LL << v22) & 0x29) != 0 )
      {
        if ( v21 == -1 )
          v81 = get_first_seg(-1, a2, a3);
        else
          v81 = getseg(v21);
        if ( !v81 )
          goto LABEL_287;
        if ( *(_BYTE *)(v81 + 43) == 2 || (unsigned int)(*(_DWORD *)(a1 + 184) - 4) <= 1 )
LABEL_50:
          v23 = 7;
        else
          v23 = 2;
        *(_BYTE *)(a3 + 5) = v23;
        *(_BYTE *)(a3 + 32) = 0;
        *(_QWORD *)(a3 + 24) = v6;
        return 1;
      }
LABEL_299:
      if ( !under_debugger )
        goto LABEL_34;
      goto LABEL_302;
    case 68:
      *(_BYTE *)(a3 + 1) = 7;
      v24 = (2 * (_WORD)a4) & 0x7FE;
      *(_BYTE *)(a3 + 5) = 9;
      BYTE1(v24) ^= 4u;
      *(_QWORD *)(a3 + 16) = v24 + *(_QWORD *)(a2 + 8) + *(unsigned __int16 *)(a2 + 26) - 1024;
      sub_41590(a1, a2, a3, 10, 0, -1, -1);
      return 1;
    case 69:
      *(_BYTE *)(a3 + 1) = 7;
      *(_BYTE *)(a3 + 5) = 9;
      *(_QWORD *)(a3 + 16) = ((2 * (_DWORD)a4) & 0x1FFFE ^ 0x10000LL)
                           + *(_QWORD *)(a2 + 8)
                           + *(unsigned __int16 *)(a2 + 26)
                           - 0x10000;
      sub_41590(a1, a2, a3, 16, 0, -1, -1);
      return 1;
    case 70:
      *(_BYTE *)(a3 + 1) = 7;
      *(_BYTE *)(a3 + 5) = 9;
      *(_QWORD *)(a3 + 16) = ((unsigned __int8)(2 * a4) ^ 0x80u)
                           + *(_QWORD *)(a2 + 8)
                           + *(unsigned __int16 *)(a2 + 26)
                           - 128LL;
      sub_41590(a1, a2, a3, 7, 0, -1, -1);
      return 1;
    case 71:
      *(_BYTE *)(a3 + 1) = 7;
      *(_BYTE *)(a3 + 5) = 9;
      v19 = (2 * (_DWORD)a4) & 0x7FFFFFE;
      v20 = (*(_QWORD *)(a2 + 8) + *(unsigned __int16 *)(a2 + 26)) & 0xFFFFFFFFF8000000LL;
      goto LABEL_46;
    case 72:
      *(_BYTE *)(a3 + 1) = 7;
      *(_BYTE *)(a3 + 5) = 9;
      v19 = (4 * (_DWORD)a4) & 0xFFFFFFC;
      v20 = (*(_QWORD *)(a2 + 8) + *(unsigned __int16 *)(a2 + 26)) & 0xFFFFFFFFFC000000LL;
LABEL_46:
      *(_QWORD *)(a3 + 16) = v19 | v20;
      sub_41670(a1, a2, 26, 0, -1, -1);
      return 1;
    case 73:
      v9 = *(_QWORD *)(a2 + 16);
      *(_BYTE *)(a3 + 1) = 1;
      v18 = *(_DWORD *)(a1 + 120);
      v6 = word_5DDB0[(v6 >> 7) & 7];
      if ( v18 > 5 )
        goto LABEL_43;
      if ( ((1LL << v18) & 0x16) != 0 )
        goto LABEL_219;
      if ( ((1LL << v18) & 0x29) != 0 )
        goto LABEL_5;
LABEL_43:
      if ( under_debugger )
        goto LABEL_302;
      goto LABEL_34;
    case 74:
      goto LABEL_35;
    case 75:
      v9 = *(_QWORD *)(a2 + 16);
      *(_BYTE *)(a3 + 1) = 1;
      v16 = *(_DWORD *)(a1 + 120);
      v6 = word_5DE40[(v6 >> 4) & 7];
      if ( v16 > 5 )
        goto LABEL_33;
      if ( ((1LL << v16) & 0x16) != 0 )
        goto LABEL_219;
      if ( ((1LL << v16) & 0x29) != 0 )
        goto LABEL_5;
LABEL_33:
      if ( !under_debugger )
        goto LABEL_34;
      goto LABEL_302;
    case 76:
      v9 = *(_QWORD *)(a2 + 16);
      *(_BYTE *)(a3 + 1) = 1;
      v10 = *(_DWORD *)(a1 + 120);
      v6 = *(unsigned __int16 *)((char *)word_5DE40 + (v6 & 0xE));
      if ( v10 > 5 )
        goto LABEL_293;
      if ( ((1LL << v10) & 0x16) != 0 )
        goto LABEL_219;
      if ( ((1LL << v10) & 0x29) != 0 )
        goto LABEL_5;
      goto LABEL_293;
    case 77:
      v15 = 8;
      *(_BYTE *)(a3 + 1) = 5;
      *(_BYTE *)(a3 + 5) = 0;
      if ( ((a4 >> 1) & 7) != 0 )
        v15 = (a4 >> 1) & 7;
      *(_BYTE *)(a3 + 4) |= 0x10u;
      *(_QWORD *)(a3 + 8) = v15;
      return 1;
    case 78:
      *(_BYTE *)(a2 + 32) = byte_5DE3C[(a4 >> 8) & 3];
      return 1;
    case 79:
      *(_BYTE *)(a2 + 32) = byte_5DE3C[(a4 >> 9) & 3];
      return 1;
    case 80:
      *(_BYTE *)(a2 + 32) = byte_5DE3C[(a4 >> 10) & 3];
      return 1;
    case 81:
      *(_BYTE *)(a2 + 32) = byte_5DE3C[(a4 >> 13) & 3];
      return 1;
    case 82:
      *(_BYTE *)(a2 + 32) = byte_5DE38[(a4 >> 8) & 3];
      return 1;
    case 83:
      v14 = a4 & 0x4000;
      goto LABEL_20;
    case 84:
      v14 = (unsigned __int16)a4 & 0x8000;
LABEL_20:
      *(_BYTE *)(a2 + 32) = v14 == 0 ? 115 : 100;
      return 1;
    case 85:
      *(_BYTE *)(a2 + 32) = byte_5DE34[(a4 >> 13) & 3];
      return 1;
    case 86:
      *(_BYTE *)(a2 + 32) = byte_5DE30[(a4 >> 13) & 3];
      return 1;
    case 87:
      *(_BYTE *)(a2 + 32) = 0;
      return 1;
    case 88:
      *(_BYTE *)(a3 + 1) = 11;
      *(_WORD *)(a3 + 6) = (unsigned __int16)a4 >> 13;
      return 1;
    case 89:
      *(_BYTE *)(a3 + 1) = 11;
      *(_WORD *)(a3 + 6) = BYTE2(a4) & 7;
      return 1;
    case 90:
      v68 = *(_QWORD *)(a2 + 16);
      *(_BYTE *)(a3 + 1) = 1;
      v69 = *(_DWORD *)(a1 + 120);
      if ( v69 > 5 )
        goto LABEL_293;
      if ( ((1LL << v69) & 0x16) != 0 )
        goto LABEL_208;
      if ( ((1LL << v69) & 0x29) != 0 )
      {
        if ( v68 == -1 )
          v78 = get_first_seg(-1, a2, a3);
        else
          v78 = getseg(v68);
        if ( !v78 )
          goto LABEL_287;
        if ( *(_BYTE *)(v78 + 43) == 2 || (unsigned int)(*(_DWORD *)(a1 + 184) - 4) <= 1 )
LABEL_208:
          v70 = 7;
        else
          v70 = 2;
        *(_BYTE *)(a3 + 4) &= ~8u;
        *(_BYTE *)(a3 + 5) = v70;
        *(_WORD *)(a3 + 6) = 31;
        return 1;
      }
LABEL_293:
      if ( !under_debugger )
        goto LABEL_34;
      goto LABEL_302;
    default:
      sub_1B460((__int64)"mips: interr (code=%llx)", a4);
  }
}

