unsigned __int64 __fastcall sub_37550(__int64 a1, __int64 *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // r13
  unsigned __int64 v5; // r15
  __int64 v6; // rbx
  unsigned __int64 tinfo_size; // rax
  __int64 v8; // rax
  __int64 v9; // rsi
  int v10; // ebx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned __int64 v16; // [rsp+8h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_32E60(a1, (_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL)) )
  {
    v13 = a2[1];
    v14 = *a2;
    if ( a2[2] < (unsigned __int64)(v13 + 1) )
    {
      v15 = qvector_reserve(a2, v14, v13 + 1, 4);
      *a2 = v15;
      v14 = v15;
      v13 = a2[1];
    }
    *(_DWORD *)(v14 + 4 * v13) = -1;
    ++a2[1];
  }
  v3 = *(_QWORD **)(a1 + 24);
  v4 = v3[1];
  if ( v4 )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = *v3 + 80 * v5;
      tinfo_size = get_tinfo_size(0, *(_QWORD *)(v6 + 64), 0);
      if ( (unsigned int)sub_370E0(a1, (_QWORD *)(v6 + 64), tinfo_size, v5, 0) == 4 )
      {
        v8 = a2[1];
        v9 = *a2;
        v10 = v5;
        if ( a2[2] < (unsigned __int64)(v8 + 1) )
        {
          v12 = qvector_reserve(a2, v9, v8 + 1, 4);
          *a2 = v12;
          v9 = v12;
          v8 = a2[1];
        }
        ++v5;
        *(_DWORD *)(v9 + 4 * v8) = v10;
        ++a2[1];
        if ( v4 == v5 )
          return v16 - __readfsqword(0x28u);
      }
      else if ( v4 == ++v5 )
      {
        return v16 - __readfsqword(0x28u);
      }
      v3 = *(_QWORD **)(a1 + 24);
    }
  }
  return v16 - __readfsqword(0x28u);
}
