bool __fastcall sub_1B7A60(__int64 a1, int a2)
{
  __int64 v2; // r13
  int *v3; // rbp
  void **v4; // r14
  int *v5; // rbx
  int v6; // r15d
  bool result; // al
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  _QWORD *v11; // rdx
  unsigned __int64 v12; // r8
  __int64 v13; // rax
  bool v14; // bp
  void *v15; // rdi
  int *v16; // rcx
  int *v17; // r9
  int v18; // eax
  __int64 v19; // [rsp+0h] [rbp-110h]
  bool v20; // [rsp+0h] [rbp-110h]
  __int64 *v21; // [rsp+8h] [rbp-108h]
  int *v22; // [rsp+10h] [rbp-100h]
  __m128i v23; // [rsp+18h] [rbp-F8h]
  __int64 v24; // [rsp+28h] [rbp-E8h]
  unsigned __int64 v25; // [rsp+30h] [rbp-E0h]
  int *v26; // [rsp+38h] [rbp-D8h]
  int *v27; // [rsp+40h] [rbp-D0h]
  int v28[4]; // [rsp+64h] [rbp-ACh] BYREF
  int v29; // [rsp+74h] [rbp-9Ch] BYREF
  __m128i v30; // [rsp+78h] [rbp-98h] BYREF
  __int128 v31; // [rsp+88h] [rbp-88h]
  __int128 v32; // [rsp+98h] [rbp-78h]
  __int128 v33; // [rsp+A8h] [rbp-68h]
  __int128 v34; // [rsp+B8h] [rbp-58h]
  unsigned __int64 v35; // [rsp+D0h] [rbp-40h]

  v28[0] = a2;
  v35 = __readfsqword(0x28u);
  v30 = 0u;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  sub_1B60C0(&v30, 0);
  v2 = v34;
  v3 = (int *)v31;
  v23 = v30;
  v4 = *((void ***)&v32 + 1);
  v22 = *((int **)&v31 + 1);
  v19 = v32;
  v24 = *((_QWORD *)&v34 + 1);
  if ( (_QWORD)v33 == (_QWORD)v34 - 4LL )
  {
    sub_1B6220(v30.m128i_i64, v28);
    v3 = (int *)v31;
    v4 = *((void ***)&v32 + 1);
    v5 = (int *)v33;
    v23 = v30;
    v2 = v34;
    v22 = *((int **)&v31 + 1);
    v19 = v32;
    v24 = *((_QWORD *)&v34 + 1);
  }
  else
  {
    v5 = (int *)(v33 + 4);
    *(_DWORD *)v33 = v28[0];
  }
  v21 = (__int64 *)(a1 + 64);
  if ( v3 == v5 )
    goto LABEL_20;
  while ( 1 )
  {
    v6 = *v3;
    if ( v3 == (int *)(v19 - 4) )
    {
      ++v4;
      operator delete(v22, 0x200u);
      v3 = (int *)*v4;
      v22 = (int *)*v4;
      v19 = (__int64)*v4 + 512;
    }
    else
    {
      ++v3;
    }
    result = sub_605B0(v21, v6);
    if ( !result )
      break;
LABEL_12:
    if ( v6 == *(_DWORD *)(a1 + 24) )
      goto LABEL_19;
    v11 = *(_QWORD **)(a1 + 48);
    if ( !v11 )
      goto LABEL_19;
    v12 = *v11 & 0xFFFFFFFFFFFFFFFCLL;
    if ( v12 )
    {
      if ( (*(_BYTE *)(*v11 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
        goto LABEL_19;
      while ( 1 )
      {
        v13 = v12 + 24;
        if ( v6 >= *(_DWORD *)(v12 + 24) )
          break;
        v12 = *(_QWORD *)(v12 + 8);
LABEL_18:
        if ( (*(_BYTE *)v12 & 2) != 0 )
          goto LABEL_19;
      }
      if ( v6 > *(_DWORD *)(v12 + 24) )
      {
        v12 = *(_QWORD *)(v12 + 16);
        goto LABEL_18;
      }
      if ( (_QWORD *)v12 != v11 )
        goto LABEL_31;
LABEL_19:
      if ( v3 == v5 )
      {
LABEL_20:
        result = 1;
        goto LABEL_21;
      }
    }
    else
    {
      v13 = 24;
LABEL_31:
      v16 = *(int **)(v13 + 8);
      v17 = &v16[*(_QWORD *)(v13 + 16)];
      if ( v17 != v16 )
      {
        do
        {
          while ( 1 )
          {
            v18 = *v16;
            v29 = *v16;
            if ( v5 == (int *)(v2 - 4) )
              break;
            ++v16;
            *v5++ = v18;
            if ( v17 == v16 )
              goto LABEL_36;
          }
          v27 = v16;
          v26 = v17;
          v30 = v23;
          v25 = v12;
          *(_QWORD *)&v31 = v3;
          *((_QWORD *)&v31 + 1) = v22;
          *((_QWORD *)&v32 + 1) = v4;
          *(_QWORD *)&v32 = v19;
          *(_QWORD *)&v33 = v5;
          *(_QWORD *)&v34 = v2;
          *((_QWORD *)&v34 + 1) = v24;
          sub_1B6220(v30.m128i_i64, &v29);
          v17 = v26;
          v12 = v25;
          v23 = v30;
          v16 = v27 + 1;
          v3 = (int *)v31;
          v4 = *((void ***)&v32 + 1);
          v5 = (int *)v33;
          v2 = v34;
          v22 = *((int **)&v31 + 1);
          v19 = v32;
          v24 = *((_QWORD *)&v34 + 1);
        }
        while ( v26 != v27 + 1 );
      }
LABEL_36:
      sub_1B76B0((unsigned __int64 **)(a1 + 48), (__int64 *)v12);
      if ( v3 == v5 )
        goto LABEL_20;
    }
  }
  if ( v6 != v28[0] || v6 == *(_DWORD *)(a1 + 40) )
  {
    v8 = *(_QWORD *)(a1 + 8);
    if ( (unsigned int)v6 >= *(_DWORD *)(v8 + 64) )
    {
      if ( !under_debugger )
        sub_37DDE0(52719);
      BUG();
    }
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 528) + 8LL * (unsigned int)v6);
    if ( v6 == *(_DWORD *)(a1 + 24) )
      v10 = *(_QWORD *)(a1 + 32);
    else
      v10 = *(_QWORD *)(v9 + 48);
    (**(void (__fastcall ***)(__int64, __int64, __int64))a1)(a1, v9, v10);
    sub_5FE10(v21, v6);
    goto LABEL_12;
  }
LABEL_21:
  if ( v23.m128i_i64[0] )
  {
    if ( (unsigned __int64)v4 < v24 + 8 )
    {
      v14 = result;
      do
      {
        v15 = *v4++;
        operator delete(v15, 0x200u);
      }
      while ( (unsigned __int64)v4 < v24 + 8 );
      result = v14;
    }
    v20 = result;
    operator delete((void *)v23.m128i_i64[0], 8 * v23.m128i_i64[1]);
    return v20;
  }
  return result;
}

