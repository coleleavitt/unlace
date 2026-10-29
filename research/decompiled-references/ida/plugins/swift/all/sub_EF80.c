__int64 __fastcall sub_EF80(const char **a1, _DWORD *a2)
{
  const char *v3; // rdi
  __int64 named_type_tid; // rax
  __int64 v5; // r12
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 v8; // rbp
  _QWORD *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v13; // r14
  __int64 tinfo_size; // rax
  __int64 v15; // rax
  __int64 v16; // [rsp+8h] [rbp-70h] BYREF
  __int64 v17; // [rsp+10h] [rbp-68h] BYREF
  __int128 v18; // [rsp+18h] [rbp-60h]
  __int128 v19; // [rsp+28h] [rbp-50h]
  __int64 v20; // [rsp+38h] [rbp-40h]
  int v21; // [rsp+40h] [rbp-38h]
  unsigned __int64 v22; // [rsp+48h] [rbp-30h]

  v3 = *a1;
  v22 = __readfsqword(0x28u);
  v16 = 0;
  named_type_tid = get_named_type_tid(v3);
  v5 = named_type_tid;
  if ( named_type_tid == -1 )
  {
    v15 = sub_C7D0(a1);
    v5 = v15;
    if ( v15 == -1 )
    {
      sub_CB10((__int64)"could not add a structure with the name %s\n", *a1);
      goto LABEL_24;
    }
    if ( (unsigned __int8)get_type_by_tid(&v16, v15) )
    {
      a1[2] = (const char *)get_tinfo_size(0, v16, 0);
      goto LABEL_4;
    }
    goto LABEL_23;
  }
  if ( a1[2] == (const char *)-1LL )
  {
    if ( (unsigned __int8)get_type_by_tid(&v16, named_type_tid) )
    {
      if ( (get_tinfo_property(v16, 2) & 0x3F) == 0xD )
      {
        v13 = sub_C910(a1);
        tinfo_size = get_tinfo_size(0, v16, 0);
        if ( v13 == tinfo_size )
        {
          a1[2] = (const char *)v13;
          goto LABEL_4;
        }
        sub_CB10(
          (__int64)"there already exists a structure with the name %s, but with a different size %zu (not %zu)\n",
          *a1,
          tinfo_size,
          v13);
      }
      else
      {
        sub_CB10((__int64)"there already exists a type with the name %s\n", *a1);
      }
    }
    else
    {
      sub_CB10((__int64)"could not get typeinfo for a type with the name %s\n", *a1);
    }
LABEL_24:
    v5 = -1;
    goto LABEL_15;
  }
  if ( !(unsigned __int8)get_type_by_tid(&v16, named_type_tid) )
  {
LABEL_23:
    sub_CB10((__int64)"could not get typeinfo for a structure with the name %s\n", *a1);
    goto LABEL_24;
  }
LABEL_4:
  *a2 = 0;
  v17 = 0;
  v20 = 0;
  v21 = 1;
  v18 = 0;
  v19 = 0;
  if ( (unsigned __int8)get_tinfo_details(v16, 13, &v17) )
    *a2 = log2floor((unsigned int)v20);
  v6 = v17;
  if ( v17 )
  {
    v7 = v18;
    if ( (_QWORD)v18 )
    {
      v8 = 0;
      do
      {
        v9 = (_QWORD *)(v6 + 144 * v8);
        clear_tinfo_t(v9 + 8);
        v10 = v9[5];
        if ( v10 )
        {
          v9[6] = 0;
          qfree(v10);
        }
        v11 = v9[2];
        if ( v11 )
        {
          v9[3] = 0;
          qfree(v11);
        }
        ++v8;
        v6 = v17;
      }
      while ( v7 != v8 );
    }
    *(_QWORD *)&v18 = 0;
    qfree(v6);
  }
LABEL_15:
  clear_tinfo_t(&v16);
  return v5;
}

