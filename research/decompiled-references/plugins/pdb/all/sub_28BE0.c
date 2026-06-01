__int64 __fastcall sub_28BE0(__int64 a1, __int64 *a2, __int64 a3, _DWORD *a4)
{
  bool v6; // cc
  _DWORD *v7; // rsi
  __int64 v9; // rax

  v6 = (unsigned __int64)a2[2] <= 4;
  v7 = (_DWORD *)*a2;
  if ( v6 )
  {
    v9 = qvector_reserve(a2, v7, 5, 1);
    *a2 = v9;
    v7 = (_DWORD *)v9;
  }
  a2[1] = 5;
  *v7 = 1953719668;
  *(_BYTE *)(*a2 + 4) = 0;
  *a4 = 1;
  return 1;
}
