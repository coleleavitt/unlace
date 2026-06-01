char __fastcall sub_1255D0(unsigned __int8 *a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  unsigned int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // r13
  char v10; // al
  char *v11; // rax
  __int64 v12; // rcx
  char *v13; // rax
  __int64 v15; // rax
  int v16; // eax
  int v17; // edx
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rbp
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // rbx
  int v27; // ebx
  __int64 v28; // rbp
  unsigned __int8 *v29; // [rsp+18h] [rbp-70h]
  char v30; // [rsp+18h] [rbp-70h]
  _QWORD v31[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v32[11]; // [rsp+30h] [rbp-58h] BYREF

  v32[3] = __readfsqword(0x28u);
  v7 = a4;
  while ( 2 )
  {
    v8 = *a1;
LABEL_3:
    v9 = *(_QWORD *)(a2 + 96);
    if ( (v7 & 8) == 0 )
    {
      while ( 1 )
      {
        v10 = *(_BYTE *)a3;
LABEL_6:
        if ( ((_BYTE)v8 == 15) != (v10 == 15) )
        {
          if ( (_BYTE)v8 == 15 )
            return sub_11BAD0(*((_DWORD *)a1 + 1), *((_QWORD *)a1 + 1), a3, v7);
          else
            return sub_11BAD0(*(_DWORD *)(a3 + 4), *(_QWORD *)(a3 + 8), (__int64)a1, v7);
        }
        a4 = v7 & 1;
        if ( v10 == (_BYTE)v8 )
          break;
        if ( (v7 & 1) == 0 )
          return 0;
        if ( v10 == 14 )
        {
          a3 = *(_QWORD *)(a3 + 8);
          goto LABEL_3;
        }
        if ( (_BYTE)v8 != 14 )
          return 0;
        a1 = *((unsigned __int8 **)a1 + 1);
        v9 = *(_QWORD *)(a2 + 96);
        v8 = *a1;
        if ( (v7 & 8) != 0 )
          goto LABEL_4;
      }
      if ( (v7 & 1) != 0 || *((_DWORD *)a1 + 1) == *(_DWORD *)(a3 + 4) )
      {
        switch ( v8 )
        {
          case 0LL:
            return 1;
          case 1LL:
            if ( *(_DWORD *)(a3 + 8) == *((_DWORD *)a1 + 2) )
              return 1;
            if ( !(unsigned __int8)getinf_flag() )
              return 0;
            v16 = *((_DWORD *)a1 + 2);
            v17 = *(_DWORD *)(a2 + 56);
            if ( v16 != v17 && v16 != *(_DWORD *)(a2 + 52) && v16 != *(_DWORD *)(a2 + 64) )
              return 0;
            v18 = *(_DWORD *)(a3 + 8);
            if ( v17 == v18 || v18 == *(_DWORD *)(a2 + 52) )
              return 1;
            return *(_DWORD *)(a2 + 64) == v18;
          case 2LL:
            v15 = *(_QWORD *)(a3 + 8);
            if ( (v7 & 1) == 0 )
              return *(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL) == *(_QWORD *)(v15 + 16);
            v27 = *((_DWORD *)a1 + 1);
            if ( v27 > *(_DWORD *)(a3 + 4) )
              v27 = *(_DWORD *)(a3 + 4);
            v28 = sub_32ABC0(*(_QWORD *)(v15 + 16), v27, 0);
            return v28 == sub_32ABC0(*(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL), v27, 0);
          case 3LL:
          case 11LL:
            return strcmp(*(const char **)(a3 + 8), *((const char **)a1 + 1)) == 0;
          case 4LL:
            return sub_125B90(*((unsigned __int8 **)a1 + 1), a2, *(unsigned int **)(a3 + 8), v7 & 9);
          case 5LL:
            v19 = *(_QWORD *)(a3 + 8);
            v20 = *((_QWORD *)a1 + 1);
            if ( (v7 & 1) != 0 && *(_BYTE *)(v9 + 145) )
              return *(_QWORD *)(v19 + 8) + *(int *)(a3 + 4) == *(_QWORD *)(v20 + 8) + *((int *)a1 + 1);
            else
              return *(_QWORD *)(v19 + 8) == *(_QWORD *)(v20 + 8);
          case 6LL:
            if ( (v7 & 1) != 0 && *(_BYTE *)(v9 + 145) )
              return *(_QWORD *)(a3 + 8) + *(int *)(a3 + 4) == *((_QWORD *)a1 + 1) + *((int *)a1 + 1);
            else
              return *(_QWORD *)(a3 + 8) == *((_QWORD *)a1 + 1);
          case 7LL:
            return *(_DWORD *)(a3 + 8) == *((_DWORD *)a1 + 2);
          case 8LL:
            return sub_32EFE0(*(_QWORD *)(a3 + 8), *((_QWORD *)a1 + 1));
          case 9LL:
            return (unsigned int)sub_330920(*(_QWORD *)(a3 + 8), *((_QWORD *)a1 + 1)) == 0;
          case 10LL:
            if ( *(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL) != *(_QWORD *)(*(_QWORD *)(a3 + 8) + 16LL) )
              return 0;
            a1 = *((unsigned __int8 **)a1 + 1);
            a3 = *(_QWORD *)(a3 + 8);
            continue;
          case 12LL:
            return (unsigned int)sub_11D600(*(__int64 **)(a3 + 8), *((__int64 **)a1 + 1)) == 0;
          case 13LL:
            return (unsigned int)ecmp() == 0;
          case 14LL:
            v7 &= ~1u;
            if ( !sub_1255D0(*((unsigned __int8 **)a1 + 1), a2, *(_QWORD *)(a3 + 8), v7) )
              return 0;
            a1 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + 16LL);
            a3 = *(_QWORD *)(a3 + 8) + 16LL;
            continue;
          case 15LL:
            v21 = *((_QWORD *)a1 + 1);
            v22 = *(_QWORD *)(a3 + 8);
            if ( *(_DWORD *)v21 != 2 || *(_DWORD *)v22 != 2 )
            {
              if ( !under_debugger )
                sub_383060(0xC7B7u, a5);
LABEL_73:
              BUG();
            }
            v23 = *(_QWORD *)(v21 + 8);
            v24 = *(_QWORD *)(v22 + 8);
            v25 = *(_QWORD *)(v23 + 8);
            if ( v25 != *(_QWORD *)(v24 + 8) )
              return 0;
            if ( !v25 )
              return 1;
            v26 = 0;
            break;
          default:
            if ( !under_debugger )
              sub_383060(0xC469u, a5);
            goto LABEL_73;
        }
        while ( !(unsigned int)compare_arglocs() )
        {
          if ( (unsigned __int64)++v26 >= *(_QWORD *)(v23 + 8) )
            return 1;
        }
      }
      return 0;
    }
    break;
  }
LABEL_4:
  if ( (_BYTE)v8 != 4 )
  {
    v10 = *(_BYTE *)a3;
    if ( *(_BYTE *)a3 != 4 )
      goto LABEL_6;
  }
  v31[0] = 0xFFFFFFFF00000000LL;
  v31[1] = 0;
  v11 = sub_125450((char *)v31, (unsigned __int64 *)a2, (char *)a1, a4);
  if ( !v11 )
  {
LABEL_19:
    sub_11CDA0((__int64)v31);
    goto LABEL_17;
  }
  v29 = (unsigned __int8 *)v11;
  v32[0] = 0xFFFFFFFF00000000LL;
  v32[1] = 0;
  v13 = sub_125450((char *)v32, (unsigned __int64 *)a2, (char *)a3, v12);
  if ( !v13 )
  {
    sub_11CDA0((__int64)v32);
    goto LABEL_19;
  }
  v30 = sub_1255D0(v29, a2, (__int64)v13, v7);
  sub_11CDA0((__int64)v32);
  sub_11CDA0((__int64)v31);
  if ( !v30 )
  {
LABEL_17:
    v10 = *(_BYTE *)a3;
    v8 = *a1;
    goto LABEL_6;
  }
  return 1;
}

