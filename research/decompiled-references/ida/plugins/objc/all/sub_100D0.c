__int64 __fastcall sub_100D0(__int64 a1, _QWORD *a2)
{
  unsigned int data_value; // ebp
  int v4; // edx
  __int64 v5; // rax

  data_value = get_data_value();
  if ( !(_BYTE)data_value || !(unsigned __int8)getinf_flag() )
    return data_value;
  v4 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4LL);
  v5 = 0xFFFFFFFFFFFFLL;
  if ( v4 )
  {
    v5 = -1;
    if ( v4 == 13 )
    {
      v5 = 0xFFFFFFFFFLL;
      if ( *(_DWORD *)(a1 + 748) != 2 )
        v5 = 0xFFFFFFFFFFFFLL;
    }
  }
  *a2 &= v5;
  return data_value;
}
