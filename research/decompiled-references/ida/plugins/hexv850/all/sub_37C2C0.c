unsigned __int64 __fastcall sub_37C2C0(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *exception; // rdi
  _QWORD *v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r15
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 *v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 *v13; // rdi
  unsigned __int64 *v14; // r13
  __int64 v15; // rax
  unsigned __int64 v16; // r13
  unsigned __int64 i; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r15
  _QWORD *v20; // rdx
  unsigned __int64 v21; // r13
  unsigned __int64 v22; // r12
  _BYTE *v23; // rdi
  _BYTE *v24; // rdi
  _BYTE *v26; // rcx
  char v27; // cl
  char v28; // dl
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdx
  unsigned __int64 *v31; // rdx
  __int64 v32; // rax
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  __m128i v35; // xmm0
  _QWORD *v36; // rax
  __int64 v37; // rdx
  _QWORD *v38; // rcx
  unsigned __int64 v39; // rsi
  __int64 v40; // rbp
  void *v41; // rdi
  unsigned __int64 **v42; // [rsp+0h] [rbp-98h]
  _QWORD *v43; // [rsp+8h] [rbp-90h]
  unsigned __int64 v44; // [rsp+10h] [rbp-88h]
  __int64 **v48; // [rsp+30h] [rbp-68h] BYREF
  __int64 *v49; // [rsp+38h] [rbp-60h] BYREF
  __m128i v50; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v51; // [rsp+58h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  v44 = a3 - a2;
  v42 = (unsigned __int64 **)(a1 + 1);
  v6 = (_QWORD *)a1[1];
  if ( v6 && (v7 = *v6 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
  {
    v8 = a1[1];
    if ( (*(_BYTE *)v7 & 2) == 0 )
    {
      while ( 1 )
      {
        v26 = *(_BYTE **)(v7 + 8);
        if ( *(_QWORD *)(v7 + 24) < a2 )
          v26 = *(_BYTE **)(v7 + 16);
        else
          v8 = v7;
        if ( (*v26 & 2) != 0 )
          break;
        v7 = (unsigned __int64)v26;
      }
    }
  }
  else
  {
    v8 = 0;
  }
  v9 = 0;
  v10 = 0;
  if ( (_QWORD *)v8 == v6 )
    goto LABEL_14;
  do
  {
    if ( *(_QWORD *)(v8 + 24) >= a2 + a4 )
      break;
    v11 = (__int64 *)(*(_QWORD *)(v8 + 24) + v44);
    v49 = v11;
    v48 = &v49;
    if ( !v10 )
    {
      v10 = qalloc();
      v35 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v10, (__m128i)(unsigned __int64)v10);
      if ( !v10 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      memset((void *)v10, 0, 0x60u);
      *(__m128i *)(v10 + 8) = v35;
      *(_QWORD *)v10 = v10 & 0xFFFFFFFFFFFFFFFCLL | 2;
LABEL_8:
      v50.m128i_i64[0] = v10;
      v50.m128i_i64[1] = v9;
      v12 = sub_37C020(&v50, (unsigned __int64 *)v10, 1, (__int64 **)&v48);
      v9 = v50.m128i_i64[1];
      v10 = v50.m128i_i64[0];
      v13 = (unsigned __int64 *)v12;
      v14 = (unsigned __int64 *)(v12 + 24);
      goto LABEL_9;
    }
    if ( !v9 )
      goto LABEL_8;
    v27 = 1;
    v13 = (unsigned __int64 *)(*(_QWORD *)v10 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (*(_BYTE *)v13 & 2) != 0 )
    {
      v13 = (unsigned __int64 *)v10;
      v28 = 1;
LABEL_39:
      v50.m128i_i64[0] = v10;
      v50.m128i_i64[1] = v9;
      v29 = sub_37C020(&v50, v13, v28, (__int64 **)&v48);
      v9 = v50.m128i_i64[1];
      v10 = v50.m128i_i64[0];
      v13 = (unsigned __int64 *)v29;
      v14 = (unsigned __int64 *)(v29 + 24);
      goto LABEL_9;
    }
    while ( 1 )
    {
      v30 = v13[3];
      v14 = v13 + 3;
      if ( (unsigned __int64)v11 < v30 )
      {
        v31 = (unsigned __int64 *)v13[1];
        v27 = 1;
        goto LABEL_43;
      }
      if ( v30 >= (unsigned __int64)v11 )
        break;
      v31 = (unsigned __int64 *)v13[2];
      v27 = 0;
LABEL_43:
      if ( (*(_BYTE *)v31 & 2) != 0 )
        goto LABEL_44;
      v13 = v31;
    }
    if ( !v13 )
    {
LABEL_44:
      v28 = v27;
      goto LABEL_39;
    }
LABEL_9:
    sub_3663C0(v13 + 4, v8 + 32);
    copy_tinfo_t();
    *((_DWORD *)v14 + 16) = *(_DWORD *)(v8 + 88);
    *((_DWORD *)v14 + 17) = *(_DWORD *)(v8 + 92);
    v15 = *(_QWORD *)v8;
    v16 = v8;
    if ( (*(_QWORD *)v8 & 2) == 0 )
    {
      v16 = *(_QWORD *)(v8 + 16);
      if ( (*(_BYTE *)v16 & 2) != 0 )
      {
        v16 = v15 & 0xFFFFFFFFFFFFFFFCLL;
        v32 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v32 & 2) == 0 )
        {
          v33 = v8;
          do
          {
            if ( *(_QWORD *)(v16 + 16) != v33 )
              break;
            v33 = v16;
            v34 = v32 & 0xFFFFFFFFFFFFFFFCLL;
            v32 = *(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFFCLL);
            v16 = v34;
          }
          while ( (v32 & 2) == 0 );
        }
      }
      else
      {
        for ( i = *(_QWORD *)(v16 + 8); (*(_BYTE *)i & 2) == 0; i = *(_QWORD *)(i + 8) )
          v16 = i;
      }
    }
    sub_373D00(v42, (__int64 *)v8);
    v8 = v16;
  }
  while ( v16 != a1[1] );
LABEL_14:
  if ( !v9 )
  {
    sub_366800(a1 + 9, a2, a3, a4);
    if ( !v10 )
      return v51 - __readfsqword(0x28u);
    goto LABEL_30;
  }
  if ( v10 )
  {
    v43 = *(_QWORD **)(v10 + 8);
    if ( v43 != (_QWORD *)v10 )
    {
      do
      {
LABEL_17:
        while ( 1 )
        {
          v49 = v43 + 3;
          v18 = sub_378CD0((__m128i *)v42, v43 + 3, &v49);
          v19 = v18 + 24;
          sub_3663C0((_QWORD *)(v18 + 32), (__int64)(v43 + 4));
          copy_tinfo_t();
          *(_DWORD *)(v19 + 64) = *((_DWORD *)v43 + 22);
          *(_DWORD *)(v19 + 68) = *((_DWORD *)v43 + 23);
          if ( (*v43 & 2) == 0 )
            break;
LABEL_21:
          if ( v43 == (_QWORD *)v10 )
            goto LABEL_22;
        }
        v20 = (_QWORD *)v43[2];
        if ( (*(_BYTE *)v20 & 2) == 0 )
        {
          while ( (*(_BYTE *)v20[1] & 2) == 0 )
            v20 = (_QWORD *)v20[1];
          v43 = v20;
          goto LABEL_21;
        }
        v36 = (_QWORD *)(*v43 & 0xFFFFFFFFFFFFFFFCLL);
        v37 = *v36;
        if ( (*v36 & 2) == 0 )
        {
          v38 = v43;
          while ( (_QWORD *)v36[2] == v38 )
          {
            v38 = v36;
            v39 = v37 & 0xFFFFFFFFFFFFFFFCLL;
            v37 = *(_QWORD *)(v37 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v37 & 2) != 0 )
            {
              v43 = (_QWORD *)v39;
              if ( v39 != v10 )
                goto LABEL_17;
              goto LABEL_22;
            }
            v36 = (_QWORD *)v39;
          }
        }
        v43 = v36;
      }
      while ( v36 != (_QWORD *)v10 );
    }
  }
LABEL_22:
  sub_366800(a1 + 3, a2, a3, a4);
  sub_366800(a1 + 9, a2, a3, a4);
  if ( v10 )
  {
    v21 = *(_QWORD *)v10;
    v22 = *(_QWORD *)v10 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v22 & 2) != 0 )
    {
LABEL_30:
      qfree();
      return v51 - __readfsqword(0x28u);
    }
    v23 = *(_BYTE **)(v22 + 8);
    if ( (*v23 & 2) != 0 )
    {
      v24 = *(_BYTE **)(v22 + 16);
      if ( (*v24 & 2) != 0 )
        goto LABEL_70;
    }
    else
    {
      sub_366660((__int64)v23);
      v24 = *(_BYTE **)(v22 + 16);
      if ( (*v24 & 2) != 0 )
        goto LABEL_27;
    }
    sub_366660((__int64)v24);
LABEL_27:
    if ( (*(_BYTE *)v22 & 2) != 0 )
    {
LABEL_28:
      if ( v21 > 3 )
        qfree();
      goto LABEL_30;
    }
LABEL_70:
    clear_tinfo_t();
    v40 = *(_QWORD *)(v22 + 48);
    while ( v40 )
    {
      sub_365B50(*(_QWORD **)(v40 + 24));
      v41 = (void *)v40;
      v40 = *(_QWORD *)(v40 + 16);
      operator delete(v41, 0x28u);
    }
    *(_QWORD *)v22 |= 2uLL;
    goto LABEL_28;
  }
  return v51 - __readfsqword(0x28u);
}

