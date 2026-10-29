char *__fastcall sub_1640B0(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  char *v5; // rbx
  bool v9; // zf
  int v10; // eax
  int *v12; // rdx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rax
  _QWORD v16[9]; // [rsp+0h] [rbp-48h] BYREF

  v16[1] = __readfsqword(0x28u);
  v5 = *(char **)(a3 + 56);
  if ( v5 )
  {
    if ( (v9 = (unsigned __int8)sub_11BB80(v5 + 48, v16, 0) == 0, v10 = *(_DWORD *)v5, !v9)
      && !v16[0]
      && (unsigned int)(v10 - 50) <= 1
      || v10 == 42
      && v5[32] == 4
      && ((v5 = *((char **)v5 + 5), *(_DWORD *)v5 == 29)
       || *(_DWORD *)v5 == 6 && v5[32] == 4 && (v5 = *((char **)v5 + 5), *(_DWORD *)v5 == 29))
      && v5 )
    {
      v12 = *(int **)(a3 + 56);
      v13 = *v12;
      if ( *v12 != 51 )
      {
        if ( v13 == 50 )
        {
LABEL_19:
          *a1 = a4;
          *a2 = a5;
          return v5;
        }
        if ( v13 != 42 || *((_BYTE *)v12 + 32) != 4 )
        {
          if ( !under_debugger )
            sub_37E160(50299);
          goto LABEL_27;
        }
        v14 = **((_DWORD **)v12 + 5);
        if ( v14 != 29 )
        {
          if ( v14 == 6 )
            goto LABEL_19;
          if ( !under_debugger )
            sub_37E160(50300);
LABEL_27:
          BUG();
        }
      }
      v15 = a4;
      a4 = a5;
      a5 = v15;
      goto LABEL_19;
    }
  }
  return nullptr;
}

