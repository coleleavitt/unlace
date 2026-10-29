unsigned __int64 __fastcall sub_FA50(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  char *v7; // rbx
  void *v8; // r9
  char *v9; // rcx
  __int64 v10; // rdx
  char *s1; // [rsp+0h] [rbp-68h] BYREF
  __int128 v12; // [rsp+8h] [rbp-60h]
  void *v13; // [rsp+20h] [rbp-48h] BYREF
  __int128 v14; // [rsp+28h] [rbp-40h]
  unsigned __int64 v15; // [rsp+38h] [rbp-30h]

  v4 = *(unsigned __int8 *)(a3 + 184);
  v15 = __readfsqword(0x28u);
  if ( !(unsigned __int8)is_spec_segm(v4) )
  {
    s1 = nullptr;
    v13 = nullptr;
    v12 = 0;
    v14 = 0;
    get_segm_name(&s1, a3, 0);
    get_segm_class(&v13, a3);
    if ( (_QWORD)v12 && ((v7 = s1, !strcmp(s1, ".text")) || !strcmp(v7, ".data")) )
    {
      sub_EC90(a2, 0xFFFF, (__int64)&unk_1255D, v7);
    }
    else
    {
      validate_name(&s1, 6, 1);
      v8 = &unk_13D10;
      if ( (_QWORD)v14 )
        v8 = v13;
      v9 = (char *)&unk_13D10;
      if ( (_QWORD)v12 )
        v9 = s1;
      sub_EC90(a2, 0xFFFF, (__int64)&unk_1256A, v9, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL), v8);
    }
    if ( v13 )
    {
      *(_QWORD *)&v14 = 0;
      qfree(v13, 0xFFFF, v10, 0.0);
    }
    if ( s1 )
    {
      *(_QWORD *)&v12 = 0;
      qfree(s1, 0xFFFF, v10, 0.0);
    }
  }
  return v15 - __readfsqword(0x28u);
}

