__int64 __fastcall sub_116C30(__int64 a1, __int64 a2, int *a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int16 v7; // si
  __int64 (__fastcall *v8)(__int64, unsigned __int8 *); // rbx
  __int64 v9; // rdi
  char v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int16 v13; // cx
  int v14; // esi
  __int64 result; // rax
  __int64 (__fastcall *v16)(__int64, unsigned __int8 *); // r15
  __int64 v17; // r14
  int v18; // r12d
  int v19; // ebp
  int i; // ebx
  unsigned __int8 *v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rsi
  int v25; // eax
  __int64 v26; // rsi
  __int64 v27; // r10
  char *v28; // rax
  unsigned int v29; // eax
  char *v30; // rdx
  __int64 v31; // rdi
  int v32; // ecx
  int v33; // eax
  __int64 v34; // [rsp+8h] [rbp-60h]
  unsigned int v35; // [rsp+8h] [rbp-60h]
  __int64 v36; // [rsp+10h] [rbp-58h]
  unsigned int v37; // [rsp+10h] [rbp-58h]
  char *v38; // [rsp+18h] [rbp-50h]

  v5 = *(_QWORD *)a2;
  if ( *(_WORD *)(*(_QWORD *)a2 + 8LL) <= 0xDu )
  {
    v6 = *(_QWORD *)(a2 + 8);
    v7 = *(_WORD *)(v6 + 20);
    if ( !**(_BYTE **)(v5 + 24) )
    {
      *(_WORD *)(a2 + 32) = 511;
      if ( (v7 & 4) == 0 )
      {
LABEL_4:
        if ( (v7 & 0x39) == 0 && !*(_QWORD *)(v5 + 32) )
        {
          *(_QWORD *)(a2 + 16) = *(_QWORD *)(v6 + 8);
          *(_DWORD *)(a2 + 24) = *(_DWORD *)(v6 + 16);
          v8 = (__int64 (__fastcall *)(__int64, unsigned __int8 *))sub_EEE80;
          goto LABEL_7;
        }
        goto LABEL_6;
      }
LABEL_45:
      *(_QWORD *)(a2 + 16) = *(_QWORD *)v6;
      v8 = (__int64 (__fastcall *)(__int64, unsigned __int8 *))sub_EED70;
      goto LABEL_7;
    }
    if ( (**(_BYTE **)(v5 + 24) & 2) == 0 )
    {
      *(_WORD *)(a2 + 32) = -255;
      if ( (v7 & 4) == 0 )
        goto LABEL_4;
      goto LABEL_45;
    }
  }
LABEL_6:
  v8 = (__int64 (__fastcall *)(__int64, unsigned __int8 *))sub_EEB60;
LABEL_7:
  *(_BYTE *)(a2 + 31) = 0;
  if ( !*(_BYTE *)a1 )
  {
    v9 = *(_QWORD *)(a1 + 136);
    if ( *(_BYTE *)(v9 + 8) )
    {
      v10 = *(_BYTE *)(a1 + 84);
      if ( v10 > 0 )
      {
        if ( *(_WORD *)(a1 + 88) < *(_WORD *)(*(_QWORD *)(a1 + 144) + 24LL) )
          goto LABEL_17;
        v11 = 0;
        while ( 2LL * (unsigned int)(v10 - 1) != v11 )
        {
          v12 = *(_QWORD *)(a1 + 4 * v11 + 152);
          v13 = *(_WORD *)(a1 + v11 + 90);
          v11 += 2;
          if ( v13 < *(_WORD *)(v12 + 24) )
            goto LABEL_17;
        }
      }
      v14 = *(unsigned __int16 *)(a1 + 86);
      if ( v14 == *(unsigned __int16 *)(v9 + 24) - 1 )
      {
        v33 = sub_D5A50(v9, v14, a2, v8);
        if ( v33 <= 0 && !*(_BYTE *)(a2 + 31) )
        {
          *a3 = v33;
          return 0;
        }
        v10 = *(_BYTE *)(a1 + 84);
      }
      if ( v10 > 0 && (int)sub_D5A50(*(_QWORD *)(a1 + 136), 0, a2, v8) <= 0 && !*(_BYTE *)(a2 + 31) )
      {
        *(_BYTE *)(a1 + 1) &= ~4u;
        goto LABEL_18;
      }
      *(_BYTE *)(a2 + 31) = 0;
    }
  }
LABEL_17:
  result = sub_EC330(a1);
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result == 16 )
    {
      *a3 = -1;
      return 0;
    }
    return result;
  }
LABEL_18:
  v16 = v8;
  v34 = a2;
LABEL_19:
  v17 = *(_QWORD *)(a1 + 136);
  v18 = 0;
  v19 = *(unsigned __int16 *)(v17 + 24) - 1;
  for ( i = v19 >> 1; ; i = (v18 + v19) >> 1 )
  {
    v21 = (unsigned __int8 *)(*(_QWORD *)(v17 + 104)
                            + (unsigned __int16)(*(_WORD *)(v17 + 26)
                                               & __ROL2__(*(_WORD *)(*(_QWORD *)(v17 + 96) + 2 * i), 8)));
    v22 = *v21;
    if ( (unsigned __int8)v22 <= *(_BYTE *)(v17 + 11) )
    {
      result = ((__int64 (__fastcall *)(__int64, unsigned __int8 *, __int64))v16)(v22, v21 + 1, v34);
      goto LABEL_25;
    }
    v25 = v21[1];
    if ( (v25 & 0x80u) == 0 )
    {
      v31 = v25 + (((_WORD)v22 << 7) & 0x3F80u);
      if ( *(unsigned __int16 *)(v17 + 14) >= (int)v31 )
      {
        result = ((__int64 (__fastcall *)(__int64, unsigned __int8 *, __int64))v16)(v31, v21 + 2, v34);
        goto LABEL_25;
      }
    }
    v26 = (__int64)&v21[-*(unsigned __int8 *)(v17 + 10)];
    (*(void (__fastcall **)(__int64, __int64, __int64))(v17 + 128))(v17, v26, a1 + 48);
    v27 = *(_QWORD *)(a1 + 48);
    if ( (int)v27 <= 1
      || (unsigned int)*(_QWORD *)(a1 + 48) / *(_DWORD *)(*(_QWORD *)(a1 + 32) + 56LL) > *(_DWORD *)(*(_QWORD *)(a1 + 32) + 64LL) )
    {
      break;
    }
    v36 = *(_QWORD *)(a1 + 48);
    v28 = (char *)sub_D1E10((int)v27 + 18, v26);
    if ( !v28 )
    {
      result = 7;
      goto LABEL_31;
    }
    *(_WORD *)(a1 + 86) = i;
    v38 = v28;
    v29 = sub_1159D0(a1, 0, v36, v28, 0);
    v30 = &v38[(int)v36];
    *(_OWORD *)v30 = 0;
    *((_WORD *)v30 + 8) = 0;
    *(_BYTE *)(a1 + 1) &= ~4u;
    if ( v29 )
    {
      v35 = v29;
      sub_C91C0((__int64)v38, 0);
      result = v35;
      goto LABEL_31;
    }
    v37 = sub_EE540(v36, v38, (__int64 *)v34, 0, 0.0);
    sub_C91C0((__int64)v38, (__int64)v38);
    result = v37;
LABEL_25:
    if ( (int)result < 0 )
    {
      v18 = i + 1;
      if ( i + 1 <= v19 )
        continue;
LABEL_27:
      if ( *(_BYTE *)(v17 + 8) )
      {
        *(_WORD *)(a1 + 86) = i;
        *a3 = result;
        result = 0;
        goto LABEL_31;
      }
      v23 = *(_QWORD *)(v17 + 80);
      if ( *(unsigned __int16 *)(v17 + 24) > v18 )
        v24 = _byteswap_ulong(*(_DWORD *)(v23
                                        + (unsigned __int16)(*(_WORD *)(v17 + 26)
                                                           & __ROL2__(*(_WORD *)(*(_QWORD *)(v17 + 96) + 2 * v18), 8))));
      else
        v24 = _byteswap_ulong(*(_DWORD *)(v23 + *(unsigned __int8 *)(v17 + 9) + 8));
      *(_WORD *)(a1 + 86) = v18;
      result = sub_EBEA0(a1, v24);
      if ( (_DWORD)result )
        goto LABEL_31;
      goto LABEL_19;
    }
    if ( !(_DWORD)result )
    {
      *a3 = 0;
      *(_WORD *)(a1 + 86) = i;
      if ( *(_BYTE *)(v34 + 31) )
      {
        v32 = 72660;
        goto LABEL_48;
      }
LABEL_31:
      *(_WORD *)(a1 + 70) = 0;
      return result;
    }
    v19 = i - 1;
    if ( v18 > i - 1 )
      goto LABEL_27;
  }
  v32 = 72628;
LABEL_48:
  sub_E8BB0(
    0xBu,
    "%s at line %d of [%.10s]",
    "database corruption",
    v32,
    "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
  *(_WORD *)(a1 + 70) = 0;
  return 11;
}
