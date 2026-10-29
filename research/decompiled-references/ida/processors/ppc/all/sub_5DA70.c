__int64 __fastcall sub_5DA70(__int64 a1, unsigned int a2, __int64 a3, __int64 **a4)
{
  __int64 flags; // rax
  __int64 result; // rax
  __int64 v8; // r14
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx

  flags = get_flags_ex(*(_QWORD *)(a1 + 16), 0);
  result = is_defarg(flags, a2);
  if ( !(_BYTE)result )
  {
    v8 = **a4;
    result = op_based_stroff(a1, a2, a3, v8);
    if ( !(_BYTE)result )
    {
      v9 = *a4;
      v10 = (__int64)&(*a4)[3 * (_QWORD)a4[1]];
      if ( *a4 == (__int64 *)v10 )
      {
LABEL_10:
        v11 = 513;
      }
      else
      {
        while ( (*((_BYTE *)v9 + 18) & 0x10) != 0 )
        {
          v9 += 3;
          if ( (__int64 *)v10 == v9 )
            goto LABEL_10;
        }
        v11 = 641;
      }
      return op_offset(*(_QWORD *)(a1 + 16), a2, v11, -1, v8, 0);
    }
  }
  return result;
}

