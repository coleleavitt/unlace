__int64 __fastcall sub_1BA30(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int16 a6)
{
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  char v13; // dl
  __int16 v14; // si
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // r12
  __int64 v21; // rdi
  unsigned int v22; // ecx
  char v23; // al
  __int64 first_seg; // rax

  switch ( a6 )
  {
    case 0:
      return 1;
    case 1:
      *(_BYTE *)(a3 + 1) = 7;
      *(_BYTE *)(a3 + 5) = 9;
      *(_QWORD *)(a3 + 16) = ((4 * (_DWORD)a4) & 0x3FFFC ^ 0x20000LL)
                           + *(_QWORD *)(a2 + 8)
                           + *(unsigned __int16 *)(a2 + 26)
                           - 0x20000;
      sub_1B910(a1, a2, a3, 16, 0, -1, -1);
      return 1;
    case 2:
      v20 = (a4 >> 6) & 0x1F;
      goto LABEL_35;
    case 3:
      LOWORD(v20) = (unsigned __int16)a4 >> 11;
LABEL_35:
      v21 = *(_QWORD *)(a2 + 16);
      *(_BYTE *)(a3 + 1) = 1;
      v22 = *(_DWORD *)(a1 + 120);
      if ( v22 > 5 )
        goto LABEL_52;
      if ( ((1LL << v22) & 0x16) != 0 )
        goto LABEL_37;
      if ( ((1LL << v22) & 0x29) == 0 )
        goto LABEL_52;
      if ( v21 == -1 )
        first_seg = get_first_seg();
      else
        first_seg = getseg(v21);
      if ( !first_seg )
      {
        if ( !under_debugger )
        {
          interr(10206);
LABEL_52:
          if ( !under_debugger )
            interr(10339);
        }
        BUG();
      }
      if ( *(_BYTE *)(first_seg + 43) == 2 || (unsigned int)(*(_DWORD *)(a1 + 184) - 4) <= 1 )
LABEL_37:
        v23 = 7;
      else
        v23 = 2;
      *(_BYTE *)(a3 + 5) = v23;
      *(_WORD *)(a3 + 6) = v20;
      return 1;
    case 4:
      *(_BYTE *)(a3 + 1) = 9;
      v19 = a4 >> 6;
      goto LABEL_32;
    case 5:
      *(_BYTE *)(a3 + 1) = 9;
      v19 = a4 >> 11;
LABEL_32:
      *(_BYTE *)(a3 + 5) = 2;
      *(_WORD *)(a3 + 33) = 275;
      *(_WORD *)(a3 + 6) = v19 & 0x1F;
      return 1;
    case 6:
      v13 = 0;
      v14 = (unsigned __int16)a4 >> 11;
      v16 = (__int64)(a4 << 38) >> 54;
      goto LABEL_27;
    case 7:
      v13 = 1;
      v14 = (unsigned __int16)a4 >> 11;
      v18 = (a4 >> 15) & 0x7FE;
      BYTE1(v18) ^= 4u;
      v16 = v18 - 1024;
      goto LABEL_27;
    case 8:
      v13 = 2;
      v14 = (unsigned __int16)a4 >> 11;
      v17 = (a4 >> 14) & 0xFFC;
      BYTE1(v17) ^= 8u;
      v16 = v17 - 2048;
      goto LABEL_27;
    case 9:
      v13 = 7;
      v14 = (unsigned __int16)a4 >> 11;
      v15 = (a4 >> 13) & 0x1FF8;
      BYTE1(v15) ^= 0x10u;
      v16 = v15 - 4096;
LABEL_27:
      *(_WORD *)(a3 + 6) = v14;
      *(_QWORD *)(a3 + 16) = v16;
      *(_BYTE *)(a3 + 1) = 4;
      *(_BYTE *)(a3 + 5) = v13;
      sub_1B6E0(a1, a2, *(_WORD *)(a2 + 24), (unsigned __int8 *)a3, 26, 16, -1, -1, -1, -1);
      return 1;
    case 10:
      *(_BYTE *)(a3 + 1) = 9;
      v12 = a4 >> 6;
      goto LABEL_23;
    case 11:
      *(_BYTE *)(a3 + 1) = 9;
      v12 = a4 >> 11;
      goto LABEL_23;
    case 12:
      *(_BYTE *)(a3 + 1) = 9;
      v12 = a4 >> 16;
LABEL_23:
      *(_BYTE *)(a3 + 5) = 2;
      *(_WORD *)(a3 + 33) = 274;
      *(_WORD *)(a3 + 6) = v12 & 0x1F;
      return 1;
    case 13:
      *(_BYTE *)(a3 + 1) = 13;
      v11 = (a4 >> 16) & 0xF;
      goto LABEL_19;
    case 14:
      *(_BYTE *)(a3 + 1) = 13;
      v11 = (a4 >> 16) & 7;
      goto LABEL_19;
    case 15:
      *(_BYTE *)(a3 + 1) = 13;
      v11 = (a4 >> 16) & 3;
LABEL_19:
      *(_QWORD *)(a3 + 8) = v11;
      *(_BYTE *)(a3 + 5) = 2;
      *(_BYTE *)(a3 + 33) = 20;
      *(_WORD *)(a3 + 6) = (a4 >> 6) & 0x1F;
      return 1;
    case 16:
      *(_BYTE *)(a3 + 1) = 13;
      *(_BYTE *)(a3 + 5) = 2;
      *(_BYTE *)(a3 + 33) = 20;
      *(_QWORD *)(a3 + 8) = (a4 >> 16) & 1;
      *(_WORD *)(a3 + 6) = (a4 >> 6) & 0x1F;
      return 1;
    case 17:
      *(_BYTE *)(a3 + 1) = 13;
      v10 = (a4 >> 16) & 0xF;
      goto LABEL_13;
    case 18:
      *(_BYTE *)(a3 + 1) = 13;
      v10 = (a4 >> 16) & 7;
      goto LABEL_13;
    case 19:
      *(_BYTE *)(a3 + 1) = 13;
      v10 = (a4 >> 16) & 3;
      goto LABEL_13;
    case 20:
      *(_BYTE *)(a3 + 1) = 13;
      v10 = (a4 >> 16) & 1;
LABEL_13:
      *(_QWORD *)(a3 + 8) = v10;
      goto LABEL_3;
    case 21:
      *(_BYTE *)(a3 + 1) = 13;
      *(_QWORD *)(a3 + 8) = 0;
LABEL_3:
      *(_BYTE *)(a3 + 5) = 2;
      *(_BYTE *)(a3 + 33) = 20;
      *(_WORD *)(a3 + 6) = (unsigned __int16)a4 >> 11;
      break;
    case 22:
      *(_BYTE *)(a3 + 1) = 13;
      *(_BYTE *)(a3 + 5) = 2;
      *(_BYTE *)(a3 + 33) = 21;
      *(_QWORD *)(a3 + 8) = (a4 >> 16) & 0x1F;
      *(_WORD *)(a3 + 6) = (unsigned __int16)a4 >> 11;
      break;
    case 23:
      *(_BYTE *)(a3 + 1) = 5;
      *(_BYTE *)(a3 + 5) = 1;
      *(_QWORD *)(a3 + 8) = (__int64)(a4 << 43) >> 54;
      break;
    case 24:
      *(_BYTE *)(a3 + 1) = 5;
      *(_BYTE *)(a3 + 5) = 0;
      *(_QWORD *)(a3 + 8) = (__int64)(a4 << 43) >> 59;
      break;
    case 25:
      *(_BYTE *)(a3 + 1) = 5;
      *(_BYTE *)(a3 + 5) = 0;
      *(_QWORD *)(a3 + 8) = BYTE2(a4) & 7;
      break;
    case 26:
      *(_BYTE *)(a3 + 1) = 5;
      *(_BYTE *)(a3 + 5) = 0;
      *(_QWORD *)(a3 + 8) = BYTE2(a4) & 0xF;
      break;
    case 27:
      *(_BYTE *)(a3 + 1) = 5;
      *(_BYTE *)(a3 + 5) = 0;
      *(_QWORD *)(a3 + 8) = BYTE2(a4) & 0x1F;
      break;
    case 28:
      *(_BYTE *)(a3 + 1) = 5;
      *(_BYTE *)(a3 + 5) = 0;
      *(_QWORD *)(a3 + 8) = BYTE2(a4) & 0x3F;
      break;
    case 29:
      *(_BYTE *)(a3 + 1) = 5;
      *(_BYTE *)(a3 + 5) = 0;
      *(_QWORD *)(a3 + 8) = BYTE2(a4);
      break;
    default:
      sub_1B460((__int64)"mips: msa interr (code=%llx)", a4);
  }
  return 1;
}

