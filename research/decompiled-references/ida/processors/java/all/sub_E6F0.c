__int64 __fastcall sub_E6F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rbx
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 60);
  v3 = *(_QWORD *)(a2 + 16) + *(unsigned int *)(a2 + 12);
  v4 = netnode_supfirst(v2, 83);
  if ( v4 < *(_QWORD *)(a2 + 16) )
LABEL_11:
    sub_E6A0();
  v5 = v4;
  do
  {
    if ( v5 >= v3 || netnode_supval(v2, v5, 0, 0, 83) != 12 )
      goto LABEL_11;
    if ( (get_flags_ex(v5, 4) & 0x400) == 0 )
    {
      remember_problem(8, v5, 0);
      if ( !*(_BYTE *)(a1 + 153) )
      {
        *(_BYTE *)(a1 + 153) = 1;
        sub_E500((__int64)&unk_227BE);
      }
      sub_E500(
        (__int64)"StackMap refers to nonHead offset %X in Method#%u\n",
        v5 - *(_DWORD *)(a2 + 16),
        *(unsigned __int16 *)(a2 + 6));
    }
    result = netnode_supnext(v2, v5, 83);
    v5 = result;
  }
  while ( result != -1 );
  return result;
}

