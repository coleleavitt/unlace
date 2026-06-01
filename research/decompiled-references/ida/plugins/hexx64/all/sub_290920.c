__int64 __fastcall sub_290920(__int64 a1, __int64 *a2, __m128 a3)
{
  __int64 v3; // rax
  __int64 v4; // r14
  __int64 v5; // r12
  int v6; // eax
  char v7; // al
  char tinfo_property; // al
  __int64 tinfo_size; // r14
  unsigned int v10; // ebx
  int v12; // r15d
  int v13; // r14d
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // rdx
  int v17; // edx
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // rax
  const char *v21; // r14
  int v22; // eax
  bool v23; // r12
  __int64 v24; // [rsp+8h] [rbp-70h]
  int v25; // [rsp+8h] [rbp-70h]
  __int64 v26; // [rsp+8h] [rbp-70h]
  __int64 v27; // [rsp+8h] [rbp-70h]
  __int64 v28; // [rsp+8h] [rbp-70h]
  __int64 v29; // [rsp+10h] [rbp-68h]
  __int64 v30; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v31[9]; // [rsp+30h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a1 + 72);
  v31[1] = __readfsqword(0x28u);
  v30 = 0;
  v4 = *(_QWORD *)(v3 + 112);
  v5 = a2[3];
  if ( !(unsigned __int8)sub_284900((_QWORD *)a1, (int)&v30, (__int64)a2, *(double *)a3.m128_u64) )
  {
    v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8) + 8LL);
    if ( v6 == 72 )
      goto LABEL_9;
    if ( (unsigned int)(v6 - 73) <= 3 )
    {
      if ( (v7 = get_tinfo_property(), (v7 & 0x3E) != 0) && (v7 & 0xFu) <= 8 || (get_tinfo_property() & 0xF) == 0xA )
      {
        tinfo_property = get_tinfo_property();
        if ( ((tinfo_property & 0x3E) == 0 || (tinfo_property & 0xFu) > 8) && (get_tinfo_property() & 0xF) != 0xA )
        {
          v10 = 0;
          goto LABEL_13;
        }
        tinfo_size = get_tinfo_size();
        if ( get_tinfo_size() == tinfo_size )
          goto LABEL_9;
      }
    }
    goto LABEL_25;
  }
  if ( *(_DWORD *)(v5 + 8) != 16
    || !sub_2806B0(v4, *(_QWORD *)(v5 + 32), (__int64)(a2 + 6))
    && !sub_2806B0(v4, *(_QWORD *)(v5 + 40), (__int64)(a2 + 6)) )
  {
    v12 = get_tinfo_size();
    v13 = get_tinfo_size();
    v14 = get_tinfo_size();
    v15 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
    v16 = *(int *)(v15 + 8);
    if ( (unsigned int)(v16 - 2) <= 0xD && (*((_BYTE *)&off_4E0320 + 16 * v16 + 11) & 8) == 0 )
    {
      v24 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
      v14 = get_tinfo_size();
      v15 = v24;
    }
    if ( v13 == -1 || v12 == -1 || v14 == -1 )
      goto LABEL_25;
    v17 = v12;
    if ( v14 <= v12 )
      v17 = v14;
    if ( v17 > v13 )
      goto LABEL_25;
    if ( v14 > v13 )
    {
      v29 = v15;
      v25 = get_tinfo_property();
      if ( v25 != (unsigned int)get_tinfo_property() )
        goto LABEL_25;
      v15 = v29;
    }
    v26 = v15;
    if ( (get_tinfo_property() & 0x3F) == 0x2D || (unsigned __int8)sub_280B80(*(_QWORD *)(a1 + 72), a2[3]) )
      goto LABEL_25;
    v18 = v26;
    if ( *(_DWORD *)(v26 + 8) == 51 )
    {
      if ( (get_tinfo_property() & 0xF) != 0xA )
        goto LABEL_25;
      v31[0] = 0;
      v31[0] = get_tinfo_property();
      if ( !sub_26C510((__int64)v31, v26) )
      {
        v10 = 0;
        clear_tinfo_t();
        goto LABEL_13;
      }
      clear_tinfo_t();
      v18 = v26;
    }
    v27 = v18;
    if ( !(unsigned __int8)sub_28FF70(a1, (__int64)a2, (__int64)a2, *(double *)a3.m128_u64) )
    {
LABEL_25:
      v10 = 0;
      goto LABEL_13;
    }
    v19 = v27;
    if ( *(_DWORD *)(v27 + 8) != 57 || (v20 = *(_QWORD *)(v27 + 24), *(_DWORD *)(v20 + 8) != 68) )
    {
LABEL_40:
      sub_255850(a2, a2[3], *(double *)a3.m128_u64);
      goto LABEL_10;
    }
    if ( v12 <= v13 )
    {
      if ( v12 < v13 )
        goto LABEL_51;
    }
    else
    {
      v21 = *(const char **)(v20 + 24);
      if ( !strcmp(v21, "__CFADD__") )
        goto LABEL_25;
      if ( !strcmp(v21, "__OFADD__") )
        goto LABEL_25;
      if ( !strcmp(v21, "__CFSUB__") )
        goto LABEL_25;
      v22 = strcmp(v21, "__OFSUB__");
      v19 = v27;
      if ( !v22 )
        goto LABEL_25;
    }
    v28 = v19;
    v23 = sub_27F060();
    if ( v23 == sub_27F060() )
      goto LABEL_40;
    v20 = *(_QWORD *)(v28 + 24);
LABEL_51:
    if ( !strncmp(*(const char **)(v20 + 24), "COERCE_", 7u) )
    {
      v10 = 0;
      goto LABEL_13;
    }
    goto LABEL_40;
  }
  sub_246B40(*(_QWORD *)(v5 + 32), *(_QWORD *)(a1 + 72), a2 + 6, *(double *)a3.m128_u64);
  sub_246B40(*(_QWORD *)(v5 + 40), *(_QWORD *)(a1 + 72), a2 + 6, *(double *)a3.m128_u64);
  sub_2441C0(v5, v4, 0, *(double *)a3.m128_u64);
LABEL_9:
  sub_255850(a2, v5, *(double *)a3.m128_u64);
LABEL_10:
  if ( (unsigned __int8)sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), a3) )
    *(_DWORD *)(a1 + 8) |= 8u;
  v10 = 1;
LABEL_13:
  clear_tinfo_t();
  return v10;
}

