__int64 __fastcall sub_A9AA0(__int64 a1, unsigned __int64 **a2, __int64 a3, __int64 a4, unsigned int a5)
{
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rdi
  char v13; // al
  __int64 v14[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v15; // [rsp+20h] [rbp-58h] BYREF
  __int64 v16; // [rsp+28h] [rbp-50h]
  unsigned __int64 v17; // [rsp+38h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_64880(a2) && !a2[3] || !a3 || a3 == a4 )
    return 0;
  while ( 1 )
  {
    sub_127A20((__int64)v14, a1, a3, a5, v9, v10);
    if ( (unsigned __int8)sub_64780(a2, v14) )
      break;
    v13 = sub_318470(a2 + 2, (__int64)&v15);
    v11 = v15;
    if ( v13 )
      goto LABEL_7;
    a3 = *(_QWORD *)(a3 + 8);
    if ( v15 )
    {
      v16 = 0;
      qfree(v15);
    }
    qfree(v14[0]);
    if ( !a3 || a4 == a3 )
      return 0;
  }
  v11 = v15;
LABEL_7:
  if ( v11 )
  {
    v16 = 0;
    qfree(v11);
  }
  qfree(v14[0]);
  return a3;
}

