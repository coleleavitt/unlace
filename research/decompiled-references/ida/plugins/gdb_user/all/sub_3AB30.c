__int64 __fastcall sub_3AB30(__int64 a1, __int64 *a2, char *a3)
{
  char v5; // r13
  unsigned int v6; // ebx
  _WORD *v7; // rax
  size_t v8; // rax
  char v10; // r14
  char v11; // al
  void *v12; // rbp
  size_t v13; // r15
  int v14; // eax
  size_t v15; // rbp
  char *v16; // r15
  char v17; // al
  const void *v18; // r14
  size_t v19; // rax
  size_t v20; // rbp
  __int64 v21; // r8
  size_t v22; // r9
  __int64 v23; // rsi
  size_t v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rbx
  size_t v27; // r13
  __int64 v28; // rsi
  __int64 v29; // rax
  size_t v30; // [rsp+8h] [rbp-90h]
  size_t v31; // [rsp+8h] [rbp-90h]
  size_t v32; // [rsp+10h] [rbp-88h]
  __int64 v33; // [rsp+18h] [rbp-80h]
  void *v34; // [rsp+20h] [rbp-78h] BYREF
  __int128 v35; // [rsp+28h] [rbp-70h]
  void *src; // [rsp+40h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+48h] [rbp-50h]
  unsigned __int64 v38; // [rsp+58h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  if ( !a2 )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  a2[1] = 0;
  if ( !a3 )
    return 0;
  v5 = *a3;
  if ( !*a3 )
    return 0;
  v34 = nullptr;
  v6 = a1;
  v35 = 0;
  if ( v5 == 96 )
  {
    v18 = a3 + 1;
    v19 = strlen(a3 + 1);
    v20 = v19;
    if ( v19 )
    {
      v30 = v19 + 1;
      v34 = (void *)qvector_reserve();
      *(_QWORD *)&v35 = v30;
      memmove(v34, v18, v20);
      *((_BYTE *)v34 + v20) = 0;
    }
  }
  else
  {
    v7 = (_WORD *)qvector_reserve();
    v34 = v7;
    *(_QWORD *)&v35 = 7;
    *(_DWORD *)v7 = 1835225713;
    v7[2] = 11364;
    *((_BYTE *)v34 + 6) = 0;
    v8 = strlen(a3);
    sub_37B00((__int64 *)&v34, a3, v8);
  }
  if ( (unsigned int)sub_39C70(a1, &v34) != 1 )
    goto LABEL_7;
  while ( 1 )
  {
    v14 = sub_39BC0(a1);
    *(_BYTE *)(a1 + 16) = 0;
    if ( v14 != 1 || (v15 = *(_QWORD *)(a1 + 32)) == 0 )
    {
      LOBYTE(v6) = (unsigned __int64)a2[1] > 1;
      goto LABEL_8;
    }
    v16 = *(char **)(a1 + 24);
    if ( v5 == 96 )
    {
      v26 = a2[1];
      v27 = *(_QWORD *)(a1 + 32);
      if ( v26 )
      {
        --v26;
        v27 = v15 + v26;
      }
      v28 = *a2;
      if ( a2[2] < v27 + 1 )
      {
        v29 = qvector_reserve();
        *a2 = v29;
        v28 = v29;
      }
      a2[1] = v27 + 1;
      *(_BYTE *)(v28 + v27) = 0;
      memmove((void *)(*a2 + v26), v16, v15);
LABEL_40:
      v6 = 1;
      goto LABEL_8;
    }
    v17 = *v16;
    if ( v15 == 2 )
    {
      v10 = 0;
      if ( v17 != 79 )
        goto LABEL_14;
      if ( v16[1] == 75 )
        goto LABEL_40;
      goto LABEL_25;
    }
    if ( v17 != 69 )
    {
      v10 = 0;
      if ( v17 != 79 )
        goto LABEL_14;
LABEL_25:
      v10 = 1;
      memmove(*(void **)(a1 + 24), v16 + 1, v15 - 1);
      v16 = *(char **)(a1 + 24);
      v15 = *(_QWORD *)(a1 + 32) - 1LL;
      *(_QWORD *)(a1 + 32) = v15;
      goto LABEL_14;
    }
    if ( v15 == 3 )
      goto LABEL_7;
    v10 = 0;
LABEL_14:
    *(_OWORD *)n = 0;
    src = nullptr;
    v11 = sub_37CA0((__int64 *)&src, (__int64)v16, v15, nullptr);
    v12 = src;
    if ( !v11 )
      break;
    v13 = n[0];
    if ( n[0] )
    {
      v21 = a2[1];
      v22 = n[0];
      if ( v21 )
      {
        --v21;
        v22 = n[0] + v21;
      }
      v23 = *a2;
      v24 = v22 + 1;
      if ( a2[2] < v22 + 1 )
      {
        v33 = v21;
        v32 = v22;
        v31 = v22 + 1;
        v25 = qvector_reserve();
        *a2 = v25;
        v21 = v33;
        v23 = v25;
        v22 = v32;
        v24 = v31;
      }
      a2[1] = v24;
      *(_BYTE *)(v23 + v22) = 0;
      memmove((void *)(v21 + *a2), v12, v13);
      v12 = src;
    }
    if ( v12 )
    {
      n[0] = 0;
      qfree();
    }
    if ( !v10 )
      goto LABEL_40;
  }
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
LABEL_7:
  v6 = 0;
LABEL_8:
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree();
  }
  return v6;
}

