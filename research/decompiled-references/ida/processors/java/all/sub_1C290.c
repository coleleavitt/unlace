unsigned __int64 __fastcall sub_1C290(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r9
  __int16 *v5; // rbp
  unsigned int v6; // r10d
  __int16 v8; // r11
  __int64 (__fastcall *v9)(_QWORD *, unsigned __int16, char); // r15
  bool *v10; // r14
  __int64 v11; // r13
  __int64 v12; // rbx
  char v13; // al
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  __int64 v17; // rsi
  __int64 v18; // rdi
  int v19; // ebp
  __int16 v20; // dx
  char v21; // al
  __int16 *v23; // rdx
  __int16 v24; // si
  char v25; // al
  int v26; // r10d
  unsigned __int16 v27; // r11
  unsigned __int8 v28; // cl
  __int16 v29; // cx
  __int16 *v30; // rsi
  __int64 v31; // rdi
  char v32; // ah
  __int64 v33; // rdi
  __int16 v34; // cx
  __int64 v35; // rax
  int v36; // edx
  char v37; // [rsp+8h] [rbp-70h]
  __int64 v38; // [rsp+8h] [rbp-70h]
  __int64 v39; // [rsp+8h] [rbp-70h]
  int v40; // [rsp+10h] [rbp-68h]
  unsigned __int8 v41; // [rsp+10h] [rbp-68h]
  __int64 v42; // [rsp+10h] [rbp-68h]
  unsigned int v43; // [rsp+18h] [rbp-60h]
  int v44; // [rsp+18h] [rbp-60h]
  int v45; // [rsp+1Ch] [rbp-5Ch]
  int v46; // [rsp+1Ch] [rbp-5Ch]
  char v47; // [rsp+2Bh] [rbp-4Dh] BYREF
  int v48; // [rsp+2Ch] [rbp-4Ch] BYREF
  __int64 v49; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v50; // [rsp+38h] [rbp-40h]

  v3 = a1;
  v5 = *(__int16 **)(a1 + 33352);
  v6 = *(unsigned __int16 *)(a3 + 8);
  v50 = __readfsqword(0x28u);
  v48 = 0;
  v8 = *v5;
  v47 = 0;
  if ( v8 == 60 )
  {
    v23 = v5 + 1;
    LODWORD(v12) = 0;
    do
    {
      LODWORD(v12) = v12 + 1;
      if ( (unsigned int)v12 >= v6 )
        goto LABEL_27;
      v24 = *v23;
      v5 = v23++;
    }
    while ( ((unsigned __int8)(1 << (v24 & 7))
           & byte_25DC0[byte_25E40[32 * byte_26380[HIBYTE(v24)] + ((unsigned __int8)v24 >> 3)] & 0x7F]) != 0 );
    if ( (_DWORD)v12 != 1 )
    {
      LODWORD(v11) = v6 - v12 - 1;
      if ( v24 == 58 )
      {
        if ( (unsigned int)v11 > 6 )
        {
          v43 = v6 - v12 - 1;
          v14 = 100664704;
          LODWORD(v11) = 0;
          LODWORD(v12) = 0;
          v48 = 100664704;
          v37 = 1;
          goto LABEL_33;
        }
      }
      else if ( v24 == 62 && v6 - (_DWORD)v12 == 1 )
      {
        v48 = 1025;
        LOWORD(v16) = 1025;
        goto LABEL_9;
      }
    }
LABEL_27:
    LOWORD(v16) = 1409;
    v15 = 1409;
    LODWORD(v11) = 0;
    goto LABEL_8;
  }
  if ( v8 == 40 )
  {
    if ( --v6 > 1 )
    {
      v9 = sub_10000;
      LODWORD(v11) = 0;
      LODWORD(v12) = 0;
      goto LABEL_18;
    }
    LOWORD(v16) = 1409;
    v15 = 1409;
    LODWORD(v11) = 0;
    LODWORD(v12) = 0;
    goto LABEL_8;
  }
  v37 = 0;
  LODWORD(v9) = 0;
  v10 = (bool *)&v47;
  LODWORD(v11) = 0;
  LODWORD(v12) = 0;
  while ( 2 )
  {
    while ( 1 )
    {
      v43 = v6 - 1;
      if ( (unsigned __int16)v8 <= 0x7Eu )
        break;
      v40 = a2;
      v13 = sub_1C200(v8, v10);
      a2 = v40;
      if ( !v13 )
        goto LABEL_6;
      v28 = 0;
LABEL_39:
      if ( v10 && !v47 )
      {
        LODWORD(v9) = (unsigned int)v9 | 0x1000;
        v48 = (int)v9;
      }
      if ( ((unsigned int)v9 & 0x8400001) == 0 )
      {
        if ( ((unsigned int)v9 & 0x700000) == 0 )
        {
          if ( v37 )
          {
            if ( !v43 )
              goto LABEL_6;
            ++v5;
            goto LABEL_70;
          }
          if ( ((unsigned int)v9 & 0x20000) != 0 )
          {
            v12 = ((__int64)v5 - *(_QWORD *)(v3 + 33352)) >> 1;
            v48 = (unsigned int)v9 & 0xFFF1FFFF | 0x40000;
            LODWORD(v9) = v48;
            if ( v28 == 86 )
            {
LABEL_127:
              if ( !v43 )
                goto LABEL_109;
              if ( v43 <= 3 )
                goto LABEL_6;
              v14 = (int)v9;
              if ( v5[1] != 94 )
                goto LABEL_7;
              --v43;
              v14 = (unsigned int)v9 | 0x580;
              if ( (unsigned int)v11 <= 0xFFFF )
                LODWORD(v11) = ((unsigned int)(((__int64)v5 - *(_QWORD *)(v3 + 33352) + 2) >> 1) << 16) | v11;
              v29 = v5[2];
              v37 = 0;
              ++v5;
              goto LABEL_35;
            }
          }
          else if ( ((unsigned int)v9 & 0x90000) == 0x80000 )
          {
            goto LABEL_51;
          }
          if ( v28 == 91 )
          {
LABEL_104:
            v48 = (unsigned int)v9 | 0x1800000;
            if ( !v43 )
            {
              v15 = (unsigned int)v9 | 0x1800581;
              LOWORD(v16) = (unsigned __int16)v9 | 0x581;
              goto LABEL_8;
            }
            v37 = 0;
            ++v5;
            LODWORD(v9) = (unsigned int)v9 | 0x1800000;
            goto LABEL_70;
          }
          v48 = (unsigned int)v9 & 0xFF77FFFF | 0x80000;
          if ( v28 == 76 )
          {
            ++v5;
            v16 = (unsigned int)v9 & 0xFF67FFFF | 0x180000;
            v48 = v16;
            if ( !v43 )
            {
              if ( ((unsigned int)v9 & 0x30000) != 0 )
              {
                v15 = (unsigned int)v9 & 0xFF67FA7E | 0x180581;
                LOWORD(v16) = (unsigned __int16)v9 & 0xFA7E | 0x581;
                goto LABEL_8;
              }
              goto LABEL_55;
            }
LABEL_120:
            LODWORD(v9) = v16;
            goto LABEL_70;
          }
          if ( v28 == 84 )
          {
            ++v5;
            v16 = (unsigned int)v9 & 0xFF57FFFF | 0x280000;
            v48 = v16;
            if ( !v43 )
            {
              if ( ((unsigned int)v9 & 0x30000) != 0 )
              {
                v15 = (unsigned int)v9 & 0xFF57FA7E | 0x280581;
                LOWORD(v16) = (unsigned __int16)v9 & 0xFA7E | 0x581;
                goto LABEL_8;
              }
LABEL_55:
              LODWORD(v9) = v16;
              goto LABEL_56;
            }
            goto LABEL_120;
          }
          LODWORD(v9) = (unsigned int)v9 & 0xFF77FFFF | 0x80000;
          if ( !v28 || (v46 = a2, v42 = v3, v35 = sub_1F6F0(v28, 0), LODWORD(v9) = v48, v3 = v42, a2 = v46, !v35) )
          {
LABEL_51:
            if ( ((unsigned int)v9 & 0x40080) != 0 )
              goto LABEL_6;
            ++v5;
            v16 = (unsigned int)v9 | 0x401;
            v48 = (unsigned int)v9 | 0x401;
            if ( !v43 )
            {
              if ( ((unsigned int)v9 & 0x830000) == 0 )
              {
                if ( ((unsigned int)v9 & 0x300000) != 0 )
                  goto LABEL_55;
                if ( ((unsigned __int16)v9 & 0xBBBE) == 0 )
                {
LABEL_57:
                  v44 = a2;
                  v39 = v3;
                  sub_1DFC0(v3, &v48, v5);
                  v20 = v48;
                  a2 = v44;
                  v3 = v39;
                  LOWORD(v16) = v48;
                  goto LABEL_58;
                }
                goto LABEL_9;
              }
LABEL_6:
              v14 = (int)v9;
LABEL_7:
              v15 = v14 | 0x581;
              LOWORD(v16) = v15;
LABEL_8:
              v48 = v15;
              goto LABEL_9;
            }
            goto LABEL_120;
          }
          if ( (v48 & 0x40000) == 0 )
          {
            ++v5;
            if ( !v43 )
            {
LABEL_109:
              if ( ((unsigned int)v9 & 0x830000) != 0 )
                goto LABEL_6;
LABEL_75:
              if ( ((unsigned int)v9 & 0x300000) == 0 )
                goto LABEL_76;
LABEL_56:
              LOWORD(v16) = (unsigned __int16)v9 | 0x401;
              v48 = (unsigned int)v9 | 0x401;
              if ( ((unsigned __int16)v9 & 0xBBBE) == 0 )
                goto LABEL_57;
              goto LABEL_9;
            }
            goto LABEL_70;
          }
          goto LABEL_127;
        }
        LODWORD(v9) = (unsigned int)v9 | 0x400000;
        v48 = (int)v9;
      }
LABEL_72:
      ++v5;
      if ( !v43 )
      {
        if ( ((unsigned int)v9 & 0x830000) != 0 || v37 )
          goto LABEL_6;
        goto LABEL_75;
      }
LABEL_70:
      v8 = *v5;
      v6 = v43;
      v10 = nullptr;
    }
    v45 = a2;
    v41 = v8;
    v25 = sub_1C200(v8, v10);
    v28 = v41;
    a2 = v45;
    if ( v25 )
      goto LABEL_39;
    if ( v27 <= 0x20u )
      goto LABEL_6;
    if ( ((unsigned int)v9 & 0x8000000) != 0 )
    {
      v14 = (int)v9;
      if ( (_BYTE)v27 != 58 )
        goto LABEL_7;
      v14 = (unsigned int)v9 & 0xF7FFFFFF;
      v48 = (unsigned int)v9 & 0xF7FFFFFF;
      if ( v43 <= 6 )
        goto LABEL_7;
LABEL_33:
      v29 = v5[1];
      if ( v29 == 58 )
      {
        --v43;
        v29 = v5[2];
        ++v5;
      }
      goto LABEL_35;
    }
    switch ( v41 )
    {
      case ')':
        v14 = (int)v9;
        if ( v37 )
          goto LABEL_7;
        if ( ((unsigned int)v9 & 0xF10000) != (_DWORD)sub_10000 )
          goto LABEL_6;
        LODWORD(v9) = (unsigned int)v9 ^ 0x30000;
        ++v5;
        v48 = (int)v9;
        if ( !v43 )
          goto LABEL_109;
        goto LABEL_70;
      case '.':
      case '/':
        LOBYTE(v9) = (unsigned __int8)v9 | 0x80;
        v48 = (int)v9;
        goto LABEL_72;
      case ';':
        goto LABEL_87;
      case '<':
        v14 = (int)v9;
        if ( v43 <= 2 )
          goto LABEL_7;
        if ( ((unsigned int)v9 & 0x400001) != 0x400000 )
          goto LABEL_6;
        if ( (unsigned __int8)++v37 > 0x1Du )
          goto LABEL_6;
        v30 = v5 + 1;
        v43 = v26 - 2;
        v14 = (unsigned int)v9 & 0xFF8FFA7F | 0x580;
        v48 = v14;
        v29 = v5[1];
        if ( ((v29 - 43) & 0xFFFD) == 0 )
        {
          v29 = v5[2];
          ++v5;
LABEL_35:
          v30 = v5 + 1;
          v6 = v43 - 1;
          goto LABEL_36;
        }
        if ( v29 != 42 )
        {
          v6 = v26 - 2;
LABEL_36:
          if ( ((v29 - 76) & 0xFFF7) != 0 )
            goto LABEL_7;
          v5 = v30 + 1;
          v10 = nullptr;
          v48 = v14 | 0x200000;
          LODWORD(v9) = v14 | 0x200000;
          v8 = v30[1];
          continue;
        }
        if ( v5[2] != 62 )
        {
          v15 = (unsigned int)v9 & 0xFF8FFA7E | 0x581;
          LOWORD(v16) = (unsigned __int16)v9 | 0x581;
          goto LABEL_8;
        }
        v5 += 2;
        LODWORD(v9) = (unsigned int)v9 & 0xFF8FFA7F | 0x580;
        v43 = v26 - 3;
LABEL_83:
        if ( !--v37 && ((unsigned int)v9 & 0x4000000) != 0 || v5[1] != 59 )
          goto LABEL_6;
        --v43;
        ++v5;
        LODWORD(v9) = (unsigned int)v9 | 0x400000;
LABEL_87:
        if ( ((unsigned int)v9 & 0xC20000) != 0x400000 )
          goto LABEL_6;
        if ( v43 )
        {
          v14 = (unsigned int)v9 & 0xFF8FFFFF;
          v48 = (unsigned int)v9 & 0xFF8FFFFF;
          if ( v37 != 1 )
            goto LABEL_91;
          if ( ((unsigned int)v9 & 0x4000000) == 0 )
            goto LABEL_140;
          if ( v43 <= 3 )
            goto LABEL_7;
          v34 = v5[1];
          if ( v34 == 58 )
            goto LABEL_7;
          if ( v34 != 62 )
          {
            ++v5;
            v48 = (unsigned int)v9 & 0xF78FFFFF | 0x8000000;
            LODWORD(v9) = v48;
            goto LABEL_70;
          }
          v29 = v5[2];
          v14 = (unsigned int)v9 & 0xFB8FFFFF;
          v48 = (unsigned int)v9 & 0xFB8FFFFF;
          if ( v29 != 40 )
          {
            --v43;
            ++v5;
            v37 = 0;
            goto LABEL_35;
          }
          v5 += 2;
          LODWORD(v9) = (unsigned int)v9 & 0xFB8EFFFF | 0x10000;
          v11 = ((__int64)v5 - *(_QWORD *)(v3 + 33352)) >> 1;
          v6 = v43 - 2;
LABEL_18:
          v48 = (int)v9;
          v8 = *++v5;
          v10 = nullptr;
          v37 = 0;
          continue;
        }
        if ( ((unsigned int)v9 & 0x100001) != 0x100000 )
        {
          v14 = (unsigned int)v9 & 0xFF8FFFFF;
          v48 = (unsigned int)v9 & 0xFF8FFFFF;
          if ( v37 != 1 )
            goto LABEL_91;
LABEL_139:
          if ( ((unsigned int)v9 & 0x4000000) != 0 )
            goto LABEL_7;
          goto LABEL_140;
        }
        v14 = (unsigned int)v9 & 0xFF8FFFBF | 0x40;
        v48 = v14;
        if ( v37 == 1 )
          goto LABEL_139;
        LODWORD(v9) = (unsigned int)v9 | 0x40;
LABEL_91:
        if ( v37 )
        {
LABEL_140:
          v29 = v5[1];
          if ( v29 == 62 )
          {
            ++v5;
            if ( !v43 )
              goto LABEL_7;
            LODWORD(v9) = v14;
            goto LABEL_70;
          }
          if ( v43 <= 2 )
            goto LABEL_7;
          goto LABEL_35;
        }
        v16 = v14;
        LOBYTE(v16) = v14 | 0x80;
        v48 = v16;
        if ( ((unsigned int)v9 & 0x1050000) != 0x1000000 )
        {
          if ( ((unsigned __int8)v9 & 1) != 0 )
            goto LABEL_7;
          v48 = v14 | 0x180;
          v16 = v14 | 0x180;
        }
        if ( (v16 & 0x2040000) != 0 )
        {
          LODWORD(v9) = v16 & 0xFFF7FFFF;
          v48 = v16 & 0xFFF7FFFF;
          if ( (v16 & 0x40000) == 0 )
          {
            ++v5;
            if ( !v43 )
            {
              if ( (v16 & 0x830000) != 0 )
                goto LABEL_6;
              goto LABEL_76;
            }
            goto LABEL_70;
          }
          goto LABEL_127;
        }
        ++v5;
        if ( v43 )
          goto LABEL_120;
        if ( (v16 & 0x830000) != 0 )
        {
          v15 = v16 | 0x581;
          LOWORD(v16) = v16 | 0x581;
          goto LABEL_8;
        }
        LODWORD(v9) = v16;
LABEL_76:
        if ( ((unsigned __int8)v9 & 1) == 0 )
        {
          if ( (_DWORD)v12 )
          {
            v16 = (int)v9;
            if ( (_DWORD)v11 )
              v16 = (unsigned int)v9 | 0x202;
            else
              BYTE1(v16) = BYTE1(v9) | 2;
            v48 = v16;
            goto LABEL_9;
          }
          if ( (_DWORD)v11 )
          {
            LOWORD(v16) = (unsigned __int16)v9 | 4;
            v48 = (unsigned int)v9 | 4;
            goto LABEL_9;
          }
        }
        v20 = v48;
        if ( (v48 & 0xBBBE) == 0 )
          goto LABEL_57;
        LOWORD(v16) = v48;
LABEL_58:
        if ( (_WORD)v16 )
        {
LABEL_9:
          *(_WORD *)(a3 + 10) |= v16;
          v17 = (unsigned int)(a2 << 16);
          v38 = v3;
          v18 = *(_QWORD *)(v3 + 33336);
          v49 = *(unsigned int *)(a3 + 8);
          v19 = a2 << 16;
          netnode_supset(v18, v17, &v49, 8, 65);
          v20 = v48;
          if ( (v48 & 0x200) == 0 )
            goto LABEL_10;
          v31 = *(_QWORD *)(v38 + 33336);
          v49 = (unsigned int)v12;
          netnode_supset(v31, (unsigned int)(v17 + 1), &v49, 8, 65);
          v32 = BYTE1(v48);
          if ( (v48 & 2) != 0 )
          {
            v33 = *(_QWORD *)(v38 + 33336);
            v49 = (unsigned int)v11;
            netnode_supset(v33, (unsigned int)(v19 + 2), &v49, 8, 65);
            v32 = BYTE1(v48);
          }
          if ( (v32 & 4) == 0 )
            *(_BYTE *)(a3 + 1) |= 8u;
        }
        else
        {
LABEL_10:
          v21 = 4 * ((v20 & 0x400) == 0);
          if ( (v20 & 0x100) == 0 )
            v21 = (4 * ((v20 & 0x400) == 0)) | 0x10;
          if ( (v20 & 0x80) == 0 )
            v21 |= 2u;
          *(_BYTE *)(a3 + 1) |= v21;
        }
        return v50 - __readfsqword(0x28u);
      case '>':
        if ( !v43 || !v37 )
          goto LABEL_6;
        goto LABEL_83;
      case '[':
        if ( v37 )
          goto LABEL_6;
        v14 = (int)v9;
        if ( ((unsigned int)v9 & 0x700001) != 0 )
          goto LABEL_7;
        if ( ((unsigned int)v9 & 0x20000) != 0 )
        {
          v12 = ((__int64)v5 - *(_QWORD *)(v3 + 33352)) >> 1;
          LODWORD(v9) = (unsigned int)v9 & 0xFFF1FF7F | 0x40080;
        }
        else
        {
          v36 = (int)v9;
          LOBYTE(v14) = (unsigned __int8)v9 | 0x80;
          LODWORD(v9) = v14;
          if ( (v36 & 0x90000) == 0x80000 )
            goto LABEL_6;
        }
        goto LABEL_104;
      default:
        goto LABEL_6;
    }
  }
}

