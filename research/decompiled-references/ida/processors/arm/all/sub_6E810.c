__int64 __fastcall sub_6E810(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbp
  unsigned __int8 v4; // bp
  unsigned __int8 v5; // al
  bool v6; // r13
  __int64 (__fastcall *v7)(__int64, __int64); // rax
  unsigned __int8 v8; // al
  bool v9; // dl
  bool v10; // cc
  bool v11; // al
  char v12; // bp
  int dtype_size; // eax
  int *v14; // rdi
  int v15; // edx
  int v16; // ecx
  int v17; // esi
  unsigned int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdi
  _QWORD *v22; // rdi
  __int64 v23; // rcx
  _QWORD *v24; // rdx
  __int16 v25; // dx
  struct _Unwind_Exception *v26; // rbx
  unsigned __int8 v27; // [rsp+Fh] [rbp-59h]
  unsigned __int8 v28; // [rsp+Fh] [rbp-59h]
  _QWORD *v29; // [rsp+10h] [rbp-58h] BYREF
  __int128 v30; // [rsp+18h] [rbp-50h]
  char v31; // [rsp+28h] [rbp-40h]
  unsigned __int64 v32; // [rsp+38h] [rbp-30h]

  v32 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 48) & 0xF) != 0xE || *(_WORD *)(a1 + 40) != 30 || *(_BYTE *)(a1 + 97) != 3 )
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
  v4 = *(_BYTE *)(v3 + 5);
  v5 = *(_BYTE *)(a1 + 61);
  v6 = v4 <= 0xF9u;
  if ( v5 > 0xF9u )
  {
    if ( v4 > 0xF9u && v5 >= v4 )
      goto LABEL_18;
  }
  else if ( v4 > 0xF9u || v5 >= v4 || *(_BYTE *)(a1 + 8) && v5 == 2 )
  {
    goto LABEL_18;
  }
  v7 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v7 == sub_6ACC0 )
    return 0;
  v8 = v7(a1, a1 + 56);
  v9 = v6 || v8 < v4;
  v10 = v8 <= 0xF9u;
  v11 = v6 && v8 < v4;
  if ( !v10 )
    v11 = v9;
  if ( v11 )
    return 0;
LABEL_18:
  if ( *(_BYTE *)(a1 + 129) == 8 )
  {
    v12 = 2;
  }
  else
  {
    v12 = 7;
    if ( *(_BYTE *)(a1 + 129) )
      return 0;
  }
  dtype_size = get_dtype_size();
  if ( 1 << *(_QWORD *)(a1 + 104) != dtype_size )
    return 0;
  v14 = *(int **)(a1 + 376);
  v15 = 2;
  v16 = *v14;
  v17 = *v14 & 0x404;
  if ( v17 )
  {
    if ( v17 == 4 )
    {
      v15 = 4;
    }
    else
    {
      v15 = 8;
      if ( v17 == 1024 )
        v15 = 1;
    }
  }
  if ( dtype_size != v15 )
  {
    if ( (v16 & 0x2000) != 0 || v15 < dtype_size )
      return 0;
    v18 = v16 & 0xFFFFFBFB;
    *v14 = v16 & 0xFFFFFBFB;
    if ( dtype_size == 4 )
    {
      *v14 = v18 | 4;
    }
    else if ( dtype_size > 4 )
    {
      if ( dtype_size != 8 )
        goto LABEL_56;
      *v14 = v16 | 0x404;
    }
    else
    {
      if ( dtype_size != 1 )
      {
        if ( dtype_size == 2 )
          goto LABEL_32;
LABEL_56:
        v26 = (struct _Unwind_Exception *)sub_6B6A0();
        if ( v29 )
        {
          *(_QWORD *)&v30 = 0;
          qfree((__int64)v29);
        }
        _Unwind_Resume(v26);
      }
      BYTE1(v18) |= 4u;
      *v14 = v18;
    }
  }
LABEL_32:
  if ( (*(_BYTE *)(a1 + 45) & 0xC) != 0 )
    **(_DWORD **)(a1 + 376) |= 0x2000u;
  v19 = *(unsigned __int16 *)(a1 + 102);
  v20 = *(_QWORD *)(a1 + 32);
  v31 = 0;
  v21 = *(_QWORD *)(a1 + 888);
  v30 = 0;
  v29 = 0;
  result = sub_81F70(v21, &v29, v20, v19, 0, 0);
  if ( (_BYTE)result )
  {
    if ( (unsigned __int8)(v31 - 10) <= 1u )
    {
      v22 = v29;
      v23 = *v29;
      if ( (_QWORD)v30 == 1 || (v24 = v29 + 3, 24LL * (_QWORD)v30 == 24) )
      {
LABEL_50:
        v28 = result;
        *(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) = v23;
        sub_82740(*(_QWORD *)(a1 + 888), a1 + 840, &v29);
        v25 = *(unsigned __int8 *)(a1 + 128);
        result = v28;
        *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) = 1;
        *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v25;
        *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = v12;
        v22 = v29;
      }
      else
      {
        while ( *v24 == v23 )
        {
          v24 += 3;
          if ( &v29[3 * (_QWORD)v30] == v24 )
            goto LABEL_50;
        }
        result = 0;
      }
      goto LABEL_42;
    }
    result = 0;
  }
  v22 = v29;
LABEL_42:
  if ( v22 )
  {
    v27 = result;
    *(_QWORD *)&v30 = 0;
    qfree((__int64)v22);
    return v27;
  }
  return result;
}
