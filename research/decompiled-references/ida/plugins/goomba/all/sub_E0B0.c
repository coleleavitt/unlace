__int64 __fastcall sub_E0B0(__int64 a1)
{
  __int64 path; // rax
  const char *v4; // r12
  __int64 v5; // rbp
  _QWORD *v6; // r13
  const char *v7; // rdx
  __int64 v8; // rdi
  const char *v9; // rdx
  const char *v10; // [rsp+0h] [rbp-1058h] BYREF
  __int128 v11; // [rsp+8h] [rbp-1050h]
  _BYTE v12[4104]; // [rsp+20h] [rbp-1038h] BYREF
  unsigned __int64 v13; // [rsp+1028h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 185) )
    return v13 - __readfsqword(0x28u);
  *(_BYTE *)(a1 + 185) = 1;
  path = get_path(1);
  if ( path )
  {
    set_file_ext(v12, 4096, path, ".disable_oracle");
    if ( (unsigned __int8)qfileexist(v12) )
      return v13 - __readfsqword(0x28u);
  }
  if ( *(_QWORD *)(a1 + 120) <= 1u )
  {
    qgetenv("VD_MBA_ORACLE_PATH", a1 + 112);
    if ( *(_QWORD *)(a1 + 120) <= 1u )
      return v13 - __readfsqword(0x28u);
  }
  v4 = *(const char **)(a1 + 112);
  v5 = fopenRB(v4);
  if ( v5 )
  {
    v10 = nullptr;
    v11 = 0;
    v6 = (_QWORD *)operator new(0x80u);
    sub_D4C0((__int64)v6);
    if ( (unsigned __int8)sub_DC00(v6, v5, (__int64 *)&v10) )
    {
      sub_C720((__int64)"%s: loaded MBA oracle for goomba\n", v4);
    }
    else
    {
      v7 = src;
      if ( (_QWORD)v11 )
        v7 = v10;
      sub_C720((__int64)"%s: failed to loaded MBA oracle for goomba: %s\n", v4, v7);
    }
    v8 = (__int64)v10;
    *(_QWORD *)(a1 + 176) = v6;
    if ( v8 )
    {
      *(_QWORD *)&v11 = 0;
      qfree(v8);
    }
    return v13 - __readfsqword(0x28u);
  }
  v9 = (const char *)qstrerror(0xFFFFFFFFLL);
  return sub_C720((__int64)"%s: %s\n", v4, v9);
}

