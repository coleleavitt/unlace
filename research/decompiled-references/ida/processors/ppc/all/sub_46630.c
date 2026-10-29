__int64 __fastcall sub_46630(__int64 a1, __int64 *a2, _QWORD *a3)
{
  int v5; // ebp
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int8 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rax
  unsigned __int8 v17; // [rsp+8h] [rbp-50h]
  _QWORD v18[9]; // [rsp+10h] [rbp-48h] BYREF

  v18[1] = __readfsqword(0x28u);
  if ( !sub_46510(a1, a3 + 4) )
  {
    if ( a3[1] )
      goto LABEL_3;
    return 0;
  }
  v13 = a2[1];
  v14 = a2[2];
  LODWORD(v18[0]) = -1;
  v15 = *a2;
  if ( v14 < v13 + 1 )
  {
    v16 = qvector_reserve(a2, v15, v13 + 1, 4);
    *a2 = v16;
    v15 = v16;
    v13 = a2[1];
  }
  *(_DWORD *)(v15 + 4 * v13) = -1;
  ++a2[1];
  if ( !a3[1] )
    return 0;
LABEL_3:
  v17 = 0;
  v5 = 0;
  v6 = 0;
  do
  {
    while ( 1 )
    {
      v7 = *a3 + 80 * v6;
      v8 = getinf_flag(67, 32);
      if ( v8 && (unsigned int)(*(_DWORD *)v7 - 3) <= 1 && (get_tinfo_property(*(_QWORD *)(v7 + 64), 2) & 0x3F) == 9 )
      {
        v18[0] = 25;
        copy_tinfo_t(v7 + 64, v18);
        clear_tinfo_t(v18);
        v17 = v8;
      }
      if ( !(unsigned __int8)getinf_flag(3, 4)
        && (get_tinfo_property(*(_QWORD *)(v7 + 64), 2) & 0x2F) == 0xD
        && ((unsigned int)(*(_DWORD *)(a1 + 288) - 5) > 1
         || (unsigned __int64)get_tinfo_size(0, *(_QWORD *)(v7 + 64), 0) > 0x20) )
      {
        break;
      }
      v6 = ++v5;
      if ( (unsigned __int64)v5 >= a3[1] )
        return v17;
    }
    v9 = a2[1];
    v10 = *a2;
    if ( a2[2] < (unsigned __int64)(v9 + 1) )
    {
      v12 = qvector_reserve(a2, v10, v9 + 1, 4);
      *a2 = v12;
      v10 = v12;
      v9 = a2[1];
    }
    *(_DWORD *)(v10 + 4 * v9) = v5++;
    ++a2[1];
    v6 = v5;
  }
  while ( (unsigned __int64)v5 < a3[1] );
  return v17;
}

