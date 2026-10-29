__int64 __fastcall sub_908D0(unsigned __int8 *a1, __int64 a2, double a3)
{
  __int64 v4; // r12
  int v5; // esi
  int v6; // eax
  unsigned __int64 v7; // r14
  char v8; // si
  int v9; // esi
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v14; // rax
  __int64 *v15; // rax
  int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int8 v19; // al
  __int64 v20; // rax
  char *v21; // rsi

  v4 = *a1;
  v5 = *((_DWORD *)a1 + 1);
  switch ( (char)v4 )
  {
    case 2:
      v14 = *((_QWORD *)a1 + 1);
      v7 = *(_QWORD *)(v14 + 16);
      if ( v7 == *(_QWORD *)(v14 + 24) )
      {
        if ( *(_BYTE *)(a2 + 53) && v7 <= 0xF )
        {
          v5 = *((_DWORD *)a1 + 1);
          v18 = sub_339CA0();
          v6 = *((_DWORD *)a1 + 1);
          if ( v5 == *(_DWORD *)(v18 + 80) )
          {
            LOBYTE(v5) = v7;
            v4 = 13;
          }
        }
        else
        {
          v6 = *((_DWORD *)a1 + 1);
        }
      }
      else
      {
        v6 = *((_DWORD *)a1 + 1);
        v4 = 15;
      }
      break;
    case 3:
    case 13:
    case 15:
      v6 = *((_DWORD *)a1 + 1);
      v4 = 15;
      v7 = 0;
      break;
    case 9:
      if ( !*(_BYTE *)(a2 + 53) )
        goto LABEL_3;
      v15 = *((__int64 **)a1 + 1);
      v16 = *((_DWORD *)v15 + 4);
      if ( v16 > 15 )
        goto LABEL_3;
      v7 = v15[1];
      if ( v7 )
        goto LABEL_3;
      v17 = *v15;
      v6 = *((_DWORD *)a1 + 1);
      if ( v17 && v5 == *(_DWORD *)(*(_QWORD *)(v17 + 1504) + 80LL) )
      {
        LOBYTE(v5) = v16;
        v4 = 3;
      }
      break;
    default:
LABEL_3:
      v6 = *((_DWORD *)a1 + 1);
      v7 = 0;
      break;
  }
  if ( v6 > 15 || v6 == -1 )
    v8 = v4;
  else
    v8 = v4 | (16 * v5);
  sub_7A780((__int64 *)a2, v8);
  v9 = *((_DWORD *)a1 + 1);
  if ( (unsigned int)(v9 + 1) <= 1 || v9 > 15 )
    sub_7F8E0((__int64 *)a2);
  if ( (unsigned __int8)sub_7A640(*(_DWORD *)(a2 + 48), 2, 2u) )
  {
    v10 = *a1;
    if ( (unsigned __int8)v10 <= 0xEu )
    {
      v11 = 16498;
      if ( _bittest64(&v11, v10) )
        sub_7F8E0((__int64 *)a2);
    }
  }
  switch ( v4 )
  {
    case 0LL:
    case 3LL:
      return sub_7A780((__int64 *)a2, a1[1]);
    case 1LL:
    case 7LL:
      sub_7F8E0((__int64 *)a2);
      return sub_7A780((__int64 *)a2, a1[1]);
    case 2LL:
      v12 = v7;
      goto LABEL_17;
    case 4LL:
      sub_90E90(*((unsigned __int8 **)a1 + 1), (__int64 *)a2);
      return sub_7A780((__int64 *)a2, a1[1]);
    case 5LL:
      sub_7FB70((__int64 *)a2, *(_QWORD *)(*((_QWORD *)a1 + 1) + 8LL));
      return sub_7A780((__int64 *)a2, a1[1]);
    case 6LL:
      sub_7FB70((__int64 *)a2, *((_QWORD *)a1 + 1) - *(_QWORD *)(a2 + 40));
      return sub_7A780((__int64 *)a2, a1[1]);
    case 8LL:
      sub_903E0(*((_QWORD *)a1 + 1), a2);
      return sub_7A780((__int64 *)a2, a1[1]);
    case 9LL:
      sub_80620(*((_QWORD *)a1 + 1), (__int64 *)a2);
      return sub_7A780((__int64 *)a2, a1[1]);
    case 10LL:
      sub_90E00(*((unsigned __int8 **)a1 + 1), (__int64 *)a2);
      return sub_7A780((__int64 *)a2, a1[1]);
    case 11LL:
      goto LABEL_39;
    case 12LL:
      sub_806C0(*((_QWORD **)a1 + 1), (__int64 *)a2);
      return sub_7A780((__int64 *)a2, a1[1]);
    case 13LL:
      goto LABEL_18;
    case 14LL:
      sub_908D0(*((unsigned __int8 **)a1 + 1), a2);
      sub_908D0((unsigned __int8 *)(*((_QWORD *)a1 + 1) + 16LL), a2);
      return sub_7A780((__int64 *)a2, a1[1]);
    case 15LL:
      v19 = *a1;
      if ( *a1 == 13 )
      {
        sub_7A780((__int64 *)a2, 2);
        sub_7FB90((__int64 *)a2);
        return sub_7A780((__int64 *)a2, a1[1]);
      }
      if ( v19 > 0xDu )
      {
        if ( v19 == 15 )
        {
          sub_7A780((__int64 *)a2, 3);
          sub_8F680(a2, 2, "scattered");
          sub_7A780((__int64 *)a2, *(_BYTE *)(*((_QWORD *)a1 + 1) + 48LL) != 0);
          if ( *(_BYTE *)(*((_QWORD *)a1 + 1) + 48LL) )
          {
            sub_8F680(a2, 4, "type");
            sub_7FD50((__int64 *)a2, (_BYTE *)(*((_QWORD *)a1 + 1) + 48LL));
            sub_8F680(a2, 4, "name");
            v20 = *((_QWORD *)a1 + 1);
            v21 = (char *)s1;
            if ( *(_QWORD *)(v20 + 32) )
              v21 = *(char **)(v20 + 24);
            sub_7FC40((__int64 *)a2, v21);
          }
          sub_8F680(a2, 4, "vdloc_t");
          sub_81A10((__int64 *)a2);
          return sub_7A780((__int64 *)a2, a1[1]);
        }
        goto LABEL_59;
      }
      if ( v19 != 2 )
      {
        if ( v19 == 3 )
        {
          sub_7A780((__int64 *)a2, 1);
LABEL_39:
          sub_7FC40((__int64 *)a2, *((_BYTE **)a1 + 1));
          return sub_7A780((__int64 *)a2, a1[1]);
        }
LABEL_59:
        if ( !under_debugger )
          sub_383060(0xC594u, a3);
LABEL_61:
        BUG();
      }
      sub_7A780((__int64 *)a2, 4);
      sub_7F940((__int64 *)a2, v7);
      v12 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL);
LABEL_17:
      sub_7F940((__int64 *)a2, v12);
LABEL_18:
      sub_807E0(*((_QWORD *)a1 + 1), (__int64 *)a2);
      return sub_7A780((__int64 *)a2, a1[1]);
    default:
      if ( !under_debugger )
        sub_383060(0xC593u, a3);
      goto LABEL_61;
  }
}

