__int64 __fastcall sub_10C50(_QWORD *a1, __int64 a2, unsigned __int8 a3, const char *a4)
{
  __int64 v5; // rax
  unsigned __int64 v6; // r15
  unsigned int v7; // ebx
  unsigned __int64 v8; // rbp
  int v9; // eax
  char v10; // al
  size_t v13; // [rsp+8h] [rbp-40h]

  v5 = netnode_altval(a2, 0, 65);
  if ( !v5 )
    sub_E6A0();
  v6 = v5;
  if ( a4 )
  {
    if ( !*(_BYTE *)(get_module_data((unsigned int)dword_2D4F4) + 154) || !(unsigned __int8)sub_FA40(a1, 0) )
    {
      v7 = 0;
      v13 = strlen(a4);
      goto LABEL_5;
    }
    return 0;
  }
  else
  {
    v13 = 0;
    v7 = 0;
    while ( 1 )
    {
      v8 = ++v7;
      v9 = netnode_altval(a2, v7, 65);
      if ( (_WORD)v9 )
        v10 = sub_10630(a1, v9, 0xCu, 0x22u);
      else
        v10 = sub_10000(a1, HIWORD(v9), 35);
      if ( v10 )
        return 0;
      if ( v8 >= v6 )
        return 1;
      if ( a4 )
      {
        if ( *(_BYTE *)(get_module_data((unsigned int)dword_2D4F4) + 154) && (unsigned __int8)sub_FA40(a1, 0) )
          return 0;
LABEL_5:
        *(_DWORD *)(get_module_data((unsigned int)dword_2D4F4) + 164) = a3;
        (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, a4, 32);
        *(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 176) = v13;
        continue;
      }
      if ( v7 && (unsigned __int8)sub_FF20(a1, 44) )
        return 0;
    }
  }
}
