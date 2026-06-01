unsigned __int64 __fastcall sub_675C0(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r12
  __int64 (*v4)(); // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  __int64 (*v8)(); // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // [rsp+18h] [rbp-50h]
  char v14; // [rsp+27h] [rbp-41h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-40h]

  v3 = 0;
  v4 = *(__int64 (**)())(*(_QWORD *)a1 + 384LL);
  v15 = __readfsqword(0x28u);
  v6 = 1;
  if ( v4 != sub_63A50 )
  {
    v11 = a3 - 1;
    v3 = a3;
    v12 = a3;
    v13 = 0;
    while ( ((__int64 (__fastcall *)(__int64, _QWORD, unsigned __int64, char *, __int64))v4)(a1, a2, v11, &v14, 1) == 1 )
    {
      a3 += v12;
      if ( v12 <= 0x7FFFFFFFFFFFFFFELL )
        v12 *= 2LL;
      v11 = a3 - 1;
      v4 = *(__int64 (**)())(*(_QWORD *)a1 + 384LL);
      if ( v4 == sub_63A50 )
        goto LABEL_14;
      v13 = v3;
      v3 = a3;
    }
    v3 = v13;
LABEL_14:
    v6 = v3 + 1;
  }
  if ( v6 < a3 )
  {
    do
    {
      while ( 1 )
      {
        v7 = (v3 + a3) >> 1;
        v8 = *(__int64 (**)())(*(_QWORD *)a1 + 384LL);
        v9 = (int)v7;
        if ( v8 != sub_63A50
          && ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, char *, __int64))v8)(a1, a2, (int)v7 - 1, &v14, 1) == 1 )
        {
          break;
        }
        a3 = v9;
        if ( v3 + 1 >= v9 )
          return v3;
      }
      v3 = v9;
    }
    while ( v9 + 1 < a3 );
  }
  return v3;
}

