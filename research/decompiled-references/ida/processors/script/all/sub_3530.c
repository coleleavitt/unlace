char __fastcall sub_3530(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v8; // rax

  if ( *a2 )
  {
    a2[1] = 0;
    qfree();
    *a2 = 0;
    a2[2] = 0;
  }
  qsnprintf();
  get_idcv_attr();
  v3 = a2[1];
  if ( v3 )
  {
    v4 = *a2;
    v5 = v3 + 1;
    if ( a2[2] < (unsigned __int64)(v3 + 1) )
    {
      v8 = qvector_reserve();
      v3 = a2[1];
      *a2 = v8;
      v4 = v8;
      v5 = v3 + 1;
    }
    a2[1] = v5;
    v6 = 16 * v3 + v4;
    *(_BYTE *)v6 = 0;
    *(_QWORD *)(v6 + 8) = 0;
  }
  free_idcv();
  return 0;
}

