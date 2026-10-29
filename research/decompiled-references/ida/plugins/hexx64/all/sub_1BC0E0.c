char __fastcall sub_1BC0E0(__int64 a1, int a2)
{
  double v2; // xmm0_8
  __int64 v3; // r13
  int *v4; // rbp
  void **v5; // r14
  int *v6; // rbx
  int v7; // r15d
  char result; // al
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  _QWORD *v12; // rdx
  unsigned __int64 v13; // r8
  __int64 v14; // rax
  bool v15; // bp
  void *v16; // rdi
  int *v17; // rcx
  int *v18; // r9
  int v19; // eax
  __int64 v20; // [rsp+0h] [rbp-110h]
  bool v21; // [rsp+0h] [rbp-110h]
  __int64 *v22; // [rsp+8h] [rbp-108h]
  int *v23; // [rsp+10h] [rbp-100h]
  __m128i v24; // [rsp+18h] [rbp-F8h]
  __int64 v25; // [rsp+28h] [rbp-E8h]
  unsigned __int64 v26; // [rsp+30h] [rbp-E0h]
  int *v27; // [rsp+38h] [rbp-D8h]
  int *v28; // [rsp+40h] [rbp-D0h]
  int v29[4]; // [rsp+64h] [rbp-ACh] BYREF
  int v30; // [rsp+74h] [rbp-9Ch] BYREF
  __m128i v31; // [rsp+78h] [rbp-98h] BYREF
  __int128 v32; // [rsp+88h] [rbp-88h]
  __int128 v33; // [rsp+98h] [rbp-78h]
  __int128 v34; // [rsp+A8h] [rbp-68h]
  __int128 v35; // [rsp+B8h] [rbp-58h]
  unsigned __int64 v36; // [rsp+D0h] [rbp-40h]

  v2 = 0.0;
  v29[0] = a2;
  v36 = __readfsqword(0x28u);
  v31 = 0u;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  sub_1BA740(&v31, 0);
  v3 = v35;
  v4 = (int *)v32;
  v24 = v31;
  v5 = *((void ***)&v33 + 1);
  v23 = *((int **)&v32 + 1);
  v20 = v33;
  v25 = *((_QWORD *)&v35 + 1);
  if ( (_QWORD)v34 == (_QWORD)v35 - 4LL )
  {
    sub_1BA8A0(v31.m128i_i64, v29);
    v4 = (int *)v32;
    v5 = *((void ***)&v33 + 1);
    v6 = (int *)v34;
    v24 = v31;
    v3 = v35;
    v23 = *((int **)&v32 + 1);
    v20 = v33;
    v25 = *((_QWORD *)&v35 + 1);
  }
  else
  {
    v6 = (int *)(v34 + 4);
    *(_DWORD *)v34 = v29[0];
  }
  v22 = (__int64 *)(a1 + 64);
  if ( v4 == v6 )
    goto LABEL_20;
  while ( 1 )
  {
    v7 = *v4;
    if ( v4 == (int *)(v20 - 4) )
    {
      ++v5;
      operator delete(v23, 0x200u);
      v4 = (int *)*v5;
      v23 = (int *)*v5;
      v20 = (__int64)*v5 + 512;
    }
    else
    {
      ++v4;
    }
    result = sub_64930(v22, v7);
    if ( !result )
      break;
LABEL_12:
    if ( v7 == *(_DWORD *)(a1 + 24) )
      goto LABEL_19;
    v12 = *(_QWORD **)(a1 + 48);
    if ( !v12 )
      goto LABEL_19;
    v13 = *v12 & 0xFFFFFFFFFFFFFFFCLL;
    if ( v13 )
    {
      if ( (*(_BYTE *)(*v12 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
        goto LABEL_19;
      while ( 1 )
      {
        v14 = v13 + 24;
        if ( v7 >= *(_DWORD *)(v13 + 24) )
          break;
        v13 = *(_QWORD *)(v13 + 8);
LABEL_18:
        if ( (*(_BYTE *)v13 & 2) != 0 )
          goto LABEL_19;
      }
      if ( v7 > *(_DWORD *)(v13 + 24) )
      {
        v13 = *(_QWORD *)(v13 + 16);
        goto LABEL_18;
      }
      if ( (_QWORD *)v13 != v12 )
        goto LABEL_31;
LABEL_19:
      if ( v4 == v6 )
      {
LABEL_20:
        result = 1;
        goto LABEL_21;
      }
    }
    else
    {
      v14 = 24;
LABEL_31:
      v17 = *(int **)(v14 + 8);
      v18 = &v17[*(_QWORD *)(v14 + 16)];
      if ( v18 != v17 )
      {
        do
        {
          while ( 1 )
          {
            v19 = *v17;
            v30 = *v17;
            if ( v6 == (int *)(v3 - 4) )
              break;
            ++v17;
            *v6++ = v19;
            if ( v18 == v17 )
              goto LABEL_36;
          }
          v28 = v17;
          v27 = v18;
          v31 = v24;
          v26 = v13;
          *(_QWORD *)&v32 = v4;
          *((_QWORD *)&v32 + 1) = v23;
          *((_QWORD *)&v33 + 1) = v5;
          *(_QWORD *)&v33 = v20;
          *(_QWORD *)&v34 = v6;
          *(_QWORD *)&v35 = v3;
          *((_QWORD *)&v35 + 1) = v25;
          sub_1BA8A0(v31.m128i_i64, &v30);
          v18 = v27;
          v13 = v26;
          v24 = v31;
          v17 = v28 + 1;
          v4 = (int *)v32;
          v5 = *((void ***)&v33 + 1);
          v6 = (int *)v34;
          v3 = v35;
          v23 = *((int **)&v32 + 1);
          v20 = v33;
          v25 = *((_QWORD *)&v35 + 1);
        }
        while ( v27 != v28 + 1 );
      }
LABEL_36:
      sub_1BBD30((unsigned __int64 **)(a1 + 48), (__int64 *)v13);
      if ( v4 == v6 )
        goto LABEL_20;
    }
  }
  if ( v7 != v29[0] || v7 == *(_DWORD *)(a1 + 40) )
  {
    v9 = *(_QWORD *)(a1 + 8);
    if ( (unsigned int)v7 >= *(_DWORD *)(v9 + 64) )
    {
      if ( !under_debugger )
        sub_383060(0xCDEFu, v2);
      BUG();
    }
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 528) + 8LL * (unsigned int)v7);
    if ( v7 == *(_DWORD *)(a1 + 24) )
      v11 = *(_QWORD *)(a1 + 32);
    else
      v11 = *(_QWORD *)(v10 + 48);
    v2 = (**(double (__fastcall ***)(__int64, __int64, __int64))a1)(a1, v10, v11);
    sub_64190(v22, v7, v2);
    goto LABEL_12;
  }
LABEL_21:
  if ( v24.m128i_i64[0] )
  {
    if ( (unsigned __int64)v5 < v25 + 8 )
    {
      v15 = result;
      do
      {
        v16 = *v5++;
        operator delete(v16, 0x200u);
      }
      while ( (unsigned __int64)v5 < v25 + 8 );
      result = v15;
    }
    v21 = result;
    operator delete((void *)v24.m128i_i64[0], 8 * v24.m128i_i64[1]);
    return v21;
  }
  return result;
}

