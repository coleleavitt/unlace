__int64 __fastcall sub_A0B50(__int64 a1, int *a2, __int64 *a3)
{
  __int64 v3; // rbx
  unsigned int v5; // r15d
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // r9d
  __int64 v12[2]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v13; // [rsp+10h] [rbp-58h] BYREF
  __int64 v14; // [rsp+18h] [rbp-50h]
  unsigned __int64 v15; // [rsp+28h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  if ( a2 )
  {
    v3 = (__int64)a2;
    v5 = 0;
    v6 = *a2;
    if ( *a2 )
      goto LABEL_3;
LABEL_16:
    ++v5;
    v3 = sub_9F280(a1, v3);
    while ( v3 )
    {
      v6 = *(_DWORD *)v3;
      if ( !*(_DWORD *)v3 )
        goto LABEL_16;
LABEL_3:
      if ( (v6 == 4 || v6 == 67 && *(_DWORD *)(v3 + 36) == *(_DWORD *)(v3 + 68)) && *(_BYTE *)(v3 + 64) == 5 )
      {
        sub_120480(v12, a1, v3, 1);
        if ( (!(unsigned __int8)sub_60680(v12) || v14)
          && (unsigned __int8)sub_60620(v12, a3)
          && (unsigned __int8)sub_3131C0(a3 + 2, &v13)
          && (unsigned __int8)netnode_charval() == 1 )
        {
          if ( v13 )
          {
            v14 = 0;
            qfree();
          }
          qfree();
          goto LABEL_16;
        }
        if ( v13 )
        {
          v14 = 0;
          qfree();
        }
        qfree();
      }
      sub_123820(v12, a1, v3, 1);
      sub_60440(a3, v12, v7, v8, v9, v10);
      sub_312EE0(a3 + 2, &v13);
      if ( (unsigned __int8)sub_60680(a3) && !a3[3] )
      {
        if ( v13 )
        {
          v14 = 0;
          qfree();
        }
        qfree();
        return v5;
      }
      v3 = *(_QWORD *)(v3 + 8);
      if ( v13 )
      {
        v14 = 0;
        qfree();
      }
      qfree();
    }
  }
  else
  {
    return 0;
  }
  return v5;
}

