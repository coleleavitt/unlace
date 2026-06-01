char *__fastcall sub_1682B0(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, double a6)
{
  char *v6; // rbx
  bool v10; // zf
  int v11; // eax
  int *v13; // rdx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rax
  __int64 v17[9]; // [rsp+0h] [rbp-48h] BYREF

  v17[1] = __readfsqword(0x28u);
  v6 = *(char **)(a3 + 56);
  if ( v6 )
  {
    if ( (v10 = (unsigned __int8)sub_11FD80(v6 + 48, v17, 0) == 0, v11 = *(_DWORD *)v6, !v10)
      && !v17[0]
      && (unsigned int)(v11 - 50) <= 1
      || v11 == 42
      && v6[32] == 4
      && ((v6 = *((char **)v6 + 5), *(_DWORD *)v6 == 29)
       || *(_DWORD *)v6 == 6 && v6[32] == 4 && (v6 = *((char **)v6 + 5), *(_DWORD *)v6 == 29))
      && v6 )
    {
      v13 = *(int **)(a3 + 56);
      v14 = *v13;
      if ( *v13 != 51 )
      {
        if ( v14 == 50 )
        {
LABEL_19:
          *a1 = a4;
          *a2 = a5;
          return v6;
        }
        if ( v14 != 42 || *((_BYTE *)v13 + 32) != 4 )
        {
          if ( !under_debugger )
            sub_383060(0xC47Bu, a6);
          goto LABEL_27;
        }
        v15 = **((_DWORD **)v13 + 5);
        if ( v15 != 29 )
        {
          if ( v15 == 6 )
            goto LABEL_19;
          if ( !under_debugger )
            sub_383060(0xC47Cu, a6);
LABEL_27:
          BUG();
        }
      }
      v16 = a4;
      a4 = a5;
      a5 = v16;
      goto LABEL_19;
    }
  }
  return nullptr;
}

