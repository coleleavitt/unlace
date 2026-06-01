__int64 __fastcall sub_89C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  __int64 v5; // rax
  __int16 v6; // ax
  int v7; // esi
  unsigned __int64 v8; // rbx
  unsigned __int8 byte; // r12
  __int64 v10; // r15
  __int64 v11; // r14
  __int64 v12; // r13
  unsigned int v13; // eax
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 v16; // r13
  unsigned int v17; // eax
  unsigned __int8 v18; // cl
  int v19; // r12d
  __int64 v20; // r15
  __int64 v21; // r14
  __int64 v22; // r13
  unsigned __int8 v23; // al
  int v24; // eax
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r9
  __int64 v29; // r8
  __int64 v30; // rbx
  __int64 v31; // r12
  int v32; // edx
  __int64 v33; // rcx
  __int64 flags; // rax
  unsigned __int8 v36; // [rsp+8h] [rbp-50h]
  unsigned __int8 v37; // [rsp+8h] [rbp-50h]
  unsigned __int8 v38; // [rsp+8h] [rbp-50h]
  __int64 v39; // [rsp+8h] [rbp-50h]
  __int64 v40; // [rsp+10h] [rbp-48h]
  unsigned __int8 v41; // [rsp+1Eh] [rbp-3Ah]
  unsigned __int8 v42; // [rsp+1Eh] [rbp-3Ah]
  char v43; // [rsp+1Fh] [rbp-39h]

  v4 = a2;
  v5 = *(_QWORD *)(a2 + 8) & 0xFLL;
  if ( v5 == 6 )
  {
    flags = get_flags_ex(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF0LL, 4, a3, a4, a2);
    v4 = a2;
    if ( (~BYTE1(flags) & 6) == 0 )
    {
      v43 = 0;
      v6 = 6;
      v7 = 1;
      goto LABEL_5;
    }
    return 0;
  }
  if ( v5 == 12 )
  {
    if ( (~((unsigned __int16)get_flags_ex(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF0LL, 4, a3, a4, a2) >> 8) & 6) == 0 )
    {
      v43 = 0;
      v4 = a2;
      v6 = 4;
      v7 = 2;
      goto LABEL_5;
    }
    return 0;
  }
  if ( v5 )
    return 0;
  v43 = 1;
  v6 = 6;
  v7 = 0;
LABEL_5:
  *(_WORD *)(v4 + 26) = v6;
  *(_DWORD *)(a1 + 208) = v7;
  *(_QWORD *)(a1 + 216) = -1;
  v8 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFF0LL;
  v40 = v4;
  byte = get_byte(v8);
  v10 = (unsigned __int8)get_byte(v8 + 1);
  v11 = (unsigned __int8)get_byte(v8 + 2);
  v12 = (unsigned __int8)get_byte(v8 + 3);
  v36 = get_byte(v8 + 4);
  v13 = get_byte(v8 + 5);
  v41 = v13;
  *(_QWORD *)(a1 + 184) = ((unsigned __int64)v13 << 35) & 0x1F800000000LL
                        | ((unsigned __int64)v36 << 27)
                        | (byte >> 5)
                        | (unsigned __int64)(8 * v10)
                        | (v11 << 11)
                        | (v12 << 19);
  v14 = (unsigned __int8)get_byte(v8 + 6);
  v15 = (unsigned __int8)get_byte(v8 + 7);
  v16 = (unsigned __int8)get_byte(v8 + 8);
  v37 = get_byte(v8 + 9);
  v17 = get_byte(v8 + 10);
  v18 = v41 >> 6;
  v42 = v17;
  v19 = byte & 0x1F;
  *(_QWORD *)(a1 + 192) = ((unsigned __int64)v17 << 34) & 0x1FC00000000LL
                        | ((unsigned __int64)v37 << 26)
                        | (v16 << 18)
                        | (v15 << 10)
                        | (4 * v14)
                        | v18;
  v20 = (unsigned __int8)get_byte(v8 + 11);
  v21 = (unsigned __int8)get_byte(v8 + 12);
  v22 = (unsigned __int8)get_byte(v8 + 13);
  v38 = get_byte(v8 + 14);
  v23 = get_byte(v8 + 15);
  *(_DWORD *)(a1 + 212) = v19;
  *(_QWORD *)(a1 + 200) = ((unsigned __int64)v23 << 33)
                        | ((unsigned __int64)v38 << 25)
                        | (v22 << 17)
                        | (v21 << 9)
                        | (2 * v20)
                        | (v42 >> 7);
  if ( (v19 & 0xFFFFFFFE) == 4 && v43 )
    *(_WORD *)(v40 + 26) = 12;
  v24 = *((_DWORD *)&unk_22500 + 6 * (v19 >> 1) + v7 + 1);
  if ( !v24 )
    return 0;
  v25 = *(_QWORD *)(a1 + 8LL * v7 + 184);
  v26 = (unsigned int)(v24 - 1);
  if ( (v25 & 0x10000000000LL) == 0 || (v27 = 1, (unsigned int)v26 > 1) )
  {
    v27 = 0xFFFFFFFFLL;
    if ( (unsigned int)v26 <= 5 )
      v27 = dword_CD70[v26];
  }
  if ( !(unsigned __int8)sub_7FE0(a1, v40, v25, v27, (void *)v40) )
    return 0;
  v29 = v40;
  v30 = 0;
  v31 = v40 + 40;
  *(_QWORD *)(a1 + 216) = *(_QWORD *)(v40 + 16);
  do
  {
    v32 = v30;
    if ( !*(_DWORD *)(a1 + 4 * v30 + 160) )
      break;
    v33 = v31;
    ++v30;
    v39 = v29;
    v31 += 40;
    sub_82F0(a1, v29, v32, v33, v29, v28);
    v29 = v39;
  }
  while ( v30 != 3 );
  return *(unsigned __int16 *)(v29 + 26);
}

