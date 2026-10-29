bool __fastcall sub_45B0(__int64 a1, __int64 *a2)
{
  unsigned __int64 v2; // rdi
  int i; // ebx
  int idcv_attr; // edx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdx
  int v8; // ecx
  __int64 v9; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rsi
  int v13; // r9d
  __int64 v14; // rax
  __int64 v15; // [rsp+0h] [rbp-98h]
  int v16; // [rsp+8h] [rbp-90h]
  int v17; // [rsp+1Ch] [rbp-7Ch] BYREF
  char v18; // [rsp+20h] [rbp-78h]
  __int128 v19; // [rsp+28h] [rbp-70h]
  __int64 v20; // [rsp+38h] [rbp-60h]
  unsigned __int64 v21; // [rsp+58h] [rbp-40h]

  v2 = *a2;
  v21 = __readfsqword(0x28u);
  v18 = 2;
  v20 = 0;
  v19 = 0;
  if ( v2 )
  {
    a2[1] = 0;
    qfree();
    *a2 = 0;
    a2[2] = 0;
  }
  for ( i = 0; ; ++i )
  {
    qsnprintf();
    idcv_attr = get_idcv_attr();
    v14 = a2[1];
    if ( idcv_attr || v18 != 2 )
      break;
    v13 = v19;
    v12 = *a2;
    v6 = v14 + 1;
    v7 = a2[2];
    v17 = v19;
    v8 = v19;
    if ( (unsigned __int64)&v17 < v12 || (unsigned __int64)&v17 >= v12 + 4 * v7 )
    {
      if ( v7 < v6 )
      {
        v9 = qvector_reserve();
        *a2 = v9;
        v12 = v9;
        v8 = v17;
        v14 = a2[1];
      }
      *(_DWORD *)(v12 + 4 * v14) = v8;
    }
    else
    {
      if ( v7 < v6 )
      {
        v16 = v19;
        v11 = qvector_reserve();
        *a2 = v11;
        v12 = v11;
        v13 = v16;
        v14 = a2[1];
      }
      *(_DWORD *)(v12 + 4 * v14) = v13;
    }
    ++a2[1];
  }
  v15 = a2[1];
  free_idcv();
  return v15 != 0;
}

