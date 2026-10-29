__int64 __fastcall sub_3D560(_QWORD *a1)
{
  unsigned __int64 v2; // r8
  __int64 v3; // rax
  int *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r13
  __int64 v8; // rbp
  __int64 v9; // r12
  _QWORD *v10; // rax
  __int64 result; // rax
  unsigned __int64 v12; // rbp
  const char *v13; // rsi
  __int64 (__fastcall *v14)(_QWORD *, char); // rax
  __int64 v15; // rbp
  unsigned __int64 v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rax
  const void *v19; // rsi
  unsigned __int8 v20; // [rsp+Fh] [rbp-F9h]
  int v21; // [rsp+1Ch] [rbp-ECh] BYREF
  char *v22; // [rsp+20h] [rbp-E8h] BYREF
  __int128 v23; // [rsp+28h] [rbp-E0h]
  _QWORD v24[4]; // [rsp+40h] [rbp-C8h] BYREF
  int v25; // [rsp+60h] [rbp-A8h]
  __m128i v26; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v27[8]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE *v28; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v29; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v30; // [rsp+D8h] [rbp-30h]

  v30 = __readfsqword(0x28u);
  if ( *((_WORD *)a1 + 124) != 27 || *((_BYTE *)a1 + 345) )
    return 0;
  v2 = a1[34];
  v3 = qword_AA5D0;
  v22 = nullptr;
  v23 = 0;
  if ( !qword_AA5D0 )
    goto LABEL_10;
  v4 = &dword_AA5C8;
  do
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(v3 + 16);
      v6 = *(_QWORD *)(v3 + 24);
      if ( (int)v2 > *(_DWORD *)(v3 + 32) )
        break;
      v4 = (int *)v3;
      v3 = *(_QWORD *)(v3 + 16);
      if ( !v5 )
        goto LABEL_8;
    }
    v3 = *(_QWORD *)(v3 + 24);
  }
  while ( v6 );
LABEL_8:
  if ( v4 != &dword_AA5C8 && (int)v2 >= v4[8] )
  {
    if ( &v22 != (char **)(v4 + 10) )
    {
      v12 = *((_QWORD *)v4 + 6);
      if ( v12 >= 2 )
      {
        v19 = *((const void **)v4 + 5);
        v22 = (char *)qvector_reserve();
        *(_QWORD *)&v23 = v12;
        memmove(v22, v19, v12 - 1);
        v22[v12 - 1] = 0;
      }
    }
    v21 = a1[39];
  }
  else
  {
LABEL_10:
    v7 = a1[39];
    v8 = v2 & 7;
    v9 = (v2 >> 3) & 7;
    v26 = 0;
    v10 = v27;
    do
    {
      *(_OWORD *)v10 = 0;
      v10 += 4;
      *((_OWORD *)v10 - 1) = 0;
    }
    while ( &v28 != v10 );
    v28 = nullptr;
    v29 = 0;
    v28 = (_BYTE *)qvector_reserve();
    *(_QWORD *)&v29 = 1;
    *v28 = 0;
    v27[0] = (unsigned int)v9;
    memset(&v27[1], 0, 24);
    v27[4] = v7 & 0xF;
    v27[5] = 0;
    v27[6] = v8;
    v27[7] = 0;
    v26 = 0;
    result = sub_39280((__int64)&v22, &qword_AA610, &v26, &v21);
    if ( !(_BYTE)result )
    {
      if ( v28 )
      {
        *(_QWORD *)&v29 = 0;
        qfree();
        result = 0;
      }
      goto LABEL_30;
    }
    if ( v28 )
    {
      *(_QWORD *)&v29 = 0;
      qfree();
    }
  }
  (*(void (__fastcall **)(_QWORD *))(*a1 + 296LL))(a1);
  v13 = &s1;
  if ( (_QWORD)v23 )
    v13 = v22;
  (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, v13, 33);
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
  v14 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
  if ( v14 == sub_38AB0 )
  {
    v15 = a1[4];
    v16 = 2;
    if ( v15 )
      v16 = v15-- + 1;
    v17 = a1[3];
    if ( a1[5] < v16 )
    {
      v18 = qvector_reserve();
      a1[3] = v18;
      v17 = v18;
    }
    a1[4] = v16;
    *(_BYTE *)(v17 + v15) = 32;
    *(_BYTE *)(a1[3] + v15 + 1) = 0;
  }
  else
  {
    v14(a1, 32);
  }
  v24[2] = 0;
  v24[0] = 0x70000000500LL;
  v24[3] = 0;
  v25 = 0;
  v24[1] = v21;
  sub_3CA80(a1, (__int64)v24, 0.0);
  result = 1;
LABEL_30:
  if ( v22 )
  {
    v20 = result;
    *(_QWORD *)&v23 = 0;
    qfree();
    return v20;
  }
  return result;
}

