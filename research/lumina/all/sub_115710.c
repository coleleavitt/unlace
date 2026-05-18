__int64 __fastcall sub_115710(__int64 a1, unsigned __int64 a2, int a3, _QWORD *a4)
{
  __int64 result; // rax
  char *v7; // rax
  __int64 v8; // r15
  unsigned int *v9; // rbx
  unsigned int v10; // eax
  bool v11; // zf
  unsigned int v12; // eax
  unsigned __int8 v13; // [rsp+Fh] [rbp-69h]
  unsigned int v14; // [rsp+14h] [rbp-64h] BYREF
  char *v15; // [rsp+18h] [rbp-60h] BYREF
  _BYTE v16[16]; // [rsp+20h] [rbp-58h] BYREF
  int v17; // [rsp+30h] [rbp-48h]
  unsigned __int16 v18; // [rsp+34h] [rbp-44h]
  unsigned __int16 v19; // [rsp+36h] [rbp-42h]
  unsigned __int64 v20; // [rsp+38h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  if ( (unsigned int)a2 > *(_DWORD *)(a1 + 64) )
  {
    sub_E8BB0(
      0xBu,
      "%s at line %d of [%.10s]",
      "database corruption",
      (unsigned int)&stru_12AD8,
      "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
    return 11;
  }
  result = sub_EBD10((_DWORD *)a1, a2, &v15, 0, 0);
  v14 = result;
  if ( !(_DWORD)result )
  {
    v7 = v15;
    if ( (*(_BYTE *)(a1 + 32) & 4) == 0 && ((_DWORD)a2 == 1) + 1 != *(__int16 *)(*((_QWORD *)v15 + 14) + 54LL) )
    {
      sub_E8BB0(
        0xBu,
        "%s at line %d of [%.10s]",
        "database corruption",
        76511,
        "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
      v7 = v15;
      v14 = 11;
LABEL_13:
      if ( v7 )
        sub_C36A0(*((_QWORD *)v7 + 14));
      return v14;
    }
    v13 = v15[9];
    if ( *((_WORD *)v15 + 12) )
    {
      v8 = 0;
      do
      {
        v9 = (unsigned int *)(*((_QWORD *)v7 + 10)
                            + (unsigned __int16)(*((_WORD *)v7 + 13)
                                               & __ROL2__(*(_WORD *)(*((_QWORD *)v7 + 12) + 2 * v8), 8)));
        if ( !v7[8] )
        {
          v12 = sub_115710(a1, _byteswap_ulong(*v9), 1, a4);
          v11 = v12 == 0;
          v14 = v12;
          v7 = v15;
          if ( !v11 )
            goto LABEL_13;
        }
        a2 = (unsigned __int64)v9;
        (*((void (__fastcall **)(char *, unsigned int *, _BYTE *))v7 + 16))(v7, v9, v16);
        if ( v18 == v17 )
        {
          v14 = 0;
        }
        else
        {
          a2 = *((_QWORD *)v15 + 11);
          v14 = sub_112DB0(*((_QWORD *)v15 + 9), a2, (__int64)v9, v17, v18, v19);
          if ( v14 )
            goto LABEL_23;
        }
        v7 = v15;
      }
      while ( *((unsigned __int16 *)v15 + 12) > (int)++v8 );
    }
    if ( v7[8] )
      goto LABEL_25;
    a2 = _byteswap_ulong(*(_DWORD *)(*((_QWORD *)v7 + 10) + v13 + 8LL));
    v10 = sub_115710(a1, a2, 1, a4);
    v11 = v10 == 0;
    v14 = v10;
    v7 = v15;
    if ( !v11 )
      goto LABEL_13;
    if ( !v15[1] )
    {
LABEL_25:
      if ( a4 )
        *a4 += *((unsigned __int16 *)v7 + 12);
      if ( !a3 )
      {
LABEL_21:
        v14 = sub_10D290(*((_QWORD *)v7 + 14), a2);
        if ( !v14 )
          sub_E8FB0((__int64)v15, *(_BYTE *)(*((_QWORD *)v15 + 10) + v13) | 8);
LABEL_23:
        v7 = v15;
        goto LABEL_13;
      }
      if ( v14 )
        goto LABEL_13;
    }
    else if ( !a3 )
    {
      goto LABEL_21;
    }
    sub_112FB0((__int64)v7, &v14);
    v7 = v15;
    goto LABEL_13;
  }
  return result;
}
