_DWORD *__fastcall sub_100B30(__int64 a1, __int64 a2)
{
  _DWORD *result; // rax
  int v3; // edx

  if ( (unsigned int)sub_FEBD0(a1, a2) )
    return &unk_241420;
  result = (_DWORD *)sub_D1E10(32, a2);
  if ( !result )
    return &unk_241420;
  v3 = 1000000000;
  if ( a1 )
    v3 = *(_DWORD *)(a1 + 136);
  result[5] = v3;
  *((_QWORD *)result + 1) = 0;
  *(_QWORD *)result = 0;
  result[4] = 0;
  result[6] = 0;
  *((_WORD *)result + 14) = 0;
  return result;
}
