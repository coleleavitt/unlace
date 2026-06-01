__int64 __fastcall sub_5BBD0(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rdi
  __int64 v9; // r8
  __int64 v10; // rcx
  unsigned int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 (__fastcall *v14)(__int64, __int64); // rax
  __int64 v15; // rsi
  __int64 v16; // rdx
  const char *v17; // rsi
  __int64 v18; // rdx
  _QWORD *v19; // rdi
  _QWORD *v20; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // [rsp-10h] [rbp-60h]
  unsigned int v25; // [rsp+4h] [rbp-4Ch]
  _QWORD *v26; // [rsp+10h] [rbp-40h] BYREF
  __int128 v27; // [rsp+18h] [rbp-38h]
  char v28; // [rsp+28h] [rbp-28h]
  unsigned __int64 v29; // [rsp+38h] [rbp-18h]

  v5 = *(_QWORD **)(a1 + 336);
  v29 = __readfsqword(0x28u);
  if ( !v5 )
    return 0;
  LOBYTE(v4) = a4 == 280 || a4 <= 0x1F;
  if ( (_BYTE)v4 || a4 == 281 )
  {
    v9 = 0x10000;
    v10 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(v5[1] + 32LL) + 24LL) - 1);
    if ( (unsigned int)v10 <= 7 )
    {
      v11 = dword_7ADC0[v10];
      if ( a4 > 0xFFFF || v11 == 0x10000 )
        v9 = 0x10000;
      else
        v9 = a4 | v11;
    }
    v28 = 0;
    v12 = -1;
    v27 = 0;
    v13 = v5[1];
    v26 = nullptr;
    v14 = *(__int64 (__fastcall **)(__int64, __int64))(*v5 + 16LL);
    v15 = *(_QWORD *)(*(_QWORD *)(v13 + 32) + 16LL) & a3;
    if ( v14 != sub_591A0 )
    {
      v25 = v9;
      v22 = ((__int64 (__fastcall *)(_QWORD *, __int64, _QWORD, __int64))v14)(v5, v15, 0, -1);
      v9 = v25;
      v15 = v22;
      v12 = v23;
    }
    v16 = v15;
    v17 = (const char *)&v26;
    reg_finder_find(v5, &v26, v16, v12, v9, 0xFFFFFFFFLL, 0);
    v18 = v24;
    v4 = 0;
    v19 = v26;
    if ( (unsigned __int8)(v28 - 12) <= 1u )
    {
      v18 = *v26;
      if ( (_QWORD)v27 == 1 || (v20 = v26 + 3, v17 = (const char *)(24 * v27), 24LL * (_QWORD)v27 == 24) )
      {
LABEL_21:
        *a2 = v18;
        v4 = 1;
        if ( !v19 )
          return v4;
        goto LABEL_17;
      }
      while ( v18 == *v20 )
      {
        v20 += 3;
        if ( &v26[3 * (_QWORD)v27] == v20 )
          goto LABEL_21;
      }
      v4 = 0;
    }
    if ( v26 )
    {
LABEL_17:
      *(_QWORD *)&v27 = 0;
      qfree(v19, v17, v18);
    }
  }
  return v4;
}

