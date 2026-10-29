__int64 __fastcall sub_4D680(__int64 a1, int *a2, __int64 a3)
{
  int v5; // eax
  __int64 v7; // r15
  bool v8; // zf
  __int16 v10; // r14
  __int16 v11; // ax
  __int16 v12; // ax
  int v13; // r9d
  __int64 v14; // rcx
  __int16 v15; // ax
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // edx
  __int64 v19; // rcx
  int v20; // edi
  __int64 v21; // r14
  __int64 v22; // rax
  __int16 v23; // ax
  unsigned __int64 v24; // rsi
  char v25; // al
  unsigned __int16 v26; // dx
  char v27; // cl
  __int16 v28; // ax
  char v29; // cl
  __int64 defjump_from_table; // rax
  __int64 v31; // rdx
  __int16 v32; // ax
  __int64 v33; // [rsp+8h] [rbp-70h]
  int v34; // [rsp+1Ch] [rbp-5Ch]
  __int64 v35; // [rsp+20h] [rbp-58h]
  __int16 v36; // [rsp+2Ah] [rbp-4Eh]
  int v37; // [rsp+2Ch] [rbp-4Ch]
  int v38; // [rsp+2Ch] [rbp-4Ch]
  __int64 v39[9]; // [rsp+30h] [rbp-48h] BYREF

  v5 = *a2;
  v39[1] = __readfsqword(0x28u);
  *a2 = v5 | 1;
  v7 = *(_QWORD *)(a3 + 16);
  v8 = *(_BYTE *)(a3 + 45) == 2;
  v39[0] = v7;
  if ( v8 )
  {
    *a2 = v5 | 0x45;
    v25 = *(_BYTE *)(a3 + 73);
    if ( *(_BYTE *)(a3 + 41) != 2 || !*(_BYTE *)(a3 + 72) || (unsigned __int8)v25 >> 6 != 2 )
      return 0;
    v26 = *(_WORD *)(a3 + 24);
    v27 = v25 >> 3;
    v28 = (v25 >> 3) & 7;
    v29 = v27 & 7;
    if ( (*(_BYTE *)(a3 + 28) & 0x10) != 0 && (*(_BYTE *)(a3 + 33) & 2) != 0 )
    {
      if ( v26 > 0x5C0u )
      {
        if ( v26 > 0x5F1u )
        {
          if ( (unsigned __int16)(v26 - 1532) > 0xFu )
            return 0;
        }
        else if ( v26 <= 0x5EDu )
        {
          return 0;
        }
      }
      else if ( v26 <= 0x5BCu )
      {
        if ( v26 > 0x378u )
        {
          if ( (unsigned __int16)(v26 - 993) > 3u )
            return 0;
        }
        else if ( v26 <= 0x374u )
        {
          return 0;
        }
      }
      v28 = v29 | 8;
      goto LABEL_59;
    }
    if ( v26 > 0x5C0u )
    {
      if ( v26 > 0x5F1u )
      {
        if ( (unsigned __int16)(v26 - 1532) <= 0xFu )
          goto LABEL_59;
      }
      else if ( v26 > 0x5EDu )
      {
        goto LABEL_59;
      }
    }
    else
    {
      if ( v26 > 0x5BCu )
      {
LABEL_59:
        if ( (*(_BYTE *)(a3 + 273) & 0x10) != 0 )
          v28 |= 0x10u;
        v28 = sub_22710(a3, v28);
        goto LABEL_62;
      }
      if ( v26 > 0x378u )
      {
        if ( (unsigned __int16)(v26 - 993) <= 3u )
          goto LABEL_59;
      }
      else if ( v26 > 0x374u )
      {
        goto LABEL_59;
      }
    }
LABEL_62:
    if ( v28 != 1 )
      return 0;
    *((_QWORD *)a2 + 1) = sub_7F350(a1, a3, a3 + 40);
    goto LABEL_6;
  }
  if ( *(_BYTE *)(a3 + 41) != 4 || *(_WORD *)(a3 + 46) != 5 )
    return 0;
  *((_WORD *)a2 + 2) = (*(_QWORD *)(a3 + 56) >> 1) + 1;
LABEL_6:
  v10 = *(char *)(a3 + 32);
  if ( !*(_BYTE *)(a3 + 32) )
    v10 = 32;
  v39[0] = decode_prev_insn();
  if ( v39[0] != -1 )
  {
    *((_QWORD *)a2 + 3) = sub_47240(a1, a3, v39, v7);
    v11 = *(_WORD *)(a3 + 24);
    if ( v11 == 117 )
    {
      if ( (*(_WORD *)(a3 + 28) & 0x387) == 0 )
      {
        sub_7F350(a1, a3, a3 + 40);
        *a2 |= 0xAu;
        decode_prev_insn();
      }
    }
    else if ( v11 == 167 && (*(_DWORD *)(a3 + 28) & 0x387) == 4 && *(_BYTE *)(a3 + 45) == 1 )
    {
      v12 = sub_47060(a3, v39, 0);
      v34 = 2;
      v13 = 0;
      v36 = v12;
      v35 = -1;
      v33 = -1;
      while ( 1 )
      {
        v37 = v13;
        v39[0] = decode_prev_insn();
        v14 = v39[0];
        if ( v39[0] == -1
          || *(_WORD *)(a3 + 24) != 122
          || (*(_WORD *)(a3 + 28) & 0x387) != 0
          || *(_BYTE *)(a3 + 41) != 1
          || *(_BYTE *)(a3 + 81) != 5 )
        {
          return 0;
        }
        v15 = *(_WORD *)(a3 + 46);
        if ( v15 == 1 )
        {
          if ( (v37 & 1) != 0 )
            return 0;
          v31 = *(_QWORD *)(a3 + 88);
          v13 = v37 | 1;
          v32 = v31;
          if ( *((_QWORD *)a2 + 3) == -1 )
            v32 = v31 - 1;
          if ( (*(_BYTE *)a2 & 6) == 0 && *((_WORD *)a2 + 2) != v32 )
            return 0;
          *((_WORD *)a2 + 2) = v32;
          v35 = v14;
        }
        else
        {
          if ( v15 != 7 || (v37 & 2) != 0 || v36 != -1 && v10 != v36 )
            return 0;
          v38 = v37 | 2;
          v16 = calc_dataseg();
          if ( v16 == -1 )
            return 0;
          v13 = v38;
          v17 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
          v33 = v17 & (16 * v16);
          *((_QWORD *)a2 + 2) = v17 & (*(_QWORD *)(a3 + 88) + v33);
        }
        if ( v34 == 1 )
          break;
        v34 = 1;
      }
      v18 = *a2;
      v19 = *((_QWORD *)a2 + 3);
      if ( (*a2 & 4) != 0 )
      {
        if ( v19 != -1 )
        {
LABEL_34:
          v21 = v39[0];
          v39[0] = decode_prev_insn();
          if ( v39[0] == -1 )
            return 0;
          if ( *(_WORD *)(a3 + 24) == 53 && (*(_WORD *)(a3 + 28) & 0x387) == 0 )
          {
            v39[0] = decode_prev_insn();
            v21 = v39[0];
            if ( v39[0] == -1 )
              return 0;
            if ( *(_WORD *)(a3 + 24) != 27 )
              return 0;
            if ( (*(_WORD *)(a3 + 28) & 0x387) != 0 )
              return 0;
            if ( *(_BYTE *)(a3 + 41) != 1 )
              return 0;
            if ( *(_WORD *)(a3 + 46) )
              return 0;
            if ( *(_BYTE *)(a3 + 81) != 5 )
              return 0;
            v39[0] = decode_prev_insn();
            if ( v39[0] == -1 )
              return 0;
          }
          v22 = sub_47240(a1, a3, v39, v21);
          if ( v22 == -1 )
          {
            v39[0] = get_item_end();
          }
          else
          {
            if ( *((_QWORD *)a2 + 3) != v22 )
              return 0;
            v23 = *(_WORD *)(a3 + 24);
            if ( v23 != 131 && v23 != 210 )
              return 0;
            if ( (*(_WORD *)(a3 + 28) & 0x387) != 0
              || *(_BYTE *)(a3 + 41) != 1
              || *(_WORD *)(a3 + 46) != 2
              || !(unsigned __int8)sub_4D570(a3 + 40, a3 + 80) )
            {
              return 0;
            }
          }
          if ( v33 != -1 || calc_offset_base() != -1 )
          {
            get_default_reftype();
            op_offset();
          }
          sub_47740(v35, 1);
          if ( (*(_BYTE *)a2 & 4) == 0 )
            sub_47740(v7, 0);
          v24 = v39[0];
          *((_BYTE *)a2 + 68) = 1;
          a2[16] = 0;
          *((_QWORD *)a2 + 4) = v24;
          sub_47340(a1, v24, v7);
          return 1;
        }
      }
      else
      {
        v20 = 2;
        if ( (v18 & 2) != 0 )
          v20 = 4;
        *((_QWORD *)a2 + 1) = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL)
                            & (*((_QWORD *)a2 + 2) + v20 * *((unsigned __int16 *)a2 + 2));
        if ( v19 != -1 )
        {
LABEL_31:
          if ( (*(_BYTE *)a2 & 4) == 0 && v36 == -1 )
            sub_47060(a3, v39, 1);
          goto LABEL_34;
        }
      }
      *a2 = v18 | 0x20;
      defjump_from_table = find_defjump_from_table();
      *((_QWORD *)a2 + 3) = defjump_from_table;
      if ( defjump_from_table == -1 )
        return 0;
      goto LABEL_31;
    }
  }
  return 0;
}
