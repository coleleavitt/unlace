void __fastcall sub_316470(__int64 a1, __int64 *a2, const char *a3, double a4)
{
  bool v4; // r13
  unsigned __int64 v8; // r14
  __int64 v9; // rdi
  _DWORD *v10; // r15
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // rsi
  __int64 v15; // r15
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rsi
  size_t v19; // rax
  __int64 v20; // r15
  size_t v21; // r8
  size_t v22; // r9
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // [rsp+8h] [rbp-50h]
  unsigned __int64 v29; // [rsp+8h] [rbp-50h]
  __int64 v30; // [rsp+8h] [rbp-50h]
  __int64 v31; // [rsp+10h] [rbp-48h]
  __int64 v32; // [rsp+10h] [rbp-48h]
  size_t v33; // [rsp+10h] [rbp-48h]
  __int64 v34; // [rsp+18h] [rbp-40h]
  size_t v35; // [rsp+18h] [rbp-40h]

  v4 = a3 != nullptr;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v8 = 0;
    do
    {
      while ( 1 )
      {
        if ( v8 && v4 )
        {
          v19 = strlen(a3);
          v20 = a2[1];
          v21 = v19;
          v22 = v19;
          if ( v20 )
          {
            --v20;
            v22 = v19 + v20;
          }
          v23 = *a2;
          v24 = v22 + 1;
          if ( a2[2] < v22 + 1 )
          {
            v35 = v19;
            v33 = v22;
            v30 = v22 + 1;
            v27 = qvector_reserve((__int64)a2, v23, v24, 1);
            v21 = v35;
            v22 = v33;
            *a2 = v27;
            v24 = v30;
            v23 = v27;
          }
          a2[1] = v24;
          *(_BYTE *)(v23 + v22) = 0;
          memmove((void *)(v20 + *a2), a3, v21);
        }
        v10 = (_DWORD *)(*(_QWORD *)(a1 + 8) + 32 * v8);
        if ( (*v10 & 0xFu) - 2 > 3 )
          break;
        v9 = *(_QWORD *)(a1 + 8) + 32 * v8++;
        sub_315E10(v9, a2, a4);
        if ( v8 >= *(_QWORD *)(a1 + 16) )
          return;
      }
      v11 = a2[1];
      if ( v11 )
      {
        v12 = v11 + 1;
        v13 = a2[1];
        v14 = *a2;
        --v11;
        if ( a2[2] >= v12 )
          goto LABEL_9;
      }
      else
      {
        v14 = *a2;
        v13 = 1;
        v12 = 2;
        if ( (unsigned __int64)a2[2] >= 2 )
          goto LABEL_9;
      }
      v34 = v13;
      v32 = v11;
      v29 = v12;
      v26 = qvector_reserve((__int64)a2, v14, v12, 1);
      v13 = v34;
      v11 = v32;
      *a2 = v26;
      v12 = v29;
      v14 = v26;
LABEL_9:
      a2[1] = v12;
      *(_BYTE *)(v14 + v11) = 40;
      *(_BYTE *)(*a2 + v13) = 0;
      sub_315E10((__int64)v10, a2, a4);
      v15 = a2[1];
      if ( v15 )
      {
        v16 = v15 + 1;
        v17 = a2[1];
        v18 = *a2;
        --v15;
        if ( a2[2] < v16 )
          goto LABEL_19;
      }
      else
      {
        v18 = *a2;
        v17 = 1;
        v16 = 2;
        if ( (unsigned __int64)a2[2] < 2 )
        {
LABEL_19:
          v31 = v17;
          v28 = v16;
          v25 = qvector_reserve((__int64)a2, v18, v16, 1);
          v17 = v31;
          v16 = v28;
          *a2 = v25;
          v18 = v25;
        }
      }
      a2[1] = v16;
      ++v8;
      *(_BYTE *)(v18 + v15) = 41;
      *(_BYTE *)(*a2 + v17) = 0;
    }
    while ( v8 < *(_QWORD *)(a1 + 16) );
  }
}

