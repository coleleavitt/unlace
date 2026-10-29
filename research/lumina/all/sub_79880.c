__int64 __fastcall sub_79880(__int64 a1, char **a2, __int64 a3, int a4)
{
  char *v4; // r14
  char *v5; // rbx
  unsigned int v8; // eax
  unsigned int v9; // r15d
  __int64 v10; // r14
  char *v11; // rdx
  __int64 v12; // r15
  __int64 v13; // r14
  char i; // al
  char *v15; // [rsp+8h] [rbp-60h]
  char *v16; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v17[9]; // [rsp+20h] [rbp-48h] BYREF

  v17[1] = __readfsqword(0x28u);
  v4 = *a2;
  v16 = v4;
  v5 = &v4[a3];
  if ( __CFADD__(v4, a3) )
    return 0;
  v17[0] = v4;
  v8 = sub_196ED0(v17, &v4[a3]);
  v9 = v8;
  v16 = (char *)v17[0];
  v15 = (char *)v17[0];
  if ( (unsigned __int64)v4 >= v17[0] )
    return 0;
  v10 = v8;
  sub_79260((__int64 *)(a1 + 16), v8);
  v11 = v15;
  if ( v9 )
  {
    v12 = 0;
    v13 = 216 * v10;
    for ( i = sub_6F100(*(_QWORD **)(a1 + 16), &v16, v5 - v15, a4);
          i;
          i = sub_6F100((_QWORD *)(v12 + *(_QWORD *)(a1 + 16)), &v16, v5 - v16, a4) )
    {
      v12 += 216;
      v11 = v16;
      if ( v13 == v12 )
        goto LABEL_10;
    }
    return 0;
  }
LABEL_10:
  *a2 = v11;
  return 1;
}
