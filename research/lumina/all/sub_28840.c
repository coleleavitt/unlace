void __fastcall sub_28840(__int64 *a1, _QWORD *a2, const void *a3, size_t a4)
{
  __int64 v4; // r13
  __int64 v7; // rbx
  __int64 v8; // r15
  unsigned __int64 v9; // rdx
  size_t v10; // r10
  __int64 v11; // r9
  size_t v12; // r11
  __int64 v13; // rsi
  __int64 v14; // r15
  size_t v15; // r9
  __int64 v16; // rsi
  size_t v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  size_t v21; // [rsp+10h] [rbp-58h]
  unsigned __int64 v22; // [rsp+10h] [rbp-58h]
  size_t v23; // [rsp+18h] [rbp-50h]
  size_t v24; // [rsp+18h] [rbp-50h]
  __int64 v25; // [rsp+20h] [rbp-48h]
  size_t v26; // [rsp+28h] [rbp-40h]

  v4 = a2[1];
  if ( v4 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = *a2 + 24 * v7;
      v9 = *(_QWORD *)(v8 + 8);
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v9 != 1 )
        {
          v11 = a1[1];
          v12 = v9 - 1;
          if ( v11 )
          {
            --v11;
            v12 = v10 + v11;
            v9 += v11;
          }
          v13 = *a1;
          if ( a1[2] < v9 )
          {
            v26 = v12;
            v25 = v11;
            v24 = v10;
            v22 = v9;
            v19 = sub_1987B0(a1, v13, v9, 1);
            v12 = v26;
            v11 = v25;
            *a1 = v19;
            v10 = v24;
            v13 = v19;
            v9 = v22;
          }
          a1[1] = v9;
          *(_BYTE *)(v13 + v12) = 0;
          memcpy((void *)(v11 + *a1), *(const void **)v8, v10);
        }
      }
      if ( v4 == ++v7 )
        break;
      v14 = a1[1];
      v15 = a4;
      if ( v14 )
      {
        --v14;
        v15 = a4 + v14;
      }
      v16 = *a1;
      v17 = v15 + 1;
      if ( a1[2] < v15 + 1 )
      {
        v23 = v15;
        v21 = v15 + 1;
        v18 = sub_1987B0(a1, v16, v17, 1);
        v15 = v23;
        v17 = v21;
        *a1 = v18;
        v16 = v18;
      }
      a1[1] = v17;
      *(_BYTE *)(v16 + v15) = 0;
      memmove((void *)(v14 + *a1), a3, a4);
    }
  }
}
