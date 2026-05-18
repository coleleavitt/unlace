bool __fastcall sub_AE330(__int64 a1, const void **a2, __int64 a3)
{
  char *v3; // r13
  __int64 v4; // rbx
  bool result; // al
  unsigned int v6; // eax
  const void *v7; // rdx
  unsigned int v8; // r15d
  __int64 v9; // r13
  __int64 v10; // r13
  __int64 v11; // r14
  const void *v12; // [rsp+8h] [rbp-60h]
  const void *v13; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v14[9]; // [rsp+20h] [rbp-48h] BYREF

  v14[1] = __readfsqword(0x28u);
  v3 = (char *)*a2;
  v13 = v3;
  v4 = (__int64)&v3[a3];
  if ( __CFADD__(v3, a3) )
    return 0;
  v14[0] = v3;
  v6 = sub_196ED0(v14, &v3[a3]);
  v7 = (const void *)v14[0];
  v8 = v6;
  v13 = (const void *)v14[0];
  if ( (unsigned __int64)v3 >= v14[0] )
    return 0;
  v9 = v6;
  if ( v6 != *(_QWORD *)(a1 + 24) )
  {
    v12 = (const void *)v14[0];
    sub_A0CC0((__int64 *)(a1 + 16), v6);
    v7 = v12;
  }
  if ( v8 )
  {
    v10 = 32 * v9;
    v11 = 0;
    while ( (unsigned __int8)sub_AE180(v11 + *(_QWORD *)(a1 + 16), &v13, v4 - (_QWORD)v7) )
    {
      v11 += 32;
      if ( v10 == v11 )
        goto LABEL_12;
      v7 = v13;
    }
    return 0;
  }
LABEL_12:
  result = sub_6C650((_DWORD *)(a1 + 40), (unsigned __int64 *)&v13, v4);
  if ( !result )
    return 0;
  *a2 = v13;
  return result;
}
