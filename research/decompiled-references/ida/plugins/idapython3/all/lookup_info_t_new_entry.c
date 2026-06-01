__int64 __fastcall lookup_info_t_new_entry(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 result; // rax
  __int64 v6; // rax

  if ( !a2 || (unsigned __int8)lookup_info_t_find_by_py_view(a1, 0, a2) )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  v3 = a1[1];
  v4 = *a1;
  if ( a1[2] < (unsigned __int64)(v3 + 1) )
  {
    v6 = qvector_reserve();
    *a1 = v6;
    v4 = v6;
    v3 = a1[1];
  }
  result = v4 + 16 * v3;
  *(_OWORD *)result = 0;
  ++a1[1];
  *(_QWORD *)(result + 8) = a2;
  return result;
}

