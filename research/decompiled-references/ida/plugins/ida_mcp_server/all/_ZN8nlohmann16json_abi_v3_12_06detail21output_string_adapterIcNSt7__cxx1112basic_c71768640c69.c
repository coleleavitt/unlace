_QWORD *__fastcall nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_character(
        __int64 a1,
        char a2)
{
  _QWORD *v2; // rax
  __int64 v4; // rsi
  unsigned __int64 v5; // rcx
  _QWORD *result; // rax
  _QWORD *v7; // [rsp+0h] [rbp-28h]
  char v8; // [rsp+1Ch] [rbp-Ch]

  v2 = *(_QWORD **)(a1 + 8);
  v4 = v2[1];
  if ( (_QWORD *)*v2 == v2 + 2 )
    v5 = 15;
  else
    v5 = v2[2];
  if ( v5 < v4 + 1 )
  {
    v8 = a2;
    v7 = *(_QWORD **)(a1 + 8);
    std::string::_M_mutate();
    *(_BYTE *)(*v7 + v4) = v8;
    v7[1] = v4 + 1;
    result = (_QWORD *)*v7;
    *(_BYTE *)(*v7 + v4 + 1) = 0;
  }
  else
  {
    *(_BYTE *)(*v2 + v4) = a2;
    v2[1] = v4 + 1;
    result = (_QWORD *)*v2;
    *((_BYTE *)result + v4 + 1) = 0;
  }
  return result;
}

