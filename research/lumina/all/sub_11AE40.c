__int64 __fastcall sub_11AE40(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int (__fastcall *a4)(__int64),
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        _DWORD *a9,
        _DWORD *a10)
{
  unsigned int v10; // r15d
  bool v14; // zf
  __int64 v15; // rdi
  __int64 v16; // r8
  char v17; // bl
  unsigned int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rdi
  unsigned int v23; // eax
  unsigned int v25; // [rsp+18h] [rbp-50h]
  unsigned int v26; // [rsp+18h] [rbp-50h]
  char v27; // [rsp+18h] [rbp-50h]
  unsigned int v28; // [rsp+1Ch] [rbp-4Ch]
  int v29; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v30; // [rsp+28h] [rbp-40h]

  v10 = 8;
  v29 = 0;
  v30 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 66) )
    return v10;
  v14 = *(_BYTE *)(a1 + 63) == 0;
  v15 = *(_QWORD *)(a1 + 8);
  if ( v14 )
  {
    v25 = a6;
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v15 + 112LL))(v15, 1, 1, 10);
    a6 = v25;
    if ( v10 )
      goto LABEL_4;
  }
  *(_BYTE *)(a1 + 65) = 1;
  if ( !a3 )
    goto LABEL_17;
  v26 = a6;
  v19 = sub_C37D0(a1, a4, a5, 0, 1u);
  v10 = v19;
  a6 = v26;
  if ( !v19 )
  {
    *(_BYTE *)(a1 + 64) = 1;
LABEL_17:
    v27 = 1;
    goto LABEL_18;
  }
  v17 = 1;
  if ( v19 != 5 )
    goto LABEL_5;
  v27 = 0;
  a4 = nullptr;
  a3 = 0;
LABEL_18:
  v28 = a6;
  v20 = sub_100BA0(a1, &v29);
  v10 = v20;
  a6 = v28;
  if ( v29 )
  {
    v22 = *(_QWORD *)(a1 + 8);
    if ( **(int **)v22 <= 2 )
    {
      if ( v20 )
      {
        v17 = 1;
        goto LABEL_23;
      }
    }
    else
    {
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v22 + 144LL))(
        v22,
        0,
        0,
        v21,
        v16,
        v28);
      a6 = v28;
      if ( v10 )
      {
LABEL_4:
        v17 = 1;
        goto LABEL_5;
      }
    }
  }
  else if ( v20 )
  {
    v17 = 1;
    goto LABEL_6;
  }
  if ( !*(_DWORD *)(a1 + 88) || a7 == (*(_WORD *)(a1 + 86) & 0xFE00 | (*(unsigned __int16 *)(a1 + 86) << 16) & 0x10000) )
  {
    v23 = sub_11A450(a1, a2, a3, a4, a5, a6, a8);
    v10 = v23;
    if ( !v23 || (v17 = 1, v23 == 5) )
    {
      if ( a9 )
        *a9 = *(_DWORD *)(a1 + 88);
      v17 = v27 | (v23 != 0);
      if ( a10 )
        *a10 = *(_DWORD *)(**(_QWORD **)(a1 + 48) + 96LL);
    }
LABEL_5:
    if ( !v29 )
      goto LABEL_6;
LABEL_23:
    v14 = *(_BYTE *)(a1 + 64) == 0;
    *(_OWORD *)(a1 + 72) = 0;
    *(_OWORD *)(a1 + 88) = 0;
    *(_OWORD *)(a1 + 104) = 0;
    if ( v14 )
      goto LABEL_7;
LABEL_24:
    sub_CC3D0(a1);
    goto LABEL_7;
  }
  sub_E8BB0(
    0xBu,
    "%s at line %d of [%.10s]",
    "database corruption",
    65418,
    "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
  v17 = 1;
  v10 = 11;
  if ( v29 )
    goto LABEL_23;
LABEL_6:
  if ( *(_BYTE *)(a1 + 64) )
    goto LABEL_24;
LABEL_7:
  if ( *(_BYTE *)(a1 + 65) )
  {
    if ( !*(_BYTE *)(a1 + 63) )
      (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64, __int64, __int64))(**(_QWORD **)(a1 + 8) + 112LL))(
        *(_QWORD *)(a1 + 8),
        1,
        1,
        9,
        v16,
        a6);
    *(_BYTE *)(a1 + 65) = 0;
  }
  if ( !v17 )
    return 5;
  return v10;
}
