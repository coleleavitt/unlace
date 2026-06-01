__int64 __fastcall sub_2A560(_QWORD *a1, int a2, int a3, __int64 a4, char a5)
{
  __int64 *v7; // r13
  __int64 v8; // rdx
  _DWORD *v9; // rcx
  _DWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rsi
  unsigned __int64 v14; // rdx
  __int64 *v15; // r13
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  _DWORD v23[2]; // [rsp+18h] [rbp-40h] BYREF
  _QWORD *v24[7]; // [rsp+20h] [rbp-38h] BYREF

  v24[1] = (_QWORD *)__readfsqword(0x28u);
  v7 = (__int64 *)(a1[6] + 24LL * a2);
  v8 = v7[1];
  v9 = (_DWORD *)(*v7 + 4 * v8);
  if ( (_DWORD *)*v7 == v9 )
    goto LABEL_20;
  v10 = (_DWORD *)*v7;
  while ( a3 != *v10 )
  {
    if ( v9 == ++v10 )
      goto LABEL_20;
  }
  if ( v9 == v10 )
  {
LABEL_20:
    v14 = v8 + 1;
    if ( v7[2] < v14 )
    {
      v18 = qvector_reserve(v7, *v7, v14, 4);
      v19 = v7[1];
      *v7 = v18;
      v9 = (_DWORD *)(v18 + 4 * v19);
    }
    *v9 = a3;
    ++v7[1];
    v15 = (__int64 *)(a1[9] + 24LL * a3);
    v16 = v15[1];
    v17 = *v15;
    if ( v15[2] < (unsigned __int64)(v16 + 1) )
    {
      v20 = qvector_reserve(a1[9] + 24LL * a3, v17, v16 + 1, 4);
      *v15 = v20;
      v17 = v20;
      v16 = v15[1];
    }
    *(_DWORD *)(v17 + 4 * v16) = a2;
    ++v15[1];
  }
  v11 = a1[52];
  v23[0] = a2;
  v23[1] = a3;
  v12 = (__int64)(a1 + 51);
  if ( !v11 )
    goto LABEL_15;
  do
  {
    while ( a2 <= *(_DWORD *)(v11 + 32) && (a2 != *(_DWORD *)(v11 + 32) || a3 <= *(_DWORD *)(v11 + 36)) )
    {
      v12 = v11;
      v11 = *(_QWORD *)(v11 + 16);
      if ( !v11 )
        goto LABEL_13;
    }
    v11 = *(_QWORD *)(v11 + 24);
  }
  while ( v11 );
LABEL_13:
  if ( a1 + 51 == (_QWORD *)v12
    || a2 < *(_DWORD *)(v12 + 32)
    || a2 == *(_DWORD *)(v12 + 32) && a3 < *(_DWORD *)(v12 + 36) )
  {
LABEL_15:
    v24[0] = v23;
    v12 = sub_2A220(a1 + 50, v12, (__int64)&unk_78AE8, v24);
  }
  *(_QWORD *)(v12 + 40) = a4;
  *(_BYTE *)(v12 + 48) = a5;
  return 1;
}

