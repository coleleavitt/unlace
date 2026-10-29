__int64 __fastcall sub_396A30(__int64 a1, __int64 a2, int a3, double a4, __m128 a5, __m128i a6, double a7)
{
  const char *v8; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  const char *v12; // rsi
  __int64 v13; // rdx
  int v14; // edi
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rsi
  char *v21; // rdi
  __int64 v22; // r9
  const char *v23; // rax
  __int64 v24; // [rsp+0h] [rbp-120h]
  __int64 tinfo_size; // [rsp+8h] [rbp-118h]
  int v26; // [rsp+10h] [rbp-110h]
  unsigned __int8 v27; // [rsp+1Fh] [rbp-101h]
  int v28; // [rsp+28h] [rbp-F8h]
  int v29; // [rsp+2Ch] [rbp-F4h]
  char *s1; // [rsp+30h] [rbp-F0h] BYREF
  __int128 v31; // [rsp+38h] [rbp-E8h]
  __int64 v32; // [rsp+50h] [rbp-D0h]
  __int64 v33; // [rsp+58h] [rbp-C8h]
  const char *v34; // [rsp+60h] [rbp-C0h]
  __int128 v35; // [rsp+68h] [rbp-B8h]
  __int64 v36; // [rsp+78h] [rbp-A8h]
  __int128 v37; // [rsp+80h] [rbp-A0h]
  _OWORD v38[3]; // [rsp+90h] [rbp-90h] BYREF
  __int64 v39; // [rsp+C0h] [rbp-60h]
  int v40; // [rsp+C8h] [rbp-58h]
  __int64 v41; // [rsp+D0h] [rbp-50h]
  char v42; // [rsp+D8h] [rbp-48h]
  unsigned __int64 v43; // [rsp+E8h] [rbp-38h]

  v43 = __readfsqword(0x28u);
  v39 = 1;
  v33 = 0;
  v34 = nullptr;
  v36 = 0;
  v40 = -1;
  v41 = 0;
  v42 = 0;
  v32 = a3;
  v35 = 0;
  v37 = 0;
  v38[0] = 0;
  if ( (unsigned int)find_tinfo_udt_member() == -1 )
  {
    v27 = 0;
    goto LABEL_8;
  }
  s1 = nullptr;
  v8 = ::s1;
  v31 = 0;
  if ( (_QWORD)v35 )
    v8 = v34;
  v27 = sub_388A20(v38, (__int64)&s1, *(_QWORD *)(a1 + 128), (__int64)v8, (__int64)v38, 0, 0.0, a5, nullptr);
  if ( !v27 )
    goto LABEL_5;
  tinfo_size = get_tinfo_size();
  v26 = set_tinfo_property4();
  v12 = ::s1;
  if ( (_QWORD)v35 )
  {
    v13 = v31;
    v12 = v34;
    if ( !(_QWORD)v31 )
      goto LABEL_15;
  }
  else
  {
    v13 = v31;
    if ( !(_QWORD)v31 )
      goto LABEL_15;
  }
  v21 = s1;
  v24 = v13;
  if ( strcmp(s1, v12) )
  {
    v13 = v24;
    if ( v24 != 1 )
    {
      if ( (unsigned __int8)sub_384940((__int64)v21, (__int64)v12, v24, v10, v11, v22) )
      {
        v14 = set_tinfo_property4();
        goto LABEL_16;
      }
    }
  }
LABEL_15:
  v14 = v26;
LABEL_16:
  if ( !v14 )
  {
    if ( !*(_QWORD *)(a1 + 24)
      || tinfo_size == get_tinfo_size() && v29 == v28
      || (v15 = *(_QWORD *)(a1 + 24),
          v16 = *(_QWORD *)(v15 + 432),
          v17 = *(_QWORD *)(v15 + 440),
          v13 = 3 * v17,
          v18 = v16 + 104 * v17,
          v18 == v16) )
    {
LABEL_33:
      v20 = 1;
    }
    else
    {
      while ( 1 )
      {
        v19 = get_tinfo_size();
        v13 = *(int *)(v16 + 88);
        if ( v13 != v19 )
          break;
        v16 += 104;
        if ( v16 == v18 )
          goto LABEL_33;
      }
      v20 = 0;
    }
    sub_395A90(a1, v20, 0.0, v13, v10, v11, *(double *)a5.m128_u64, a6, a7);
    goto LABEL_6;
  }
  v23 = (const char *)tinfo_errstr();
  sub_2B4E70((__int64)"%s failed: %s", "Setting field type", v23);
LABEL_5:
  v27 = 0;
LABEL_6:
  if ( s1 )
  {
    *(_QWORD *)&v31 = 0;
    qfree((__int64)s1);
  }
LABEL_8:
  clear_tinfo_t();
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v36);
  }
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree((__int64)v34);
  }
  return v27;
}

