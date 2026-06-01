_QWORD *__fastcall sub_3BBB0(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r12
  _QWORD *v3; // rbx
  char v4; // al
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v8[7]; // [rsp+0h] [rbp-38h] BYREF

  v2 = a1 + 1;
  v3 = (_QWORD *)a1[2];
  v8[1] = __readfsqword(0x28u);
  if ( !v3 )
    goto LABEL_9;
  do
  {
    while ( 1 )
    {
      v4 = sub_35D60((__int64)(v3 + 4), a2);
      v5 = v3[2];
      v6 = v3[3];
      if ( v4 )
        break;
      v2 = v3;
      v3 = (_QWORD *)v3[2];
      if ( !v5 )
        goto LABEL_6;
    }
    v3 = (_QWORD *)v3[3];
  }
  while ( v6 );
LABEL_6:
  if ( a1 + 1 == v2 || (unsigned __int8)sub_35D60(a2, (__int64)(v2 + 4)) )
  {
LABEL_9:
    v8[0] = a2;
    v2 = (_QWORD *)sub_3B9D0(a1, v2, v8);
  }
  return v2 + 13;
}
