unsigned __int64 __fastcall sub_10700(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v5; // rdx
  unsigned __int64 v6; // r14
  _QWORD *v8; // rbx
  _QWORD *v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // rax
  unsigned int v15; // ebp
  __int64 v16; // rax
  _QWORD *v18; // rsi
  unsigned __int64 v19; // rcx
  _QWORD *v20; // rbp
  _QWORD *v21; // rdx
  _QWORD *v22; // rax
  __int64 v23; // r12
  _QWORD *v24; // r14
  __int64 i; // rax
  void *v26; // rsi
  __int64 (__fastcall *v27)(__int64 *, char); // rax
  __int64 v28; // r12
  unsigned __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rax
  void *v32; // rsi
  __int64 v33; // [rsp+0h] [rbp-98h]
  __int64 v34; // [rsp+8h] [rbp-90h]
  unsigned __int64 v35; // [rsp+18h] [rbp-80h]
  int v36; // [rsp+24h] [rbp-74h] BYREF
  unsigned int v37; // [rsp+28h] [rbp-70h] BYREF
  int v38; // [rsp+2Ch] [rbp-6Ch] BYREF
  void *v39; // [rsp+30h] [rbp-68h] BYREF
  __int128 v40; // [rsp+38h] [rbp-60h]
  _BYTE v41[5]; // [rsp+53h] [rbp-45h] BYREF
  unsigned __int64 v42; // [rsp+58h] [rbp-40h]

  v5 = (_QWORD *)a1[77];
  v6 = a1[30];
  v42 = __readfsqword(0x28u);
  v8 = (_QWORD *)v5[69];
  if ( !v8 )
    goto LABEL_8;
  v9 = v5 + 68;
  do
  {
    while ( 1 )
    {
      v10 = v8[2];
      v11 = v8[3];
      if ( v8[4] < v6 )
        break;
      v9 = v8;
      v8 = (_QWORD *)v8[2];
      if ( !v10 )
        goto LABEL_6;
    }
    v8 = (_QWORD *)v8[3];
  }
  while ( v11 );
LABEL_6:
  if ( v9 == v5 + 68 )
    goto LABEL_8;
  if ( v6 < v9[4] )
    goto LABEL_8;
  v8 = (_QWORD *)v5[57];
  v18 = v5 + 56;
  v19 = v9[5];
  v20 = v5 + 56;
  if ( !v8 )
    goto LABEL_8;
  v21 = (_QWORD *)v8[2];
  v22 = (_QWORD *)v8[3];
  if ( v8[4] < v19 )
    goto LABEL_17;
  while ( 1 )
  {
    v20 = v8;
    v8 = v21;
    if ( !v21 )
      break;
    while ( 1 )
    {
      v21 = (_QWORD *)v8[2];
      v22 = (_QWORD *)v8[3];
      if ( v8[4] >= v19 )
        break;
LABEL_17:
      v8 = v22;
      if ( !v22 )
        goto LABEL_18;
    }
  }
LABEL_18:
  if ( v20 == v18 || v19 < v20[4] )
  {
LABEL_8:
    v12 = 0;
  }
  else
  {
    v12 = v20[6];
    if ( v12 )
    {
      v8 = (_QWORD *)qalloc_or_throw(8 * v12, v18, v21, v19, a5);
      memcpy(v8, (const void *)v20[5], 8 * v12);
    }
  }
  *((_WORD *)a1 + 125) = 0;
  v34 = (__int64)(a1 + 28);
  v13 = sub_10500((__int64)(a1 + 28), &v36);
  v14 = sub_10180((__int64)(a1 + 28), &v37);
  v15 = v37;
  if ( v37 + 1 == v12 )
  {
    v23 = v14 + v6 + v13;
    if ( v37 )
    {
      v24 = v8;
      v15 = 0;
LABEL_24:
      for ( i = sub_10180(v34, &v38); ; i = sub_10180(v34, &v38) )
      {
        v33 = v23 + i;
        qsnprintf(v41, 5, "%u ", v38);
        (*(void (__fastcall **)(__int64 *, _BYTE *, __int64))(*a1 + 56))(a1, v41, 32);
        v39 = nullptr;
        v40 = 0;
        get_name_expr(&v39, v23, v15, *v24, -1, 1);
        v26 = &unk_1DA78;
        if ( (_QWORD)v40 )
          v26 = v39;
        (*(void (__fastcall **)(__int64 *, void *, __int64))(*a1 + 56))(a1, v26, 32);
        if ( v39 )
        {
          *(_QWORD *)&v40 = 0;
          qfree(v39);
        }
        if ( ++v15 >= v37 )
          break;
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 44);
        ++v24;
        v27 = *(__int64 (__fastcall **)(__int64 *, char))(*a1 + 96);
        if ( v27 != sub_105C0 )
        {
          v27(a1, 32);
          v23 = v33;
          goto LABEL_24;
        }
        v28 = a1[4];
        v29 = 2;
        if ( v28 )
          v29 = v28-- + 1;
        v30 = a1[3];
        if ( a1[5] < v29 )
        {
          v35 = v29;
          v31 = qvector_reserve(a1 + 3, v30, v29, 1);
          a1[3] = v31;
          v29 = v35;
          v30 = v31;
        }
        a1[4] = v29;
        *(_BYTE *)(v30 + v28) = 32;
        *(_BYTE *)(a1[3] + v28 + 1) = 0;
        v23 = v33;
      }
    }
    else
    {
      v33 = v23;
    }
    (*(void (__fastcall **)(__int64 *, const char *, __int64))(*a1 + 56))(a1, ", default: ", 32);
    sub_10180(v34, &v38);
    qsnprintf(v41, 5, "%u ", v38);
    (*(void (__fastcall **)(__int64 *, _BYTE *, __int64))(*a1 + 56))(a1, v41, 32);
    v40 = 0;
    v39 = nullptr;
    get_name_expr(&v39, v33, v15, v8[v15], -1, 1);
    v32 = &unk_1DA78;
    if ( (_QWORD)v40 )
      v32 = v39;
    (*(void (__fastcall **)(__int64 *, void *, __int64))(*a1 + 56))(a1, v32, 32);
    if ( v39 )
    {
      *(_QWORD *)&v40 = 0;
      qfree(v39);
    }
  }
  v16 = *a1;
  *((_DWORD *)a1 + 36) |= 0x80u;
  (*(void (__fastcall **)(__int64 *, __int64))(v16 + 128))(a1, 0xFFFFFFFFLL);
  if ( v8 )
    qfree(v8);
  return v42 - __readfsqword(0x28u);
}
