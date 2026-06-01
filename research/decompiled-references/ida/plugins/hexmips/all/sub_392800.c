__int64 __fastcall sub_392800(__int64 a1, const char *a2, __int64 a3, char a4, __int64 a5, double a6)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // rax
  _QWORD *v13; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rdi
  char v22; // r12
  __int64 tinfo_property; // rax

  if ( !*a2 )
  {
    set_tinfo();
LABEL_3:
    sub_390B90(a1, 0, a6, v8, v9, v10);
    return 1;
  }
  v12 = *(_QWORD *)(a1 + 32);
  v13 = a2;
  if ( v12 )
    *(_DWORD *)(v12 + 108) |= 8u;
  apply_tinfo();
  if ( a5 && (unsigned __int8)sub_37FA40(a3, (__int64)a2, v16, v17, v18, v19) )
  {
    a2 = s1;
    if ( *(_QWORD *)(a5 + 8) )
      a2 = *(const char **)a5;
    set_name();
  }
  v20 = *(_QWORD *)(a1 + 32);
  if ( v20 )
  {
    *(_DWORD *)(v20 + 108) &= ~8u;
    if ( (*(_BYTE *)a1 & 2) == 0 )
    {
      a2 = nullptr;
      sub_390B90(a1, 0, a6, v16, v17, v18);
    }
  }
  v21 = *(_QWORD *)(a1 + 24);
  v22 = 1;
  if ( *(_QWORD *)(v21 + 40) == a3 )
  {
    *(_DWORD *)a1 |= 2u;
    if ( a4 )
      sub_211F60(v21, (__int64)a2, v16);
    v22 = 0;
  }
  while ( 1 )
  {
    tinfo_property = get_tinfo_property();
    if ( !(_BYTE)tinfo_property )
      break;
    *v13 = tinfo_property;
    clear_tinfo_t();
  }
  clear_tinfo_t();
  if ( (get_tinfo_property() & 0xF) == 0xC || v22 )
    goto LABEL_3;
  return 1;
}

