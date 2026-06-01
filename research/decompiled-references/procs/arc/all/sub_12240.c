__int64 __fastcall sub_12240(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  char *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // r9
  const char *v10; // rdx
  unsigned __int64 v12; // rax
  void *v13; // rax
  void *v14; // rsi
  unsigned __int64 v15; // r14
  int v16; // edx
  __int64 v17; // rax
  int v18; // [rsp+0h] [rbp-1CCh] BYREF
  __int128 v19; // [rsp+4h] [rbp-1C8h] BYREF
  __int64 v20; // [rsp+14h] [rbp-1B8h]
  __int64 v21; // [rsp+1Ch] [rbp-1B0h]
  __int64 v22; // [rsp+24h] [rbp-1A8h]
  char v23; // [rsp+2Ch] [rbp-1A0h] BYREF
  char v24; // [rsp+2Dh] [rbp-19Fh]
  __int16 v25; // [rsp+32h] [rbp-19Ah]
  unsigned __int64 v26; // [rsp+3Ch] [rbp-190h]
  char v27; // [rsp+55h] [rbp-177h]
  unsigned __int64 v28; // [rsp+5Ch] [rbp-170h]
  _BYTE v29[8]; // [rsp+16Ch] [rbp-60h] BYREF
  __int64 v30; // [rsp+174h] [rbp-58h] BYREF
  __int64 v31; // [rsp+17Ch] [rbp-50h]
  __int64 v32; // [rsp+184h] [rbp-48h]
  __int64 v33; // [rsp+18Ch] [rbp-40h]
  unsigned __int64 v34; // [rsp+19Ch] [rbp-30h]

  v34 = __readfsqword(0x28u);
  v5 = &v23;
  v19 = -1;
  v20 = -1;
  v21 = 0;
  v22 = 0;
  do
  {
    *(_WORD *)v5 = 0;
    v5 += 40;
    *((_WORD *)v5 - 19) = 0;
    *((_WORD *)v5 - 18) = 0;
    *((_DWORD *)v5 - 2) = 0;
    *((_WORD *)v5 - 17) = 0;
    *((_OWORD *)v5 - 2) = 0;
    *((_QWORD *)v5 - 2) = 0;
  }
  while ( v29 != v5 );
  if ( (int)decode_insn(&v19, a3, v29, 0.0) <= 0 )
    return 0;
  if ( (_WORD)v21 == 27 )
  {
    if ( v24 == 1 )
    {
      if ( v25 == 13 )
      {
        if ( v27 == 5 )
        {
          v15 = v28;
          if ( (v28 & 3) == 0 && (int)decode_insn(&v19, v20 + WORD1(v21), v6, 0.0) > 0 && (_WORD)v21 == 14 && v24 == 7 )
          {
            if ( (unsigned __int8)sub_11E80(a1, &v18, v26) )
            {
              v16 = (v15 >> 2) + 12;
              if ( v18 == v16 )
              {
                sub_11D90(a2, (__int64)"__ac_pop_13_to_%dv", v16);
                goto LABEL_10;
              }
            }
          }
        }
      }
      else if ( v25 == 12 && v27 == 5 && v28 == 4 )
      {
        if ( (unsigned __int8)sub_12240(a1, a2, v20 + WORD1(v21)) )
        {
          v12 = a2[1];
          if ( v12 > 1 && *(_BYTE *)(*a2 + v12 - 2) == 118 )
          {
            sub_F890(a2, v12 - 2);
            goto LABEL_10;
          }
        }
      }
    }
    return 0;
  }
  if ( (_WORD)v21 == 14 )
  {
    if ( v24 == 7 && (unsigned __int8)sub_11E80(a1, &v18, v26) && v18 == 31 )
    {
      if ( (unsigned __int64)a2[2] <= 0xE )
        *a2 = qvector_reserve(a2, *a2, 15, 1);
      v13 = (void *)*a2;
      a2[1] = 15;
      qmemcpy(v13, "__ac_pop_nonev", 14);
      v7 = 0x76656E6F6E5F706FLL;
      *(_BYTE *)(*a2 + 14) = 0;
      goto LABEL_10;
    }
    return 0;
  }
  if ( (_WORD)v21 != 3 && (_WORD)v21 != 45 )
    return 0;
  if ( !(unsigned __int8)sub_C580(&v18, a3) )
  {
    if ( get_bytes(&v30, 32, a3, 1, 0) == 32
      && (!(v31 ^ 0xC2E1C3E1B1081CFCLL | v30 ^ 0xB1481CFCB1881CFCLL)
       && !(v33 ^ 0xC0017FE0C0E131C0LL | v32 ^ 0x1C1CC007C0E1C1E1LL)
       || !(v31 ^ 0xC2E1C3E1B1081CFCLL | v30 ^ 0xB1481CFCB1881CFCLL)
       && !(v33 ^ 0x7EE0C001C0E131C0LL | v32 ^ 0x1C1CC007C0E1C1E1LL)) )
    {
      v14 = (void *)*a2;
      if ( (unsigned __int64)a2[2] <= 0xA )
      {
        v17 = qvector_reserve(a2, v14, 11, 1);
        *a2 = v17;
        v14 = (void *)v17;
      }
      a2[1] = 11;
      qmemcpy(v14, "__ac_mc_va", 10);
      *(_BYTE *)(*a2 + 10) = 0;
      goto LABEL_10;
    }
    return 0;
  }
  sub_11D90(a2, (__int64)"__ac_push_13_to_%d", v18);
LABEL_10:
  v10 = needle;
  if ( a2[1] )
    v10 = (const char *)*a2;
  sub_F720(a1, a3, v10, v7, v8, v9);
  return 1;
}
