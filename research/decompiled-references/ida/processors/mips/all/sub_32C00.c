__int64 __fastcall sub_32C00(int *a1, int *a2, _QWORD *a3, int a4)
{
  unsigned __int64 tinfo_size; // r13
  bool v6; // r14
  int v7; // ecx
  int v8; // eax
  unsigned __int64 v9; // r15
  char v11; // al
  char v12; // al
  _QWORD *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rbx

  if ( a3 )
  {
    tinfo_size = get_tinfo_size(0, *a3, 0);
    if ( tinfo_size - 1 <= 0xFFFFFFFFFFFFFFFDLL )
    {
      v6 = (get_tinfo_property(*a3, 2) & 0x2F) == 13;
      goto LABEL_4;
    }
    return 0;
  }
  tinfo_size = a4;
  if ( (unsigned __int64)(a4 - 1LL) > 0xFFFFFFFFFFFFFFFDLL )
    return 0;
  v6 = (a4 & (a4 - 1)) != 0;
LABEL_4:
  v7 = *a1;
  if ( (unsigned int)*a1 <= 5 )
  {
    if ( ((1LL << v7) & 0x29) != 0 )
    {
      v8 = *a2;
      v9 = 4;
      if ( *a2 != 2 )
      {
LABEL_8:
        if ( v8 == 3 )
        {
          v11 = getinf_flag(3, 32);
          if ( v6 && v11 && *a1 != 3 )
          {
            if ( *a2 == 3 )
            {
              v18 = ((_DWORD)v9 - (_DWORD)tinfo_size) << 16;
              if ( tinfo_size >= v9 )
                HIWORD(v18) = 0;
              *((_WORD *)a2 + 5) = HIWORD(v18);
            }
            return 1;
          }
        }
        else if ( v8 == 1 )
        {
          if ( (unsigned __int8)getinf_flag(3, 32) != 1 || v6 )
            return 1;
          if ( *a1 == 4 || tinfo_size >= v9 || !a3 )
          {
            if ( *a2 != 1 )
              return 1;
            v19 = *((_QWORD *)a2 + 1) & -(int)v9;
            if ( tinfo_size >= v9 )
              goto LABEL_38;
          }
          else
          {
            if ( (get_tinfo_property(*a3, 2) & 0xF) == 9 )
            {
              v20 = *((_QWORD *)a2 + 1) & -(int)v9;
              cleanup_argloc(a2);
              *a2 = 1;
              *((_QWORD *)a2 + 1) = v20;
              return 1;
            }
            if ( *a2 != 1 )
              return 1;
            v19 = *((_QWORD *)a2 + 1) & -(int)v9;
          }
          v19 += v9 - tinfo_size;
LABEL_38:
          *((_QWORD *)a2 + 1) = v19;
          return 1;
        }
        return 0;
      }
      goto LABEL_19;
    }
    if ( ((1LL << v7) & 0x16) != 0 )
    {
      v8 = *a2;
      v9 = 8;
      if ( *a2 != 2 )
        goto LABEL_8;
LABEL_19:
      v12 = getinf_flag(3, 32);
      if ( v6 )
      {
        if ( v12 )
        {
          v13 = *((_QWORD **)a2 + 1);
          v14 = v13[1];
          if ( v14 )
          {
            v15 = *v13 + 24 * v14 - 24;
            if ( *(_DWORD *)v15 == 3 )
            {
              v16 = *(unsigned __int16 *)(v15 + 18);
              v17 = ((_DWORD)v9 - (_DWORD)v16) << 16;
              if ( v16 >= v9 )
                HIWORD(v17) = 0;
              *(_WORD *)(v15 + 10) = HIWORD(v17);
            }
            return 1;
          }
        }
      }
      return 0;
    }
  }
  sub_28E30();
  return sub_32E60();
}

