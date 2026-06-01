_QWORD *__fastcall sub_246E00(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  int v7; // r13d
  __int64 v8; // r14
  __int64 v9; // rcx
  char *v10; // rdi
  _QWORD *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // r13
  __int64 *v19; // rsi
  char v20; // al
  int v21; // eax
  __int64 v22; // rax
  int tinfo_property; // eax
  __int64 v24; // r13
  unsigned int v25; // eax
  __int64 v27; // [rsp+8h] [rbp-70h]
  __int64 v28; // [rsp+10h] [rbp-68h]
  __int64 *v29; // [rsp+18h] [rbp-60h]
  int v30; // [rsp+20h] [rbp-58h]
  __int64 v31; // [rsp+28h] [rbp-50h] BYREF
  __int64 v32; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v33; // [rsp+38h] [rbp-40h]
  int v34; // [rsp+40h] [rbp-38h]
  int v35; // [rsp+48h] [rbp-30h]
  int v36; // [rsp+50h] [rbp-28h]
  int v37; // [rsp+58h] [rbp-20h]
  __int64 v38; // [rsp+60h] [rbp-18h]

  v33 = __readfsqword(0x28u);
  v7 = sub_24FC40(a3, a2);
  if ( v7 == 1 )
  {
    v31 = 0;
    copy_tinfo_t();
  }
  else
  {
    sub_326800(&v31, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(unsigned int *)(a2 + 36));
  }
  v8 = sub_244730(a1, *(__int64 **)(a2 + 24), a2 + 32, a4, &v31, 0);
  if ( v7 == 1 && (unsigned int)get_tinfo_property() != 1 )
    v8 = sub_23FAB0(v8);
  v9 = sub_24FC00(v8);
  v10 = (char *)(a2 + 48);
  if ( a3 - 22 > 1
    || (v28 = v9,
        v19 = &v32,
        v29 = &v32,
        v27 = a2 + 48,
        v20 = sub_11B1C0(v10, &v32, 0),
        v10 = (char *)(a2 + 48),
        v9 = v28,
        !v20)
    || v32 )
  {
    if ( *(_BYTE *)(a2 + 48) == 2 && (unsigned int)(*(_DWORD *)(v9 + 8) - 19) <= 2 )
    {
LABEL_14:
      v11 = (_QWORD *)(v8 + 48);
LABEL_7:
      v12 = sub_244730(a1, *(__int64 **)(a2 + 24), (__int64)v10, v11, &v31, 0);
      v13 = v12;
      if ( v7 == 1 )
      {
        v27 = v12;
        tinfo_property = get_tinfo_property();
        v13 = v27;
        if ( tinfo_property != 1 )
          v13 = sub_23FAB0(v27);
      }
      a4 = (_QWORD *)v13;
      v14 = j__qalloc_or_throw();
      *(_DWORD *)(v14 + 8) = a3;
      v17 = (_QWORD *)v14;
      *(_QWORD *)v14 = -1;
      *(_QWORD *)(v14 + 12) = -1;
      *(_QWORD *)(v14 + 24) = v8;
      *(_QWORD *)(v14 + 32) = a4;
      *(_QWORD *)(v14 + 40) = 0;
      *(_QWORD *)(v14 + 48) = 0;
      *(_DWORD *)(v14 + 56) = 0;
      goto LABEL_9;
    }
LABEL_6:
    v11 = a4;
    goto LABEL_7;
  }
  v21 = *(_DWORD *)(v28 + 8);
  if ( (unsigned int)(v21 - 35) > 1 )
  {
    if ( v21 != 21 )
      goto LABEL_20;
    if ( *(_BYTE *)(a2 + 48) == 2 )
      goto LABEL_14;
    goto LABEL_6;
  }
  v24 = *(_QWORD *)(v28 + 24);
  if ( *(_DWORD *)(v24 + 8) == 61 || (v24 = *(_QWORD *)(v28 + 32), *(_DWORD *)(v24 + 8) == 61) )
  {
    if ( v24 )
    {
      if ( v21 != 35
        || (v19 = *(__int64 **)(a1 + 328),
            (unsigned __int8)sub_23B810(v24, (__int64)v19, *(_QWORD *)(a1 + 176), v28, v15)) )
      {
        v25 = sub_24FC40(a3, v19);
        sub_27C6C0(v24, *(_QWORD *)(a1 + 328), v25, 0);
      }
      goto LABEL_29;
    }
  }
  if ( v21 == 36 )
  {
LABEL_29:
    v17 = (_QWORD *)v8;
LABEL_9:
    sub_2441E0(
      (__int64)v17,
      *(_QWORD *)(a1 + 328),
      a3,
      v9,
      v15,
      v16,
      (__int64)a4,
      v27,
      v28,
      (int)v29,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    goto LABEL_10;
  }
LABEL_20:
  if ( a3 == 22 )
  {
    v22 = j__qalloc_or_throw();
    *(_QWORD *)(v22 + 24) = v8;
    v17 = (_QWORD *)v22;
    *(_QWORD *)v22 = -1;
    *(_DWORD *)(v22 + 8) = 49;
    *(_QWORD *)(v22 + 12) = -1;
    *(_QWORD *)(v22 + 32) = 0;
    *(_QWORD *)(v22 + 40) = 0;
    *(_QWORD *)(v22 + 48) = 0;
    *(_DWORD *)(v22 + 56) = 0;
    v32 = 8;
    copy_tinfo_t();
    clear_tinfo_t();
  }
  else
  {
    v17 = (_QWORD *)v8;
  }
LABEL_10:
  if ( *v17 == -1 )
    *v17 = *(_QWORD *)(a2 + 24);
  clear_tinfo_t();
  return v17;
}

