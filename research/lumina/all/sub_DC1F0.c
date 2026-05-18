__int64 __fastcall sub_DC1F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 result; // rax
  __int64 *v6; // rax
  __int64 v7; // rdx

  v4 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(a1 + 17) )
  {
    sub_CC740(a1);
    if ( *(_QWORD *)(v4 + 72) )
      goto LABEL_5;
    a2 = (unsigned int)a2;
    if ( !(_DWORD)a2 )
      goto LABEL_5;
  }
  else
  {
    result = *(_QWORD *)(v4 + 72);
    if ( result || !(_DWORD)a2 )
      return result;
  }
  a2 = (int)a2;
  v6 = sub_DC1C0(0, (int)a2);
  *(_QWORD *)(v4 + 80) = a3;
  *(_QWORD *)(v4 + 72) = v6;
LABEL_5:
  if ( *(_BYTE *)(a1 + 17) )
  {
    if ( (*(_DWORD *)(a1 + 20))-- == 1 )
      sub_CC7D0(a1, a2, v7);
  }
  return *(_QWORD *)(v4 + 72);
}
