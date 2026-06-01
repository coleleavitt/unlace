__int64 __fastcall sub_16220(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r12
  __int64 v3; // r13
  __int64 v4; // rax
  _QWORD *v5; // r13
  void (*v6)(); // rax
  unsigned __int64 v7; // r12
  __int128 v8; // xmm0
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // r12
  _QWORD *v21; // r13
  _QWORD *v22; // r8
  __int64 v23; // rax
  _QWORD *v24; // rbx
  __int64 v25; // r9
  size_t v26; // r10
  void *v27; // r11
  void *v28; // rax
  __int64 v30; // [rsp+0h] [rbp-78h]
  __int64 v31; // [rsp+0h] [rbp-78h]
  _QWORD *v32; // [rsp+8h] [rbp-70h]
  _QWORD *v33; // [rsp+8h] [rbp-70h]
  size_t v34; // [rsp+10h] [rbp-68h]
  void *v35; // [rsp+18h] [rbp-60h]
  void *src; // [rsp+20h] [rbp-58h] BYREF
  __int128 v37; // [rsp+28h] [rbp-50h]
  unsigned __int64 v38; // [rsp+38h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  if ( a1[9] )
  {
    v1 = 0;
    sub_153C0((__int64)a1);
    v2 = a1[9];
    v3 = *(_QWORD *)(v2 + 16);
    if ( v3 )
    {
      do
      {
        v4 = *(_QWORD *)(v2 + 8) + 48 * v1;
        if ( *(_QWORD *)(v4 + 24) )
        {
          *(_QWORD *)(v4 + 32) = 0;
          qfree();
        }
        ++v1;
      }
      while ( v3 != v1 );
    }
    *(_QWORD *)(v2 + 16) = 0;
    v5 = (_QWORD *)a1[9];
    v6 = *(void (**)())(*v5 + 16LL);
    if ( v6 != nullsub_4 )
    {
      ((void (__fastcall *)(_QWORD))v6)(a1[9]);
      v5 = (_QWORD *)a1[9];
    }
    if ( a1[7] )
    {
      v7 = 0;
      v8 = 0;
      do
      {
        v13 = v5[2];
        v14 = v5[1];
        v15 = a1[6] + 160 * v7;
        if ( v5[3] < (unsigned __int64)(v13 + 1) )
        {
          v16 = qvector_reserve();
          v13 = v5[2];
          v8 = 0;
          v5[1] = v16;
          v14 = v16;
        }
        v9 = v14 + 48 * v13;
        *(_OWORD *)v9 = v8;
        *(_QWORD *)(v9 + 24) = 0;
        *(_OWORD *)(v9 + 32) = v8;
        *(_BYTE *)(v9 + 16) = 0;
        ++v5[2];
        v10 = *(_QWORD *)(v15 + 120);
        v11 = *(_QWORD *)(v9 + 24);
        *(_QWORD *)v9 = v10;
        *(_QWORD *)(v9 + 8) = *(_QWORD *)(v15 + 128) + v10;
        v12 = *(_QWORD *)(v9 + 32);
        if ( *(_QWORD *)(v9 + 40) < (unsigned __int64)(v12 + 1) )
        {
          v17 = qvector_reserve();
          v8 = 0;
          *(_QWORD *)(v9 + 24) = v17;
          v11 = v17;
          v12 = *(_QWORD *)(v9 + 32);
        }
        *(_QWORD *)(v11 + 8 * v12) = v7++;
        ++*(_QWORD *)(v9 + 32);
        v5 = (_QWORD *)a1[9];
      }
      while ( v7 < a1[7] );
    }
    sub_10880((__int64)v5);
    v18 = a1[9];
    v19 = *(_QWORD *)(v18 + 8);
    v20 = v19 + 48LL * *(_QWORD *)(v18 + 16);
    if ( v20 == v19 )
      return 1;
    while ( 1 )
    {
      if ( *(_BYTE *)(v19 + 16) || *(_QWORD *)v19 >= *(_QWORD *)(v19 + 8) )
        goto LABEL_17;
      v37 = 0;
      src = nullptr;
      sub_15DE0((__int64)a1, (__int64 *)&src, v19 + 24);
      v21 = *(_QWORD **)(v19 + 24);
      v22 = &v21[*(_QWORD *)(v19 + 32)];
      if ( v22 != v21 )
        break;
LABEL_30:
      (*(void (__fastcall **)(_QWORD, __int64, void **))(*(_QWORD *)a1[9] + 24LL))(a1[9], v19, &src);
      if ( src )
      {
        *(_QWORD *)&v37 = 0;
        v19 += 48;
        qfree();
        if ( v20 == v19 )
          return 1;
      }
      else
      {
LABEL_17:
        v19 += 48;
        if ( v20 == v19 )
          return 1;
      }
    }
    while ( 1 )
    {
      v23 = a1[6] + 160LL * *v21;
      v24 = (_QWORD *)v23;
      if ( (void **)(v23 + 24) == &src )
        goto LABEL_23;
      v25 = v37;
      if ( !(_QWORD)v37 || (v26 = v37 - 1, (_QWORD)v37 == 1) )
      {
        *(_QWORD *)(v23 + 32) = 0;
LABEL_23:
        if ( v22 == ++v21 )
          goto LABEL_30;
      }
      else
      {
        v27 = src;
        v28 = *(void **)(v23 + 24);
        if ( v24[5] < (unsigned __int64)v37 )
        {
          v35 = src;
          v34 = v37 - 1;
          v33 = v22;
          v31 = v37;
          v28 = (void *)qvector_reserve();
          v27 = v35;
          v26 = v34;
          v24[3] = v28;
          v22 = v33;
          v25 = v31;
        }
        v24[4] = v25;
        v32 = v22;
        ++v21;
        v30 = v25;
        memmove(v28, v27, v26);
        v22 = v32;
        *(_BYTE *)(v24[3] + v30 - 1) = 0;
        if ( v32 == v21 )
          goto LABEL_30;
      }
    }
  }
  return 0;
}

