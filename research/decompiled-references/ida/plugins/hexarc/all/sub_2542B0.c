__int64 __fastcall sub_2542B0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  size_t v4; // rbx
  __int64 result; // rax
  __int64 v6; // r13
  void *v7; // rax
  const void *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r15
  __int64 v12; // rbx
  __int64 v13; // rbp
  __int64 v14; // r8
  void *v15; // rax
  __int64 v16; // [rsp+0h] [rbp-48h]
  __int64 n; // [rsp+8h] [rbp-40h]

  *(_QWORD *)a1 = -1;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 12) = -1;
  *(_QWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  sub_253C70(a1, (__int64)a2);
  *(_QWORD *)(a1 + 64) = a2[8];
  v3 = a2[9];
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 72) = v3;
  *(_OWORD *)(a1 + 88) = 0;
  v4 = a2[11];
  if ( v4 )
  {
    v7 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 80) = v7;
    v8 = (const void *)a2[10];
    *(_QWORD *)(a1 + 96) = v4;
    memcpy(v7, v8, v4);
    *(_QWORD *)(a1 + 88) = v4;
  }
  result = a2[13];
  *(_QWORD *)(a1 + 112) = 0;
  *(_OWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 104) = result;
  v6 = a2[15];
  if ( v6 )
  {
    v9 = qalloc_or_throw();
    *(_QWORD *)(a1 + 112) = v9;
    v10 = v9;
    v11 = 0;
    *(_QWORD *)(a1 + 128) = v6;
    while ( 1 )
    {
      v12 = 56 * v11 + v10;
      v13 = a2[14] + 56 * v11;
      *(_QWORD *)v12 = -1;
      *(_DWORD *)(v12 + 8) = 70;
      *(_QWORD *)(v12 + 12) = -1;
      result = sub_2536F0(v12, v13);
      *(_QWORD *)(v12 + 32) = 0;
      *(_OWORD *)(v12 + 40) = 0;
      v14 = *(_QWORD *)(v13 + 40);
      if ( v14 )
      {
        v16 = *(_QWORD *)(v13 + 40);
        n = 8 * v14;
        v15 = (void *)qalloc_or_throw();
        *(_QWORD *)(v12 + 32) = v15;
        ++v11;
        *(_QWORD *)(v12 + 48) = v16;
        result = (__int64)memcpy(v15, *(const void **)(v13 + 32), n);
        *(_QWORD *)(v12 + 40) = v16;
        if ( v6 == v11 )
        {
LABEL_9:
          *(_QWORD *)(a1 + 120) = v6;
          return result;
        }
      }
      else if ( v6 == ++v11 )
      {
        goto LABEL_9;
      }
      v10 = *(_QWORD *)(a1 + 112);
    }
  }
  return result;
}

