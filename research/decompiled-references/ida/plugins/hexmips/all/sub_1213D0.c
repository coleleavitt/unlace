char __fastcall sub_1213D0(unsigned __int8 *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // rdx
  __int64 v8; // r13
  char v9; // al
  _BYTE *v10; // rax
  _BYTE *v11; // rax
  __int64 v13; // rax
  int v14; // eax
  int v15; // edx
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rbp
  __int64 v22; // r12
  __int64 v23; // rax
  __int64 v24; // rbx
  unsigned int v25; // ebx
  __int64 v26; // rbp
  _BYTE *v27; // [rsp+18h] [rbp-70h]
  char v28; // [rsp+18h] [rbp-70h]
  _QWORD v29[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v30[11]; // [rsp+30h] [rbp-58h] BYREF

  v30[3] = __readfsqword(0x28u);
  while ( 2 )
  {
    v7 = *a1;
LABEL_3:
    v8 = *(_QWORD *)(a2 + 96);
    if ( (a4 & 8) == 0 )
    {
      while ( 1 )
      {
        v9 = *(_BYTE *)a3;
LABEL_6:
        if ( ((_BYTE)v7 == 15) != (v9 == 15) )
        {
          if ( (_BYTE)v7 == 15 )
            return sub_1178D0(*((_DWORD *)a1 + 1), *((_QWORD *)a1 + 1), a3, a4);
          else
            return sub_1178D0(*(_DWORD *)(a3 + 4), *(_QWORD *)(a3 + 8), (__int64)a1, a4);
        }
        if ( v9 == (_BYTE)v7 )
          break;
        if ( (a4 & 1) == 0 )
          return 0;
        if ( v9 == 14 )
        {
          a3 = *(_QWORD *)(a3 + 8);
          goto LABEL_3;
        }
        if ( (_BYTE)v7 != 14 )
          return 0;
        a1 = *((unsigned __int8 **)a1 + 1);
        v8 = *(_QWORD *)(a2 + 96);
        v7 = *a1;
        if ( (a4 & 8) != 0 )
          goto LABEL_4;
      }
      if ( (a4 & 1) != 0 || *((_DWORD *)a1 + 1) == *(_DWORD *)(a3 + 4) )
      {
        switch ( v7 )
        {
          case 0LL:
            return 1;
          case 1LL:
            if ( *(_DWORD *)(a3 + 8) == *((_DWORD *)a1 + 2) )
              return 1;
            if ( !(unsigned __int8)getinf_flag() )
              return 0;
            v14 = *((_DWORD *)a1 + 2);
            v15 = *(_DWORD *)(a2 + 56);
            if ( v14 != v15 && v14 != *(_DWORD *)(a2 + 52) && v14 != *(_DWORD *)(a2 + 64) )
              return 0;
            v16 = *(_DWORD *)(a3 + 8);
            if ( v15 == v16 || v16 == *(_DWORD *)(a2 + 52) )
              return 1;
            return *(_DWORD *)(a2 + 64) == v16;
          case 2LL:
            v13 = *(_QWORD *)(a3 + 8);
            if ( (a4 & 1) == 0 )
              return *(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL) == *(_QWORD *)(v13 + 16);
            v25 = *((_DWORD *)a1 + 1);
            if ( (signed int)v25 > *(_DWORD *)(a3 + 4) )
              v25 = *(_DWORD *)(a3 + 4);
            v26 = sub_325C90(*(_QWORD *)(v13 + 16), v25, 0);
            return v26 == sub_325C90(*(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL), v25, 0);
          case 3LL:
          case 11LL:
            return strcmp(*(const char **)(a3 + 8), *((const char **)a1 + 1)) == 0;
          case 4LL:
            return sub_121990(*((_QWORD *)a1 + 1), a2, *(_QWORD *)(a3 + 8), a4 & 9);
          case 5LL:
            v17 = *(_QWORD *)(a3 + 8);
            v18 = *((_QWORD *)a1 + 1);
            if ( (a4 & 1) != 0 && *(_BYTE *)(v8 + 145) )
              return *(_QWORD *)(v17 + 8) + *(int *)(a3 + 4) == *(_QWORD *)(v18 + 8) + *((int *)a1 + 1);
            else
              return *(_QWORD *)(v17 + 8) == *(_QWORD *)(v18 + 8);
          case 6LL:
            if ( (a4 & 1) != 0 && *(_BYTE *)(v8 + 145) )
              return *(_QWORD *)(a3 + 8) + *(int *)(a3 + 4) == *((_QWORD *)a1 + 1) + *((int *)a1 + 1);
            else
              return *(_QWORD *)(a3 + 8) == *((_QWORD *)a1 + 1);
          case 7LL:
            return *(_DWORD *)(a3 + 8) == *((_DWORD *)a1 + 2);
          case 8LL:
            return sub_32A0A0(*(_QWORD *)(a3 + 8), *((_QWORD *)a1 + 1));
          case 9LL:
            return (unsigned int)sub_32B8D0(*(_QWORD *)(a3 + 8), *((_QWORD *)a1 + 1)) == 0;
          case 10LL:
            if ( *(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL) != *(_QWORD *)(*(_QWORD *)(a3 + 8) + 16LL) )
              return 0;
            a1 = *((unsigned __int8 **)a1 + 1);
            a3 = *(_QWORD *)(a3 + 8);
            continue;
          case 12LL:
            return (unsigned int)sub_119400(*(__int64 **)(a3 + 8), *((__int64 **)a1 + 1)) == 0;
          case 13LL:
            return (unsigned int)ecmp() == 0;
          case 14LL:
            a4 &= ~1u;
            if ( !(unsigned __int8)sub_1213D0(*((_QWORD *)a1 + 1), a2, *(_QWORD *)(a3 + 8), a4) )
              return 0;
            a1 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + 16LL);
            a3 = *(_QWORD *)(a3 + 8) + 16LL;
            continue;
          case 15LL:
            v19 = *((_QWORD *)a1 + 1);
            v20 = *(_QWORD *)(a3 + 8);
            if ( *(_DWORD *)v19 != 2 || *(_DWORD *)v20 != 2 )
            {
              if ( !under_debugger )
                sub_37E160(51127);
LABEL_73:
              BUG();
            }
            v21 = *(_QWORD *)(v19 + 8);
            v22 = *(_QWORD *)(v20 + 8);
            v23 = *(_QWORD *)(v21 + 8);
            if ( v23 != *(_QWORD *)(v22 + 8) )
              return 0;
            if ( !v23 )
              return 1;
            v24 = 0;
            break;
          default:
            if ( !under_debugger )
              sub_37E160(50281);
            goto LABEL_73;
        }
        while ( !(unsigned int)compare_arglocs() )
        {
          if ( (unsigned __int64)++v24 >= *(_QWORD *)(v21 + 8) )
            return 1;
        }
      }
      return 0;
    }
    break;
  }
LABEL_4:
  if ( (_BYTE)v7 != 4 )
  {
    v9 = *(_BYTE *)a3;
    if ( *(_BYTE *)a3 != 4 )
      goto LABEL_6;
  }
  v29[0] = 0xFFFFFFFF00000000LL;
  v29[1] = 0;
  v10 = sub_121250((char *)v29, a2, a1);
  if ( !v10 )
  {
LABEL_19:
    sub_118BA0((__int64)v29);
    goto LABEL_17;
  }
  v27 = v10;
  v30[0] = 0xFFFFFFFF00000000LL;
  v30[1] = 0;
  v11 = sub_121250((char *)v30, a2, (_BYTE *)a3);
  if ( !v11 )
  {
    sub_118BA0((__int64)v30);
    goto LABEL_19;
  }
  v28 = sub_1213D0(v27, a2, v11, a4);
  sub_118BA0((__int64)v30);
  sub_118BA0((__int64)v29);
  if ( !v28 )
  {
LABEL_17:
    v9 = *(_BYTE *)a3;
    v7 = *a1;
    goto LABEL_6;
  }
  return 1;
}

