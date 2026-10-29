__int64 __fastcall sub_153BC0(const __m128i *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r15d
  unsigned int v7; // eax
  char *v8; // rdi
  int v9; // r9d
  __int64 v10; // rax
  __int64 v11; // r14
  bool v12; // zf
  char v13; // dl
  int v14; // r9d
  unsigned __int8 *v15; // rsi
  __int64 v16; // r14
  int v17; // edx
  int v18; // ecx
  _DWORD *v19; // rax
  int v20; // r10d
  __int128 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // r10d
  _DWORD *v27; // r14
  int v28; // eax
  char v29; // al
  __int64 v30; // r11
  __int64 v31; // r13
  int v32; // r14d
  char v33; // al
  __int64 v34; // r13
  char *v35; // r11
  char v36; // al
  int v37; // r10d
  __int64 v38; // rax
  char v39; // dl
  int v40; // r11d
  char *v41; // r14
  char v42; // al
  char *v43; // r14
  char v44; // al
  char v45; // al
  char v46; // al
  char v47; // al
  __int32 v48; // eax
  int v49; // [rsp+0h] [rbp-140h]
  int v50; // [rsp+0h] [rbp-140h]
  int v51; // [rsp+4h] [rbp-13Ch]
  int v52; // [rsp+4h] [rbp-13Ch]
  int v53; // [rsp+4h] [rbp-13Ch]
  int v54; // [rsp+4h] [rbp-13Ch]
  __int128 *v55; // [rsp+10h] [rbp-130h]
  __int64 v56; // [rsp+10h] [rbp-130h]
  int v57; // [rsp+20h] [rbp-120h]
  char *v58; // [rsp+20h] [rbp-120h]
  __int64 v59; // [rsp+20h] [rbp-120h]
  int v60; // [rsp+20h] [rbp-120h]
  char *v61; // [rsp+20h] [rbp-120h]
  _QWORD *v62; // [rsp+28h] [rbp-118h]
  __int64 v63; // [rsp+28h] [rbp-118h]
  __int64 v64; // [rsp+28h] [rbp-118h]
  int v65; // [rsp+28h] [rbp-118h]
  __int64 v66; // [rsp+30h] [rbp-110h]
  char *v67; // [rsp+38h] [rbp-108h]
  __int64 v68; // [rsp+38h] [rbp-108h]
  __int64 v69; // [rsp+40h] [rbp-100h]
  int v70; // [rsp+40h] [rbp-100h]
  __int64 v72; // [rsp+68h] [rbp-D8h] BYREF
  unsigned __int64 v73; // [rsp+70h] [rbp-D0h] BYREF
  __int64 v74; // [rsp+78h] [rbp-C8h]
  unsigned __int64 v75; // [rsp+80h] [rbp-C0h] BYREF
  __int64 v76; // [rsp+88h] [rbp-B8h]
  _QWORD v77[5]; // [rsp+90h] [rbp-B0h] BYREF
  char v78; // [rsp+B8h] [rbp-88h]
  __int64 v79; // [rsp+C0h] [rbp-80h]
  unsigned int *v80; // [rsp+C8h] [rbp-78h]
  __int128 v81; // [rsp+D0h] [rbp-70h] BYREF
  _QWORD v82[12]; // [rsp+E0h] [rbp-60h] BYREF

  v82[5] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a3 + 68) != 4 )
    return 0;
  v79 = a3;
  memset(&v77[1], 0, 32);
  v78 = 0;
  v77[0] = off_4B0730;
  v80 = nullptr;
  if ( !(unsigned int)sub_11A440((_BYTE *)a2, (__int64)v77) || !v80 )
    return 0;
  v7 = *v80;
  if ( *v80 > 0x21 )
  {
    if ( v7 - 43 > 1 )
      return 0;
  }
  else if ( v7 <= 0x1F )
  {
    return 0;
  }
  v8 = (char *)sub_1183E0((__int64)v80, &v72);
  if ( v8 )
  {
    v3 = sub_11B8C0(v8, v77, 0);
    if ( (_BYTE)v3 )
    {
      if ( !v77[0] && v72 && *(_BYTE *)v72 == 4 && *(_QWORD *)(v72 + 8) == a3 )
      {
        v10 = a1[30].m128i_i64[0];
        v11 = 0;
        v12 = *(_BYTE *)(a3 + 32) == 4;
        v74 = 0;
        v76 = 0;
        v13 = *(_BYTE *)(a3 + 48);
        v66 = *(_QWORD *)(v10 + 112);
        v73 = 0xFFFFFFFF00000000LL;
        v75 = 0xFFFFFFFF00000000LL;
        if ( v12 && (v19 = *(_DWORD **)(a3 + 40), *v19 == 21) )
        {
          if ( v13 == 4 )
          {
            v11 = *(_QWORD *)(a3 + 56);
            if ( *(_DWORD *)v11 == 21 )
            {
              if ( v19 && v11 )
              {
                v20 = 0;
                v82[1] = v19 + 12;
                v82[2] = v11 + 32;
                v55 = &v81;
                v82[0] = v19 + 8;
                v82[3] = v11 + 48;
                v62 = v82;
                v81 = -1;
                do
                {
                  *(_QWORD *)&v21 = a1;
                  v57 = v20;
                  *((_QWORD *)&v21 + 1) = *v62;
                  v77[0] = a2;
                  v22 = sub_124F80(v21, (__int64)v77, 0);
                  v26 = v57;
                  v27 = (_DWORD *)v22;
                  if ( v22 )
                  {
                    v28 = sub_125AE0(v22 + 64, v66, *((__int64 *)&v21 + 1), v23, v24, v25);
                    v26 = v57;
                    if ( v28 == 2 )
                    {
                      v32 = v57 ^ 2;
                      v45 = *((_BYTE *)v55 + (v57 ^ 2));
                      if ( v45 == -1 )
                      {
                        v45 = sub_12C700(a1, a2, *((__int64 *)&v21 + 1), a2, v82[v32], 0);
                        v26 = v57;
                        *((_BYTE *)v55 + v32) = v45;
                      }
                      if ( v45 )
                        goto LABEL_68;
                      v32 = v26 ^ 3;
                      v46 = *((_BYTE *)v55 + (v26 ^ 3));
                      if ( v46 == -1 )
                      {
                        v54 = v26;
                        v46 = sub_12C700(a1, a2, *((__int64 *)&v21 + 1), a2, v82[v32], 0);
                        v26 = v54;
                        *((_BYTE *)v55 + v32) = v46;
                      }
                      if ( v46 )
                        goto LABEL_68;
                    }
                    else if ( v28 == 3 || *v27 == 11 || (v29 = sub_308CF0(v66, a1, v77[0], v27, 0, 0), v26 = v57, v29) )
                    {
                      v40 = v26 ^ 2;
                      v41 = (char *)&v82[-2] + 4 * (v26 ^ 2);
                      v59 = v26;
                      v42 = v41[v26];
                      if ( v42 == -1 )
                      {
                        v49 = v26;
                        v52 = v26 ^ 2;
                        v42 = sub_12C700(a1, a2, v82[v40], a2, *((__int64 *)&v21 + 1), 0);
                        v26 = v49;
                        v40 = v52;
                        v41[v59] = v42;
                      }
                      if ( v42 )
                        goto LABEL_82;
                      v40 = v26 ^ 3;
                      v43 = (char *)&v82[-2] + 4 * (v26 ^ 3);
                      v44 = v43[v59];
                      if ( v44 == -1 )
                      {
                        v50 = v26;
                        v53 = v26 ^ 3;
                        v44 = sub_12C700(a1, a2, v82[v40], a2, *((__int64 *)&v21 + 1), 0);
                        v26 = v50;
                        v40 = v53;
                        v43[v59] = v44;
                      }
                      if ( v44 )
                      {
LABEL_82:
                        v32 = v26;
                        v26 = v40;
                        goto LABEL_68;
                      }
                    }
                  }
                  v20 = v26 + 1;
                  ++v62;
                  v55 = (__int128 *)((char *)v55 + 4);
                }
                while ( v20 != 4 );
                v30 = 0;
LABEL_45:
                v26 = v30;
                v31 = 0;
                v67 = (char *)&v82[-2] + 4 * v30;
                while ( 1 )
                {
                  v32 = v31;
                  if ( (((unsigned __int8)v31 ^ (unsigned __int8)v26) & 2) != 0 )
                  {
                    v33 = v67[v31];
                    if ( v33 == -1 )
                    {
                      v60 = v26;
                      v64 = v30;
                      v33 = sub_12C700(a1, a2, v82[v30], a2, v82[v31], 0);
                      v26 = v60;
                      v30 = v64;
                      v67[v31] = v33;
                    }
                    if ( v33 )
                    {
                      v38 = v26 ^ 1;
                      v63 = (int)(v31 ^ 1);
                      v39 = *((_BYTE *)&v82[-2] + 4 * v38 + v63);
                      v58 = (char *)&v82[-2] + 4 * v38;
                      if ( v39 == -1 )
                      {
                        v51 = v26;
                        v56 = v30;
                        v39 = sub_12C700(a1, a2, v82[v38], a2, v82[v63], 0);
                        v26 = v51;
                        v30 = v56;
                        v58[v63] = v39;
                      }
                      if ( v39 )
                        break;
                    }
                  }
                  if ( ++v31 == 4 )
                  {
                    if ( ++v30 != 4 )
                      goto LABEL_45;
                    v68 = 0;
LABEL_53:
                    v34 = 0;
                    v26 = v68;
                    v35 = (char *)&v82[-2] + 4 * v68;
                    while ( 1 )
                    {
                      v32 = v34;
                      if ( (((unsigned __int8)v34 ^ (unsigned __int8)v26) & 2) != 0 )
                      {
                        v36 = v35[v34];
                        if ( v36 == -1 )
                        {
                          v61 = v35;
                          v65 = v26;
                          v36 = sub_12C700(a1, a2, v82[v68], a2, v82[v34], 0);
                          v35 = v61;
                          v26 = v65;
                          v61[v34] = v36;
                        }
                        if ( v36 )
                          goto LABEL_68;
                      }
                      if ( ++v34 == 4 )
                      {
                        if ( ++v68 != 4 )
                          goto LABEL_53;
                        goto LABEL_57;
                      }
                    }
                  }
                }
LABEL_68:
                v70 = v26;
                sub_120CC0((__int64)&v73, (unsigned __int8 *)v82[v26]);
                sub_AD060((__int64)a1, a2, (__int64)&v73, a2, (__int64)&v73, a2, v82[v32], 4);
                v37 = v70;
                if ( (_BYTE)v73 != 14 || (v47 = sub_152D80((__int64)a1, v74, v74 + 16), v37 = v70, v47) )
                {
                  sub_120CC0((__int64)&v75, (unsigned __int8 *)v82[v37 ^ 1]);
                  sub_AD060((__int64)a1, a2, (__int64)&v75, a2, (__int64)&v75, a2, v82[v32 ^ 1], 4);
                  if ( (_BYTE)v75 != 14 || (unsigned __int8)sub_152D80((__int64)a1, v76, v76 + 16) )
                    goto LABEL_59;
                }
                goto LABEL_57;
              }
            }
            else
            {
              v11 = 0;
            }
          }
          v69 = a3 + 48;
          if ( v19 )
          {
            v11 = *(_QWORD *)(a3 + 40);
            goto LABEL_19;
          }
        }
        else if ( v13 == 4 )
        {
          v11 = *(_QWORD *)(a3 + 56);
          if ( *(_DWORD *)v11 != 21 )
            v11 = 0;
        }
        v69 = a3 + 32;
LABEL_19:
        v15 = (unsigned __int8 *)(v11 + 48);
        if ( (unsigned __int8)sub_128A70(a1[4].m128i_i64[0], v11 + 32, v69, (__int64)&v73, 0, v9) )
        {
          sub_120CC0((__int64)&v75, v15);
LABEL_21:
          v16 = *(_QWORD *)(a2 + 16);
          if ( !v16 || *(_DWORD *)v16 != 21 )
            goto LABEL_23;
          sub_11F580((__int64)v77, (unsigned __int8 *)&v73);
          if ( (unsigned __int8)sub_123390((unsigned __int64)v77, v66, SHIDWORD(v73) / 2, 0)
            && sub_1216A0((unsigned __int8 *)(v16 + 64), (__int64)v77, 0) )
          {
            if ( sub_1216A0((unsigned __int8 *)(v16 + 32), (__int64)v77, 0) )
            {
              sub_AD060((__int64)a1, a2, (__int64)&v75, a2, (__int64)&v75, v16, v16 + 48, 4);
            }
            else if ( sub_1216A0((unsigned __int8 *)(v16 + 48), (__int64)v77, 0) )
            {
              sub_AD060((__int64)a1, a2, (__int64)&v75, a2, (__int64)&v75, v16, v16 + 32, 4);
            }
            if ( HIDWORD(v75) == HIDWORD(v73) )
            {
              if ( (_BYTE)v75 == 14 && !(unsigned __int8)sub_152D80((__int64)a1, v76, v76 + 16) )
              {
                sub_1188E0((__int64)v77);
                goto LABEL_57;
              }
              sub_1190E0(v16);
              v48 = a1[1].m128i_i32[2];
              BYTE1(v48) &= ~2u;
              LOBYTE(v48) = v48 | 0x80;
              a1[1].m128i_i32[2] = v48;
            }
          }
          sub_1188E0((__int64)v77);
LABEL_23:
          v17 = HIDWORD(v73);
          if ( SHIDWORD(v75) >= SHIDWORD(v73) )
          {
LABEL_24:
            sub_126690((unsigned __int64)&v73, v66, v17, 2);
            sub_126690((unsigned __int64)&v75, v66, SHIDWORD(v75), 2);
            sub_118550((char *)(a3 + 32), (char *)&v73);
            sub_118550((char *)(a3 + 48), (char *)&v75);
            *(_DWORD *)a3 = 32;
            v18 = HIDWORD(v73);
            if ( *(_DWORD *)(a3 + 68) != HIDWORD(v73) )
            {
              if ( !under_debugger )
                sub_37DDE0(51565);
              BUG();
            }
            *(_DWORD *)(a3 + 68) = 1;
            sub_127230(a3, v66, 9, v18, 1);
            goto LABEL_26;
          }
          sub_11C320((char *)&v75, v66, 9, *(_QWORD *)(a3 + 24), SHIDWORD(v73));
LABEL_59:
          v17 = HIDWORD(v73);
          goto LABEL_24;
        }
        if ( (unsigned __int8)sub_128A70(a1[4].m128i_i64[0], (__int64)v15, v69, (__int64)&v73, 0, v14) )
        {
          sub_120CC0((__int64)&v75, (unsigned __int8 *)(v11 + 32));
          goto LABEL_21;
        }
LABEL_57:
        v3 = 0;
LABEL_26:
        sub_1188E0((__int64)&v75);
        sub_1188E0((__int64)&v73);
        return v3;
      }
    }
  }
  return 0;
}

