__int64 __fastcall sub_11D020(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // r12d
  char v5; // al
  __int64 v6; // rdi
  int v7; // r13d
  __int64 v8; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  _QWORD *v11; // rax
  _QWORD *i; // rbx
  __int64 v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdi
  _QWORD *v19; // rdx
  _QWORD *v20; // rdi
  _QWORD *v21; // rdx
  _QWORD *v22; // rdi

  result = 0;
  if ( a1 )
  {
    v3 = a2;
    v5 = *(_BYTE *)(a1 + 113);
    if ( v5 != 118 && v5 != -70 && v5 != 109 && !(unsigned int)sub_EA5B0() )
    {
      sub_E8BB0(
        0x15u,
        "%s at line %d of [%.10s]",
        "misuse",
        171180,
        "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
      return 21;
    }
    v6 = *(_QWORD *)(a1 + 24);
    if ( v6 )
      xmmword_241500(v6);
    if ( (*(_BYTE *)(a1 + 110) & 8) != 0 )
    {
      a2 = *(_QWORD *)(a1 + 248);
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(a1 + 240))(8, a2, a1, 0);
    }
    if ( !*(_BYTE *)(a1 + 111) )
      sub_CC760(a1);
    if ( *(int *)(a1 + 40) > 0 )
    {
      v7 = 0;
      while ( 1 )
      {
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL * v7 + 24);
        if ( v8 )
        {
          v9 = *(_QWORD **)(v8 + 16);
          if ( v9 )
            break;
        }
LABEL_25:
        if ( ++v7 >= *(_DWORD *)(a1 + 40) )
          goto LABEL_26;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          v10 = v9[2];
          if ( *(_BYTE *)(v10 + 63) == 1 )
          {
            v11 = *(_QWORD **)(v10 + 80);
            if ( v11 )
              break;
          }
LABEL_15:
          v9 = (_QWORD *)*v9;
          if ( !v9 )
            goto LABEL_25;
        }
        if ( a1 != *v11 )
        {
          while ( 1 )
          {
            v20 = (_QWORD *)v11[5];
            if ( !v20 )
              goto LABEL_15;
            if ( a1 == *v20 )
            {
              v19 = v11 + 5;
              goto LABEL_24;
            }
            v11 = (_QWORD *)v11[5];
          }
        }
        v19 = (_QWORD *)(v10 + 80);
        v20 = v11;
LABEL_24:
        *v19 = v20[5];
        sub_D00D0((__int64)v20);
        v9 = (_QWORD *)*v9;
        if ( !v9 )
          goto LABEL_25;
      }
    }
LABEL_26:
    for ( i = *(_QWORD **)(a1 + 544); i; i = (_QWORD *)*i )
    {
      while ( 1 )
      {
        v13 = *(_QWORD *)(i[2] + 40LL);
        if ( v13 )
        {
          v14 = *(_QWORD **)(v13 + 80);
          if ( v14 )
            break;
        }
LABEL_34:
        i = (_QWORD *)*i;
        if ( !i )
          goto LABEL_35;
      }
      if ( a1 != *v14 )
      {
        while ( 1 )
        {
          v22 = (_QWORD *)v14[5];
          if ( !v22 )
            goto LABEL_34;
          if ( a1 == *v22 )
          {
            v21 = v14 + 5;
            goto LABEL_43;
          }
          v14 = (_QWORD *)v14[5];
        }
      }
      v21 = (_QWORD *)(v13 + 80);
      v22 = v14;
LABEL_43:
      *v21 = v22[5];
      sub_D00D0((__int64)v22);
    }
LABEL_35:
    sub_D04F0(a1);
    if ( !*(_BYTE *)(a1 + 111) )
      sub_CC7E0(a1, a2, v15);
    sub_D0560(a1, 136);
    if ( !v3 && (*(_QWORD *)(a1 + 8) || (unsigned int)sub_D1B50(a1)) )
    {
      sub_F63C0(a1, 5, "unable to close due to unfinalized statements or unfinished backups");
      v18 = *(_QWORD *)(a1 + 24);
      if ( v18 )
        xmmword_241510(v18, 5, v17);
      return 5;
    }
    else
    {
      *(_BYTE *)(a1 + 113) = -89;
      sub_11CB70((__m128i *)a1, 136, v16);
      return 0;
    }
  }
  return result;
}
