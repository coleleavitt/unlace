__int64 __fastcall sub_25160(__int64 a1, _QWORD *a2, __int64 *a3, __int64 *a4, __int64 *a5, __int64 *a6)
{
  __int64 v10; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  char *v18; // [rsp+8h] [rbp-450h]
  char v19; // [rsp+10h] [rbp-448h] BYREF
  char v20; // [rsp+11h] [rbp-447h] BYREF
  unsigned __int64 v21; // [rsp+418h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v10 = netnode_supval();
  if ( v10 <= 0 )
    return 0;
  v18 = &v19 + v10;
  if ( &v19 >= &v19 + v10 || v19 != 1 )
    return 0;
  if ( (unsigned __int8)is_cvt64() )
  {
    v12 = (unsigned int)unpack_dd();
    if ( (unsigned int)v12 == 0xFFFFFFFFLL )
      v12 = -1;
  }
  else
  {
    v12 = unpack_dq();
  }
  if ( a2[1] - *a2 != v12 )
    return 0;
  if ( (unsigned __int8)is_cvt64() )
  {
    v13 = (unsigned int)unpack_dd();
    if ( (unsigned int)v13 == 0xFFFFFFFFLL )
      v13 = -1;
  }
  else
  {
    v13 = unpack_dq();
  }
  if ( a3 )
    *a3 = v13;
  if ( (unsigned __int8)is_cvt64() )
  {
    v14 = (unsigned int)unpack_dd();
    if ( (unsigned int)v14 == 0xFFFFFFFFLL )
      v14 = -1;
  }
  else
  {
    v14 = unpack_dq();
  }
  if ( a4 )
    *a4 = v14;
  if ( (unsigned __int8)is_cvt64() )
  {
    v15 = (unsigned int)unpack_dd();
    if ( (unsigned int)v15 == 0xFFFFFFFFLL )
      v15 = -1;
  }
  else
  {
    v15 = unpack_dq();
  }
  if ( a5 )
    *a5 = v15;
  if ( a6 )
  {
    if ( &v20 < v18 )
    {
      if ( (unsigned __int8)is_cvt64() )
      {
        v16 = (unsigned int)unpack_dd();
        if ( (_DWORD)v16 == -1 )
          v16 = -1;
      }
      else
      {
        v16 = unpack_dq();
      }
      *a6 = v16;
      if ( (unsigned __int8)is_cvt64() )
      {
        v17 = (unsigned int)unpack_dd();
        if ( (_DWORD)v17 == -1 )
          v17 = -1;
      }
      else
      {
        v17 = unpack_dq();
      }
      a6[1] = v17;
    }
    else
    {
      *(_OWORD *)a6 = 0;
    }
  }
  return 1;
}

