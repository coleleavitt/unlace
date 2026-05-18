bool __fastcall sub_AC590(__int64 a1, const void **a2, __int64 a3)
{
  char *v3; // rbx
  bool result; // al
  __int64 v5; // r14
  unsigned int v6; // r15d
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // r14
  unsigned int v10; // eax
  __int64 v11; // r15
  __int64 v12; // r14
  __int64 v13; // r14
  unsigned int v14; // r15d
  __int64 v15; // r15
  __int64 v16; // r14
  __int64 v17; // r15
  char *v18; // rdx
  unsigned int v19; // [rsp+Ch] [rbp-5Ch]
  unsigned int v20; // [rsp+1Ch] [rbp-4Ch] BYREF
  const void *v21[9]; // [rsp+20h] [rbp-48h] BYREF

  v21[1] = (const void *)__readfsqword(0x28u);
  v21[0] = *a2;
  v3 = (char *)v21[0] + a3;
  if ( __CFADD__(a3, v21[0])
    || !sub_6C650((_DWORD *)(a1 + 12), (unsigned __int64 *)v21, (__int64)v21[0] + a3)
    || !sub_6C650(&v20, (unsigned __int64 *)v21, (__int64)v3) )
  {
    return 0;
  }
  v5 = v20;
  v6 = v20;
  if ( v20 != *(_QWORD *)(a1 + 24) )
    sub_A0ED0((__int64 *)(a1 + 16), v20);
  if ( v6 )
  {
    v7 = 0;
    v8 = 24 * v5;
    while ( (unsigned __int8)sub_6B1B0((__int64 *)(v7 + *(_QWORD *)(a1 + 16)), v21, (unsigned __int64)v3) )
    {
      v7 += 24;
      if ( v8 == v7 )
        goto LABEL_12;
    }
    return 0;
  }
LABEL_12:
  if ( !sub_6C650(&v20, (unsigned __int64 *)v21, (__int64)v3) )
    return 0;
  v9 = v20;
  v10 = v20;
  if ( v20 != *(_QWORD *)(a1 + 48) )
  {
    v19 = v20;
    sub_A0ED0((__int64 *)(a1 + 40), v20);
    v10 = v19;
  }
  if ( v10 )
  {
    v11 = 24 * v9;
    v12 = 0;
    while ( (unsigned __int8)sub_6B1B0((__int64 *)(v12 + *(_QWORD *)(a1 + 40)), v21, (unsigned __int64)v3) )
    {
      v12 += 24;
      if ( v11 == v12 )
        goto LABEL_20;
    }
    return 0;
  }
LABEL_20:
  if ( !sub_6C650(&v20, (unsigned __int64 *)v21, (__int64)v3) )
    return 0;
  v13 = v20;
  v14 = v20;
  if ( v20 != *(_QWORD *)(a1 + 72) )
    sub_A0ED0((__int64 *)(a1 + 64), v20);
  if ( v14 )
  {
    v15 = 3 * v13;
    v16 = 0;
    v17 = 8 * v15;
    while ( (unsigned __int8)sub_6B1B0((__int64 *)(v16 + *(_QWORD *)(a1 + 64)), v21, (unsigned __int64)v3) )
    {
      v16 += 24;
      if ( v16 == v17 )
        goto LABEL_28;
    }
    return 0;
  }
LABEL_28:
  result = sub_6C650((_DWORD *)(a1 + 88), (unsigned __int64 *)v21, (__int64)v3);
  if ( !result )
    return 0;
  if ( v21[0] >= v3 )
  {
    *(_BYTE *)(a1 + 92) = 0;
    return 0;
  }
  v18 = (char *)v21[0] + 1;
  *(_BYTE *)(a1 + 92) = *(_BYTE *)v21[0];
  *a2 = v18;
  return result;
}
