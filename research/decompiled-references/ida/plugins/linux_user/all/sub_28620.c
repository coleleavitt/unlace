_QWORD *__fastcall sub_28620(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdi
  _QWORD *result; // rax
  __int64 v8; // rax

  v4 = a1[73];
  v5 = a1[72];
  v6 = v4 + 1;
  if ( a1[74] < (unsigned __int64)(v4 + 1) )
  {
    v8 = qvector_reserve();
    v4 = a1[73];
    a1[72] = v8;
    v5 = v8;
    v6 = v4 + 1;
  }
  a1[73] = v6;
  result = (_QWORD *)(v5 + 24 * v4);
  *result = a2[1];
  result[1] = a2[4];
  result[2] = a2[2];
  return result;
}

