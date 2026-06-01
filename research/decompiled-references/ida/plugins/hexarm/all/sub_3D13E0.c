__int64 __fastcall sub_3D13E0(__int64 a1, int a2, __int64 a3, __int64 a4, unsigned int a5, double a6)
{
  __int64 v9; // r12
  unsigned __int8 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // rax
  int v13; // edx
  int v14; // r15d
  __int64 v15; // rdi
  __int64 result; // rax
  int v17; // edx
  __int64 v18; // rsi
  __int64 v19; // rcx
  char v20; // al
  __int64 range; // rax
  __int64 v22; // [rsp+0h] [rbp-48h]
  unsigned __int8 v24; // [rsp+Ch] [rbp-3Ch]
  unsigned __int8 v25; // [rsp+Ch] [rbp-3Ch]

  v9 = *(_QWORD *)(a3 + 64);
  v10 = 0;
  if ( v9 != -1 )
    v10 = v9 == sub_3CF560((unsigned __int8 *)a1, *(_QWORD *)(a4 + 64), a6);
  if ( *(_BYTE *)a1 == 4 )
  {
    v24 = v10;
    v12 = sub_3D02B0(*(_QWORD *)(a1 + 8), a3, a4, a5, v10);
  }
  else
  {
    if ( *(_BYTE *)a1 == 2
      && (v25 = v10, v20 = is_mapped(), v10 = v25, v20)
      && *(_QWORD *)(a4 + 24)
      && (range = rangeset_t_find_range(), v10 = v25, range) )
    {
      v11 = **(_QWORD **)(a1 + 8);
    }
    else
    {
      v11 = -1;
    }
    v24 = v10;
    v12 = sub_3CFA90(v11, a3, a4, a5, v10);
  }
  v14 = v13;
  v15 = -1;
  if ( a2 == 2 )
    v15 = *(_QWORD *)(a1 + 16);
  v22 = v12;
  result = sub_3CFA90(v15, a3, a4, a5, v24);
  if ( v17 <= v14 )
  {
    if ( v17 < v14 )
      return v22;
    if ( v14 )
    {
      if ( result > v22 )
        return result;
      return v22;
    }
    v18 = -v22;
    if ( v22 > 0 )
      v18 = v22;
    v19 = -result;
    if ( result > 0 )
      v19 = result;
    if ( v18 <= v19 && (v18 < v19 || result >= v22) )
      return v22;
  }
  return result;
}

