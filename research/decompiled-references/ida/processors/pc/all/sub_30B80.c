__int64 __fastcall sub_30B80(__int64 a1, __int64 a2)
{
  int v5; // r12d
  __int64 v6; // r15
  unsigned __int64 *v8; // rax
  __int16 v9; // ax
  char v10; // si
  char v11; // dl
  char v12; // cl
  int v13; // r13d
  __int64 v14; // rdi
  _QWORD *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // r15
  __int64 v21; // r14
  __int64 v22; // r13
  __int64 v23; // r12
  _QWORD *v24; // rbx
  __int64 v25; // rbp
  unsigned __int64 v26; // rax
  __int64 v27; // rsi
  unsigned __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int8 v34; // al
  unsigned __int8 v35; // r11
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int16 v40; // ax
  __int64 v41; // rax
  char v42; // dl
  int v43; // eax
  char v44; // al
  char v45; // r13
  int v46; // eax
  unsigned __int8 v47; // r11
  unsigned __int8 v48; // [rsp+0h] [rbp-2D8h]
  __int64 v49; // [rsp+8h] [rbp-2D0h]
  __int64 v50; // [rsp+8h] [rbp-2D0h]
  __int64 v51; // [rsp+8h] [rbp-2D0h]
  __int64 v52; // [rsp+8h] [rbp-2D0h]
  __int64 i; // [rsp+10h] [rbp-2C8h]
  unsigned __int64 v54; // [rsp+10h] [rbp-2C8h]
  __int16 v55; // [rsp+18h] [rbp-2C0h]
  unsigned __int8 v56; // [rsp+18h] [rbp-2C0h]
  unsigned __int8 v57; // [rsp+18h] [rbp-2C0h]
  unsigned __int64 v58; // [rsp+20h] [rbp-2B8h]
  unsigned __int8 v59; // [rsp+28h] [rbp-2B0h]
  int v60; // [rsp+30h] [rbp-2A8h]
  unsigned __int8 v61; // [rsp+38h] [rbp-2A0h]
  __int64 v62; // [rsp+48h] [rbp-290h]
  int v63[8]; // [rsp+50h] [rbp-288h] BYREF
  __int64 v64; // [rsp+70h] [rbp-268h] BYREF
  __int64 v65; // [rsp+78h] [rbp-260h]
  __int128 v66; // [rsp+80h] [rbp-258h]
  __int64 v67; // [rsp+90h] [rbp-248h]
  int v68; // [rsp+98h] [rbp-240h]
  __int64 v69; // [rsp+A0h] [rbp-238h]
  __int128 v70; // [rsp+A8h] [rbp-230h]
  _QWORD *v71; // [rsp+B8h] [rbp-220h]
  __int128 v72; // [rsp+C0h] [rbp-218h]
  int v73; // [rsp+D0h] [rbp-208h]
  __int64 v74; // [rsp+D8h] [rbp-200h]
  __int128 v75; // [rsp+E0h] [rbp-1F8h]
  __int64 v76; // [rsp+F0h] [rbp-1E8h]
  int v77; // [rsp+F8h] [rbp-1E0h]
  __int64 v78; // [rsp+100h] [rbp-1D8h]
  __int64 v79; // [rsp+108h] [rbp-1D0h]
  __int64 v80; // [rsp+110h] [rbp-1C8h]
  __int64 v81; // [rsp+118h] [rbp-1C0h]
  int v82; // [rsp+120h] [rbp-1B8h]
  _BYTE v83[360]; // [rsp+130h] [rbp-1A8h] BYREF
  unsigned __int64 v84; // [rsp+298h] [rbp-40h] BYREF

  v84 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 28) & 8) == 0 )
    return 0;
  if ( (*(_BYTE *)a1 & 3) != 0 )
    return 0;
  v5 = *(unsigned __int16 *)(a1 + 96);
  if ( *(_WORD *)(a1 + 96) )
    return 0;
  v6 = *(_QWORD *)(a1 + 144);
  v8 = (unsigned __int64 *)&v83[40];
  do
  {
    *(_WORD *)v8 = 0;
    v8 += 5;
    *((_WORD *)v8 - 19) = 0;
    *((_WORD *)v8 - 18) = 0;
    *((_DWORD *)v8 - 2) = 0;
    *((_WORD *)v8 - 17) = 0;
    *((_OWORD *)v8 - 2) = 0;
    *(v8 - 2) = 0;
  }
  while ( v8 != &v84 );
  v9 = *(_WORD *)(a2 + 24);
  v10 = *(_BYTE *)(a2 + 32);
  LODWORD(v64) = 192;
  v65 = 0;
  v11 = *(_BYTE *)(a2 + 41);
  v67 = -1;
  v12 = *(_BYTE *)(a2 + 81);
  v68 = 0;
  v13 = *(unsigned __int16 *)(a2 + 46);
  v69 = 0;
  v14 = *(_QWORD *)(a2 + 96);
  v71 = 0;
  v73 = 0;
  v74 = -1;
  v76 = 0;
  v77 = 144;
  v78 = v6;
  v79 = 0;
  v80 = 0;
  v81 = -1;
  v82 = 0x1000000;
  v66 = 0;
  v70 = 0;
  v72 = 0;
  v75 = 0;
  if ( v9 == 122 )
  {
    if ( v12 != 2 || v11 != 1 || v10 != 33 || v14 )
      return 0;
    qmemcpy(v83, (const void *)a2, sizeof(v83));
    sub_21B00((__int64)&v64, a1);
    v15 = *(_QWORD **)(a1 + 48);
    v16 = *(_QWORD *)(a1 + 56);
    v17 = *(_QWORD *)(a2 + 16);
    v18 = &v15[v16];
    if ( v15 == v18 )
      goto LABEL_28;
    v19 = *(_QWORD **)(a1 + 48);
    while ( v17 != *v19 )
    {
      if ( v18 == ++v19 )
        goto LABEL_28;
    }
    if ( v18 == v19 )
    {
LABEL_28:
      if ( *(_QWORD *)(a1 + 64) < (unsigned __int64)(v16 + 1) )
      {
        v52 = *(_QWORD *)(a2 + 16);
        v37 = qvector_reserve();
        v38 = *(_QWORD *)(a1 + 56);
        v17 = v52;
        *(_QWORD *)(a1 + 48) = v37;
        v18 = (_QWORD *)(v37 + 8 * v38);
      }
      *v18 = v17;
      ++*(_QWORD *)(a1 + 56);
    }
    if ( !(unsigned __int8)sub_2C800((_QWORD *)a1, a2, v13)
      || *(_WORD *)(a2 + 24) != 143
      || *(_BYTE *)(a2 + 41) != 5
      || (unsigned int)(*(_DWORD *)(a2 + 48) + 2) > 1 )
    {
      goto LABEL_18;
    }
  }
  else
  {
    if ( v9 != 143 || v11 != 5 || (unsigned int)(*(_DWORD *)(a2 + 48) + 2) > 1 )
      return 0;
    qmemcpy(v83, (const void *)a2, sizeof(v83));
    sub_21B00((__int64)&v64, a1);
    v13 = -1;
  }
  v49 = *(_QWORD *)(a2 + 16);
  v26 = sub_22F00(a1);
  v27 = *(_QWORD *)(a1 + 8);
  v28 = v26;
  v29 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v29 + 1) )
  {
    v54 = v28;
    v39 = qvector_reserve();
    *(_QWORD *)(a1 + 8) = v39;
    v27 = v39;
    v28 = v54;
    v29 = *(_QWORD *)(a1 + 16);
  }
  v30 = v27 + 32 * v29;
  *(_QWORD *)v30 = v49;
  *(_QWORD *)(v30 + 8) = v28;
  *(_QWORD *)(v30 + 16) = 4;
  *(_DWORD *)(v30 + 24) = 0xFFFF;
  ++*(_QWORD *)(a1 + 16);
  if ( !(unsigned __int8)sub_2C800((_QWORD *)a1, a2, v13) || *(_WORD *)(a2 + 24) != 143 )
    goto LABEL_18;
  for ( i = -1; ; i = v51 )
  {
    if ( *(_BYTE *)(a2 + 41) != 5 || (get_flags_ex() & 0xF00000) != 0x500000 )
      goto LABEL_18;
    v50 = *(_QWORD *)(a2 + 16);
    v31 = sub_22F00(a1);
    v32 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v32 + 1) )
    {
      v58 = v31;
      *(_QWORD *)(a1 + 8) = qvector_reserve();
      v31 = v58;
      v32 = *(_QWORD *)(a1 + 16);
    }
    v33 = *(_QWORD *)(a1 + 8) + 32 * v32;
    *(_QWORD *)(v33 + 8) = v31;
    *(_QWORD *)v33 = v50;
    *(_QWORD *)(v33 + 16) = 4;
    *(_DWORD *)(v33 + 24) = 0xFFFF;
    ++*(_QWORD *)(a1 + 16);
    v51 = -1;
    if ( (unsigned __int8)get_refinfo() )
    {
      if ( (unsigned __int8)calc_reference_data() )
        v51 = v62;
      else
        v51 = -1;
    }
    v34 = sub_2C800((_QWORD *)a1, a2, v13);
    v35 = v34;
    if ( !v34 )
      goto LABEL_18;
    if ( i != -1 )
      goto LABEL_59;
    v59 = v34;
    if ( (int)sub_6F000(v51, 3, 0.0) <= 0 )
      break;
    v5 = 3;
LABEL_50:
    if ( *(_WORD *)(a2 + 24) != 143 )
      goto LABEL_18;
  }
  v36 = sub_6F000(v51, 4, 0.0);
  v35 = v59;
  if ( v36 > 0 )
  {
    v5 = 4;
    goto LABEL_50;
  }
  v5 = -1;
LABEL_59:
  if ( v13 != -1 )
    goto LABEL_79;
  v40 = *(_WORD *)(a2 + 24);
  if ( v40 == 143 )
  {
    v41 = a2 + 40;
LABEL_64:
    v42 = *(_BYTE *)(v41 + 1);
    if ( v42 != 2 )
    {
      if ( v42 == 1 )
      {
        v43 = *(unsigned __int16 *)(v41 + 6);
        v55 = v43;
        v60 = v43;
        while ( 1 )
        {
          v61 = v35;
          if ( decode_prev_insn() == -1 || !(unsigned __int8)sub_6B050(*(_QWORD *)(a1 + 152), *(_QWORD *)(a2 + 16), 0.0) )
            break;
          v13 = *(unsigned __int16 *)(a2 + 46);
          if ( *(_BYTE *)(a2 + 81) == 2
            && *(_BYTE *)(a2 + 32) == 33
            && *(_BYTE *)(a2 + 41) == 1
            && *(_WORD *)(a2 + 24) == 122
            && !*(_QWORD *)(a2 + 96)
            && v55 == (_WORD)v13 )
          {
            sub_216A0((__int64 *)(a1 + 48), *(_QWORD *)(a2 + 16));
            decode_insn();
            v35 = v61;
            goto LABEL_79;
          }
          v63[0] = v60;
          if ( (unsigned int)sub_72130(v6, a2, v63, 1) != -1 )
            goto LABEL_18;
          v35 = v61;
        }
      }
      goto LABEL_18;
    }
    if ( *(_BYTE *)(a2 + 32) != 33 || *(_QWORD *)(v41 + 16) )
      goto LABEL_18;
    if ( v13 == -1 )
    {
LABEL_82:
      v57 = v35;
      sub_22F60((_QWORD *)a1, *(_QWORD *)(a2 + 16), -1, 4);
      v45 = sub_2C800((_QWORD *)a1, a2, -1);
      v46 = sub_21560(
              *(_WORD *)(a2 + 24),
              *(_BYTE *)(a2 + 32),
              *(_BYTE *)(a2 + 41),
              *(_QWORD *)(a2 + 56),
              *(_BYTE *)(a2 + 81),
              *(_WORD *)(a2 + 86));
      v47 = v57;
      if ( v45 && v46 == 4 )
      {
        sub_216A0((__int64 *)(a1 + 48), *(_QWORD *)(a2 + 16));
        sub_226C0();
        if ( !(unsigned int)decode_insn() )
          goto LABEL_18;
        v47 = v57;
        if ( i == -1 )
        {
          *(_DWORD *)a1 |= 2u;
          if ( v51 != -1 )
          {
            sub_30720();
            v47 = v57;
          }
        }
        else
        {
          *(_QWORD *)(a1 + 104) = i;
          *(_DWORD *)(a1 + 96) = (v5 << 16) | 1;
        }
      }
      else
      {
        if ( v46 != -1 && (debug & 8) != 0 )
        {
          sub_224B0((__int64)"%a: unhandled mov fs:0\n", 0.0);
          v47 = v57;
        }
        *(_QWORD *)(a1 + 168) = v51;
        if ( i != -1 && v5 == 4 )
        {
          *(_DWORD *)(a1 + 96) = 262145;
          *(_QWORD *)(a1 + 104) = i;
        }
      }
      v48 = v47;
      sub_22CF0(&v64);
      return v48;
    }
    v56 = v35;
    sub_216A0((__int64 *)(a1 + 48), *(_QWORD *)(a2 + 16));
    v44 = sub_2C800((_QWORD *)a1, a2, v13);
    v35 = v56;
    if ( !v44 )
      goto LABEL_18;
LABEL_79:
    if ( *(_WORD *)(a2 + 24) != 143 || *(_BYTE *)(a2 + 41) != 1 || v13 != *(unsigned __int16 *)(a2 + 46) )
      goto LABEL_18;
    goto LABEL_82;
  }
  if ( v40 == 122 && *(_BYTE *)(a2 + 41) == 1 )
  {
    v13 = *(unsigned __int16 *)(a2 + 46);
    v41 = a2 + 80;
    goto LABEL_64;
  }
LABEL_18:
  sub_21B00(a1, (__int64)&v64);
  v20 = v71;
  qmemcpy((void *)a2, v83, 0x168u);
  v21 = v69;
  v22 = v65;
  if ( v20 )
  {
    v23 = v72;
    v24 = v20;
    v25 = 0;
    if ( (_QWORD)v72 )
    {
      do
      {
        if ( *v24 )
        {
          v24[1] = 0;
          qfree();
        }
        ++v25;
        v24 += 3;
      }
      while ( v23 != v25 );
    }
    qfree();
  }
  if ( v21 )
    qfree();
  if ( v22 )
    qfree();
  return 0;
}
