__int64 __fastcall sub_10F3A0(__int64 a1, __int64 a2, __int64 *a3, char a4)
{
  unsigned int v6; // ebp
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r14
  _QWORD *v12; // rdx
  __int64 result; // rax
  __int64 v14; // r14
  __int64 v15; // rdx
  unsigned int v16; // [rsp+Ch] [rbp-2Ch]
  unsigned int v17; // [rsp+Ch] [rbp-2Ch]

  if ( !(_DWORD)a2 )
  {
    sub_E8BB0(
      0xBu,
      "%s at line %d of [%.10s]",
      "database corruption",
      59253,
      "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
    return 11;
  }
  v6 = a2;
  v8 = (__int64 *)((__int64 (__fastcall *)(_QWORD, __int64, _QWORD))*(&xmmword_241558 + 1))(
                    *(_QWORD *)(*(_QWORD *)(a1 + 288) + 64LL),
                    a2,
                    *(_BYTE *)(*(_QWORD *)(a1 + 288) + 45LL) & 3);
  if ( !v8 )
  {
    v14 = *(_QWORD *)(a1 + 288);
    if ( *(_BYTE *)(v14 + 45) == 2 )
    {
      result = 7;
      goto LABEL_21;
    }
    if ( (int)xmmword_241558(*(_QWORD *)(v14 + 64)) <= *(_DWORD *)(v14 + 32) )
    {
LABEL_25:
      a2 = v6;
      v8 = (__int64 *)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))*(&xmmword_241558 + 1))(
                        *(_QWORD *)(v14 + 64),
                        v6,
                        2);
      if ( v8 )
        goto LABEL_3;
      v14 = *(_QWORD *)(a1 + 288);
      result = 7;
LABEL_21:
      v15 = *(unsigned int *)(v14 + 24);
      if ( (_DWORD)v15 )
      {
LABEL_22:
        *a3 = 0;
        return result;
      }
LABEL_31:
      v17 = result;
      sub_10F340(a1, a2, v15, v9);
      result = v17;
      goto LABEL_22;
    }
    a2 = *(_QWORD *)(v14 + 16);
    if ( a2 )
    {
      while ( *(_WORD *)(a2 + 54) || (*(_BYTE *)(a2 + 52) & 8) != 0 )
      {
        a2 = *(_QWORD *)(a2 + 64);
        if ( !a2 )
          goto LABEL_38;
      }
      *(_QWORD *)(v14 + 16) = a2;
    }
    else
    {
LABEL_38:
      a2 = *(_QWORD *)(v14 + 8);
      *(_QWORD *)(v14 + 16) = 0;
      if ( !a2 )
        goto LABEL_25;
      while ( *(_WORD *)(a2 + 54) )
      {
        a2 = *(_QWORD *)(a2 + 64);
        if ( !a2 )
          goto LABEL_25;
      }
    }
    result = (*(__int64 (__fastcall **)(_QWORD))(v14 + 48))(*(_QWORD *)(v14 + 56));
    if ( (_DWORD)result && (_DWORD)result != 5 )
      goto LABEL_30;
    goto LABEL_25;
  }
LABEL_3:
  v10 = *(_QWORD *)(a1 + 288);
  a2 = v6;
  v11 = sub_C6370(v10, v6, v8);
  *a3 = v11;
  if ( *(_QWORD *)(v11 + 40) && (a4 & 1) == 0 )
  {
    ++*(_DWORD *)(a1 + 248);
    return 0;
  }
  if ( *(_DWORD *)(a1 + 192) == v6 )
  {
    a2 = (__int64)"%s at line %d of [%.10s]";
    sub_E8BB0(
      0xBu,
      "%s at line %d of [%.10s]",
      "database corruption",
      59285,
      "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
    result = 11;
    if ( v11 )
      goto LABEL_20;
    goto LABEL_30;
  }
  *(_QWORD *)(v11 + 40) = a1;
  v12 = *(_QWORD **)(a1 + 72);
  if ( !*v12 || *(_DWORD *)(a1 + 32) < v6 )
  {
    if ( *(_DWORD *)(a1 + 188) >= v6 )
    {
      if ( (a4 & 1) == 0 )
      {
LABEL_28:
        memset(*(void **)(v11 + 8), 0, *(_QWORD *)(a1 + 200));
        return 0;
      }
LABEL_10:
      if ( qword_2424C0 )
        qword_2424C0(v10, v6, v12, v9);
      if ( *(_DWORD *)(a1 + 36) >= v6 )
        sub_D6EC0(*(_DWORD **)(a1 + 64), v6);
      sub_D7110((_QWORD *)(a1 + 120), (int *)(a1 + 128), v6);
      if ( qword_2424C8 )
        qword_2424C8();
      goto LABEL_28;
    }
    result = 13;
LABEL_19:
    if ( v11 )
    {
LABEL_20:
      v16 = result;
      sub_C3160(v11);
      v14 = *(_QWORD *)(a1 + 288);
      result = v16;
      goto LABEL_21;
    }
LABEL_30:
    v15 = *(unsigned int *)(*(_QWORD *)(a1 + 288) + 24LL);
    if ( (_DWORD)v15 )
      goto LABEL_22;
    goto LABEL_31;
  }
  if ( (a4 & 1) != 0 )
  {
    result = 13;
    if ( v6 <= *(_DWORD *)(a1 + 188) )
      goto LABEL_10;
    goto LABEL_19;
  }
  ++*(_DWORD *)(a1 + 252);
  result = sub_EC730(v11);
  if ( (_DWORD)result )
    goto LABEL_19;
  return result;
}
