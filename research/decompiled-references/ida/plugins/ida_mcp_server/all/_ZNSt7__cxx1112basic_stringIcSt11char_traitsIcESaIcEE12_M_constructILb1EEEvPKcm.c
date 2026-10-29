__int64 __fastcall std::string::_M_construct<true>(__int64 a1, _BYTE *a2, unsigned __int64 a3)
{
  _BYTE *v3; // rcx
  _BYTE *v5; // rdi
  size_t v6; // rsi
  __int64 result; // rax
  __int64 v8; // rax

  v3 = a2;
  if ( a3 <= 0xF )
  {
    v5 = *(_BYTE **)a1;
    v6 = a3 + 1;
    if ( a3 )
    {
LABEL_3:
      memcpy(v5, v3, v6);
      *(_QWORD *)(a1 + 8) = a3;
      return a3;
    }
    goto LABEL_4;
  }
  v8 = std::string::_M_create();
  v3 = a2;
  *(_QWORD *)a1 = v8;
  v5 = (_BYTE *)v8;
  *(_QWORD *)(a1 + 16) = a3;
  v6 = a3 + 1;
  if ( !a3 )
  {
LABEL_4:
    *v5 = *v3;
    *(_QWORD *)(a1 + 8) = a3;
    return a3;
  }
  result = -1;
  if ( a3 != -1 )
    goto LABEL_3;
  *(_QWORD *)(a1 + 8) = -1;
  return result;
}

