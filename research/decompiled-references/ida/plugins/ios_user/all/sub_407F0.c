__int64 __fastcall sub_407F0(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  bool v11; // zf
  bool v12; // sf
  bool v13; // of
  __int64 result; // rax
  const void *v15; // r12
  void *v16; // rax
  __int64 v17; // rax

  v5 = a2[1];
  v6 = *a2;
  if ( a2[2] < (unsigned __int64)(v5 + 1) )
  {
    v17 = qvector_reserve();
    v5 = a2[1];
    *a2 = v17;
    v6 = v17;
  }
  v7 = v6 + 80 * v5;
  *(_OWORD *)v7 = 0;
  *(_QWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 40) = 0;
  *(_QWORD *)(v7 + 64) = 0;
  *(_WORD *)(v7 + 72) = 0;
  *(_OWORD *)(v7 + 24) = 0;
  *(_OWORD *)(v7 + 48) = 0;
  ++a2[1];
  v8 = *a3;
  *(_QWORD *)v7 = *a3;
  *(_QWORD *)(v7 + 8) = a3[1] + v8;
  if ( (__int64 *)(v7 + 16) != a3 + 2 )
  {
    v9 = a3[3];
    if ( v9 > 1 )
    {
      v15 = (const void *)a3[2];
      v16 = *(void **)(v7 + 16);
      if ( *(_QWORD *)(v7 + 32) < v9 )
      {
        v16 = (void *)qvector_reserve();
        *(_QWORD *)(v7 + 16) = v16;
      }
      *(_QWORD *)(v7 + 24) = v9;
      memmove(v16, v15, v9 - 1);
      *(_BYTE *)(*(_QWORD *)(v7 + 16) + v9 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(v7 + 24) = 0;
    }
  }
  v10 = qword_8FB50 + 144LL * *(int *)(a1 + 1176);
  v13 = __OFSUB__(*(_DWORD *)(v10 + 128), 4);
  v11 = *(_DWORD *)(v10 + 128) == 4;
  v12 = *(_DWORD *)(v10 + 128) - 4 < 0;
  *(_BYTE *)(v7 + 73) = 0;
  LOBYTE(v10) = !(v12 ^ v13 | v11);
  result = (unsigned int)(v10 + 1);
  *(_BYTE *)(v7 + 72) = result;
  return result;
}

