__int64 __fastcall sub_2AE990(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 i; // rbx
  __int64 v5; // rdi
  bool (__fastcall *v6)(__int64); // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  __int64 (*v10)(void); // rax
  unsigned __int64 v11; // rax
  char v12; // dl
  __int64 (***v13)(void); // rdi
  __int64 (*v14)(void); // rax
  char v15; // al

  i = a2;
  if ( a3 != 1 )
  {
    if ( a3 == 2 )
    {
      v8 = *(_QWORD *)(a1 + 48);
      if ( a2 <= v8 )
        v8 = a2;
      for ( i = v8 - 1; i != -1; i = v11 )
      {
        v9 = *(_QWORD *)(a1 + 40) + 80 * i;
        v10 = **(__int64 (***)(void))v9;
        if ( (char *)v10 == (char *)sub_2A9480 )
        {
          if ( *(_QWORD *)(v9 + 8) != *(_QWORD *)(v9 + 56) || *(_DWORD *)(v9 + 16) != *(_DWORD *)(v9 + 64) )
            return i;
          v11 = i - 1;
        }
        else
        {
          v12 = v10();
          v11 = i - 1;
          if ( v12 )
            return i;
        }
      }
      return -1;
    }
    if ( !a3 )
    {
      if ( a2 >= *(_QWORD *)(a1 + 48) )
        goto LABEL_5;
      v13 = (__int64 (***)(void))(*(_QWORD *)(a1 + 40) + 80 * a2);
      v14 = **v13;
      if ( (char *)v14 == (char *)sub_2A9480 )
        v15 = sub_2A9480((__int64)v13);
      else
        v15 = v14();
      if ( !v15 )
      {
LABEL_6:
        while ( ++i < *(_QWORD *)(a1 + 48) )
        {
          while ( 1 )
          {
            v5 = *(_QWORD *)(a1 + 40) + 80 * i;
            v6 = **(bool (__fastcall ***)(__int64))v5;
            if ( v6 == sub_2A9480 )
              break;
            if ( ((unsigned __int8 (*)(void))v6)() )
              return i;
            if ( ++i >= *(_QWORD *)(a1 + 48) )
              return -1;
          }
          if ( *(_QWORD *)(v5 + 8) != *(_QWORD *)(v5 + 56) )
            return i;
          if ( *(_DWORD *)(v5 + 16) != *(_DWORD *)(v5 + 64) )
            return i;
        }
        return -1;
      }
    }
    return i;
  }
LABEL_5:
  if ( a2 != -1 )
    goto LABEL_6;
  return -1;
}

