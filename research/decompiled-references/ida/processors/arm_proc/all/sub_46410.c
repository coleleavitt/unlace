__int64 __fastcall sub_46410(_QWORD *a1)
{
  _UNKNOWN **v1; // r12
  int v2; // ebp
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 v5; // rax

  v1 = &off_A14C0;
  do
  {
    v2 = register_custom_data_format();
    if ( v2 != -1 )
      attach_custom_data_format();
    result = a1[57];
    v4 = a1[56];
    if ( a1[58] < (unsigned __int64)(result + 1) )
    {
      v5 = qvector_reserve();
      a1[56] = v5;
      v4 = v5;
      result = a1[57];
    }
    ++v1;
    *(_DWORD *)(v4 + 4 * result) = v2;
    ++a1[57];
  }
  while ( v1 != (_UNKNOWN **)&unk_A1520 );
  return result;
}

