__int64 *__fastcall sub_26AE90(__int64 *a1, __int64 a2, __int64 a3, __int64 *a4, _BYTE *a5, int a6)
{
  int v6; // eax
  __int64 v8; // rsi
  __int64 v9; // r12
  int v10; // r14d
  __int64 v11; // r13
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 v16; // rdi
  int v18; // eax
  __int64 v19; // rdi
  char v20; // bp
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rax
  char v24; // al
  int tinfo_size; // r14d
  __int64 v26; // rax
  char v28; // [rsp+17h] [rbp-71h]
  __int64 v32; // [rsp+30h] [rbp-58h] BYREF
  __int64 tinfo_property; // [rsp+38h] [rbp-50h]
  _QWORD v34[9]; // [rsp+40h] [rbp-48h] BYREF

  v6 = a6;
  v34[1] = __readfsqword(0x28u);
  v8 = *a4;
  if ( a6 == -1 )
  {
    v6 = *((_DWORD *)a4 + 2);
    v9 = a2;
  }
  else
  {
    v9 = *(_QWORD *)(v8 + 8LL * a6);
  }
  v10 = v6 - 1;
  v11 = v6 - 1;
  v12 = *(_QWORD *)(v8 + 8 * v11);
  v13 = 8 * v11;
  if ( *(_DWORD *)(v12 + 8) == 52 )
  {
    v11 = --v10;
    v9 = *(_QWORD *)(v8 + 8LL * v10);
    *a1 = 0;
    v13 = 8LL * v10;
    if ( *(_DWORD *)(v9 + 8) != 48 )
    {
      v28 = 1;
      v9 = v12;
LABEL_5:
      v14 = *(_QWORD *)(*a4 + v13);
      if ( *(_DWORD *)(v14 + 8) != 2 )
        goto LABEL_21;
      goto LABEL_6;
    }
    v21 = *(_DWORD *)(v12 + 8);
    if ( v21 == 48 )
    {
      v26 = v9;
      v28 = 1;
      v9 = v12;
      v12 = v26;
      goto LABEL_17;
    }
    if ( v21 != 51 )
    {
      v28 = 1;
      v12 = v9;
      goto LABEL_17;
    }
    v28 = 1;
    v22 = v9;
    v9 = v12;
    v12 = v22;
LABEL_40:
    if ( *(_DWORD *)(*(_QWORD *)(v9 + 24) + 8LL) != 48 )
      v9 = v12;
    goto LABEL_17;
  }
  v28 = 0;
  *a1 = 0;
  if ( *(_DWORD *)(v12 + 8) != 48 )
    goto LABEL_5;
  v18 = *(_DWORD *)(v9 + 8);
  if ( v18 != 48 )
  {
    if ( v18 != 51 )
    {
      v9 = v12;
      goto LABEL_17;
    }
    goto LABEL_40;
  }
  do
  {
LABEL_17:
    if ( !sub_26ACC0() )
      break;
    --v10;
    v9 = v12;
    v11 = v10;
    v12 = *(_QWORD *)(*a4 + 8LL * v10);
  }
  while ( *(_DWORD *)(v12 + 8) == 48 );
  copy_tinfo_t();
  if ( *(_DWORD *)(v12 + 8) == 51 )
  {
    sub_26AE90(&v32, a2, a3, a4, a5, v10);
    if ( (_BYTE)v32 )
    {
      tinfo_property = 0;
      tinfo_property = get_tinfo_property();
      if ( sub_26ACC0() )
      {
        copy_tinfo_t();
        sub_32C540(v34, *(_QWORD *)(*(_QWORD *)(a3 + 216) + 112LL), a1);
        copy_tinfo_t();
        clear_tinfo_t();
      }
      clear_tinfo_t();
    }
    if ( a5 && *(_DWORD *)(*(_QWORD *)(*a4 + 8LL * (v10 - 1)) + 8LL) == 21 )
      *a5 = 1;
    clear_tinfo_t();
  }
  v16 = *a1;
  if ( !(unsigned __int8)*a1 )
  {
    v14 = *(_QWORD *)(*a4 + 8 * v11);
    if ( *(_DWORD *)(v14 + 8) != 2 )
      goto LABEL_21;
LABEL_6:
    v15 = *(_QWORD *)(v14 + 32);
    if ( v15 == v9 )
      v15 = *(_QWORD *)(v14 + 24);
    if ( *(_DWORD *)(v15 + 8) == 51 )
    {
      v23 = *(_QWORD *)(v15 + 24);
      if ( *(_DWORD *)(v23 + 8) == 48 && *(_DWORD *)(*(_QWORD *)(v23 + 24) + 8LL) == 52 )
      {
        v24 = get_tinfo_property();
        if ( (v24 & 0x3E) != 0 && ((v24 & 0xFu) <= 9 || (v24 & 0x3F) == 0x2D) )
        {
          tinfo_size = get_tinfo_size();
          if ( tinfo_size == (unsigned int)get_tinfo_size() )
            copy_tinfo_t();
        }
      }
    }
    v16 = *a1;
    if ( (unsigned __int8)*a1 )
      goto LABEL_10;
LABEL_21:
    if ( !(unsigned __int8)sub_284660((_DWORD)a1, *(_QWORD *)(a3 + 8), v14, v9)
      || ((v19 = *a1, !(unsigned __int8)*a1)
       || (v19 & 0xE) == 0 && (v19 & 0x30) != 0
       || (v34[0] = 0, v34[0] = get_tinfo_property(), v20 = get_tinfo_property(), clear_tinfo_t(), (v20 & 0x3F) == 0x30))
      && *(_DWORD *)(v14 + 8) == 57 )
    {
      clear_tinfo_t();
    }
    if ( !v28 )
    {
LABEL_28:
      v16 = *a1;
      if ( !(unsigned __int8)*a1 )
        return a1;
      goto LABEL_11;
    }
LABEL_27:
    v34[0] = 0;
    v34[0] = get_tinfo_property();
    copy_tinfo_t();
    clear_tinfo_t();
    goto LABEL_28;
  }
LABEL_10:
  if ( v28 )
    goto LABEL_27;
LABEL_11:
  LOBYTE(v16) = v16 | 0xC0;
  *a1 = v16;
  return a1;
}

