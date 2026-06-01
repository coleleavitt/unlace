_QWORD *__fastcall sub_1CEE0(_QWORD *a1, int a2, const __m128i *a3, const __m128i *a4)
{
  __m128i *v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // r12
  __int64 v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rbx
  signed __int32 v13; // eax
  volatile signed __int32 *v14; // rbp
  volatile signed __int32 *v15; // rdx
  int v16; // eax
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rbp
  _QWORD *v21; // rdx
  volatile signed __int32 *v22; // rax
  char *v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rcx
  volatile signed __int32 *v27; // rdx
  _QWORD *v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rax
  volatile signed __int32 *v31; // r14
  int v32; // edx
  __int64 v33; // rdx
  __int64 v35; // [rsp+0h] [rbp-88h]
  __int64 v36; // [rsp+0h] [rbp-88h]
  __int64 v37; // [rsp+8h] [rbp-80h]
  __int64 v38; // [rsp+8h] [rbp-80h]
  __int64 v39; // [rsp+10h] [rbp-78h] BYREF
  __int128 v40; // [rsp+18h] [rbp-70h]
  __int64 v41; // [rsp+40h] [rbp-48h]
  unsigned __int64 v42; // [rsp+48h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v40 = 0;
  v39 = 0;
  sub_1C8C0((__int64)&v39, a3);
  v7 = (__m128i *)a4;
  sub_1C8C0((__int64)&v39, a4);
  v8 = operator new(0x38u);
  v9 = v40;
  v41 = 0;
  *(_QWORD *)(v8 + 8) = 0x100000001LL;
  *(_QWORD *)v8 = off_4D9D8;
  if ( !v9 )
  {
    *(_DWORD *)(v8 + 24) = a2;
    *(_QWORD *)(v8 + 16) = &off_4D9B0;
    *(_QWORD *)(v8 + 32) = 0;
    *(_OWORD *)(v8 + 40) = 0;
    goto LABEL_3;
  }
  v20 = qalloc_or_throw(16 * v9);
  v21 = (_QWORD *)v20;
  v41 = v9;
  v7 = (__m128i *)(16 * v9);
  v22 = nullptr;
  do
  {
    while ( 1 )
    {
      v23 = (char *)v22 + v39;
      *v21 = *(_QWORD *)((char *)v22 + v39);
      v24 = *((_QWORD *)v23 + 1);
      v21[1] = v24;
      if ( !v24 )
        goto LABEL_18;
      if ( !&_pthread_key_create )
        break;
      _InterlockedAdd((volatile signed __int32 *)(v24 + 8), 1u);
LABEL_18:
      v22 += 4;
      v21 += 2;
      if ( v7 == (__m128i *)v22 )
        goto LABEL_22;
    }
    v22 += 4;
    ++*(_DWORD *)(v24 + 8);
    v21 += 2;
  }
  while ( v7 != (__m128i *)v22 );
LABEL_22:
  *(_QWORD *)(v8 + 16) = &off_4D9B0;
  *(_QWORD *)(v8 + 32) = 0;
  *(_DWORD *)(v8 + 24) = a2;
  *(_OWORD *)(v8 + 40) = 0;
  v25 = qalloc_or_throw(v7);
  v26 = v20;
  *(_QWORD *)(v8 + 32) = v25;
  v27 = nullptr;
  *(_QWORD *)(v8 + 48) = v9;
  while ( 1 )
  {
    v28 = (_QWORD *)((char *)v27 + v25);
    *v28 = *(_QWORD *)((char *)v27 + v20);
    v29 = *(_QWORD *)((char *)v27 + v20 + 8);
    v28[1] = v29;
    if ( v29 )
      break;
LABEL_24:
    v27 += 4;
    if ( v7 == (__m128i *)v27 )
      goto LABEL_29;
LABEL_25:
    v25 = *(_QWORD *)(v8 + 32);
  }
  if ( &_pthread_key_create )
  {
    _InterlockedAdd((volatile signed __int32 *)(v29 + 8), 1u);
    goto LABEL_24;
  }
  v27 += 4;
  ++*(_DWORD *)(v29 + 8);
  if ( v7 != (__m128i *)v27 )
    goto LABEL_25;
LABEL_29:
  *(_QWORD *)(v8 + 40) = v9;
  if ( !v20 )
    goto LABEL_3;
  v30 = 0;
  while ( 2 )
  {
    while ( 2 )
    {
      v31 = *(volatile signed __int32 **)(v26 + 8);
      if ( !v31 )
        goto LABEL_32;
      v7 = (__m128i *)(v31 + 2);
      if ( *((_QWORD *)v31 + 1) == 0x100000001LL )
      {
        v33 = *(_QWORD *)v31;
        v38 = v26;
        v36 = v30;
        *((_QWORD *)v31 + 1) = 0;
        (*(void (__fastcall **)(volatile signed __int32 *, __m128i *, __int64, __int64, __int64))(v33 + 16))(
          v31,
          v7,
          v33,
          v26,
          0x100000001LL);
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 24LL))(v31);
        v30 = v36;
        v26 = v38;
        goto LABEL_32;
      }
      if ( &_pthread_key_create )
      {
        if ( _InterlockedExchangeAdd(v7->m128i_i32, 0xFFFFFFFF) == 1 )
          break;
        goto LABEL_32;
      }
      v32 = *((_DWORD *)v31 + 2);
      v7 = (__m128i *)(unsigned int)(v32 - 1);
      *((_DWORD *)v31 + 2) = (_DWORD)v7;
      if ( v32 != 1 )
      {
LABEL_32:
        ++v30;
        v26 += 16;
        if ( v9 == v30 )
          goto LABEL_38;
        continue;
      }
      break;
    }
    v37 = v26;
    v35 = v30;
    sub_1C3E0(v31);
    v30 = v35 + 1;
    v26 = v37 + 16;
    if ( v9 != v35 + 1 )
      continue;
    break;
  }
LABEL_38:
  qfree(v20);
LABEL_3:
  v10 = v39;
  *a1 = v8 + 16;
  a1[1] = v8;
  if ( v10 )
  {
    v11 = v40;
    if ( (_QWORD)v40 )
    {
      v12 = 0;
      while ( 1 )
      {
        v14 = *(volatile signed __int32 **)(v10 + 16 * v12 + 8);
        if ( !v14 )
          goto LABEL_7;
        v15 = v14 + 2;
        if ( *((_QWORD *)v14 + 1) == 0x100000001LL )
        {
          v18 = *(_QWORD *)v14;
          v19 = *(_QWORD *)(v10 + 16 * v12 + 8);
          *((_QWORD *)v14 + 1) = 0;
          (*(void (__fastcall **)(__int64, __m128i *, volatile signed __int32 *))(v18 + 16))(v19, v7, v15);
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 24LL))(v14);
          v10 = v39;
          goto LABEL_7;
        }
        if ( &_pthread_key_create )
        {
          v13 = _InterlockedExchangeAdd(v15, 0xFFFFFFFF);
          v10 = v39;
          if ( v13 != 1 )
            goto LABEL_7;
LABEL_12:
          ++v12;
          sub_1C3E0(v14);
          v10 = v39;
          if ( v11 == v12 )
            break;
        }
        else
        {
          v16 = *((_DWORD *)v14 + 2);
          v10 = v39;
          *((_DWORD *)v14 + 2) = v16 - 1;
          if ( v16 == 1 )
            goto LABEL_12;
LABEL_7:
          if ( v11 == ++v12 )
            break;
        }
      }
    }
    *(_QWORD *)&v40 = 0;
    qfree(v10);
  }
  return a1;
}

