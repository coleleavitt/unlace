__int64 __fastcall sub_3540(__int64 a1, __int64 a2, __int16 a3, __int64 a4)
{
  unsigned int v4; // r15d
  char *v8; // rbp
  size_t v9; // rax
  size_t v10; // rax
  size_t v11; // rax
  size_t v12; // r8
  size_t v13; // r9
  char *v14; // rsi
  size_t v15; // [rsp+10h] [rbp-488h]
  size_t v16; // [rsp+18h] [rbp-480h]
  char *v17; // [rsp+20h] [rbp-478h]
  __m128i v18; // [rsp+40h] [rbp-458h] BYREF
  int v19; // [rsp+50h] [rbp-448h] BYREF
  char s[2]; // [rsp+54h] [rbp-444h] BYREF
  char v21; // [rsp+56h] [rbp-442h] BYREF
  unsigned __int64 v22; // [rsp+458h] [rbp-40h]

  v4 = 0;
  v22 = __readfsqword(0x28u);
  if ( get_bytes() != 16 )
    return v4;
  v4 = sub_33B0(a1, &v18);
  if ( !(_BYTE)v4 )
    return v4;
  if ( (a3 & 0xC000) != 0x4000 )
  {
    if ( !(unsigned int)get_named_type() )
    {
      if ( v19 == 1598310729 )
      {
        v10 = strlen(s);
        memmove(&v19, s, v10 + 1);
      }
      if ( !(unsigned int)get_named_type() )
      {
        v17 = (char *)qvector_reserve();
        strcpy(v17, "CLSID_");
        v11 = strlen((const char *)&v19);
        v12 = v11;
        v13 = v11 + 6;
        v14 = v17;
        if ( v11 != -7 )
        {
          v16 = v11;
          v15 = v11 + 6;
          v17 = (char *)qvector_reserve();
          v12 = v16;
          v14 = v17;
          v13 = v15;
        }
        v14[v13] = 0;
        memmove(v17 + 6, &v19, v12);
        qstrncpy();
        if ( v17 )
          qfree();
      }
    }
    set_name();
  }
  if ( !*(_BYTE *)(a1 + 265) )
  {
    *(_BYTE *)(a1 + 265) = 1;
    copy_named_type();
  }
  qstrncat();
  if ( !(unsigned int)copy_named_type() )
  {
    v8 = s;
    if ( strncmp((const char *)&v19, "IID_", 4u) )
    {
      if ( strncmp((const char *)&v19, "CLSID_", 6u) )
      {
LABEL_10:
        copy_named_type();
        goto LABEL_11;
      }
      v8 = &v21;
    }
    v9 = strlen(v8);
    memmove(&v19, v8, v9 + 1);
    goto LABEL_10;
  }
LABEL_11:
  if ( a4 )
    apply_tinfo();
  return v4;
}

