__int64 __fastcall sub_BDCB0(_QWORD *a1, __int64 a2, __m128i a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  char v6; // al
  __int64 v7; // rax
  char *v8; // r8
  __int64 v9; // r10
  unsigned __int64 v10; // r13
  unsigned int v11; // ebx
  __int64 v12; // rsi
  char v14; // al
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned int tinfo_size; // eax
  unsigned __int64 v22; // [rsp+18h] [rbp-68h] BYREF
  __int64 v23; // [rsp+20h] [rbp-60h] BYREF
  __int64 v24; // [rsp+28h] [rbp-58h] BYREF
  __int64 tinfo_property; // [rsp+30h] [rbp-50h]
  __int64 v26; // [rsp+38h] [rbp-48h]
  unsigned __int64 v27; // [rsp+48h] [rbp-38h]

  v5 = a2;
  v6 = *(_BYTE *)a2;
  v27 = __readfsqword(0x28u);
  v22 = 0;
  if ( v6 == 4 )
  {
    v12 = *(_QWORD *)(a2 + 8);
    if ( *(_DWORD *)v12 == 12 )
    {
      v14 = sub_BDBF0((__int64)a1, (unsigned __int8 *)(v12 + 32), (__int64 *)&v22, a5, a3);
      v16 = *(_QWORD *)(v5 + 8);
      if ( v14 )
      {
        v6 = *(_BYTE *)(v16 + 48);
        v5 = v16 + 48;
        goto LABEL_2;
      }
      if ( (unsigned __int8)sub_BDBF0((__int64)a1, (unsigned __int8 *)(v16 + 48), (__int64 *)&v22, v15, a3) )
      {
        v5 = *(_QWORD *)(v5 + 8) + 32LL;
        v6 = *(_BYTE *)v5;
        goto LABEL_2;
      }
    }
    return 0;
  }
LABEL_2:
  if ( v6 != 9 )
    return 0;
  v7 = *(_QWORD *)(v5 + 8);
  if ( *(_QWORD *)(v7 + 8) )
    return 0;
  v8 = *(char **)(a1[8] + 8LL * *(int *)(v7 + 16));
  if ( !v8 )
    return 0;
  v9 = a1[41];
  v23 = 0;
  v10 = v22;
  v11 = sub_BA670(v9, &v23, 0, 0, v8, *(_QWORD ***)(v9 + 800), 0, 0, a1 + 49);
  if ( (_BYTE)v11 )
  {
    if ( (get_tinfo_property() & 0xF) == 0xB )
    {
      tinfo_property = 0;
      tinfo_property = get_tinfo_property();
      copy_tinfo_t();
      clear_tinfo_t();
    }
    v24 = 0;
    copy_tinfo_t();
    tinfo_property = 0;
    v17 = get_tinfo_property();
    tinfo_property = v17;
    if ( (_BYTE)v17
      && (v18 = v23,
          v23 = v17,
          tinfo_property = v18,
          clear_tinfo_t(),
          tinfo_property = 0,
          v19 = get_tinfo_property(),
          tinfo_property = v19,
          (_BYTE)v19) )
    {
      v20 = v24;
      v24 = v19;
      tinfo_property = v20;
      clear_tinfo_t();
    }
    else
    {
      clear_tinfo_t();
      if ( v10 )
      {
        v11 = 0;
        goto LABEL_23;
      }
    }
    if ( (get_tinfo_property() & 0xF) == 0xB )
    {
      tinfo_property = 0;
      v26 = 0;
      if ( !(unsigned __int8)get_tinfo_details()
        || (tinfo_size = get_tinfo_size()) == 0
        || v10 / tinfo_size >= HIDWORD(v26) )
      {
        v11 = 0;
        clear_tinfo_t();
        goto LABEL_23;
      }
      clear_tinfo_t();
    }
    v11 = sub_B80A0(&v23, v10, (__int64)&v24, 0, nullptr);
LABEL_23:
    clear_tinfo_t();
    clear_tinfo_t();
    return v11;
  }
  clear_tinfo_t();
  return v11;
}

