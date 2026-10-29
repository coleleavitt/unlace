int __fastcall sub_11DA40(unsigned __int8 *a1, unsigned __int8 *a2, double a3)
{
  __int64 v3; // rax
  unsigned __int8 v4; // dl
  unsigned __int8 *v5; // rbp
  unsigned __int8 *v6; // rbx
  int v7; // ecx
  int result; // eax
  __int64 v9; // rdx
  __int64 v10; // rax
  bool v11; // zf
  bool v12; // sf
  bool v13; // of
  int v14; // eax
  __int64 v15; // r12
  __int64 v16; // rbx
  int v17; // eax
  int v18; // edx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx

  v3 = *a1;
  v4 = *a2;
  if ( (unsigned __int8)v3 < *a2 )
    return -1;
  v5 = a2;
  v6 = a1;
  while ( 2 )
  {
    if ( v4 >= (unsigned __int8)v3 )
    {
      v7 = *((_DWORD *)v5 + 1);
      if ( *((_DWORD *)v6 + 1) < v7 )
        return -1;
      if ( *((_DWORD *)v6 + 1) <= v7 )
      {
        switch ( v3 )
        {
          case 0LL:
            return 0;
          case 1LL:
          case 7LL:
            v14 = *((_DWORD *)v5 + 2);
            v13 = __OFSUB__(*((_DWORD *)v6 + 2), v14);
            v11 = *((_DWORD *)v6 + 2) == v14;
            v12 = *((_DWORD *)v6 + 2) - v14 < 0;
            if ( *((_DWORD *)v6 + 2) >= v14 )
              return !(v12 ^ v13 | v11);
            return -1;
          case 2LL:
            return -(*(_QWORD *)(*((_QWORD *)v6 + 1) + 16LL) != *(_QWORD *)(*((_QWORD *)v5 + 1) + 16LL));
          case 3LL:
          case 11LL:
            return strcmp(*((const char **)v6 + 1), *((const char **)v5 + 1));
          case 4LL:
            return sub_11D9A0(*((_QWORD *)v6 + 1), *((_QWORD *)v5 + 1));
          case 5LL:
            v9 = *((_QWORD *)v6 + 1);
            v10 = *(_QWORD *)(*((_QWORD *)v5 + 1) + 8LL);
            v13 = __OFSUB__(*(_QWORD *)(v9 + 8), v10);
            v11 = *(_QWORD *)(v9 + 8) == v10;
            v12 = *(_QWORD *)(v9 + 8) - v10 < 0;
            if ( *(_QWORD *)(v9 + 8) < v10 )
              return -1;
            return !(v12 ^ v13 | v11);
          case 6LL:
            v19 = *((_QWORD *)v6 + 1);
            v20 = *((_QWORD *)v5 + 1);
            if ( v19 < v20 )
              return -1;
            return v20 < v19;
          case 8LL:
            return sub_32ED90(*((_QWORD *)v6 + 1), *((_QWORD *)v5 + 1));
          case 9LL:
            return sub_330920(*((_QWORD *)v6 + 1), *((_QWORD *)v5 + 1));
          case 10LL:
            v15 = *((_QWORD *)v6 + 1);
            v16 = *((_QWORD *)v5 + 1);
            result = sub_11DA40((unsigned __int8 *)v15, (unsigned __int8 *)v16);
            if ( !result )
            {
              v17 = *(_DWORD *)(v15 + 16);
              v18 = *(_DWORD *)(v16 + 16);
              if ( v17 == v18 )
                return *(_DWORD *)(v15 + 20) - *(_DWORD *)(v16 + 20);
              else
                return v17 - v18;
            }
            return result;
          case 12LL:
            return sub_11D600(*((__int64 **)v6 + 1), *((__int64 **)v5 + 1));
          case 13LL:
            return ecmp();
          case 14LL:
            result = sub_11DA40(
                       (unsigned __int8 *)(*((_QWORD *)v6 + 1) + 16LL),
                       (unsigned __int8 *)(*((_QWORD *)v5 + 1) + 16LL));
            if ( result )
              return result;
            v6 = *((unsigned __int8 **)v6 + 1);
            v5 = *((unsigned __int8 **)v5 + 1);
            v3 = *v6;
            v4 = *v5;
            if ( (unsigned __int8)v3 < *v5 )
              return -1;
            continue;
          case 15LL:
            return sub_1C2AD0(*((int **)v6 + 1), *((int **)v5 + 1));
          default:
            if ( !under_debugger )
              sub_383060(0xC46Au, a3);
            BUG();
        }
      }
    }
    break;
  }
  return 1;
}

