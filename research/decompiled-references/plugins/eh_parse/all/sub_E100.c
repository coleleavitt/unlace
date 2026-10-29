__int64 __fastcall sub_E100(__int64 *a1, __int64 a2, char a3)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 result; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rdx

  v4 = a3 & 4;
  if ( !(_DWORD)v4 || (result = ~get_flags_ex(a2, 4, v4), (result & 0x600) == 0) )
  {
    if ( (a3 & 0x18) == 0 || (result = get_func(a2)) != 0 && ((a3 & 0x10) == 0 || *(_QWORD *)result == a2) )
    {
      v5 = a1[1];
      v6 = (_QWORD *)(*a1 + 8 * v5);
      result = *a1;
      if ( (_QWORD *)*a1 == v6 )
        goto LABEL_15;
      while ( *(_QWORD *)result != a2 )
      {
        result += 8;
        if ( v6 == (_QWORD *)result )
          goto LABEL_15;
      }
      if ( (_QWORD *)result == v6 )
      {
LABEL_15:
        v8 = v5 + 1;
        if ( a1[2] < v8 )
        {
          result = qvector_reserve(a1, *a1, v8, 8);
          v9 = a1[1];
          *a1 = result;
          v6 = (_QWORD *)(result + 8 * v9);
        }
        *v6 = a2;
        ++a1[1];
      }
    }
  }
  return result;
}
