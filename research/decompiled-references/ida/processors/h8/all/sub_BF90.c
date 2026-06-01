char __fastcall sub_BF90(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  char next_byte; // r13
  char v6; // al
  char v7; // bp
  char v8; // r15
  signed __int8 v10; // al
  signed __int8 v11; // r11
  char v12; // al
  __int16 v13; // ax
  int v14; // eax
  bool v15; // cf
  bool v16; // zf
  char v17; // dl
  signed __int8 v18; // cl
  __int64 v19; // rsi
  char v20; // r8
  char v21; // al
  unsigned __int8 v22; // r12
  char v23; // cl
  char v24; // al
  int v25; // eax
  char v26; // r13
  __m128i v27; // xmm0
  __m128i v28; // xmm0
  char v29; // al
  __m128i v30; // xmm0
  __int16 v31; // ax
  int v32; // eax
  __int64 v33; // r11
  __int16 v34; // ax
  _DWORD *v35; // rdi
  _DWORD *v36; // rsi
  __int64 i; // rcx
  unsigned __int8 v38; // [rsp+Eh] [rbp-6Ah]
  unsigned __int8 v39; // [rsp+Fh] [rbp-69h]
  _OWORD v40[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v41; // [rsp+30h] [rbp-48h]
  unsigned __int64 v42; // [rsp+38h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  next_byte = insn_get_next_byte();
  v6 = insn_get_next_byte();
  if ( v6 >= 0 )
  {
    v7 = v6;
    *(_DWORD *)(a2 + 28) = a3;
    v8 = sub_BC70(a1, a2, next_byte, (unsigned __int8)v6 >> 4);
    if ( v8 )
    {
      v38 = insn_get_next_byte();
      v10 = insn_get_next_byte();
      v11 = v10;
      switch ( v7 & 0xF )
      {
        case 0:
          if ( *(_BYTE *)(a1 + 227) != 118 || next_byte != 108 )
            return 0;
          v17 = v38;
          v18 = v10;
          v19 = a2 + 80;
          v20 = 1;
          return sub_8180(a2, v19, v17, v18, v20, 0x2025u);
        case 1:
          v21 = *(_BYTE *)(a1 + 227);
          switch ( v21 )
          {
            case 4:
              goto LABEL_50;
            case 6:
              if ( next_byte != 109 )
                return 0;
              break;
            case 84:
LABEL_50:
              if ( next_byte != 105 )
                return 0;
              break;
            default:
              if ( next_byte != 109 || v21 != 86 )
                return 0;
              break;
          }
          v17 = v38;
          v18 = v11;
          v19 = a2 + 80;
          v20 = 6;
          return sub_8180(a2, v19, v17, v18, v20, 0x2025u);
        case 8:
          v22 = v10;
          if ( a3 != 1 )
          {
            v23 = 2 * (a3 != 2) + 2;
            return sub_6AB0(a2, v38, v22, v23);
          }
          v41 = 0;
          memset(v40, 0, sizeof(v40));
          if ( sub_8180(a2, (__int64)v40, v38, v10, 1, 0x1026u) )
          {
            v28 = _mm_loadu_si128((const __m128i *)(a2 + 40));
            *(_DWORD *)(a2 + 112) = *(_DWORD *)(a2 + 72);
            v29 = BYTE1(v40[0]);
            *(__m128i *)(a2 + 80) = v28;
            v30 = _mm_loadu_si128((const __m128i *)(a2 + 56));
            *(_BYTE *)(a2 + 41) = v29;
            v31 = WORD3(v40[0]);
            *(_BYTE *)(a2 + 80) = 1;
            *(_WORD *)(a2 + 46) = v31;
            LOBYTE(v31) = BYTE5(v40[0]);
            *(__m128i *)(a2 + 96) = v30;
            *(_BYTE *)(a2 + 45) = v31;
            return v8;
          }
          if ( (unsigned __int8)sub_79B0(a2, v38, v22) )
            return v8;
          if ( v38 == 0x90 )
          {
            v34 = 3;
          }
          else
          {
            if ( v38 != 0xB0 )
            {
              v23 = 1;
              return sub_6AB0(a2, v38, v22, v23);
            }
            v34 = 82;
          }
          *(_WORD *)(a2 + 24) = v34;
          v35 = (_DWORD *)(a2 + 80);
          v36 = (_DWORD *)(a2 + 40);
          for ( i = 9; i; --i )
            *v35++ = *v36++;
          *(_BYTE *)(a2 + 80) = 1;
          *(_DWORD *)(a2 + 28) = 1;
          *(_BYTE *)(a2 + 41) = 5;
          *(_BYTE *)(a2 + 45) = 0;
          *(_QWORD *)(a2 + 48) = v33;
          return v8;
        case 9:
          v24 = *(_BYTE *)(a1 + 227);
          switch ( v24 )
          {
            case 4:
              goto LABEL_52;
            case 6:
              goto LABEL_37;
            case 84:
LABEL_52:
              if ( next_byte != 105 )
                return 0;
              break;
            case 86:
LABEL_37:
              if ( next_byte != 109 )
                return 0;
              break;
            default:
              return 0;
          }
          v25 = *(_DWORD *)(a2 + 72);
          v26 = v11;
          *(__m128i *)(a2 + 80) = _mm_loadu_si128((const __m128i *)(a2 + 40));
          v27 = _mm_loadu_si128((const __m128i *)(a2 + 56));
          *(_DWORD *)(a2 + 112) = v25;
          *(_BYTE *)(a2 + 80) = 1;
          *(__m128i *)(a2 + 96) = v27;
          if ( !sub_8180(a2, a2 + 40, v38, v11, 7, 0x1026u) )
            return sub_A200(a1, a2, a2 + 40, v38, v26, 6, 1);
          return v8;
        case 0xC:
          v39 = v10;
          if ( (v10 & 0xF) != 0 || !(unsigned __int8)sub_AAD0(a1, a2, a2 + 80, v38) || v39 > 0x6Fu )
            return 0;
          switch ( v39 >> 4 )
          {
            case 0:
              return 0;
            case 1:
              *(_WORD *)(a2 + 24) = 1;
              break;
            case 2:
              *(_WORD *)(a2 + 24) = 38;
              break;
            case 3:
              *(_WORD *)(a2 + 24) = 80;
              break;
            case 4:
              *(_WORD *)(a2 + 24) = 62;
              break;
            case 5:
              *(_WORD *)(a2 + 24) = 85;
              break;
            case 6:
              *(_WORD *)(a2 + 24) = 4;
              break;
          }
          return v8;
        case 0xD:
          v12 = *(_BYTE *)(a1 + 227);
          switch ( v12 )
          {
            case 4:
              goto LABEL_54;
            case 6:
              goto LABEL_56;
            case 84:
LABEL_54:
              if ( next_byte != 105 )
                return 0;
              break;
            case 86:
LABEL_56:
              if ( next_byte != 109 )
                return 0;
              break;
            case 116:
              if ( next_byte != 104 )
                return 0;
              break;
            default:
              if ( v12 != 118 || next_byte != 108 )
                return 0;
              break;
          }
          if ( v11 == 16 )
          {
            v13 = 3;
          }
          else
          {
            v13 = 82;
            if ( v11 != 48 )
              return 0;
          }
          *(_WORD *)(a2 + 24) = v13;
          if ( v38 <= 7u )
          {
            v32 = *(_DWORD *)(a2 + 28);
            *(_BYTE *)(a2 + 81) = 3;
            if ( v32 )
              *(_BYTE *)(a2 + 85) = v32 - 1;
            else
              *(_BYTE *)(a2 + 85) = 0;
            v15 = *(_WORD *)(a1 + 224) < 0xFFFu;
            v16 = *(_WORD *)(a1 + 224) == 4095;
            *(_BYTE *)(a2 + 112) = 0;
            *(_WORD *)(a2 + 86) = v38 + 32 * (!v15 && !v16);
          }
          else
          {
            if ( (v38 & 0xF0) != 0xA0 )
              return 0;
            v14 = *(_DWORD *)(a2 + 28);
            *(_BYTE *)(a2 + 81) = 3;
            if ( v14 )
              *(_BYTE *)(a2 + 85) = v14 - 1;
            else
              *(_BYTE *)(a2 + 85) = 0;
            v15 = *(_WORD *)(a1 + 224) < 0xFFFu;
            v16 = *(_WORD *)(a1 + 224) == 4095;
            *(_BYTE *)(a2 + 112) = 18;
            *(_WORD *)(a2 + 86) = (v38 & 7) + 32 * (!v15 && !v16);
          }
          return *(_WORD *)(a2 + 26) != 0;
        default:
          return 0;
      }
    }
  }
  return 0;
}

