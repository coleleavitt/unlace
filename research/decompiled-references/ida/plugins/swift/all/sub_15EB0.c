int __fastcall sub_15EB0(__int64 a1)
{
  __int64 nlist_size; // rax
  __int64 v2; // r12
  const char *v3; // rbp
  const char **v4; // r15
  const char *v5; // rsi
  size_t v6; // rbx
  __int64 v7; // rdi
  const char *nlist_ea; // rax
  __int64 v10; // [rsp+0h] [rbp-48h]

  nlist_size = get_nlist_size();
  v10 = nlist_size;
  if ( nlist_size )
  {
    v2 = 0;
    do
    {
      while ( 1 )
      {
        nlist_size = get_nlist_name(v2);
        v3 = (const char *)nlist_size;
        if ( nlist_size )
        {
          v4 = (const char **)&off_284E0;
          while ( 1 )
          {
            v5 = *v4;
            v6 = strlen(*v4);
            LODWORD(nlist_size) = strncmp(v3, v5, v6);
            if ( !(_DWORD)nlist_size )
              break;
            if ( ++v4 == (const char **)&unk_28510 )
              goto LABEL_7;
          }
          if ( v6 )
            break;
        }
LABEL_7:
        if ( v10 == ++v2 )
          return nlist_size;
      }
      v7 = v2++;
      nlist_ea = (const char *)get_nlist_ea(v7);
      LODWORD(nlist_size) = sub_15CE0(a1, v3, nlist_ea);
    }
    while ( v10 != v2 );
  }
  return nlist_size;
}

