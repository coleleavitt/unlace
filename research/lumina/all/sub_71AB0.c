bool __fastcall sub_71AB0(_QWORD *a1, char **a2, __int64 a3)
{
  bool result; // al
  char *v4; // rbx
  __int64 v5; // rax
  char *v6; // r14
  __int64 v7; // rax
  char *v8; // rdx
  char *v9; // [rsp+8h] [rbp-60h]
  char *v10; // [rsp+8h] [rbp-60h]
  char *v11; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v12[9]; // [rsp+20h] [rbp-48h] BYREF

  v12[1] = __readfsqword(0x28u);
  v11 = *a2;
  if ( __CFADD__(a3, v11) )
    return 0;
  v4 = &v11[a3];
  if ( !sub_6EB50((__int64)a1, &v11, a3) )
    return 0;
  v12[0] = v11;
  v9 = v11;
  v5 = sub_196FF0(v12, v4);
  v6 = (char *)v12[0];
  a1[15] = v5;
  v11 = v6;
  if ( v9 >= v6 )
    return 0;
  v7 = sub_196FF0(v12, v4);
  v8 = (char *)v12[0];
  a1[16] = v7;
  v11 = v8;
  v10 = v8;
  if ( v6 >= v8 )
    return 0;
  a1[17] = sub_196FF0(v12, v4);
  v11 = (char *)v12[0];
  if ( (unsigned __int64)v10 >= v12[0] )
    return 0;
  if ( !sub_6D4B0(a1 + 18, (unsigned __int64 *)&v11, (__int64)v4) )
    return 0;
  result = sub_6D4B0(a1 + 19, (unsigned __int64 *)&v11, (__int64)v4);
  if ( !result )
    return 0;
  *a2 = v11;
  return result;
}
