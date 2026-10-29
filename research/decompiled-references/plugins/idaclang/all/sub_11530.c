__int64 __fastcall sub_11530(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  unsigned int v15; // r14d
  __int64 v17; // rax
  const char *v18; // rdx
  const char *v19; // rsi
  const char *v20; // rdi
  const char *v21; // rdi
  const char *v22; // rdx
  const char *v23; // rdx
  const char *v24; // rdx
  const char *v25; // rdi
  const char *v26; // [rsp+20h] [rbp-80h] BYREF
  __int64 v27; // [rsp+28h] [rbp-78h]
  const char *v28; // [rsp+40h] [rbp-60h] BYREF
  __int128 v29; // [rsp+48h] [rbp-58h]
  const char *v30; // [rsp+58h] [rbp-48h]
  __int128 v31; // [rsp+60h] [rbp-40h]
  unsigned int v32; // [rsp+70h] [rbp-30h]
  unsigned __int8 v33; // [rsp+74h] [rbp-2Ch]
  unsigned __int64 v34; // [rsp+78h] [rbp-28h]

  v34 = __readfsqword(0x28u);
  v9 = sub_BB20();
  v10 = (unsigned int)sub_B0D0(v9);
  v14 = *(_DWORD *)(a2 + 108);
  if ( (_DWORD)v10 )
  {
    if ( (v14 & 8) == 0 )
      return 1;
    sub_10160(
      (__int64)&v28,
      a2,
      v10,
      v11,
      v12,
      v13,
      (__int128)_mm_loadu_si128((const __m128i *)&a7),
      (__int128)_mm_loadu_si128((const __m128i *)&a8));
    v23 = s1;
    if ( (_QWORD)v29 )
      v23 = v28;
    sub_7470((__int64)"%-12s %s\n", "predefined", v23);
    v21 = v28;
    if ( !v28 )
      return 1;
    goto LABEL_16;
  }
  if ( (v14 & 4) != 0 )
  {
    sub_10160(
      (__int64)&v28,
      a2,
      v10,
      v11,
      v12,
      v13,
      (__int128)_mm_loadu_si128((const __m128i *)&a7),
      (__int128)_mm_loadu_si128((const __m128i *)&a8));
    v22 = s1;
    if ( (_QWORD)v29 )
      v22 = v28;
    sub_7470((__int64)"%-12s %s\n", "macro", v22);
    if ( v28 )
    {
      *(_QWORD *)&v29 = 0;
      qfree(v28);
    }
  }
  if ( (*(_BYTE *)(a2 + 104) & 4) == 0 )
    return 1;
  v17 = sub_BB20();
  if ( (unsigned int)sub_B100(v17) )
    return 1;
  v33 = 0;
  v29 = 0;
  v31 = 0;
  v28 = nullptr;
  v30 = nullptr;
  v32 = 0;
  v15 = sub_DD20(&v28);
  if ( (_BYTE)v15 )
  {
    v18 = s1;
    if ( (_QWORD)v31 )
      v18 = v30;
    v19 = s1;
    if ( (_QWORD)v29 )
      v19 = v28;
    til_add_macro(*(_QWORD *)a2, v19, v18, v32, v33);
    v20 = v30;
    ++*(_QWORD *)(a2 + 128);
    if ( v20 )
    {
      *(_QWORD *)&v31 = 0;
      qfree(v20);
    }
    v21 = v28;
    if ( !v28 )
      return 1;
LABEL_16:
    *(_QWORD *)&v29 = 0;
    qfree(v21);
    return 1;
  }
  sub_C260((__int64)&v26);
  v24 = s1;
  if ( v27 )
    v24 = v26;
  sub_67C0((__int64 *)(a2 + 80), (__int64)"failed to parse macro %s", v24);
  if ( v26 )
  {
    v27 = 0;
    qfree(v26);
  }
  v25 = v30;
  ++*(_QWORD *)(a2 + 136);
  if ( v25 )
  {
    *(_QWORD *)&v31 = 0;
    qfree(v25);
  }
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28);
  }
  return v15;
}
