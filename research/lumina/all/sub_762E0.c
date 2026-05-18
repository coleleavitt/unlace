__int64 __fastcall sub_762E0(__int64 a1, char **a2, __int64 a3, int a4)
{
  char *v4; // r14
  __int64 v5; // rbx
  unsigned int v8; // eax
  unsigned int v9; // r15d
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // r14
  bool i; // al
  __int64 v14; // [rsp+8h] [rbp-60h]
  char *v15; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v16[9]; // [rsp+20h] [rbp-48h] BYREF

  v16[1] = __readfsqword(0x28u);
  v4 = *a2;
  v15 = v4;
  v5 = (__int64)&v4[a3];
  if ( __CFADD__(v4, a3) )
    return 0;
  v16[0] = v4;
  v8 = sub_196ED0(v16, &v4[a3]);
  v9 = v8;
  v15 = (char *)v16[0];
  v14 = v16[0];
  if ( (unsigned __int64)v4 >= v16[0] )
    return 0;
  v10 = v8;
  sub_75FB0((__int64 *)(a1 + 16), v8);
  if ( v9 )
  {
    v11 = 0;
    v12 = 120 * v10;
    for ( i = sub_6EB50(*(_QWORD *)(a1 + 16), &v15, v5 - v14);
          i;
          i = sub_6EB50(v11 + *(_QWORD *)(a1 + 16), &v15, v5 - (_QWORD)v15) )
    {
      v11 += 120;
      if ( v12 == v11 )
        goto LABEL_10;
    }
    return 0;
  }
LABEL_10:
  if ( a4 > 3 && !sub_6C650((_DWORD *)(a1 + 40), (unsigned __int64 *)&v15, v5) )
    return 0;
  *a2 = v15;
  return 1;
}
