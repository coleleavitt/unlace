__int64 __fastcall sub_2BCCA0(_QWORD *a1, __int64 a2, unsigned __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r13
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v16; // rax
  __int64 func; // rax
  __int64 v18; // rsi
  __int64 **v19; // r15
  __int64 *v20; // rdx
  __int64 *v22; // r14
  __int64 v23; // rdx
  __int64 i; // r12
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 j; // r12
  _QWORD *v28; // rax
  __int64 *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rdx
  _QWORD *v35; // r15
  __int64 v36; // rdx
  _QWORD *v37; // r14
  __int64 v38; // rax
  _QWORD *v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rdx
  _QWORD *v42; // r15
  __int64 v43; // rdx
  _QWORD *v44; // r14
  __int64 v45; // rax
  _QWORD *v46; // rdi
  __int64 v47; // [rsp+8h] [rbp-90h]
  __int64 v48; // [rsp+8h] [rbp-90h]
  __int64 v49; // [rsp+10h] [rbp-88h]
  __int64 v50; // [rsp+10h] [rbp-88h]
  int v51; // [rsp+24h] [rbp-74h] BYREF
  __int64 *v52; // [rsp+28h] [rbp-70h] BYREF
  __int64 v53; // [rsp+30h] [rbp-68h] BYREF
  __int64 v54; // [rsp+38h] [rbp-60h]
  __int128 v55; // [rsp+40h] [rbp-58h]
  unsigned __int64 v56; // [rsp+58h] [rbp-40h]

  v5 = a5;
  v56 = __readfsqword(0x28u);
  v9 = a1[8];
  v51 = -1;
  if ( !v9 )
  {
    v10 = a1[7];
    v11 = a1[9];
    v52 = nullptr;
    if ( (unsigned __int64)&v52 < v10 || (unsigned __int64)&v52 >= v10 + 8 * v11 )
    {
      if ( v11 > 2 )
        goto LABEL_4;
      v32 = qvector_reserve();
      v33 = a1[9];
      v34 = a1[8];
      a1[9] = v11;
      v49 = v32;
      v35 = (_QWORD *)a1[7];
      v36 = v34 - 1;
      if ( v36 >= 0 )
      {
        v37 = (_QWORD *)v32;
        do
        {
          v38 = *v35;
          *v37 = *v35;
          if ( v38 )
            ++*(_DWORD *)(v38 + 104);
          v39 = v35;
          v47 = v36;
          ++v35;
          ++v37;
          sub_13BC80(v39, v33);
          v36 = v47 - 1;
        }
        while ( v47 );
      }
      qfree();
      v10 = v49;
      a1[9] = v33;
      v9 = a1[8];
      a1[7] = v49;
      if ( v9 <= 2 )
      {
LABEL_4:
        v12 = 8 * v9;
        while ( 1 )
        {
          *(_QWORD *)(v10 + v12) = 0;
          v12 += 8;
          if ( v12 == 24 )
            break;
          v10 = a1[7];
        }
      }
      a1[8] = 3;
    }
    else
    {
      v53 = 0;
      if ( v11 > 2 )
        goto LABEL_15;
      v40 = qvector_reserve();
      a2 = a1[9];
      v41 = a1[8];
      a1[9] = v11;
      v50 = v40;
      v42 = (_QWORD *)a1[7];
      v43 = v41 - 1;
      if ( v43 >= 0 )
      {
        v44 = (_QWORD *)v40;
        do
        {
          v45 = *v42;
          *v44 = *v42;
          if ( v45 )
            ++*(_DWORD *)(v45 + 104);
          v46 = v42;
          v48 = v43;
          ++v42;
          ++v44;
          sub_13BC80(v46, a2);
          v43 = v48 - 1;
        }
        while ( v48 );
      }
      qfree();
      v10 = v50;
      a1[9] = a2;
      v9 = a1[8];
      a1[7] = v50;
      if ( v9 <= 2 )
      {
LABEL_15:
        v16 = 8 * v9;
        while ( 1 )
        {
          *(_QWORD *)(v10 + v16) = 0;
          v16 += 8;
          if ( v16 == 24 )
            break;
          v10 = a1[7];
        }
      }
      a1[8] = 3;
      sub_13BC80(&v53, a2);
    }
  }
  switch_dbctx();
  v13 = *(_QWORD *)(a1[7] + 8 * v5);
  if ( v13 )
  {
LABEL_9:
    if ( (a3 & 0x3F) == 0 )
    {
      v14 = a1[5] + (a3 >> 6);
      if ( v14 != -1 )
      {
        ++*(_DWORD *)(v13 + 104);
        v53 = v13;
        sub_2BBBC0(v13, v14, 0, (__int64)&v51);
        sub_13BC80(&v53, v14);
      }
    }
    return v51;
  }
  func = get_func();
  if ( !func )
  {
LABEL_46:
    v13 = *(_QWORD *)(a1[7] + 8 * v5);
    if ( !v13 )
      return v51;
    goto LABEL_9;
  }
  v18 = *(_QWORD *)(a4 + 112);
  v53 = func;
  v54 = 0;
  v55 = 0;
  sub_148900(&v52, v18, &v53, nullptr, 1);
  v19 = (__int64 **)(a1[7] + 8 * v5);
  v20 = *v19;
  if ( *v19 )
  {
    if ( (*((_DWORD *)v20 + 26))-- == 1 )
    {
      v22 = *v19;
      if ( *v19 )
      {
        sub_253D70(*v19);
        v23 = v22[23];
        if ( v23 )
        {
          v18 = v22[24];
          if ( v18 )
          {
            for ( i = 0; i != v18; ++i )
            {
              v25 = (_QWORD *)(v23 + 24 * i);
              if ( *v25 )
              {
                v25[1] = 0;
                qfree();
                v23 = v22[23];
              }
            }
          }
          v22[24] = 0;
          qfree();
        }
        if ( v22[20] )
        {
          v22[21] = 0;
          qfree();
        }
        v26 = v22[16];
        if ( v26 )
        {
          v18 = v22[17];
          if ( v18 )
          {
            for ( j = 0; j != v18; ++j )
            {
              v28 = (_QWORD *)(v26 + 32 * j);
              if ( *v28 )
              {
                v28[1] = 0;
                qfree();
                v26 = v22[16];
              }
            }
          }
          v22[17] = 0;
          qfree();
        }
        sub_250450((__int64)(v22 + 2));
        j__qfree();
      }
    }
  }
  v29 = v52;
  *v19 = v52;
  if ( v29 )
    ++*((_DWORD *)v29 + 26);
  sub_13BC80(&v52, v18);
  if ( v54 )
  {
    *(_QWORD *)&v55 = 0;
    qfree();
  }
  v31 = *(_QWORD *)(a1[7] + 8 * v5);
  if ( v31 )
  {
    sub_2535E0(v31, v18, v30);
    goto LABEL_46;
  }
  return v51;
}

