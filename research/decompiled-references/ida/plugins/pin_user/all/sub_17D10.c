__int64 __fastcall sub_17D10(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 result; // rax
  unsigned __int64 *v8; // rsi
  __int64 v9; // rax

  v5 = a1[1];
  v6 = *a1;
  if ( !v5 )
    goto LABEL_4;
  result = v6 + 16 * v5 - 16;
  if ( *(_QWORD *)(result + 8) == a2 )
  {
    *(_QWORD *)(result + 8) = a3;
    return result;
  }
  if ( *(_QWORD *)(result + 8) >= a2 )
  {
    if ( under_debugger )
      BUG();
    interr();
    return sub_17DB0(1156);
  }
  else
  {
LABEL_4:
    result = v5 + 1;
    if ( a1[2] < (unsigned __int64)(v5 + 1) )
    {
      v9 = qvector_reserve();
      v5 = a1[1];
      *a1 = v9;
      v6 = v9;
      result = v5 + 1;
    }
    a1[1] = result;
    v8 = (unsigned __int64 *)(16 * v5 + v6);
    *v8 = a2;
    v8[1] = a3;
  }
  return result;
}

