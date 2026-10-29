__int64 __fastcall sub_1BB60(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  unsigned int v6; // r12d
  int v7; // r15d
  unsigned int v8; // ebx
  __int64 v9; // rdi
  unsigned int v11; // eax
  int v12; // eax
  __int64 v13; // r10
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdi
  int v17; // r14d
  unsigned int v18; // eax
  __int64 v19; // r12
  unsigned int v20; // r13d
  __int64 v21; // rdx
  int v22; // eax
  int v23; // r15d
  __int64 v24; // rdi
  unsigned __int16 v25; // bx
  int v26; // eax
  __int64 v27; // rdi
  char v28; // al
  int v29; // eax
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // r10
  unsigned int v33; // edx
  __int64 v34; // rax
  unsigned __int16 v35; // ax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r10
  __int64 v39; // rdi
  unsigned __int8 *v40; // rax
  __int16 v41; // dx
  unsigned __int16 v42; // bx
  __int64 v43; // rax
  __int64 v44; // [rsp+8h] [rbp-90h]
  char v45; // [rsp+8h] [rbp-90h]
  __int64 v46; // [rsp+8h] [rbp-90h]
  __int64 v47; // [rsp+8h] [rbp-90h]
  __int64 v48; // [rsp+8h] [rbp-90h]
  __int64 v49; // [rsp+8h] [rbp-90h]
  __int64 v50; // [rsp+10h] [rbp-88h]
  __int16 v51; // [rsp+18h] [rbp-80h]
  char v52; // [rsp+1Ah] [rbp-7Eh]
  char v53; // [rsp+1Bh] [rbp-7Dh]
  unsigned int v54; // [rsp+1Ch] [rbp-7Ch]
  int v55; // [rsp+20h] [rbp-78h]
  unsigned int v56; // [rsp+24h] [rbp-74h]
  __int64 v57; // [rsp+28h] [rbp-70h]
  char v58; // [rsp+35h] [rbp-63h] BYREF
  char v59; // [rsp+36h] [rbp-62h] BYREF
  char v60; // [rsp+37h] [rbp-61h] BYREF
  __int64 v61; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v62[24]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v63; // [rsp+58h] [rbp-40h]

  v4 = (unsigned int)((_DWORD)a2 << 16);
  v63 = __readfsqword(0x28u);
  v55 = (unsigned __int16)a2;
  if ( (_WORD)a2 != 0xFFFF )
  {
    v11 = *(_DWORD *)(a1 + 33376);
    HIWORD(v6) = 0x4000;
    if ( v11 <= 1 )
LABEL_59:
      sub_19240();
    *(_DWORD *)(a1 + 33376) = v11 - 2;
    a2 = &v61;
    v44 = a3;
    v12 = freadbytes(*(_QWORD *)(a1 + 33312), &v61, 2, 1);
    v13 = v44;
    if ( v12 )
LABEL_60:
      sub_19220();
    v7 = (unsigned __int16)v61;
    a3 = (unsigned __int16)v61;
    LOWORD(v6) = v61;
    if ( !(_WORD)v61 )
    {
      v14 = 0x4000;
      v8 = 0;
      goto LABEL_10;
    }
    v45 = 0;
    v16 = *(_QWORD *)(a1 + 33352);
    if ( *(_WORD *)(a1 + 33111) >= (unsigned __int16)v61 )
      goto LABEL_12;
    goto LABEL_42;
  }
  v6 = (unsigned __int16)a3;
  a3 = (unsigned int)a3;
  v7 = (unsigned __int16)a3;
  if ( !(_WORD)a3 )
  {
    v4 = 4294901760LL;
    v8 = 0;
LABEL_4:
    v9 = *(_QWORD *)(a1 + 33336);
    v61 = v6;
    netnode_supset(v9, v4, &v61, 8, 65);
    return v8;
  }
  v45 = 1;
  v16 = *(_QWORD *)(a1 + 33352);
  v13 = 0;
  if ( *(_WORD *)(a1 + 33111) < (unsigned __int16)a3 )
  {
LABEL_42:
    *(_WORD *)(a1 + 33111) = a3;
    v50 = v13;
    qfree(v16, a2, a3, a4);
    v31 = qalloc((unsigned int)(4 * v7 + 2));
    v13 = v50;
    v16 = v31;
    if ( !v31 )
      goto LABEL_64;
    *(_QWORD *)(a1 + 33352) = v31;
  }
LABEL_12:
  v56 = v4;
  v17 = v7;
  v18 = v6;
  v19 = v16 + 2;
  v53 = 0;
  v20 = v18;
  v54 = 0;
  v57 = v13;
  while ( 1 )
  {
    v22 = *(_DWORD *)(a1 + 33376);
    v23 = v17 - 1;
    if ( !v22 )
      goto LABEL_59;
    v24 = *(_QWORD *)(a1 + 33312);
    *(_DWORD *)(a1 + 33376) = v22 - 1;
    if ( qfread(v24, &v58, 1) != 1 )
      goto LABEL_60;
    v25 = (unsigned __int8)v58;
    if ( !v58 || (unsigned __int8)v58 > 0xEFu )
      goto LABEL_39;
    if ( v58 >= 0 )
      goto LABEL_13;
    if ( v17 == 1 )
      break;
    v26 = *(_DWORD *)(a1 + 33376);
    LOBYTE(v25) = v58 & 0x1F;
    v52 = v58;
    v23 = v17 - 2;
    v51 = v20;
    v25 <<= 6;
    LOWORD(v20) = v20 - 1;
    if ( !v26 )
      goto LABEL_59;
    v27 = *(_QWORD *)(a1 + 33312);
    *(_DWORD *)(a1 + 33376) = v26 - 1;
    if ( qfread(v27, &v59, 1) != 1 )
      goto LABEL_60;
    if ( (v59 & 0xC0) != 0x80 )
      break;
    v28 = v25 | v59 & 0x3F;
    LOBYTE(v25) = v28;
    if ( (v52 & 0xE0) != 0xC0 )
    {
      if ( v17 == 2 || (v52 & 0xF0) != 0xE0 )
        break;
      v29 = *(_DWORD *)(a1 + 33376);
      if ( !v29 )
        goto LABEL_59;
      v30 = *(_QWORD *)(a1 + 33312);
      *(_DWORD *)(a1 + 33376) = v29 - 1;
      if ( qfread(v30, &v60, 1) != 1 )
        goto LABEL_60;
      if ( (v60 & 0xC0) != 0x80 )
        break;
      v25 <<= 6;
      v17 -= 3;
      LOBYTE(v25) = v60 & 0x3F | v25;
      LOWORD(v20) = v51 - 2;
      if ( v25 <= 0x7FFu )
      {
LABEL_39:
        if ( !v45 )
          sub_12DB0((__int64)"Illegal symbol encoding in CONSTANT_Utf8 (%u)", v55);
        return 0;
      }
      *(_WORD *)(v19 - 2) = v25;
      v21 = v19;
      if ( v45 )
        goto LABEL_17;
LABEL_35:
      v53 = 1;
      if ( ((unsigned __int8)(1 << (v25 & 7))
          & byte_25DC0[byte_25E40[32 * byte_26380[HIBYTE(v25)] + ((unsigned __int8)v25 >> 3)] & 0x7F]) != 0 )
        goto LABEL_17;
LABEL_16:
      v53 = -1;
      v54 = 0x8000;
      goto LABEL_17;
    }
    if ( v25 <= 0x7Fu && v28 )
      goto LABEL_39;
LABEL_13:
    *(_WORD *)(v19 - 2) = v25;
    v17 = v23;
    v21 = v19;
    if ( !v45 )
    {
      if ( v25 > 0x7Eu )
        goto LABEL_35;
      if ( (unsigned __int8)v25 <= 0x20u )
        goto LABEL_16;
    }
LABEL_17:
    v19 += 2;
    if ( !v17 )
    {
      v4 = v56;
      v6 = v20;
      v32 = v57;
      if ( v45 )
      {
        netnode_setblob(*(_QWORD *)(a1 + 33336), *(_QWORD *)(a1 + 33352), v21 - *(_QWORD *)(a1 + 33352), v56, 106);
        v8 = (v54 >> 15) ^ 1;
        goto LABEL_4;
      }
      if ( (_WORD)v20 == 1 && (*(_BYTE *)(a1 + 33346) & 0x20) != 0 )
      {
        if ( v25 > 0x7Fu || (v47 = v21, v34 = sub_1F6F0((unsigned __int8)v25, 0), v21 = v47, v32 = v57, !v34) )
        {
          v48 = v32;
          v35 = qsnprintf(v62, 16, "_?_%04X", v25);
          v38 = v48;
          v39 = *(_QWORD *)(a1 + 33352);
          LOWORD(v6) = v35;
          if ( *(_WORD *)(a1 + 33111) >= v35 )
            goto LABEL_55;
          *(_WORD *)(a1 + 33111) = v35;
          v42 = v35;
          qfree(v39, 16, v36, v37);
          v43 = qalloc(4LL * v42 + 2);
          v39 = v43;
          if ( v43 )
          {
            *(_QWORD *)(a1 + 33352) = v43;
            v38 = v48;
LABEL_55:
            v40 = v62;
            do
            {
              v41 = *v40++;
              v39 += 2;
              *(_WORD *)(v39 - 2) = v41;
              v8 = *v40;
            }
            while ( (_BYTE)v8 );
            *(_BYTE *)(v38 + 1) = 18;
            v4 = v56;
            v49 = v38;
            netnode_setblob(*(_QWORD *)(a1 + 33336), *(_QWORD *)(a1 + 33352), v39 - *(_QWORD *)(a1 + 33352), v56, 106);
            v13 = v49;
            v14 = v54 | 0x401 | HIWORD(v6);
            goto LABEL_10;
          }
LABEL_64:
          sub_19160((__int64)"JavaLoader");
        }
      }
      v46 = v32;
      netnode_setblob(*(_QWORD *)(a1 + 33336), *(_QWORD *)(a1 + 33352), v21 - *(_QWORD *)(a1 + 33352), v56, 106);
      v8 = (v54 >> 15) ^ 1;
      v13 = v46;
      v14 = HIWORD(v20);
      if ( v53 == 1 )
      {
        v33 = v54;
        BYTE1(v33) = BYTE1(v54) | 0x20;
        v14 |= v33;
      }
      else
      {
        LOWORD(v14) = v54 | HIWORD(v20);
      }
LABEL_10:
      v15 = v14 << 16;
      *(_DWORD *)(v13 + 8) = v15 | (unsigned __int16)v6;
      v6 = v15 | (unsigned __int16)v6;
      goto LABEL_4;
    }
  }
  if ( !v45 )
    sub_12DB0((__int64)"Illegal byte in CONSTANT_Utf8 (%u)", v55);
  return 0;
}

