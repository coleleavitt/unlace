bool __fastcall sub_5B600(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  _QWORD *v6; // rdi
  __int64 v9; // r9
  bool result; // al
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 (__fastcall *v15)(__int64, __int64); // rax
  __int64 v16; // rsi
  __int64 v17; // rdx
  const char *v18; // rsi
  _QWORD *v19; // rdi
  __int64 v20; // rdx
  _QWORD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned int v24; // [rsp+0h] [rbp-50h]
  unsigned int v25; // [rsp+4h] [rbp-4Ch]
  bool v26; // [rsp+8h] [rbp-48h]
  _QWORD *v27; // [rsp+10h] [rbp-40h] BYREF
  __int128 v28; // [rsp+18h] [rbp-38h]
  char v29; // [rsp+28h] [rbp-28h]
  unsigned __int64 v30; // [rsp+38h] [rbp-18h]

  v30 = __readfsqword(0x28u);
  v6 = *(_QWORD **)(a1 + 336);
  if ( !v6 )
    return 0;
  v9 = a5;
  result = a4 == 280 || a4 <= 0x1F;
  if ( !result )
  {
    if ( a4 != 281 )
      return result;
    goto LABEL_4;
  }
  if ( a4 == 1 )
    return 0;
LABEL_4:
  v11 = 0x10000;
  v12 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) - 1);
  if ( (unsigned int)v12 <= 7 )
  {
    v11 = dword_7ADC0[v12];
    if ( (_DWORD)v11 != 0x10000 )
      v11 = (unsigned int)v11 | a4;
  }
  v29 = 0;
  v13 = -1;
  v28 = 0;
  v14 = v6[1];
  v27 = nullptr;
  v15 = *(__int64 (__fastcall **)(__int64, __int64))(*v6 + 16LL);
  v16 = *(_QWORD *)(*(_QWORD *)(v14 + 32) + 16LL) & a3;
  if ( v15 != sub_591A0 )
  {
    v24 = v9;
    v25 = v11;
    v22 = ((__int64 (__fastcall *)(_QWORD *, __int64, _QWORD, __int64))v15)(v6, v16, 0, -1);
    v9 = v24;
    v11 = v25;
    v16 = v22;
    v13 = v23;
  }
  v17 = v16;
  v18 = (const char *)&v27;
  reg_finder_find(v6, &v27, v17, v13, v11, v9, 0);
  v19 = v27;
  result = 0;
  if ( (unsigned __int8)(v29 - 10) <= 1u )
  {
    v20 = *v27;
    if ( (_QWORD)v28 == 1 || (v21 = v27 + 3, v18 = (const char *)(24 * v28), 24LL * (_QWORD)v28 == 24) )
    {
LABEL_21:
      *a2 = v20;
      result = 1;
      if ( !v19 )
        return result;
LABEL_17:
      v26 = result;
      *(_QWORD *)&v28 = 0;
      qfree(v19, v18);
      return v26;
    }
    while ( v20 == *v21 )
    {
      v21 += 3;
      if ( &v27[3 * (_QWORD)v28] == v21 )
        goto LABEL_21;
    }
    result = 0;
  }
  if ( v27 )
    goto LABEL_17;
  return result;
}

