__int64 __fastcall sub_35C70(const __m128i *a1)
{
  const __m128i *v2; // rdi
  const char *v3; // rbp
  unsigned __int32 v4; // edx
  char tinfo_property; // al
  __int64 *v7; // rax
  const char *v8; // r12
  __int64 *v9; // rax
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  const char *v13; // rsi
  __int64 v14; // rax
  __int64 *v15; // rax
  int tinfo_size; // eax
  __int64 idati; // rax
  int v18; // eax
  __int64 v19; // rax
  __int64 *v20; // rax
  __int64 *v21; // rax
  __int64 *v22; // rax
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  const char *v26; // rsi
  int v27; // eax
  __int64 *v28; // rax
  const char *v29; // rbp
  __int64 *v30; // rax
  int v31; // ecx
  int v32; // r8d
  int v33; // r9d
  const char *v34; // rsi
  __int64 v35; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v36[2]; // [rsp+10h] [rbp-38h] BYREF
  __int16 v37; // [rsp+20h] [rbp-28h]
  unsigned __int64 v38; // [rsp+28h] [rbp-20h]

  v38 = __readfsqword(0x28u);
  v2 = (const __m128i *)a1[5].m128i_i64[1];
  if ( v2 == a1 )
  {
    LODWORD(v3) = 3;
    return (unsigned int)v3;
  }
  LODWORD(v3) = v2[8].m128i_u8[14];
  if ( !(_BYTE)v3 )
  {
    v35 = 0x4528FF010435BBCALL;
    v14 = sub_856E0(&v35, &a1[4]);
    v36[0] = 0x4E7B30A9EA4DB41LL;
    v15 = (__int64 *)sub_856E0(v14, v36);
    sub_349E0((__int64)a1, v15);
    create_tinfo(&a1->m128i_u64[1], 1, 7, 0);
    sub_30CA0((__int64)a1);
    tinfo_size = get_tinfo_size(0, a1->m128i_i64[1], 0);
    sub_345A0((__int64)a1, tinfo_size);
    LODWORD(v3) = *(unsigned __int8 *)(a1[5].m128i_i64[1] + 142);
    return (unsigned int)v3;
  }
  if ( (_BYTE)v3 != 5 )
  {
    v35 = 0;
    v4 = v2[8].m128i_u32[0];
    if ( v4 )
    {
      idati = *(_QWORD *)(*(_QWORD *)(a1[5].m128i_i64[0] + 144) + 96LL);
      v37 = 1;
      v36[1] = v4;
      if ( !idati )
        idati = get_idati();
      v36[0] = idati;
      create_tinfo(&v35, 61, 189, v36);
    }
    else
    {
      if ( !v2[4].m128i_i64[0] )
      {
        tinfo_property = get_tinfo_property(v2->m128i_i64[1], 2);
        v2 = (const __m128i *)a1[5].m128i_i64[1];
        if ( (tinfo_property & 0xF) == 0xD && (tinfo_property & 0x3F) != 0x3D )
        {
          v27 = get_tinfo_property(v2->m128i_i64[1], 7);
          v2 = (const __m128i *)a1[5].m128i_i64[1];
          if ( !v27 )
          {
            sub_34910(v2);
            v2 = (const __m128i *)a1[5].m128i_i64[1];
          }
        }
      }
      if ( !(unsigned __int8)sub_350A0((__int64)v2, (__int64)&v35) )
      {
        if ( (debug & 0x400000) != 0 )
        {
          v28 = sub_34340(a1[5].m128i_i64[1]);
          v29 = src;
          if ( v28[1] )
            v29 = (const char *)*v28;
          v30 = sub_34340((__int64)a1);
          v34 = src;
          if ( v30[1] )
            v34 = (const char *)*v30;
          sub_88B80(
            (unsigned int)"Error pointer DIE %s propagating DIE %s type information\n",
            (_DWORD)v34,
            (_DWORD)v29,
            v31,
            v32,
            v33);
        }
        LODWORD(v3) = 5;
LABEL_10:
        clear_tinfo_t(&v35);
        return (unsigned int)v3;
      }
    }
    copy_tinfo_t(&a1->m128i_u64[1], &v35);
    if ( !(unsigned __int8)sub_30CA0((__int64)a1) && (debug & 0x400000) != 0 )
    {
      v21 = sub_34340(a1[5].m128i_i64[1]);
      v3 = src;
      if ( v21[1] )
        v3 = (const char *)*v21;
      v22 = sub_34340((__int64)a1);
      v26 = src;
      if ( v22[1] )
        v26 = (const char *)*v22;
      sub_88B80(
        (unsigned int)"Error pointer DIE %s propagating DIE %s type information\n",
        (_DWORD)v26,
        (_DWORD)v3,
        v23,
        v24,
        v25);
    }
    v18 = get_tinfo_size(0, a1->m128i_i64[1], 0);
    sub_345A0((__int64)a1, v18);
    v36[0] = 0x4528FF010435BBCALL;
    v19 = sub_856E0(v36, &a1[4]);
    v20 = (__int64 *)sub_856E0(v19, a1[5].m128i_i64[1] + 72);
    sub_349E0((__int64)a1, v20);
    LOBYTE(v3) = *(_BYTE *)(a1[5].m128i_i64[1] + 142) == 4;
    LODWORD(v3) = (_DWORD)v3 + 3;
    goto LABEL_10;
  }
  if ( (debug & 0x400000) != 0 )
  {
    v7 = sub_34340((__int64)v2);
    v8 = src;
    if ( v7[1] )
      v8 = (const char *)*v7;
    v9 = sub_34340((__int64)a1);
    v13 = src;
    if ( v9[1] )
      v13 = (const char *)*v9;
    sub_88B80((unsigned int)"Error pointer DIE %s dependency DIE %s\n", (_DWORD)v13, (_DWORD)v8, v10, v11, v12);
  }
  return (unsigned int)v3;
}
