unsigned __int64 __fastcall sub_114E0(__int64 a1)
{
  __int64 v2; // rax
  __int64 name_ea; // rax
  int v5; // eax
  _DWORD *v6; // rcx
  _DWORD *v7; // rdx
  _DWORD *v8; // rdi
  int v9; // ecx
  unsigned int v10; // esi
  _DWORD *v11; // rax
  int v12; // esi
  _DWORD *v13; // rbp
  _DWORD *v14; // rcx
  int *v15; // rbp
  int *v16; // r13
  _QWORD *v17; // rdi
  __int64 v18; // rax
  size_t v19; // r12
  char *v20; // rdi
  __int64 v21; // rbp
  __int64 i; // r15
  char *v23; // r14
  int dword; // eax
  _DWORD *v25; // rcx
  _DWORD *v26; // rdx
  _DWORD *v27; // rsi
  int v28; // ecx
  unsigned int v29; // esi
  char *haystack; // [rsp+20h] [rbp-58h]
  unsigned __int64 v31; // [rsp+38h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 472) != -1 )
    return v31 - __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 272);
  *(_DWORD *)(a1 + 296) = 0;
  *(_QWORD *)(a1 + 288) = v2;
  *(_DWORD *)(a1 + 264) = get_type_ordinal();
  *(_DWORD *)(a1 + 268) = get_type_ordinal();
  name_ea = get_name_ea();
  *(_QWORD *)(a1 + 472) = name_ea;
  if ( name_ea == -1 )
  {
    v18 = get_name_ea();
    *(_QWORD *)(a1 + 472) = v18;
    if ( v18 == -1 )
    {
      if ( *(_QWORD *)(a1 + 392) == -1 )
        return v31 - __readfsqword(0x28u);
      getinf();
      getinf();
LABEL_44:
      v19 = *(unsigned __int8 *)(a1 + 565);
      haystack = (char *)qvector_reserve();
      *(_QWORD *)haystack = 0;
      *((_QWORD *)haystack + 3) = 0;
      *((_QWORD *)haystack + 6) = 0;
      *((_DWORD *)haystack + 18) = -1;
      *(_OWORD *)(haystack + 8) = 0;
      *((_OWORD *)haystack + 2) = 0;
      *(_OWORD *)(haystack + 56) = 0;
      if ( v19 )
        sub_56F0((__int64 *)haystack, (const void *)(a1 + 392), v19);
      v20 = haystack;
      v21 = bin_search();
      if ( haystack )
      {
        for ( i = 0; i != 1; ++i )
        {
          v23 = &v20[80 * i];
          if ( *((_QWORD *)v23 + 6) )
          {
            *((_QWORD *)v23 + 7) = 0;
            qfree();
          }
          if ( *((_QWORD *)v23 + 3) )
          {
            *((_QWORD *)v23 + 4) = 0;
            qfree();
          }
          if ( *(_QWORD *)v23 )
          {
            *((_QWORD *)v23 + 1) = 0;
            qfree();
          }
          v20 = haystack;
        }
        qfree();
      }
      if ( !(unsigned __int8)get_data_value() )
        goto LABEL_70;
      dword = get_dword();
      if ( dword == *(_DWORD *)(a1 + 400) && *(_DWORD *)(a1 + 404) > 0x65u )
        goto LABEL_68;
      *(_DWORD *)(a1 + 400) = dword;
      v25 = &unk_27600;
      v26 = nullptr;
      while ( 1 )
      {
        v27 = v25;
        if ( dword != *v25 )
          goto LABEL_61;
        if ( v26 )
          break;
        v26 = v25;
LABEL_74:
        if ( v25[1] )
        {
          v26 = v27;
          goto LABEL_63;
        }
        v25 += 6;
        if ( v25 == dword_27678 )
        {
LABEL_62:
          if ( v26 )
          {
LABEL_63:
            v28 = v26[1];
            do
            {
              v26 += 6;
              if ( v26 >= dword_27678 )
              {
                v29 = 200;
                goto LABEL_67;
              }
            }
            while ( dword == *v26 );
            v29 = v26[1];
          }
          else
          {
            v28 = 0;
            v29 = 200;
          }
LABEL_67:
          *(_DWORD *)(a1 + 404) = v28;
          sub_B160(a1, v29);
          if ( *(_DWORD *)(a1 + 404) >= 0x66u )
          {
LABEL_68:
            if ( (unsigned __int8)get_data_value() && (unsigned __int8)get_data_value() )
            {
              *(_QWORD *)(a1 + 472) = v21;
              if ( v21 == -1 )
                return v31 - __readfsqword(0x28u);
              goto LABEL_4;
            }
          }
LABEL_70:
          if ( v21 == -1 )
          {
            *(_QWORD *)(a1 + 472) = -1;
            return v31 - __readfsqword(0x28u);
          }
          goto LABEL_44;
        }
        if ( dword == *v25 )
          break;
LABEL_61:
        v25 += 6;
        if ( v25 == dword_27678 )
          goto LABEL_62;
      }
      v27 = v26;
      v26 = v25;
      goto LABEL_74;
    }
  }
LABEL_4:
  if ( get_ea_name() <= 0 )
    set_name();
  v5 = get_dword();
  if ( v5 == *(_DWORD *)(a1 + 400) && *(_DWORD *)(a1 + 404) > 0x65u )
    goto LABEL_17;
  *(_DWORD *)(a1 + 400) = v5;
  v6 = &unk_27600;
  v7 = nullptr;
  while ( 1 )
  {
    v8 = v6;
    if ( v5 == *v6 )
      break;
LABEL_10:
    v6 += 6;
    if ( dword_27678 == v6 )
      goto LABEL_11;
  }
  if ( !v7 )
  {
    v7 = v6;
    goto LABEL_36;
  }
  while ( 1 )
  {
    v8 = v7;
    v7 = v6;
LABEL_36:
    if ( v6[1] )
    {
      v7 = v8;
      goto LABEL_12;
    }
    v6 += 6;
    if ( v6 == dword_27678 )
      break;
    if ( v5 != *v6 )
      goto LABEL_10;
  }
LABEL_11:
  if ( v7 )
  {
LABEL_12:
    v9 = v7[1];
    do
    {
      v7 += 6;
      if ( v7 >= dword_27678 )
      {
        v10 = 200;
        goto LABEL_16;
      }
    }
    while ( v5 == *v7 );
    v10 = v7[1];
  }
  else
  {
    v9 = 0;
    v10 = 200;
  }
LABEL_16:
  *(_DWORD *)(a1 + 404) = v9;
  sub_B160(a1, v10);
LABEL_17:
  if ( *(_QWORD *)(a1 + 400) == 0x66FFFFFFFBLL && (unsigned __int8)get_data_value() && (unsigned __int8)get_data_value() )
    is_mapped();
  v11 = &unk_27600;
  v12 = *(_DWORD *)(a1 + 400);
  v13 = nullptr;
  while ( 2 )
  {
    v14 = v11;
    if ( v12 != *v11 )
    {
LABEL_20:
      v11 += 6;
      if ( v11 == dword_27678 )
        goto LABEL_21;
      continue;
    }
    break;
  }
  if ( !v13 )
  {
    v13 = v11;
    goto LABEL_30;
  }
  while ( 1 )
  {
    v14 = v13;
    v13 = v11;
LABEL_30:
    if ( *(_DWORD *)(a1 + 404) < v11[1] )
    {
      v13 = v14;
      goto LABEL_22;
    }
    v11 += 6;
    if ( v11 == dword_27678 )
      break;
    if ( v12 != *v11 )
      goto LABEL_20;
  }
LABEL_21:
  if ( v13 )
  {
LABEL_22:
    sub_FE10(a1, *((_BYTE *)v13 + 16), 0, 0);
    create_data();
    v15 = *((int **)v13 + 1);
    v16 = v15 + 16;
    while ( 1 )
    {
      v17 = (_QWORD *)(a1 + 408 + *v15);
      if ( v15[1] == -1 )
      {
        *v17 = -1;
      }
      else
      {
        *v17 = 0;
        if ( !(unsigned __int8)get_data_value() )
          return v31 - __readfsqword(0x28u);
      }
      v15 += 2;
      if ( v15 == v16 )
        return v31 - __readfsqword(0x28u);
    }
  }
  sub_5050((__int64)"golang: unknown pcheader magic number %x\n", v12);
  return v31 - __readfsqword(0x28u);
}
