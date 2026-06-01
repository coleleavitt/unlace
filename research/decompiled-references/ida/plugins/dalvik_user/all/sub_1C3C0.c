__int64 __fastcall sub_1C3C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 v5; // rbp
  unsigned int v6; // r13d
  unsigned __int64 v7; // rax
  _DWORD v9[50]; // [rsp+10h] [rbp-108h] BYREF
  unsigned __int64 v10; // [rsp+D8h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 24);
  v10 = __readfsqword(0x28u);
  memset(v9, 0, sizeof(v9));
  if ( netnode_supval() <= 3 )
    return 0;
  if ( (unsigned __int64)((unsigned int)sub_34440(v4, a3) - 1) >= *(_QWORD *)(v4 + 56) )
    goto LABEL_9;
  if ( netnode_supval() <= 199 )
    return 0;
  if ( a2 )
  {
    v5 = *(_QWORD *)(a1 + 24);
    v6 = v9[4];
    v7 = (unsigned int)sub_34440(v5, a3) - 1;
    if ( v7 < *(_QWORD *)(v5 + 56) )
      return sub_34510(a2, *(_QWORD *)(*(_QWORD *)(v5 + 48) + 8 * v7), v6, 86);
LABEL_9:
    sub_16850();
  }
  return 1;
}

