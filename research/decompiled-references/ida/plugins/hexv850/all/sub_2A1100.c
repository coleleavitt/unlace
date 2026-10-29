__int64 __fastcall sub_2A1100(__m128i *a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  _QWORD *exception; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  unsigned __int64 *v8; // rsi
  int *v9; // r14
  unsigned __int64 v10; // rax
  bool v11; // zf
  char v12; // dl
  _QWORD *v13; // rdx
  _QWORD *i; // rax
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 *v21; // rax
  unsigned int *v22; // r12
  unsigned int *v23; // r13
  int v24; // eax
  int v25; // esi
  int v26; // eax
  _QWORD *v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // eax
  char tinfo_property; // al
  __int64 v33; // [rsp+8h] [rbp-A0h]
  unsigned int *v37; // [rsp+38h] [rbp-70h] BYREF
  unsigned int v38[4]; // [rsp+40h] [rbp-68h] BYREF
  unsigned int v39[4]; // [rsp+50h] [rbp-58h] BYREF
  int v40; // [rsp+60h] [rbp-48h]
  unsigned __int64 v41; // [rsp+68h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  v5 = (_QWORD *)*a3;
  if ( !*a3 )
    return 1;
  if ( !a3[1] )
    return 1;
  v6 = (_QWORD *)v5[1];
  if ( v5 == v6 )
    return 1;
  while ( 1 )
  {
    v8 = (unsigned __int64 *)a1->m128i_i64[0];
    v9 = (int *)(v6 + 3);
    if ( !a1->m128i_i64[0] )
    {
      v37 = (unsigned int *)(v6 + 3);
      v30 = qalloc();
      if ( !v30 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_OWORD *)(v30 + 16) = 0;
      *(_OWORD *)(v30 + 32) = 0;
      *(_QWORD *)v30 = v30 & 0xFFFFFFFFFFFFFFFCLL | 2;
      *(__m128i *)(v30 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v30, (__m128i)(unsigned __int64)v30);
      a1->m128i_i64[0] = v30;
      *(_QWORD *)v30 = v30 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v30 & 3LL;
      *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
      *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
      *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
      v8 = (unsigned __int64 *)a1->m128i_i64[0];
LABEL_8:
      sub_2A0F80(a1, v8, 1, &v37);
      goto LABEL_9;
    }
    v10 = *v8 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v10 )
      break;
    if ( (*(_BYTE *)v10 & 2) != 0 )
    {
      v11 = a1->m128i_i64[1] == 0;
      v37 = (unsigned int *)(v6 + 3);
      v12 = 1;
      if ( !v11 )
        goto LABEL_26;
      goto LABEL_8;
    }
    v16 = v6[3];
    v17 = *v8 & 0xFFFFFFFFFFFFFFFCLL;
    while ( 1 )
    {
      v18 = *(_QWORD *)(v17 + 24);
      v33 = v17 + 24;
      if ( v16 >= v18 )
        break;
      v17 = *(_QWORD *)(v17 + 8);
LABEL_19:
      if ( (*(_BYTE *)v17 & 2) != 0 )
        goto LABEL_20;
    }
    if ( v18 < v16 )
    {
      v17 = *(_QWORD *)(v17 + 16);
      goto LABEL_19;
    }
    if ( v8 != (unsigned __int64 *)v17 )
      goto LABEL_30;
LABEL_20:
    v11 = a1->m128i_i64[1] == 0;
    v37 = (unsigned int *)(v6 + 3);
    if ( v11 )
      goto LABEL_8;
    v8 = (unsigned __int64 *)v10;
    v19 = *(_QWORD *)v9;
    v12 = 1;
    v20 = *(_QWORD *)(v10 + 24);
    if ( *(_QWORD *)v9 < v20 )
    {
LABEL_22:
      v21 = (unsigned __int64 *)v8[1];
      v12 = 1;
      if ( (*(_BYTE *)v21 & 2) != 0 )
        goto LABEL_26;
      goto LABEL_23;
    }
    while ( v20 < v19 )
    {
      v21 = (unsigned __int64 *)v8[2];
      v12 = 0;
      if ( (*(_BYTE *)v21 & 2) != 0 )
        goto LABEL_26;
LABEL_23:
      v8 = v21;
      v20 = v21[3];
      if ( v19 < v20 )
        goto LABEL_22;
    }
    if ( !v8 )
LABEL_26:
      sub_2A0F80(a1, v8, v12, &v37);
LABEL_9:
    if ( (*v6 & 2) == 0 )
    {
      v13 = (_QWORD *)v6[2];
      if ( (*(_BYTE *)v13 & 2) != 0 )
      {
        v27 = (_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFCLL);
        v28 = *v27;
        if ( (*v27 & 2) == 0 )
        {
          while ( (_QWORD *)v27[2] == v6 )
          {
            v6 = v27;
            v29 = v28 & 0xFFFFFFFFFFFFFFFCLL;
            v28 = *(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v28 & 2) != 0 )
            {
              v6 = (_QWORD *)v29;
              goto LABEL_14;
            }
            v27 = (_QWORD *)v29;
          }
        }
        v6 = v27;
      }
      else
      {
        for ( i = (_QWORD *)v13[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
          v13 = i;
        v6 = v13;
      }
    }
LABEL_14:
    if ( (_QWORD *)*a3 == v6 )
      return 1;
  }
  v33 = 24;
  v17 = 0;
LABEL_30:
  v22 = (unsigned int *)(v17 + 32);
  v23 = (unsigned int *)(v6 + 4);
  if ( !(unsigned int)sub_299330((__int64)(v6 + 4), v17 + 32) )
    goto LABEL_9;
  v24 = *((_DWORD *)v6 + 8);
  v25 = *(_DWORD *)(v33 + 8);
  if ( v24 == 1 )
  {
    if ( v25 != 1 )
    {
      if ( v25 != 6 )
        return 0;
      goto LABEL_55;
    }
    if ( (get_tinfo_property() & 0x2F) != 0xD
      || !(unsigned __int8)sub_298640((__int64 **)a1, a2, (int)v17 + 40, (int)v6 + 40, *v9) )
    {
      goto LABEL_9;
    }
LABEL_47:
    sub_29A3B0((__int64)v22, v23);
    goto LABEL_9;
  }
  if ( v24 != 6 )
  {
    if ( v25 != 6 )
      return 0;
LABEL_45:
    if ( v24 != 8 )
    {
      v38[0] = 0;
      sub_29A3B0((__int64)v38, v22);
      v39[0] = 0;
      sub_29A3B0((__int64)v39, v23);
      v40 = 1;
      sub_29A3B0(a4, v38);
      sub_29A3B0(a4 + 16, v39);
      v31 = v40;
      v40 = -1;
      *(_DWORD *)(a4 + 32) = v31;
      sub_299870((__int64)v39);
      sub_299870((__int64)v38);
    }
    goto LABEL_47;
  }
  if ( v25 != 1 || (tinfo_property = get_tinfo_property(), v25 = *(_DWORD *)(v33 + 8), (tinfo_property & 0x3F) != 1) )
  {
    if ( v25 != 8 )
    {
      v38[0] = 0;
      sub_29A3B0((__int64)v38, (unsigned int *)v6 + 8);
      v39[0] = 0;
      sub_29A3B0((__int64)v39, v22);
      v40 = 1;
      sub_29A3B0(a4, v38);
      sub_29A3B0(a4 + 16, v39);
      v26 = v40;
      v40 = -1;
      *(_DWORD *)(a4 + 32) = v26;
      sub_299870((__int64)v39);
      sub_299870((__int64)v38);
    }
    goto LABEL_9;
  }
  if ( v25 != 6 )
    return 0;
  v24 = *((_DWORD *)v6 + 8);
  if ( v24 != 1 )
    goto LABEL_45;
LABEL_55:
  if ( (get_tinfo_property() & 0x3F) != 1 )
  {
    v24 = *((_DWORD *)v6 + 8);
    goto LABEL_45;
  }
  return 0;
}

