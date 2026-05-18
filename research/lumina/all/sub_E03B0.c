__int64 __fastcall sub_E03B0(__int64 a1, char a2)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // rsi
  unsigned __int8 *v6; // rbx
  unsigned __int8 *v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // r14
  char v12; // al
  __int64 *v13; // rcx
  unsigned int v14; // eax
  char v15; // di
  unsigned int v16; // r8d
  char v17; // al
  int v18; // eax
  __int16 v19; // bx
  __int64 v20; // rdx
  int v21; // eax
  __int64 result; // rax
  char *v23; // rdx
  char *i; // rcx
  char v25; // di
  char v26; // si
  unsigned int v27; // eax
  unsigned int v28; // r11d
  unsigned __int8 *v29; // rcx
  unsigned int v30; // eax
  unsigned __int8 v31; // dl
  int v32; // r11d
  int v33; // eax
  unsigned __int8 *v34; // rax
  char v35; // di
  unsigned int v36; // r8d
  unsigned int v37; // ecx
  unsigned int v38; // r11d
  unsigned __int8 *v39; // rax
  unsigned int v40; // ecx
  unsigned __int8 v41; // dl

  if ( *(_BYTE *)(a1 + 22) == 1 )
  {
    v4 = *(int *)(a1 + 16);
    if ( a2 != 1 )
    {
      v5 = 2 * v4 + 2;
LABEL_5:
      v6 = *(unsigned __int8 **)(a1 + 8);
      v7 = &v6[v4];
      v11 = sub_DBFF0(*(_QWORD *)(a1 + 24), v5);
      if ( v11 )
      {
        v12 = *(_BYTE *)(a1 + 22);
        if ( v12 != 1 )
        {
          v13 = v11;
          if ( v12 != 2 )
          {
            if ( v6 < v7 )
            {
              while ( 1 )
              {
                v5 = (unsigned __int64)(v6 + 2);
                v8 = v6[1] + (*v6 << 8);
                if ( (unsigned int)(v8 - 55296) <= 0x7FF )
                  break;
                if ( (unsigned int)v8 > 0x7F )
                {
                  v9 = (unsigned int)v8 >> 6;
                  v15 = (v6[1] & 0x3F) + 0x80;
                  v14 = (unsigned int)v8 >> 6;
                  if ( (unsigned int)v8 <= 0x7FF )
                  {
                    *((_BYTE *)v13 + 1) = v15;
                    v6 += 2;
                    v13 = (__int64 *)((char *)v13 + 2);
                    *((_BYTE *)v13 - 2) = v9 - 64;
                    goto LABEL_28;
                  }
LABEL_13:
                  v16 = (unsigned int)v8 >> 12;
                  v17 = (v14 & 0x3F) + 0x80;
                  if ( (unsigned int)v8 > 0xFFFF )
                  {
                    *((_BYTE *)v13 + 2) = v17;
                    v8 = ((unsigned int)v8 >> 18) - 16;
                    v9 = (v16 & 0x3F) - 128;
                    *((_BYTE *)v13 + 3) = v15;
                    *(_BYTE *)v13 = v8;
                    *((_BYTE *)v13 + 1) = v9;
                    v6 = (unsigned __int8 *)v5;
                    v13 = (__int64 *)((char *)v13 + 4);
                    goto LABEL_28;
                  }
                  v9 = v16 - 32;
                  *((_BYTE *)v13 + 1) = v17;
                  *((_BYTE *)v13 + 2) = v15;
                  *(_BYTE *)v13 = v9;
                  v13 = (__int64 *)((char *)v13 + 3);
                  v6 = (unsigned __int8 *)v5;
                  if ( v5 >= (unsigned __int64)v7 )
                    goto LABEL_15;
                }
                else
                {
                  *(_BYTE *)v13 = v6[1];
                  v6 += 2;
                  v13 = (__int64 *)((char *)v13 + 1);
LABEL_28:
                  if ( v5 >= (unsigned __int64)v7 )
                    goto LABEL_15;
                }
              }
              if ( (unsigned __int64)v7 > v5 )
              {
                v5 = (unsigned __int64)(v6 + 4);
                v8 = (unsigned __int16)((_WORD)v8 << 10)
                   + (((v6[2] << 8) + v6[3]) & 0x3FF)
                   + (((unsigned int)(v8 & 0x3C0) + 64) << 10);
              }
              v14 = (unsigned int)v8 >> 6;
              v15 = (v8 & 0x3F) + 0x80;
              goto LABEL_13;
            }
            goto LABEL_86;
          }
          if ( v6 >= v7 )
          {
LABEL_86:
            v18 = 0;
LABEL_16:
            *(_DWORD *)(a1 + 16) = v18;
            goto LABEL_17;
          }
          while ( 1 )
          {
            v34 = v6 + 2;
            v8 = *v6 + (v6[1] << 8);
            v5 = (unsigned int)(v8 - 55296);
            if ( (unsigned int)v5 <= 0x7FF )
              break;
            if ( (unsigned int)v8 > 0x7F )
            {
              v9 = (unsigned int)v8 >> 6;
              v35 = (*v6 & 0x3F) + 0x80;
              v5 = v9;
              if ( (unsigned int)v8 > 0x7FF )
                goto LABEL_63;
              v8 = (unsigned int)(v9 - 64);
              *((_BYTE *)v13 + 1) = v35;
              v6 += 2;
              v13 = (__int64 *)((char *)v13 + 2);
              *((_BYTE *)v13 - 2) = v9 - 64;
            }
            else
            {
              *(_BYTE *)v13 = *v6;
              v6 += 2;
              v13 = (__int64 *)((char *)v13 + 1);
            }
LABEL_65:
            if ( v34 >= v7 )
            {
LABEL_15:
              v18 = (_DWORD)v13 - (_DWORD)v11;
              goto LABEL_16;
            }
          }
          if ( v7 > v34 )
          {
            v34 = v6 + 4;
            v8 = (unsigned __int16)((_WORD)v8 << 10)
               + ((v6[2] + (v6[3] << 8)) & 0x3FF)
               + (((unsigned int)(v8 & 0x3C0) + 64) << 10);
          }
          LODWORD(v5) = (unsigned int)v8 >> 6;
          v35 = (v8 & 0x3F) + 0x80;
LABEL_63:
          v36 = (unsigned int)v8 >> 12;
          v5 = (unsigned int)(v5 & 0x3F) - 128;
          if ( (unsigned int)v8 > 0xFFFF )
          {
            *((_BYTE *)v13 + 2) = v5;
            v8 = ((unsigned int)v8 >> 18) - 16;
            v9 = (v36 & 0x3F) - 128;
            *((_BYTE *)v13 + 3) = v35;
            *(_BYTE *)v13 = v8;
            *((_BYTE *)v13 + 1) = v9;
            v6 = v34;
            v13 = (__int64 *)((char *)v13 + 4);
          }
          else
          {
            v9 = v36 - 32;
            *((_BYTE *)v13 + 1) = v5;
            *((_BYTE *)v13 + 2) = v35;
            *(_BYTE *)v13 = v9;
            v6 = v34;
            v13 = (__int64 *)((char *)v13 + 3);
          }
          goto LABEL_65;
        }
        v5 = (unsigned __int64)v11;
        if ( a2 != 2 )
        {
          v9 = (__int64)byte_1BEC20;
          v10 = 0xFFFFFFFFLL;
          if ( v6 >= v7 )
          {
LABEL_87:
            v33 = 0;
LABEL_51:
            *(_DWORD *)(a1 + 16) = v33;
            v13 = (__int64 *)(v5 + 1);
            *(_BYTE *)v5 = 0;
LABEL_17:
            *(_BYTE *)v13 = 0;
            v19 = *(_WORD *)(a1 + 20) & 0x83D | 0x202;
            if ( (*(_WORD *)(a1 + 20) & 0x9000) != 0 || *(_DWORD *)(a1 + 32) )
              sub_C9690(a1, v5, v8, (__int64)v13, v9, v10);
            v20 = *(_QWORD *)(a1 + 24);
            *(_WORD *)(a1 + 20) = v19;
            *(_BYTE *)(a1 + 22) = a2;
            *(_QWORD *)(a1 + 8) = v11;
            *(_QWORD *)(a1 + 40) = v11;
            if ( v20 && *(_QWORD *)(v20 + 488) > (unsigned __int64)v11 )
            {
              v21 = 128;
              if ( *(_QWORD *)(v20 + 472) <= (unsigned __int64)v11 )
                goto LABEL_21;
              if ( *(_QWORD *)(v20 + 480) <= (unsigned __int64)v11 )
              {
                v21 = *(unsigned __int16 *)(v20 + 414);
                goto LABEL_21;
              }
            }
            v21 = ((__int64 (__fastcall *)(__int64 *))*(&xmmword_2414B0 + 1))(v11);
LABEL_21:
            *(_DWORD *)(a1 + 32) = v21;
            return 0;
          }
          while ( 1 )
          {
            v27 = *v6;
            LOBYTE(v28) = 0;
            v29 = v6 + 1;
            v8 = *v6;
            if ( v27 <= 0xBF )
              goto LABEL_38;
            v30 = byte_1BEC20[v27 - 192];
            if ( v7 != v29 && (v31 = v6[1], (v31 & 0xC0) == 0x80) )
            {
              do
              {
                ++v29;
                v30 = (v31 & 0x3F) + (v30 << 6);
                if ( v7 == v29 )
                  break;
                v31 = *v29;
              }
              while ( (*v29 & 0xC0) == 0x80 );
              if ( v30 <= 0x7F || (v30 & 0xFFFFF800) == 0xD800 )
              {
LABEL_53:
                v8 = 4294967293LL;
                LOBYTE(v28) = -1;
                goto LABEL_38;
              }
            }
            else if ( v30 <= 0x7F )
            {
              goto LABEL_53;
            }
            v6 = v29;
            if ( (v30 & 0xFFFFFFFE) == 0xFFFE )
              goto LABEL_53;
            v8 = v30;
            v28 = v30 >> 8;
            if ( v30 <= 0xFFFF )
            {
LABEL_38:
              *(_BYTE *)v5 = v28;
              *(_BYTE *)(v5 + 1) = v8;
              v5 += 2LL;
              v6 = v29;
              if ( v29 >= v7 )
                goto LABEL_50;
            }
            else
            {
              *(_BYTE *)(v5 + 3) = v30;
              v5 += 4LL;
              *(_BYTE *)(v5 - 2) = (BYTE1(v30) & 3) - 36;
              *(_BYTE *)(v5 - 4) = (((v30 - 0x10000) >> 18) & 3) - 40;
              v32 = (unsigned __int16)v30 >> 10;
              v8 = v32 | ((v30 - 0x10000) >> 10) & 0xFFFFFFC0;
              *(_BYTE *)(v5 - 3) = v32 | ((v30 - 0x10000) >> 10) & 0xC0;
              if ( v29 >= v7 )
                goto LABEL_50;
            }
          }
        }
        if ( v6 >= v7 )
          goto LABEL_87;
        v9 = (__int64)byte_1BEC20;
        v10 = 4294967293LL;
        while ( 1 )
        {
          v37 = *v6;
          LOBYTE(v38) = 0;
          v39 = v6 + 1;
          v8 = *v6;
          if ( v37 > 0xBF )
          {
            v40 = byte_1BEC20[v37 - 192];
            if ( v7 != v39 && (v41 = v6[1], (v41 & 0xC0) == 0x80) )
            {
              do
              {
                ++v39;
                v40 = (v41 & 0x3F) + (v40 << 6);
                if ( v7 == v39 )
                  break;
                v41 = *v39;
              }
              while ( (*v39 & 0xC0) == 0x80 );
              if ( v40 <= 0x7F || (v40 & 0xFFFFF800) == 0xD800 )
              {
LABEL_85:
                LOBYTE(v38) = -1;
                v8 = 4294967293LL;
                goto LABEL_72;
              }
            }
            else
            {
              LOBYTE(v38) = -1;
              v8 = 4294967293LL;
              if ( v40 <= 0x7F )
                goto LABEL_72;
            }
            v6 = v39;
            if ( (v40 & 0xFFFFFFFE) == 0xFFFE )
              goto LABEL_85;
            v8 = v40;
            v38 = v40 >> 8;
            if ( v40 > 0xFFFF )
            {
              *(_BYTE *)(v5 + 2) = v40;
              *(_BYTE *)(v5 + 3) = (BYTE1(v40) & 3) - 36;
              v8 = (((v40 - 0x10000) >> 18) & 3) - 40;
              v5 += 4LL;
              *(_BYTE *)(v5 - 3) = (((v40 - 0x10000) >> 18) & 3) - 40;
              *(_BYTE *)(v5 - 4) = ((v40 - 0x10000) >> 10) & 0xC0 | ((unsigned __int16)v40 >> 10);
              goto LABEL_73;
            }
          }
LABEL_72:
          *(_BYTE *)v5 = v8;
          *(_BYTE *)(v5 + 1) = v38;
          v6 = v39;
          v5 += 2LL;
LABEL_73:
          if ( v39 >= v7 )
          {
LABEL_50:
            v33 = v5 - (_DWORD)v11;
            goto LABEL_51;
          }
        }
      }
      return 7;
    }
LABEL_4:
    LODWORD(v4) = v4 & 0xFFFFFFFE;
    *(_DWORD *)(a1 + 16) = v4;
    v4 = (int)v4;
    v5 = 2LL * (int)v4 + 1;
    goto LABEL_5;
  }
  if ( a2 == 1 )
  {
    LODWORD(v4) = *(_DWORD *)(a1 + 16);
    goto LABEL_4;
  }
  result = sub_E0350(a1);
  if ( (_DWORD)result )
    return 7;
  v23 = *(char **)(a1 + 8);
  for ( i = &v23[*(_DWORD *)(a1 + 16) & 0xFFFFFFFE]; i > v23; *(v23 - 1) = v26 )
  {
    v25 = v23[1];
    v26 = *v23;
    v23 += 2;
    *(v23 - 2) = v25;
  }
  *(_BYTE *)(a1 + 22) = a2;
  return result;
}
