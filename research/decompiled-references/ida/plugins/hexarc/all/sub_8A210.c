__int64 __fastcall sub_8A210(unsigned __int8 *a1, __int64 a2)
{
  __int64 v3; // r12
  int v4; // esi
  int v5; // eax
  unsigned __int64 v6; // r14
  char v7; // si
  int v8; // esi
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v13; // rax
  __int64 *v14; // rax
  int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned __int8 v18; // al
  __int64 v19; // rax
  char *v20; // rsi

  v3 = *a1;
  v4 = *((_DWORD *)a1 + 1);
  switch ( (char)v3 )
  {
    case 2:
      v13 = *((_QWORD *)a1 + 1);
      v6 = *(_QWORD *)(v13 + 16);
      if ( v6 == *(_QWORD *)(v13 + 24) )
      {
        if ( *(_BYTE *)(a2 + 53) && v6 <= 0xF )
        {
          v4 = *((_DWORD *)a1 + 1);
          v17 = sub_3320F0();
          v5 = *((_DWORD *)a1 + 1);
          if ( v4 == *(_DWORD *)(v17 + 80) )
          {
            LOBYTE(v4) = v6;
            v3 = 13;
          }
        }
        else
        {
          v5 = *((_DWORD *)a1 + 1);
        }
      }
      else
      {
        v5 = *((_DWORD *)a1 + 1);
        v3 = 15;
      }
      break;
    case 3:
    case 13:
    case 15:
      v5 = *((_DWORD *)a1 + 1);
      v3 = 15;
      v6 = 0;
      break;
    case 9:
      if ( !*(_BYTE *)(a2 + 53) )
        goto LABEL_3;
      v14 = *((__int64 **)a1 + 1);
      v15 = *((_DWORD *)v14 + 4);
      if ( v15 > 15 )
        goto LABEL_3;
      v6 = v14[1];
      if ( v6 )
        goto LABEL_3;
      v16 = *v14;
      v5 = *((_DWORD *)a1 + 1);
      if ( v16 && v4 == *(_DWORD *)(*(_QWORD *)(v16 + 1504) + 80LL) )
      {
        LOBYTE(v4) = v15;
        v3 = 3;
      }
      break;
    default:
LABEL_3:
      v5 = *((_DWORD *)a1 + 1);
      v6 = 0;
      break;
  }
  if ( v5 > 15 || v5 == -1 )
    v7 = v3;
  else
    v7 = v3 | (16 * v4);
  sub_74200((__int64 *)a2, v7);
  v8 = *((_DWORD *)a1 + 1);
  if ( (unsigned int)(v8 + 1) <= 1 || v8 > 15 )
    sub_792E0((__int64 *)a2);
  if ( (unsigned __int8)sub_740C0(*(_DWORD *)(a2 + 48), 2, 2u) )
  {
    v9 = *a1;
    if ( (unsigned __int8)v9 <= 0xEu )
    {
      v10 = 16498;
      if ( _bittest64(&v10, v9) )
        sub_792E0((__int64 *)a2);
    }
  }
  switch ( v3 )
  {
    case 0LL:
    case 3LL:
      return sub_74200((__int64 *)a2, a1[1]);
    case 1LL:
    case 7LL:
      sub_792E0((__int64 *)a2);
      return sub_74200((__int64 *)a2, a1[1]);
    case 2LL:
      v11 = v6;
      goto LABEL_17;
    case 4LL:
      sub_8A7D0(*((_QWORD *)a1 + 1), a2);
      return sub_74200((__int64 *)a2, a1[1]);
    case 5LL:
      sub_79570((__int64 *)a2, *(_QWORD *)(*((_QWORD *)a1 + 1) + 8LL));
      return sub_74200((__int64 *)a2, a1[1]);
    case 6LL:
      sub_79570((__int64 *)a2, *((_QWORD *)a1 + 1) - *(_QWORD *)(a2 + 40));
      return sub_74200((__int64 *)a2, a1[1]);
    case 8LL:
      sub_89D20(*((_QWORD *)a1 + 1), a2);
      return sub_74200((__int64 *)a2, a1[1]);
    case 9LL:
      sub_7A020(*((_QWORD *)a1 + 1), (__int64 *)a2);
      return sub_74200((__int64 *)a2, a1[1]);
    case 10LL:
      sub_8A740(*((_QWORD *)a1 + 1), a2);
      return sub_74200((__int64 *)a2, a1[1]);
    case 11LL:
      goto LABEL_39;
    case 12LL:
      sub_7A0C0(*((_QWORD **)a1 + 1), (__int64 *)a2);
      return sub_74200((__int64 *)a2, a1[1]);
    case 13LL:
      goto LABEL_18;
    case 14LL:
      sub_8A210(*((_QWORD *)a1 + 1), a2);
      sub_8A210(*((_QWORD *)a1 + 1) + 16LL, a2);
      return sub_74200((__int64 *)a2, a1[1]);
    case 15LL:
      v18 = *a1;
      if ( *a1 == 13 )
      {
        sub_74200((__int64 *)a2, 2);
        sub_79590((__int64 *)a2);
        return sub_74200((__int64 *)a2, a1[1]);
      }
      if ( v18 > 0xDu )
      {
        if ( v18 == 15 )
        {
          sub_74200((__int64 *)a2, 3);
          sub_88FC0(a2, 2, "scattered");
          sub_74200((__int64 *)a2, *(_BYTE *)(*((_QWORD *)a1 + 1) + 48LL) != 0);
          if ( *(_BYTE *)(*((_QWORD *)a1 + 1) + 48LL) )
          {
            sub_88FC0(a2, 4, "type");
            sub_79750((__int64 *)a2, (_BYTE *)(*((_QWORD *)a1 + 1) + 48LL));
            sub_88FC0(a2, 4, "name");
            v19 = *((_QWORD *)a1 + 1);
            v20 = (char *)s1;
            if ( *(_QWORD *)(v19 + 32) )
              v20 = *(char **)(v19 + 24);
            sub_79640((__int64 *)a2, v20);
          }
          sub_88FC0(a2, 4, "vdloc_t");
          sub_7B350((__int64 *)a2);
          return sub_74200((__int64 *)a2, a1[1]);
        }
        goto LABEL_59;
      }
      if ( v18 != 2 )
      {
        if ( v18 == 3 )
        {
          sub_74200((__int64 *)a2, 1);
LABEL_39:
          sub_79640((__int64 *)a2, *((_BYTE **)a1 + 1));
          return sub_74200((__int64 *)a2, a1[1]);
        }
LABEL_59:
        if ( !under_debugger )
          sub_37B760(50580);
LABEL_61:
        BUG();
      }
      sub_74200((__int64 *)a2, 4);
      sub_79340((__int64 *)a2, v6);
      v11 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL);
LABEL_17:
      sub_79340((__int64 *)a2, v11);
LABEL_18:
      sub_7A1E0(*((_QWORD *)a1 + 1), (__int64 *)a2);
      return sub_74200((__int64 *)a2, a1[1]);
    default:
      if ( !under_debugger )
        sub_37B760(50579);
      goto LABEL_61;
  }
}

