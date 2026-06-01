__int64 __fastcall sub_3C920(_QWORD *a1, __int64 a2, __int64 a3, __int16 a4)
{
  __int64 v6; // rax
  unsigned __int64 v8; // rbp
  _QWORD *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r14
  __int16 v13; // ax
  bool v14; // zf
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rax
  int v20; // ecx
  int v21; // r12d
  __int64 v22; // rax
  char v23; // al
  __int64 v24; // rdx
  unsigned int v25; // ecx
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // [rsp+10h] [rbp-58h] BYREF
  __m128i si128; // [rsp+18h] [rbp-50h]
  __int64 v32; // [rsp+28h] [rbp-40h]
  __int64 v33; // [rsp+30h] [rbp-38h]
  unsigned __int64 v34; // [rsp+38h] [rbp-30h]

  v6 = a1[5];
  v34 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(*(_QWORD *)(v6 + 8) + 16LL) & a2;
  if ( !(unsigned __int8)is_loaded() )
    return 0;
  v10 = (_QWORD *)a1[6];
  v11 = v10[30];
  if ( *(_QWORD *)(v10[1] + 16LL) != v11 && v11 != -1 && (!v10[23] || !rangeset_t_find_range()) )
    return 0;
  v12 = a1[7];
  v13 = 4;
  v30 = 0;
  v32 = 0;
  v14 = *(_BYTE *)(v12 + 161) == 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_57480);
  v33 = 0;
  if ( !v14 )
    v13 = 12;
  LOWORD(v30) = v13;
  switch ( a4 )
  {
    case 1:
    case 7:
      if ( (unsigned __int64)a3 >> 62 == 2 )
        goto LABEL_69;
      if ( (a3 & 0x4000000000000000LL) != 0 )
      {
        v25 = (unsigned __int16)a3;
        goto LABEL_43;
      }
      if ( a4 == 1 )
      {
        v32 = a3 & 0x7FFFFFFFFFFLL;
        v16 = a1[5];
      }
      else
      {
LABEL_69:
        if ( !*(_BYTE *)(v12 + 440) )
          sub_28840(v12);
        v15 = *(_QWORD *)(v12 + 448);
        if ( v15 == -1 )
          v15 = 0;
        v16 = a1[5];
        v32 = *(_QWORD *)(*(_QWORD *)(v16 + 8) + 16LL) & (v15 + (unsigned int)a3);
      }
      goto LABEL_18;
    case 2:
    case 6:
      if ( a3 < 0 )
      {
        if ( !(unsigned __int8)sub_3C720(a1, (__int64)&v30, v8, a3 & 0xFFFFFF) )
          return 0;
        v33 += BYTE3(a3);
        v16 = a1[5];
      }
      else
      {
        v17 = a3 & 0xFFFFFFFFFLL;
        if ( a4 != 6 )
        {
LABEL_23:
          v32 = v17;
          goto LABEL_24;
        }
        if ( !*(_BYTE *)(v12 + 440) )
          sub_28840(v12);
        v29 = *(_QWORD *)(v12 + 448);
        v16 = a1[5];
        if ( v29 == -1 )
          v29 = 0;
        v32 = v17 + v29;
      }
      goto LABEL_18;
    case 8:
    case 11:
      v18 = a1[6];
      v19 = a3 & 0x3FFFFFFF;
      v20 = *(_DWORD *)(v18 + 232);
      v21 = ((unsigned __int64)a3 >> 30) & 3;
      if ( v21 )
      {
        if ( (_BYTE)v21 != 1 )
        {
          if ( v20 != 3 )
            goto LABEL_28;
          v27 = *(_QWORD *)(*(_QWORD *)(a1[5] + 8LL) + 16LL) & (*(_QWORD *)(v18 + 224) + v19);
          v32 = v27;
          goto LABEL_47;
        }
        v26 = a1[5];
        if ( v20 != 2 )
        {
LABEL_46:
          netnode_supset();
          v27 = v32;
          goto LABEL_47;
        }
      }
      else
      {
        v26 = a1[5];
        if ( v20 != 1 )
          goto LABEL_46;
      }
      v27 = *(_QWORD *)(*(_QWORD *)(v26 + 8) + 16LL) & (*(_QWORD *)(v18 + 224) + v19);
      v32 = v27;
LABEL_47:
      if ( v27 )
      {
LABEL_24:
        v16 = a1[5];
        goto LABEL_18;
      }
LABEL_28:
      create_data();
      return 0;
    case 9:
      if ( !*(_BYTE *)(v12 + 440) )
        sub_28840(v12);
      v22 = *(_QWORD *)(v12 + 448);
      if ( v22 == -1 )
        v22 = 0;
      v17 = v22 + (a3 & 0xFFFFFFFFFLL);
      goto LABEL_23;
    case 10:
      v32 = a3 & 0xFFFFFFFFFLL;
      v16 = a1[5];
      goto LABEL_18;
    case 12:
      if ( (a3 & 0x4000000000000000LL) != 0 )
      {
        v25 = a3 & 0xFFFFFF;
LABEL_43:
        if ( !(unsigned __int8)sub_3C720(a1, (__int64)&v30, v8, v25) )
          return 0;
        v16 = a1[5];
      }
      else
      {
        v23 = *(_BYTE *)(v12 + 440);
        if ( a3 < 0 )
        {
          if ( !v23 )
            sub_28840(v12);
          v28 = *(_QWORD *)(v12 + 448);
          if ( v28 == -1 )
            v28 = 0;
          v32 = (unsigned int)a3 + v28;
          v16 = a1[5];
        }
        else
        {
          if ( !v23 )
            sub_28840(v12);
          v24 = *(_QWORD *)(v12 + 448);
          if ( v24 == -1 )
            v24 = 0;
          v32 = v24 + (a3 & 0xFFFFFFFFFLL);
          v16 = a1[5];
        }
      }
LABEL_18:
      if ( (*(_BYTE *)(v16 + 13689) & 8) == 0 )
        patch_qword();
      set_fixup();
      return 0;
    default:
      return 0;
  }
}

