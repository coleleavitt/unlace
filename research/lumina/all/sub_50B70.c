_BYTE *sub_50B70()
{
  _BYTE *result; // rax
  __int64 v1; // rbx
  unsigned __int64 (__fastcall *v2)(__int64); // rax
  __int64 v3; // rbp

  result = (_BYTE *)sub_2FCC0();
  if ( !result[536] )
  {
    v1 = (__int64)result;
    v2 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)result + 120LL);
    if ( v2 == sub_50B20 )
    {
      *(_BYTE *)(v1 + 536) = 1;
      sub_4C740(v1);
      v3 = *(_QWORD *)(v1 + 424);
      sub_19A520(v3);
      sub_4DF50(v1, 1);
      sub_19A570(v3);
      return (_BYTE *)sub_50910(v1);
    }
    else
    {
      return (_BYTE *)v2(v1);
    }
  }
  return result;
}
