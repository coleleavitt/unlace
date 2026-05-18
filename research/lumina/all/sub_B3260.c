__int64 __fastcall sub_B3260(__int64 a1, char **a2, __int64 a3)
{
  char *v3; // r14
  char *v4; // rbx
  unsigned int v6; // eax
  unsigned int v7; // r15d
  __int64 v8; // r14
  char *v9; // rdx
  __int64 v10; // r15
  __int64 v11; // r14
  bool i; // al
  char *v13; // [rsp+8h] [rbp-60h]
  char *v14; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v15[9]; // [rsp+20h] [rbp-48h] BYREF

  v15[1] = __readfsqword(0x28u);
  v3 = *a2;
  v14 = v3;
  v4 = &v3[a3];
  if ( __CFADD__(v3, a3) )
    return 0;
  v15[0] = v3;
  v6 = sub_196ED0(v15, &v3[a3]);
  v7 = v6;
  v14 = (char *)v15[0];
  v13 = (char *)v15[0];
  if ( (unsigned __int64)v3 >= v15[0] )
    return 0;
  v8 = v6;
  sub_B3010((_QWORD *)(a1 + 16), v6);
  v9 = v13;
  if ( v7 )
  {
    v10 = 0;
    v11 = 136 * v8;
    for ( i = sub_AF240(*(_QWORD *)(a1 + 16), &v14, v4 - v13); i; i = sub_AF240(
                                                                        v10 + *(_QWORD *)(a1 + 16),
                                                                        &v14,
                                                                        v4 - v14) )
    {
      v10 += 136;
      v9 = v14;
      if ( v11 == v10 )
        goto LABEL_10;
    }
    return 0;
  }
LABEL_10:
  *a2 = v9;
  return 1;
}
