unsigned __int64 __fastcall sub_854A0(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // esi
  __int64 v6; // rdx
  int v7; // edi
  int v8; // eax
  int v9; // eax
  __int64 v10; // rbx
  unsigned int v11; // ebp
  int v12; // edx
  __int64 v13; // rcx
  unsigned int v14; // esi
  int v16; // eax
  char v17; // cl
  int v18; // edx
  unsigned int v19; // r15d
  int v20; // edx
  char v21; // dl
  unsigned __int16 v22; // cx
  int v23; // edx
  __int16 v24; // ax
  unsigned __int16 v25; // dx
  __int64 v26; // rax
  int v27; // eax
  __int16 v28; // ax
  _QWORD v29[3]; // [rsp+0h] [rbp-68h] BYREF
  int v30; // [rsp+18h] [rbp-50h]
  unsigned __int64 v31; // [rsp+28h] [rbp-40h]

  v4 = 0;
  v31 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 16);
  v7 = *(_DWORD *)(v6 + 104);
  v8 = *(unsigned __int16 *)(a3 + 24);
  if ( v8 >= v7 && v8 < *(_DWORD *)(v6 + 108) )
    v4 = *(_DWORD *)(*(_QWORD *)(v6 + 112) + 16LL * (v8 - v7) + 8);
  v9 = *(_DWORD *)(a3 + 28);
  v29[0] = a2;
  v10 = a3 + 41;
  v29[1] = a3;
  v30 = v4;
  v11 = 0;
  v29[2] = (-(__int64)((v9 & 0x10) == 0) & 0xFFFFFFFFFFFFFFE0LL) + 64;
  while ( 2 )
  {
    switch ( *(_BYTE *)v10 )
    {
      case 0:
        return v31 - __readfsqword(0x28u);
      case 1:
        v12 = *(unsigned __int16 *)(v10 + 5);
        goto LABEL_7;
      case 2:
        if ( !*(_BYTE *)(v10 + 31) )
          goto LABEL_6;
        v20 = -1;
        v19 = 5 * ((*(_DWORD *)(a3 + 28) & 0x1018) == 4112) + 2;
        goto LABEL_18;
      case 3:
      case 4:
        v16 = *(_DWORD *)(a3 + 28);
        v17 = *(_BYTE *)(v10 + 31);
        v18 = v16 & 0x1018;
        if ( v18 == 4112 )
        {
          v19 = 7;
          if ( !v17 )
            goto LABEL_57;
          goto LABEL_12;
        }
        if ( v17 )
        {
          v19 = 2;
LABEL_12:
          v20 = *(_BYTE *)(v10 + 32) & 7;
          if ( (v16 & 0x10) != 0 && (*(_BYTE *)(a3 + 33) & 1) != 0 )
            v20 = *(_BYTE *)(v10 + 32) & 7 | 8;
          goto LABEL_18;
        }
        v26 = *(unsigned __int16 *)(v10 + 5);
        if ( v18 != 4096 && v18 != 8 )
        {
          v19 = 2;
LABEL_57:
          v20 = *(unsigned __int16 *)(v10 + 5);
          goto LABEL_18;
        }
        if ( (_WORD)v26 == 0xFFFF )
        {
          v19 = 2;
          v20 = 4;
        }
        else
        {
          if ( (unsigned __int16)v26 > 7u )
          {
            if ( !under_debugger )
            {
              interr();
LABEL_73:
              if ( !under_debugger )
                interr();
            }
            BUG();
          }
          v19 = 2;
          v20 = dword_15A560[v26];
        }
LABEL_18:
        sub_85240((__int64)v29, v11, v20, v19, 2);
        if ( !*(_BYTE *)(v10 + 31) )
        {
          v27 = *(_DWORD *)(a3 + 28) & 0x1018;
          if ( v27 == 4096 || v27 == 8 )
          {
            switch ( *(_WORD *)(v10 + 5) )
            {
              case 0:
              case 2:
                v23 = 6;
                goto LABEL_39;
              case 1:
              case 3:
                v23 = 7;
                goto LABEL_39;
              case 4:
              case 5:
              case 6:
              case 7:
                goto LABEL_38;
              default:
                goto LABEL_73;
            }
          }
          goto LABEL_38;
        }
        v21 = (*(char *)(v10 + 32) >> 3) & 7;
        if ( (*(_DWORD *)(a3 + 28) & 0x10) != 0 && (*(_BYTE *)(a3 + 33) & 2) != 0 )
        {
          v22 = *(_WORD *)(a3 + 24);
          LOBYTE(v23) = v21 | 8;
          v24 = (char)v23;
          if ( v22 > 0x5C0u )
          {
            if ( v22 > 0x5F1u )
            {
              if ( (unsigned __int16)(v22 - 1532) > 0xFu )
              {
LABEL_25:
                v23 = (char)v23;
                goto LABEL_39;
              }
            }
            else if ( v22 <= 0x5EDu )
            {
              goto LABEL_25;
            }
          }
          else if ( v22 <= 0x5BCu )
          {
            if ( v22 > 0x378u )
            {
              if ( (unsigned __int16)(v22 - 993) > 3u )
                goto LABEL_25;
            }
            else if ( v22 <= 0x374u )
            {
              goto LABEL_25;
            }
          }
          goto LABEL_50;
        }
        v24 = v21;
        v25 = *(_WORD *)(a3 + 24);
        if ( v25 > 0x5C0u )
        {
          if ( v25 <= 0x5F1u )
          {
            if ( v25 <= 0x5EDu )
              goto LABEL_37;
            goto LABEL_50;
          }
          if ( (unsigned __int16)(v25 - 1532) <= 0xFu )
            goto LABEL_50;
LABEL_37:
          v23 = v24;
          if ( v24 != 4 )
            goto LABEL_39;
LABEL_38:
          v23 = -1;
          goto LABEL_39;
        }
        if ( v25 <= 0x5BCu )
        {
          if ( v25 > 0x378u )
          {
            if ( (unsigned __int16)(v25 - 993) > 3u )
              goto LABEL_37;
          }
          else if ( v25 <= 0x374u )
          {
            goto LABEL_37;
          }
        }
LABEL_50:
        if ( (*(_BYTE *)(a3 + 273) & 0x10) != 0 )
          v24 |= 0x10u;
        v28 = sub_22710(a3, v24);
        v23 = v28;
        if ( v28 == 4 )
          goto LABEL_38;
LABEL_39:
        sub_85240((__int64)v29, v11, v23, v19, 2);
LABEL_6:
        v12 = -1;
LABEL_7:
        v13 = *(unsigned __int8 *)(v10 + 4);
        v14 = v11++;
        v10 += 40;
        sub_85240((__int64)v29, v14, v12, v13, 0);
        if ( v11 != 8 )
          continue;
        return v31 - __readfsqword(0x28u);
      case 0xB:
        v12 = *(unsigned __int16 *)(v10 + 5) + 45;
        goto LABEL_7;
      case 0xC:
        v12 = *(unsigned __int16 *)(v10 + 5) + 56;
        goto LABEL_7;
      case 0xD:
        v12 = *(unsigned __int16 *)(v10 + 5) + 64;
        goto LABEL_7;
      case 0xE:
        v12 = *(unsigned __int16 *)(v10 + 5) + 81;
        goto LABEL_7;
      case 0xF:
        v12 = *(unsigned __int16 *)(v10 + 5) + 133;
        goto LABEL_7;
      case 0x10:
        v12 = *(unsigned __int16 *)(v10 + 5) + 165;
        goto LABEL_7;
      default:
        goto LABEL_6;
    }
  }
}
