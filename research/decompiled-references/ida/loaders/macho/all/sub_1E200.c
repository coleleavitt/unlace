unsigned __int64 __fastcall sub_1E200(__int64 *a1, __int64 a2, char a3)
{
  __int64 v4; // rbx
  _QWORD *v5; // rdi
  unsigned __int64 result; // rax
  __int64 v7; // [rsp-10h] [rbp-38h]
  char v8; // [rsp+Ch] [rbp-1Ch]

  v4 = a2;
  if ( a2 != -1 )
    v4 = *(_QWORD *)(*(_QWORD *)(a1[4] + 8) + 16LL) & a2;
  v5 = (_QWORD *)a1[5];
  result = v5[30];
  if ( *(_QWORD *)(v5[1] + 16LL) == result
    || result == -1
    || v5[23] && (v8 = a3, result = rangeset_t_find_range(), a3 = v8, result) )
  {
    switch ( a3 )
    {
      case 2:
        sub_1DF00(a1[4], a1[5], v4, -1, 2, 0, 0, 0);
        break;
      case 3:
        sub_1DF00(a1[4], a1[5], v4, -1, 2, 1u, 0, 0);
        break;
      case 1:
        return sub_1DF00(a1[4], a1[5], v4, -1, (unsigned int)*(unsigned __int8 *)(a1[6] + 161) + 2, 0, 0, 0);
      default:
        return result;
    }
    return v7;
  }
  return result;
}

