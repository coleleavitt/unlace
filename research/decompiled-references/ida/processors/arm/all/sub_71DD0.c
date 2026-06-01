__int64 __fastcall sub_71DD0(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v3; // rbp
  unsigned __int8 v5; // bp
  unsigned __int8 v6; // al
  bool v7; // r13
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  unsigned __int8 v9; // al
  bool v10; // dl
  bool v11; // cc
  bool v12; // al
  int dtype_size; // r12d
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdi
  _QWORD *v17; // rdi
  __int64 v18; // rdx
  _QWORD *v19; // rax
  int *v20; // rdx
  int v21; // ecx
  unsigned int v22; // eax
  char v23; // dl
  __int16 v24; // ax
  struct _Unwind_Exception *v25; // rbx
  _QWORD *v26; // [rsp+0h] [rbp-58h] BYREF
  __int128 v27; // [rsp+8h] [rbp-50h]
  char v28; // [rsp+18h] [rbp-40h]
  unsigned __int64 v29; // [rsp+28h] [rbp-30h]

  v29 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 48) & 0xF) != 0xE )
    return 0;
  v3 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v3 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(
          a1,
          a1 + 56,
          *(_QWORD *)(a1 + 864)) )
    return 0;
  v5 = *(_BYTE *)(v3 + 5);
  v6 = *(_BYTE *)(a1 + 61);
  v7 = v5 <= 0xF9u;
  if ( v6 > 0xF9u )
  {
    if ( v5 > 0xF9u && v6 >= v5 )
      goto LABEL_16;
  }
  else if ( v5 > 0xF9u || v6 >= v5 || *(_BYTE *)(a1 + 8) && v6 == 2 )
  {
    goto LABEL_16;
  }
  v8 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v8 == sub_6ACC0 )
    return 0;
  v9 = v8(a1, a1 + 56);
  v10 = v7 || v9 < v5;
  v11 = v9 <= 0xF9u;
  v12 = v7 && v9 < v5;
  if ( !v11 )
    v12 = v10;
  if ( v12 )
    return 0;
LABEL_16:
  if ( *(_WORD *)(a1 + 40) != 30 )
    return 0;
  if ( *(_BYTE *)(a1 + 97) != 3 )
    return 0;
  if ( (*(_BYTE *)(a1 + 129) & 0xF7) != 0 )
    return 0;
  dtype_size = get_dtype_size();
  if ( 1 << *(_QWORD *)(a1 + 104) != dtype_size )
    return 0;
  v14 = *(unsigned __int16 *)(a1 + 102);
  v15 = *(_QWORD *)(a1 + 32);
  v16 = *(_QWORD *)(a1 + 888);
  v26 = 0;
  v28 = 0;
  v27 = 0;
  v1 = sub_81F70(v16, &v26, v15, v14, 0, 0);
  if ( !(_BYTE)v1 )
    goto LABEL_42;
  if ( (unsigned __int8)(v28 - 10) <= 1u )
  {
    v17 = v26;
    v18 = *v26;
    if ( (_QWORD)v27 != 1 )
    {
      v19 = v26 + 3;
      if ( 24LL * (_QWORD)v27 != 24 )
      {
        while ( *v19 == v18 )
        {
          v19 += 3;
          if ( &v26[3 * (_QWORD)v27] == v19 )
            goto LABEL_33;
        }
        v1 = 0;
        goto LABEL_28;
      }
    }
LABEL_33:
    *(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) = v18;
    if ( (*(_BYTE *)(a1 + 45) & 0xC) != 0 )
      **(_DWORD **)(a1 + 376) |= 0x2000u;
    v20 = *(int **)(a1 + 376);
    v21 = *v20;
    v22 = *v20 & 0xFFFFFBFB;
    *v20 = v22;
    if ( dtype_size == 4 )
    {
      *v20 = v22 | 4;
      goto LABEL_39;
    }
    if ( dtype_size > 4 )
    {
      if ( dtype_size == 8 )
      {
        *v20 = v21 | 0x404;
        goto LABEL_39;
      }
    }
    else
    {
      if ( dtype_size == 1 )
      {
        BYTE1(v22) |= 4u;
        *v20 = v22;
        goto LABEL_39;
      }
      if ( dtype_size == 2 )
      {
LABEL_39:
        sub_82740(*(_QWORD *)(a1 + 888), a1 + 840, &v26);
        if ( (*(_BYTE *)(a1 + 50) & 4) == 0 && (getinf(3) & 0x1006) != 0x1002 || (v23 = 7, *(_BYTE *)(a1 + 129) == 8) )
          v23 = 2;
        v24 = *(unsigned __int8 *)(a1 + 128);
        *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) = 1;
        *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v24;
        *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = v23;
LABEL_42:
        v17 = v26;
        goto LABEL_28;
      }
    }
    v25 = (struct _Unwind_Exception *)sub_6B6A0();
    if ( v26 )
    {
      *(_QWORD *)&v27 = 0;
      qfree((__int64)v26);
    }
    _Unwind_Resume(v25);
  }
  v17 = v26;
  v1 = 0;
LABEL_28:
  if ( v17 )
  {
    *(_QWORD *)&v27 = 0;
    qfree((__int64)v17);
  }
  return v1;
}
