__int64 *__fastcall sub_CCA0(__int64 a1, unsigned __int8 a2)
{
  unsigned int v2; // eax
  bool v3; // zf
  __int64 *v4; // rax
  bool v6; // cf
  __int64 *v7; // rax

  v2 = *(_DWORD *)(a1 + 4328);
  if ( v2 <= 5 )
  {
    v6 = v2 < 4;
    v7 = qword_27340;
    if ( !v6 )
      v7 = qword_23860;
    return &v7[9 * a2];
  }
  else
  {
    v3 = v2 == 6;
    v4 = qword_27340;
    if ( v3 )
      v4 = qword_20400;
    return &v4[9 * a2];
  }
}

