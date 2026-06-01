unsigned __int64 __fastcall sub_4B760(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  _QWORD *v4; // rdx
  _QWORD *v6; // rsi
  __int64 v7; // r8
  __int64 v8; // rcx
  unsigned __int64 v10; // [rsp+8h] [rbp-20h] BYREF
  unsigned __int64 *v11; // [rsp+10h] [rbp-18h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-10h]

  v10 = a2;
  v12 = __readfsqword(0x28u);
  v4 = (_QWORD *)a1[27];
  if ( !v4 )
  {
    v6 = a1 + 26;
LABEL_10:
    v11 = &v10;
    v6 = sub_4A990(a1 + 25, v6, &v11);
    goto LABEL_8;
  }
  v6 = a1 + 26;
  do
  {
    while ( 1 )
    {
      v7 = v4[2];
      v8 = v4[3];
      if ( v4[4] < a2 )
        break;
      v6 = v4;
      v4 = (_QWORD *)v4[2];
      if ( !v7 )
        goto LABEL_6;
    }
    v4 = (_QWORD *)v4[3];
  }
  while ( v8 );
LABEL_6:
  if ( a1 + 26 == v6 || a2 < v6[4] )
    goto LABEL_10;
LABEL_8:
  v6[5] = a3;
  return v12 - __readfsqword(0x28u);
}

