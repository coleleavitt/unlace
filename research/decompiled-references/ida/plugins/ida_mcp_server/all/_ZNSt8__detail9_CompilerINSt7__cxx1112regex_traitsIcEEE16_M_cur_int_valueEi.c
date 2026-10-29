__int64 __fastcall std::__detail::_Compiler<std::regex_traits<char>>::_M_cur_int_value(__int64 a1, unsigned int a2)
{
  char *v2; // rbp
  char *v3; // r13
  __int64 result; // rax
  int v5; // ebx
  int v6; // eax
  bool v7; // of

  v2 = *(char **)(a1 + 272);
  v3 = &v2[*(_QWORD *)(a1 + 280)];
  if ( v3 == v2 )
    return 0;
  LODWORD(result) = 0;
  do
  {
    v5 = a2 * result;
    if ( !is_mul_ok(a2, result)
      || (v6 = std::regex_traits<char>::value((unsigned int)*v2, a2),
          v7 = __OFADD__(v5, v6),
          result = (unsigned int)(v5 + v6),
          v7) )
    {
      std::__throw_regex_error();
    }
    ++v2;
  }
  while ( v3 != v2 );
  return result;
}

