__int64 __fastcall sub_D3D0(_QWORD *a1)
{
  __int64 v1; // r8
  __int64 v2; // r8

  v1 = a1[112];
  if ( v1 != -1 )
    op_offset(a1[49], 0, 130, -1, v1, 0);
  v2 = a1[113];
  if ( v2 != -1 )
    op_offset(a1[48], 0, 130, -1, v2, 0);
  return 1;
}

