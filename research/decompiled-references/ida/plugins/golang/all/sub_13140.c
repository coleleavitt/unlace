__int64 __fastcall sub_13140(__int64 a1, __int64 a2, const char *a3, __int64 *a4)
{
  const char *v5; // rbp
  int v6; // r15d
  const char **v7; // r14
  int v8; // ebx
  _DWORD *v10; // rax
  int v11; // ecx
  _DWORD *v12; // rdx
  _DWORD *v13; // rdi

  v5 = a3;
  v6 = *(_DWORD *)(a1 + 404);
  if ( (unsigned int)v6 > 0x77 && !strcmp(a3, "internal_abi_Type") )
  {
    v5 = "reflect_rtype";
  }
  else if ( !strcmp(v5, "runtime__type") )
  {
    v5 = "reflect_rtype";
  }
  v7 = (const char **)off_27708;
  v8 = 0;
  while ( !*v7 || strcmp(*v7, v5) )
  {
    ++v8;
    v7 += 2;
    if ( v8 == 29 )
      return 0;
  }
  if ( v8 == 3 )
    return sub_12C50(a1, a2, (__int64)"FUNCINFO", a4);
  if ( v8 != 7 )
  {
    if ( v8 )
    {
      if ( !(unsigned __int8)sub_10BA0(a1, v8, a4) )
        return 0;
      if ( off_27700[2 * v8] )
      {
        get_idati();
        create_tinfo();
      }
      return 1;
    }
    else
    {
      if ( v6 > 115 )
        LOBYTE(v8) = (v6 > 117) + 1;
      return sub_10EA0(a1, a2, v8, (__int64)a4, 1);
    }
  }
  v10 = &unk_27600;
  v11 = *(_DWORD *)(a1 + 400);
  v12 = nullptr;
  while ( 1 )
  {
    v13 = v10;
    if ( v11 != *v10 )
      goto LABEL_21;
    if ( v12 )
    {
LABEL_27:
      v13 = v12;
      v12 = v10;
      goto LABEL_28;
    }
    v12 = v10;
LABEL_28:
    if ( (unsigned int)v6 < v10[1] )
      break;
    v10 += 6;
    if ( v10 == dword_27678 )
    {
LABEL_22:
      if ( v12 )
        goto LABEL_23;
      return 0;
    }
    if ( v11 == *v10 )
      goto LABEL_27;
LABEL_21:
    v10 += 6;
    if ( dword_27678 == v10 )
      goto LABEL_22;
  }
  v12 = v13;
LABEL_23:
  if ( (unsigned __int8)sub_10EA0(a1, a2, *((_BYTE *)v12 + 16), (__int64)a4, 0) )
  {
    get_tinfo_tid();
    get_tinfo_size();
    create_data();
    return 1;
  }
  return 0;
}
