__int64 __fastcall sub_9EA0(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  __int64 v8; // rax
  __int64 v10; // rbp
  int v11; // edx
  __int64 v12; // rsi
  __int64 v13; // rcx
  unsigned __int64 v14; // r12
  const void *v15; // rbx
  void *v16; // rax
  int v17; // [rsp+Ch] [rbp-3Ch] BYREF
  int *v18[7]; // [rsp+10h] [rbp-38h] BYREF

  v18[1] = (int *)__readfsqword(0x28u);
  if ( (a3 & 3) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 48);
    v10 = a1 + 40;
    v11 = a7 | (*(_DWORD *)(a1 + 88) << 16);
    v17 = v11;
    if ( !v8 )
      goto LABEL_13;
    do
    {
      while ( 1 )
      {
        v12 = *(_QWORD *)(v8 + 16);
        v13 = *(_QWORD *)(v8 + 24);
        if ( v11 > *(_DWORD *)(v8 + 32) )
          break;
        v10 = v8;
        v8 = *(_QWORD *)(v8 + 16);
        if ( !v12 )
          goto LABEL_8;
      }
      v8 = *(_QWORD *)(v8 + 24);
    }
    while ( v13 );
LABEL_8:
    if ( a1 + 40 == v10 || v11 < *(_DWORD *)(v10 + 32) )
    {
LABEL_13:
      v18[0] = &v17;
      v10 = sub_9D20((_QWORD *)(a1 + 32), v10, (__int64)&unk_FD90, v18);
    }
    if ( a2 != v10 + 40 )
    {
      v14 = *(_QWORD *)(a2 + 8);
      if ( v14 > 1 )
      {
        v15 = *(const void **)a2;
        v16 = *(void **)(v10 + 40);
        if ( *(_QWORD *)(v10 + 56) < v14 )
        {
          v16 = (void *)qvector_reserve(v10 + 40, *(_QWORD *)(v10 + 40), v14, 1);
          *(_QWORD *)(v10 + 40) = v16;
        }
        *(_QWORD *)(v10 + 48) = v14;
        memmove(v16, v15, v14 - 1);
        *(_BYTE *)(*(_QWORD *)(v10 + 40) + v14 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(v10 + 48) = 0;
      }
    }
  }
  return 0;
}
