void *__fastcall sub_107D0(_QWORD *a1, const char *a2, __int64 a3)
{
  size_t v4; // rax
  size_t v5; // rbp
  __int64 v6; // rax
  __int64 v7; // r13
  void *v8; // rcx
  void *result; // rax

  if ( !a2 )
    std::__throw_logic_error("basic_string::_S_construct null not valid");
  v4 = strlen(a2);
  v5 = v4;
  if ( v4 )
  {
    v6 = std::string::_Rep::_S_create(v4, 0, a3);
    v7 = v6;
    v8 = (void *)(v6 + 24);
    if ( v5 == 1 )
    {
      result = (void *)*(unsigned __int8 *)a2;
      *(_BYTE *)(v7 + 24) = (_BYTE)result;
    }
    else
    {
      result = memcpy((void *)(v6 + 24), a2, v5);
      v8 = result;
    }
    if ( (_UNKNOWN *)v7 != &std::string::_Rep::_S_empty_rep_storage )
    {
      *(_DWORD *)(v7 + 16) = 0;
      *(_QWORD *)v7 = v5;
      *(_BYTE *)(v7 + v5 + 24) = 0;
    }
    *a1 = v8;
  }
  else
  {
    *a1 = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
    return &std::string::_Rep::_S_empty_rep_storage;
  }
  return result;
}
