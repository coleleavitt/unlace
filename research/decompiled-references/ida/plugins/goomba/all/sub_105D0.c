unsigned __int64 __fastcall sub_105D0(_QWORD *a1, const char *a2)
{
  size_t v2; // rax
  size_t v3; // r12
  __int64 v4; // rax
  __int64 v5; // r13
  char *v6; // rcx
  char v8; // [rsp+7h] [rbp-31h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  *a1 = off_4D828;
  if ( !a2 )
    std::__throw_logic_error("basic_string::_S_construct null not valid");
  v2 = strlen(a2);
  v3 = v2;
  if ( v2 )
  {
    v4 = std::string::_Rep::_S_create(v2, 0, &v8);
    v5 = v4;
    v6 = (char *)(v4 + 24);
    if ( v3 == 1 )
      *(_BYTE *)(v4 + 24) = *a2;
    else
      v6 = (char *)memcpy((void *)(v4 + 24), a2, v3);
    if ( (_UNKNOWN *)v5 != &std::string::_Rep::_S_empty_rep_storage )
    {
      *(_DWORD *)(v5 + 16) = 0;
      *(_QWORD *)v5 = v3;
      *(_BYTE *)(v5 + v3 + 24) = 0;
    }
  }
  else
  {
    v6 = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  }
  a1[1] = v6;
  return v9 - __readfsqword(0x28u);
}

