void *__fastcall sub_4D0C0(__int64 a1, __int64 a2, _QWORD *a3, size_t *a4)
{
  size_t v5; // rbp
  size_t v6; // rbp
  void *result; // rax
  size_t v8; // rbx
  void *v9; // rax
  const void *v10; // rsi
  void *v11; // rax
  __int64 v12; // r12
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rbp
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rbp
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // r13
  void *v24; // rax
  void *v25; // rax
  void *v26; // rax
  void *v27; // rax
  const void *v28; // rsi
  __int64 v29; // [rsp+0h] [rbp-68h]
  size_t nb; // [rsp+10h] [rbp-58h]
  size_t na; // [rsp+10h] [rbp-58h]
  size_t n; // [rsp+10h] [rbp-58h]
  __int64 v34; // [rsp+20h] [rbp-48h]

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v5 = *(_QWORD *)(a2 + 8);
  if ( v5 )
  {
    v9 = (void *)sub_198760(v5);
    v10 = *(const void **)a2;
    *(_QWORD *)a1 = v9;
    *(_QWORD *)(a1 + 16) = v5;
    memcpy(v9, v10, v5);
    *(_QWORD *)(a1 + 8) = v5;
  }
  *(_QWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  v6 = *(_QWORD *)(a2 + 32);
  if ( v6 )
  {
    v27 = (void *)sub_198760(*(_QWORD *)(a2 + 32));
    v28 = *(const void **)(a2 + 24);
    *(_QWORD *)(a1 + 24) = v27;
    *(_QWORD *)(a1 + 40) = v6;
    memcpy(v27, v28, v6);
    *(_QWORD *)(a1 + 32) = v6;
  }
  *(_QWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  v34 = a3[1];
  if ( v34 )
  {
    v12 = sub_198760(176 * v34);
    v13 = 0;
    *(_QWORD *)(a1 + 48) = v12;
    *(_QWORD *)(a1 + 64) = v34;
    while ( 1 )
    {
      v15 = 176 * v13 + v12;
      v16 = *a3 + 176 * v13;
      v29 = v16;
      sub_4CC80(v15, v16);
      *(_QWORD *)(v15 + 152) = 0;
      *(_OWORD *)(v15 + 160) = 0;
      v17 = *(_QWORD *)(v16 + 160);
      if ( v17 )
      {
        v18 = sub_198760(88 * v17);
        *(_QWORD *)(v15 + 152) = v18;
        v19 = v18;
        v20 = 0;
        *(_QWORD *)(v15 + 168) = v17;
        while ( 1 )
        {
          v21 = 88 * v20 + v19;
          v22 = *(_QWORD *)(v29 + 152) + 88 * v20;
          *(_QWORD *)v21 = 0;
          v23 = v22;
          *(_OWORD *)(v21 + 8) = 0;
          if ( *(_QWORD *)(v22 + 8) )
          {
            nb = *(_QWORD *)(v22 + 8);
            v24 = (void *)sub_198760(nb);
            *(_QWORD *)v21 = v24;
            *(_QWORD *)(v21 + 16) = nb;
            memcpy(v24, *(const void **)v23, nb);
            *(_QWORD *)(v21 + 8) = nb;
          }
          *(_QWORD *)(v21 + 24) = 0;
          *(_OWORD *)(v21 + 32) = 0;
          if ( *(_QWORD *)(v23 + 32) )
          {
            n = *(_QWORD *)(v23 + 32);
            v26 = (void *)sub_198760(n);
            *(_QWORD *)(v21 + 24) = v26;
            *(_QWORD *)(v21 + 40) = n;
            memcpy(v26, *(const void **)(v23 + 24), n);
            *(_QWORD *)(v21 + 32) = n;
          }
          *(_QWORD *)(v21 + 48) = 0;
          *(_OWORD *)(v21 + 56) = 0;
          if ( *(_QWORD *)(v23 + 56) )
          {
            na = *(_QWORD *)(v23 + 56);
            v25 = (void *)sub_198760(na);
            *(_QWORD *)(v21 + 48) = v25;
            *(_QWORD *)(v21 + 64) = na;
            memcpy(v25, *(const void **)(v23 + 48), na);
            *(_QWORD *)(v21 + 56) = na;
          }
          ++v20;
          *(_QWORD *)(v21 + 72) = *(_QWORD *)(v23 + 72);
          *(_QWORD *)(v21 + 80) = *(_QWORD *)(v23 + 80);
          if ( v17 == v20 )
            break;
          v19 = *(_QWORD *)(v15 + 152);
        }
        *(_QWORD *)(v15 + 160) = v17;
        v14 = a1;
        if ( v34 == ++v13 )
        {
LABEL_22:
          *(_QWORD *)(v14 + 56) = v34;
          break;
        }
      }
      else
      {
        v14 = a1;
        if ( v34 == ++v13 )
          goto LABEL_22;
      }
      v12 = *(_QWORD *)(v14 + 48);
    }
  }
  *(_QWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  result = a4;
  v8 = a4[1];
  if ( v8 )
  {
    v11 = (void *)sub_198760(a4[1]);
    *(_QWORD *)(a1 + 72) = v11;
    *(_QWORD *)(a1 + 88) = v8;
    result = memcpy(v11, (const void *)*a4, v8);
    *(_QWORD *)(a1 + 80) = v8;
  }
  return result;
}
