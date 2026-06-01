__int64 __fastcall sub_8BA0(_QWORD *a1)
{
  unsigned int v1; // ebp
  _DWORD *v3; // rsi
  __int64 v4; // rax

  v1 = choose_ioport_device();
  if ( (_BYTE)v1 )
    return v1;
  v3 = (_DWORD *)a1[17];
  if ( a1[19] <= 4u )
  {
    v4 = qvector_reserve();
    a1[17] = v4;
    v3 = (_DWORD *)v4;
  }
  a1[18] = 5;
  *v3 = 1162760014;
  *(_BYTE *)(a1[17] + 4LL) = 0;
  return v1;
}

