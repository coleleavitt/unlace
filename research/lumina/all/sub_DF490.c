__int64 *__fastcall sub_DF490(__int64 a1)
{
  __int16 v1; // ax
  __int16 v2; // dx
  __int64 *result; // rax
  __int64 *v4; // rax

  v1 = *(_WORD *)(a1 + 48);
  if ( v1 )
  {
    v2 = v1 - 1;
    result = *(__int64 **)(a1 + 32);
LABEL_3:
    *(_WORD *)(a1 + 48) = v2;
    *(_QWORD *)(a1 + 32) = result + 3;
    return result;
  }
  v4 = sub_DBF10(*(_QWORD *)(a1 + 8), 1016);
  if ( v4 )
  {
    *v4 = *(_QWORD *)a1;
    *(_QWORD *)a1 = v4;
    v2 = 41;
    result = v4 + 1;
    goto LABEL_3;
  }
  return nullptr;
}
