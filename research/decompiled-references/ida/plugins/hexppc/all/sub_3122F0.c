void __fastcall sub_3122F0(__int64 a1, __int64 *a2, const char *a3)
{
  bool v3; // r13
  unsigned __int64 v7; // r14
  __int64 v8; // rdi
  _DWORD *v9; // r15
  __int64 v10; // r8
  unsigned __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 v14; // r15
  unsigned __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rsi
  size_t v18; // rax
  __int64 v19; // r15
  size_t v20; // r8
  size_t v21; // r9
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // [rsp+8h] [rbp-50h]
  unsigned __int64 v28; // [rsp+8h] [rbp-50h]
  __int64 v29; // [rsp+8h] [rbp-50h]
  __int64 v30; // [rsp+10h] [rbp-48h]
  __int64 v31; // [rsp+10h] [rbp-48h]
  size_t v32; // [rsp+10h] [rbp-48h]
  __int64 v33; // [rsp+18h] [rbp-40h]
  size_t v34; // [rsp+18h] [rbp-40h]

  v3 = a3 != nullptr;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v7 = 0;
    do
    {
      while ( 1 )
      {
        if ( v7 && v3 )
        {
          v18 = strlen(a3);
          v19 = a2[1];
          v20 = v18;
          v21 = v18;
          if ( v19 )
          {
            --v19;
            v21 = v18 + v19;
          }
          v22 = *a2;
          v23 = v21 + 1;
          if ( a2[2] < v21 + 1 )
          {
            v34 = v18;
            v32 = v21;
            v29 = v21 + 1;
            v26 = qvector_reserve();
            v20 = v34;
            v21 = v32;
            *a2 = v26;
            v23 = v29;
            v22 = v26;
          }
          a2[1] = v23;
          *(_BYTE *)(v22 + v21) = 0;
          memmove((void *)(v19 + *a2), a3, v20);
        }
        v9 = (_DWORD *)(*(_QWORD *)(a1 + 8) + 32 * v7);
        if ( (*v9 & 0xFu) - 2 > 3 )
          break;
        v8 = *(_QWORD *)(a1 + 8) + 32 * v7++;
        sub_311C90(v8, a2);
        if ( v7 >= *(_QWORD *)(a1 + 16) )
          return;
      }
      v10 = a2[1];
      if ( v10 )
      {
        v11 = v10 + 1;
        v12 = a2[1];
        v13 = *a2;
        --v10;
        if ( a2[2] >= v11 )
          goto LABEL_9;
      }
      else
      {
        v13 = *a2;
        v12 = 1;
        v11 = 2;
        if ( (unsigned __int64)a2[2] >= 2 )
          goto LABEL_9;
      }
      v33 = v12;
      v31 = v10;
      v28 = v11;
      v25 = qvector_reserve();
      v12 = v33;
      v10 = v31;
      *a2 = v25;
      v11 = v28;
      v13 = v25;
LABEL_9:
      a2[1] = v11;
      *(_BYTE *)(v13 + v10) = 40;
      *(_BYTE *)(*a2 + v12) = 0;
      sub_311C90((__int64)v9, a2);
      v14 = a2[1];
      if ( v14 )
      {
        v15 = v14 + 1;
        v16 = a2[1];
        v17 = *a2;
        --v14;
        if ( a2[2] < v15 )
          goto LABEL_19;
      }
      else
      {
        v17 = *a2;
        v16 = 1;
        v15 = 2;
        if ( (unsigned __int64)a2[2] < 2 )
        {
LABEL_19:
          v30 = v16;
          v27 = v15;
          v24 = qvector_reserve();
          v16 = v30;
          v15 = v27;
          *a2 = v24;
          v17 = v24;
        }
      }
      a2[1] = v15;
      ++v7;
      *(_BYTE *)(v17 + v14) = 41;
      *(_BYTE *)(*a2 + v16) = 0;
    }
    while ( v7 < *(_QWORD *)(a1 + 16) );
  }
}

