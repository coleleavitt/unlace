unsigned __int64 __fastcall sub_22DA0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  _QWORD *v4; // rsi
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // [rsp+8h] [rbp-20h]

  v2 = a1[7];
  v10 = __readfsqword(0x28u);
  v4 = (_QWORD *)a1[6];
  a1[4] = a1[2];
  v5 = &v4[v2];
  if ( v4 == v5 )
    goto LABEL_7;
  v6 = v4;
  while ( a2 != *v6 )
  {
    if ( v5 == ++v6 )
      goto LABEL_7;
  }
  if ( v5 == v6 )
  {
LABEL_7:
    if ( a1[8] < (unsigned __int64)(v2 + 1) )
    {
      v8 = qvector_reserve();
      v9 = a1[7];
      a1[6] = v8;
      v5 = (_QWORD *)(v8 + 8 * v9);
    }
    *v5 = a2;
    ++a1[7];
  }
  netnode_supset();
  return v10 - __readfsqword(0x28u);
}
