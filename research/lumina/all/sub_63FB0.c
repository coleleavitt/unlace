__int64 __fastcall sub_63FB0(_QWORD *a1, void **a2, __int64 a3)
{
  unsigned int v3; // r15d
  char *v7; // rbp
  _BYTE *v8; // r8
  char *v9; // rbx
  __int64 v10; // r13
  size_t v11; // r9
  size_t v12; // r10
  __int64 v13; // rsi
  size_t v14; // rdx
  void *v15; // rdi
  char *v16; // r13
  __int64 v17; // rbp
  size_t v18; // r8
  size_t v19; // r9
  __int64 v20; // rsi
  size_t v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  size_t v24; // [rsp+0h] [rbp-68h]
  size_t v25; // [rsp+0h] [rbp-68h]
  size_t v26; // [rsp+8h] [rbp-60h]
  size_t v27; // [rsp+8h] [rbp-60h]
  _BYTE *v28; // [rsp+10h] [rbp-58h]
  __int64 v29; // [rsp+18h] [rbp-50h]
  void *src[9]; // [rsp+20h] [rbp-48h] BYREF

  src[1] = (void *)__readfsqword(0x28u);
  src[0] = *a2;
  if ( !__CFADD__(a3, src[0]) )
  {
    v7 = (char *)src[0] + a3;
    v3 = sub_63AD0((__int64)a1, (unsigned __int64 *)src, a3);
    if ( (_BYTE)v3 )
    {
      v8 = src[0];
      v9 = (char *)src[0];
      while ( v9 < v7 )
      {
        if ( !*v9++ )
        {
          src[0] = v9;
          if ( v8 )
          {
            v10 = a1[6];
            v11 = v9 - v8 - 1;
            v12 = v11;
            if ( v10 )
            {
              --v10;
              v12 = v11 + v10;
            }
            v13 = a1[5];
            v14 = v12 + 1;
            if ( a1[7] < v12 + 1 )
            {
              v29 = v9 - v8 - 1;
              v28 = v8;
              v26 = v12;
              v24 = v12 + 1;
              v22 = sub_1987B0(a1 + 5, v13, v14, 1);
              v11 = v29;
              v8 = v28;
              a1[5] = v22;
              v12 = v26;
              v13 = v22;
              v14 = v24;
            }
            a1[6] = v14;
            *(_BYTE *)(v13 + v12) = 0;
            v15 = (void *)(v10 + a1[5]);
            v16 = v9;
            memmove(v15, v8, v11);
            while ( v16 < v7 )
            {
              if ( !*v16++ )
              {
                src[0] = v16;
                if ( !v9 )
                  return 0;
                v17 = a1[9];
                v18 = v16 - v9 - 1;
                v19 = v18;
                if ( v17 )
                {
                  --v17;
                  v19 = v18 + v17;
                }
                v20 = a1[8];
                v21 = v19 + 1;
                if ( a1[10] < v19 + 1 )
                {
                  v27 = v19;
                  v25 = v19 + 1;
                  v23 = sub_1987B0(a1 + 8, v20, v21, 1);
                  v18 = v16 - v9 - 1;
                  v19 = v27;
                  a1[8] = v23;
                  v21 = v25;
                  v20 = v23;
                }
                a1[9] = v21;
                *(_BYTE *)(v20 + v19) = 0;
                memmove((void *)(v17 + a1[8]), v9, v18);
                *a2 = v16;
                return v3;
              }
            }
          }
          return 0;
        }
      }
    }
  }
  return 0;
}
