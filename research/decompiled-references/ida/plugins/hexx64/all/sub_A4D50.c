__int64 __fastcall sub_A4D50(__int64 a1, int *a2, __int64 *a3, __int64 a4, int a5, int a6)
{
  int *v6; // rbx
  unsigned int v8; // r15d
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r9d
  __int64 v15[2]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v16; // [rsp+10h] [rbp-58h] BYREF
  __int64 v17; // [rsp+18h] [rbp-50h]
  unsigned __int64 v18; // [rsp+28h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  if ( a2 )
  {
    v6 = a2;
    v8 = 0;
    v9 = *a2;
    if ( *a2 )
      goto LABEL_3;
LABEL_16:
    ++v8;
    v6 = (int *)sub_A3480(a1, v6);
    while ( v6 )
    {
      v9 = *v6;
      if ( !*v6 )
        goto LABEL_16;
LABEL_3:
      if ( (v9 == 4 || v9 == 67 && v6[9] == v6[17]) && *((_BYTE *)v6 + 64) == 5 )
      {
        sub_124680((__int64)v15, a1, (__int64)v6, 1u);
        if ( (!(unsigned __int8)sub_64880(v15) || v17)
          && (unsigned __int8)sub_64820(v15, a3)
          && (unsigned __int8)sub_317F40(a3 + 2, (__int64)&v16)
          && (unsigned __int8)netnode_charval() == 1 )
        {
          if ( v16 )
          {
            v17 = 0;
            qfree(v16);
          }
          qfree(v15[0]);
          goto LABEL_16;
        }
        if ( v16 )
        {
          v17 = 0;
          qfree(v16);
        }
        qfree(v15[0]);
      }
      sub_127A20((__int64)v15, a1, (__int64)v6, 1, a5, a6);
      sub_64640(a3, v15, v10, v11, v12, v13);
      sub_317C60(a3 + 2, (__int64)&v16);
      if ( (unsigned __int8)sub_64880(a3) && !a3[3] )
      {
        if ( v16 )
        {
          v17 = 0;
          qfree(v16);
        }
        qfree(v15[0]);
        return v8;
      }
      v6 = *((int **)v6 + 1);
      if ( v16 )
      {
        v17 = 0;
        qfree(v16);
      }
      qfree(v15[0]);
    }
  }
  else
  {
    return 0;
  }
  return v8;
}

