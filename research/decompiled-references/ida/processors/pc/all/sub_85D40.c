__int64 __fastcall sub_85D40(_QWORD *a1)
{
  _BYTE *v1; // r12
  __int64 result; // rax
  int v3; // eax
  __int64 v4; // rsi
  int v5; // ebp
  __int64 v6; // rax

  v1 = &off_174BA0;
  do
  {
    v3 = register_custom_data_format();
    v4 = a1[19];
    v5 = v3;
    result = a1[20];
    if ( a1[21] < (unsigned __int64)(result + 1) )
    {
      v6 = qvector_reserve();
      a1[19] = v6;
      v4 = v6;
      result = a1[20];
    }
    *(_DWORD *)(v4 + 4 * result) = v5;
    ++a1[20];
    if ( v5 != -1 )
      result = attach_custom_data_format();
    v1 += 8;
  }
  while ( algn_174C28 != v1 );
  return result;
}
