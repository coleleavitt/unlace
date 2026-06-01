unsigned __int64 __fastcall sub_496A0(_QWORD *a1)
{
  __int64 v1; // rdx
  _QWORD *v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rbp
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // [rsp+0h] [rbp-28h]
  unsigned __int64 v11; // [rsp+8h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v1 = a1[47];
  if ( (*(_DWORD *)v1 & 0x200) != 0
    && (*(_QWORD *)(v1 + 56) == *(_QWORD *)(v1 + 8) || (unsigned __int8)get_data_value() && !v10) )
  {
    v3 = (_QWORD *)a1[105];
    v4 = a1[106];
    v5 = a1[117];
    v6 = &v3[v4];
    if ( v3 == v6 )
      goto LABEL_11;
    v7 = (_QWORD *)a1[105];
    while ( v5 != *v7 )
    {
      if ( v6 == ++v7 )
        goto LABEL_11;
    }
    if ( v7 == v6 )
    {
LABEL_11:
      if ( a1[107] < (unsigned __int64)(v4 + 1) )
      {
        v8 = qvector_reserve();
        v9 = a1[106];
        a1[105] = v8;
        v6 = (_QWORD *)(v8 + 8 * v9);
      }
      *v6 = v5;
      ++a1[106];
    }
  }
  return v11 - __readfsqword(0x28u);
}

