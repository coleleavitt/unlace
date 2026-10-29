__int64 __fastcall sub_53F60(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 result; // rax
  __int64 v5; // r15
  __int64 dword; // r14
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r12
  char *v9; // r13
  const char *v10; // rax
  char v11; // dl
  __int64 v12; // r10
  __int64 v13; // r12
  __int64 v14; // [rsp+20h] [rbp-868h]
  char v15; // [rsp+30h] [rbp-858h] BYREF
  char v16; // [rsp+838h] [rbp-50h] BYREF
  unsigned __int64 v17; // [rsp+848h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v2 = a2;
  v3 = getseg();
  result = 0;
  if ( !v3 || *(_BYTE *)(v3 + 184) != 2 )
    return result;
  if ( (unsigned int)get_dword() == -1 )
  {
    v5 = 0;
    if ( (unsigned __int64)(*(_QWORD *)(v3 + 8) - a2) <= 0xB )
      return 0;
  }
  else
  {
    if ( (unsigned __int64)(a2 - *(_QWORD *)v3) > 7 )
      return 0;
    v2 = a2 - 8;
    if ( (unsigned int)get_dword() == -1 )
      return 0;
    v5 = 8;
  }
  if ( (unsigned __int8)get_fixups() )
    return 0;
  dword = (unsigned int)get_dword();
  if ( (unsigned __int64)(dword - 1) > 0x7FE )
    return 0;
  v7 = (dword + v2 + 12) & 0xFFFFFFFFFFFFFFFCLL;
  if ( *(_QWORD *)(v3 + 8) < v7 )
    return 0;
  v8 = v7 - v2 - 8;
  v14 = v7 - v2;
  if ( (unsigned __int8)get_fixups() )
    return 0;
  v9 = &v15;
  v10 = "_str_";
  do
  {
    v11 = *v10++;
    *v9 = v11;
    if ( !v11 )
      break;
    ++v9;
  }
  while ( v9 != &v16 );
  v16 = 0;
  if ( get_bytes() != v8 || strlen(v9) != dword )
    return 0;
  v12 = dword + 1;
  if ( dword + 1 < v8 )
  {
    while ( 1 )
    {
      if ( v9[v12] )
        return 0;
      if ( v12 + 1 >= v8 )
        break;
      ++v12;
    }
    v13 = v12 - dword;
    sub_529A0(v2, v14, nullptr);
    sub_53ED0(a1);
    if ( v13 )
      create_align();
  }
  else
  {
    v13 = 0;
    sub_529A0(v2, v14, nullptr);
    sub_53ED0(a1);
  }
  if ( (unsigned __int16)getinf() <= 0x7FFu )
    v9[(unsigned __int16)getinf()] = 0;
  set_name();
  make_name_auto();
  return v13 + v14 - v5;
}

