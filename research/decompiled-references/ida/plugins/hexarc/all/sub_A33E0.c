__int64 __fastcall sub_A33E0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v9; // rdi
  char v11; // al
  _QWORD v12[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v13; // [rsp+20h] [rbp-58h] BYREF
  __int64 v14; // [rsp+28h] [rbp-50h]
  unsigned __int64 v15; // [rsp+38h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_5E300(a2) && !a2[3] || !a3 || a3 == a4 )
    return 0;
  while ( 1 )
  {
    sub_121360(v12, a1, a3, a5);
    if ( (unsigned __int8)sub_5E200(a2, v12) )
      break;
    v11 = sub_3110F0(a2 + 2, &v13);
    v9 = v13;
    if ( v11 )
      goto LABEL_7;
    a3 = *(_QWORD *)(a3 + 8);
    if ( v13 )
    {
      v14 = 0;
      qfree();
    }
    qfree();
    if ( !a3 || a4 == a3 )
      return 0;
  }
  v9 = v13;
LABEL_7:
  if ( v9 )
  {
    v14 = 0;
    qfree();
  }
  qfree();
  return a3;
}

