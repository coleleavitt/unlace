__int64 sub_32AC20()
{
  int named_type; // edx
  __int64 result; // rax
  unsigned __int64 vars18; // [rsp+20h] [rbp+18h]

  vars18 = __readfsqword(0x28u);
  named_type = get_named_type();
  result = 0;
  if ( named_type )
    return deserialize_tinfo();
  return result;
}

