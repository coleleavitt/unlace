_QWORD *__fastcall sub_24C1C0(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4, double a5)
{
  int v8; // r13d
  __int64 v9; // r14
  __int64 v10; // rcx
  char *v11; // rdi
  __int64 *v12; // rcx
  __int64 *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  _QWORD *v18; // r13
  char v20; // al
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  int tinfo_property; // eax
  __int64 v27; // r13
  unsigned int v28; // eax
  __int64 v30; // [rsp+0h] [rbp-78h]
  __int64 v31; // [rsp+8h] [rbp-70h]
  __int64 v32; // [rsp+10h] [rbp-68h]
  __int64 v33; // [rsp+28h] [rbp-50h] BYREF
  __int64 v34[2]; // [rsp+30h] [rbp-48h] BYREF

  v34[1] = __readfsqword(0x28u);
  v8 = sub_255000(a3);
  if ( v8 == 1 )
  {
    v33 = 0;
    copy_tinfo_t();
  }
  else
  {
    sub_32C270(&v33, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(_DWORD *)(a2 + 36));
  }
  v9 = sub_249AF0(a1, *(__int64 **)(a2 + 24), a2 + 32, a4, &v33, 0, a5);
  if ( v8 == 1 && (unsigned int)get_tinfo_property() != 1 )
    v9 = sub_244E70(v9, (__int64)a4, v24, v25);
  v10 = sub_254FC0(v9);
  v11 = (char *)(a2 + 48);
  if ( a3 - 22 > 1 || (v32 = v10, v20 = sub_11FD80(v11, v34, 0), v11 = (char *)(a2 + 48), v10 = v32, !v20) || v34[0] )
  {
    if ( *(_BYTE *)(a2 + 48) == 2 && (unsigned int)(*(_DWORD *)(v10 + 8) - 19) <= 2 )
    {
LABEL_14:
      v12 = (__int64 *)(v9 + 48);
LABEL_7:
      v13 = *(__int64 **)(a2 + 24);
      v14 = sub_249AF0(a1, v13, (__int64)v11, v12, &v33, 0, a5);
      v16 = v14;
      if ( v8 == 1 )
      {
        v13 = (_QWORD *)(&word_2 + 1);
        v31 = v14;
        tinfo_property = get_tinfo_property();
        v16 = v31;
        if ( tinfo_property != 1 )
        {
          v13 = a4;
          v16 = sub_244E70(v31, (__int64)a4, v31, v15);
        }
      }
      v30 = v16;
      v17 = j__qalloc_or_throw(64, (__int64)v13, v16, v15);
      *(_DWORD *)(v17 + 8) = a3;
      v18 = (_QWORD *)v17;
      *(_QWORD *)v17 = -1;
      *(_QWORD *)(v17 + 12) = -1;
      *(_QWORD *)(v17 + 24) = v9;
      *(_QWORD *)(v17 + 32) = v30;
      *(_QWORD *)(v17 + 40) = 0;
      *(_QWORD *)(v17 + 48) = 0;
      *(_DWORD *)(v17 + 56) = 0;
      goto LABEL_9;
    }
LABEL_6:
    v12 = a4;
    goto LABEL_7;
  }
  v21 = *(_DWORD *)(v32 + 8);
  v22 = (unsigned int)(v21 - 35);
  if ( (unsigned int)v22 > 1 )
  {
    if ( v21 != 21 )
      goto LABEL_20;
    if ( *(_BYTE *)(a2 + 48) == 2 )
      goto LABEL_14;
    goto LABEL_6;
  }
  v27 = *(_QWORD *)(v32 + 24);
  if ( *(_DWORD *)(v27 + 8) == 61 || (v27 = *(_QWORD *)(v32 + 32), *(_DWORD *)(v27 + 8) == 61) )
  {
    if ( v27 )
    {
      if ( v21 != 35 || (unsigned __int8)sub_240BD0(v27, *(_QWORD *)(a1 + 328), *(_QWORD *)(a1 + 176), a5) )
      {
        v28 = sub_255000(a3);
        sub_281A80(v27, *(_QWORD *)(a1 + 328), v28, 0);
      }
      goto LABEL_29;
    }
  }
  if ( v21 == 36 )
  {
LABEL_29:
    v18 = (_QWORD *)v9;
LABEL_9:
    sub_2495A0((__int64)v18, *(_QWORD *)(a1 + 328), a3, a5);
    goto LABEL_10;
  }
LABEL_20:
  if ( a3 == 22 )
  {
    v23 = j__qalloc_or_throw(64, (__int64)v34, v22, v32);
    *(_QWORD *)(v23 + 24) = v9;
    v18 = (_QWORD *)v23;
    *(_QWORD *)v23 = -1;
    *(_DWORD *)(v23 + 8) = 49;
    *(_QWORD *)(v23 + 12) = -1;
    *(_QWORD *)(v23 + 32) = 0;
    *(_QWORD *)(v23 + 40) = 0;
    *(_QWORD *)(v23 + 48) = 0;
    *(_DWORD *)(v23 + 56) = 0;
    v34[0] = 8;
    copy_tinfo_t();
    clear_tinfo_t();
  }
  else
  {
    v18 = (_QWORD *)v9;
  }
LABEL_10:
  if ( *v18 == -1 )
    *v18 = *(_QWORD *)(a2 + 24);
  clear_tinfo_t();
  return v18;
}

