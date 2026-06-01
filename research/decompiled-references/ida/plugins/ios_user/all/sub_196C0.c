__int64 __fastcall sub_196C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 result; // rax
  __int64 v11; // rbx
  unsigned __int64 v12; // rbp
  const void *v13; // r12
  void *v14; // rax
  __int64 v15; // rax

  v7 = *(__int64 **)(a1 + 88);
  v8 = v7[1];
  v9 = *v7;
  if ( v7[2] < (unsigned __int64)(v8 + 1) )
  {
    v15 = qvector_reserve();
    v8 = v7[1];
    *v7 = v15;
    v9 = v15;
  }
  result = 5 * v8;
  v11 = v9 + 40 * v8;
  *(_OWORD *)v11 = 0;
  *(_QWORD *)(v11 + 16) = 0;
  *(_OWORD *)(v11 + 24) = 0;
  ++v7[1];
  *(_QWORD *)v11 = a2;
  *(_QWORD *)(v11 + 8) = a3;
  if ( v11 + 16 != a4 )
  {
    v12 = *(_QWORD *)(a4 + 8);
    if ( v12 > 1 )
    {
      v13 = *(const void **)a4;
      v14 = *(void **)(v11 + 16);
      if ( *(_QWORD *)(v11 + 32) < v12 )
      {
        v14 = (void *)qvector_reserve();
        *(_QWORD *)(v11 + 16) = v14;
      }
      *(_QWORD *)(v11 + 24) = v12;
      memmove(v14, v13, v12 - 1);
      result = *(_QWORD *)(v11 + 16);
      *(_BYTE *)(result + v12 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(v11 + 24) = 0;
    }
  }
  return result;
}

