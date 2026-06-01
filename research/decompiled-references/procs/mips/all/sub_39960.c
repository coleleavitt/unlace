unsigned __int64 __fastcall sub_39960(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  char *v7; // rbp
  const char **v8; // rbx
  char *v9; // rbx
  const char *v10; // rcx
  __int64 v11; // rbp
  char *v12; // r12
  int v13; // eax
  char *s1; // [rsp+0h] [rbp-78h] BYREF
  __int128 v15; // [rsp+8h] [rbp-70h]
  char *v16; // [rsp+20h] [rbp-58h] BYREF
  __int128 v17; // [rsp+28h] [rbp-50h]
  unsigned __int64 v18; // [rsp+38h] [rbp-40h]

  v4 = *(unsigned __int8 *)(a3 + 184);
  v18 = __readfsqword(0x28u);
  if ( !(unsigned __int8)is_spec_segm(v4) )
  {
    s1 = nullptr;
    v16 = nullptr;
    v15 = 0;
    v17 = 0;
    get_segm_name(&s1, a3, 0);
    get_segm_class(&v16, a3);
    v7 = (char *)byte_51ACD;
    v8 = (const char **)off_70F80;
    if ( (_QWORD)v15 )
      v7 = s1;
    do
    {
      if ( !strcmp(v7, *v8) )
      {
        sub_37E50(a2, 0xFFFF, (__int64)&unk_50723, v7);
        goto LABEL_11;
      }
      ++v8;
    }
    while ( v8 != (const char **)&off_70FC0 );
    validate_name(&s1, 6, 1);
    v9 = (char *)byte_51ACD;
    if ( (_QWORD)v15 )
      v9 = s1;
    v10 = ".data";
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
    if ( (_QWORD)v17 )
    {
      v12 = v16;
      v13 = strcmp(v16, "CODE");
      v10 = ".text";
      if ( v13 )
      {
        if ( !strcmp(v12, "BSS") )
          v10 = ".bss";
        else
          v10 = ".data";
      }
    }
    sub_37E50(a2, 0xFFFF, (__int64)&unk_50733, v10, v11, v9);
LABEL_11:
    if ( v16 )
    {
      *(_QWORD *)&v17 = 0;
      qfree(v16);
    }
    if ( s1 )
    {
      *(_QWORD *)&v15 = 0;
      qfree(s1);
    }
  }
  return v18 - __readfsqword(0x28u);
}
