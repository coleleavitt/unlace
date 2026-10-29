__int64 __fastcall lookup_info_t_commit(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 result; // rax

  if ( (unsigned __int64)a2 < *a1 || (unsigned __int64)a2 >= 16LL * a1[1] + *a1 )
    goto LABEL_10;
  if ( !a3
    || !a2[1]
    || (unsigned __int8)lookup_info_t_find_by_view(a1, 0, a3)
    || (result = lookup_info_t_find_by_py_view(a1, 0, a2[1]), !(_BYTE)result) )
  {
    if ( under_debugger )
      goto LABEL_12;
    interr();
LABEL_10:
    if ( !under_debugger )
      interr();
LABEL_12:
    BUG();
  }
  *a2 = a3;
  return result;
}

