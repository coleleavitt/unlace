__int64 sub_1B100()
{
  unsigned __int64 v1; // [rsp+D8h] [rbp-40h]

  v1 = __readfsqword(0x28u);
  create_lexer();
  lex_init_string();
  parse_json();
  jvalue_t_clear();
  destroy_lexer();
  return 0;
}

