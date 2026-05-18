unsigned __int64 __fastcall sub_E96F0(__int64 a1, int a2, int a3, _DWORD *a4)
{
  _WORD *v6; // rbp
  unsigned __int16 v7; // si
  __int64 v8; // r14
  __int64 v9; // r13
  unsigned __int64 result; // rax
  unsigned __int16 v11; // ax
  bool v12; // zf

  v6 = (_WORD *)(*(_QWORD *)(a1 + 96) + 2 * a2);
  v7 = __ROL2__(*v6, 8);
  if ( (unsigned int)v7 + a3 > *(_DWORD *)(*(_QWORD *)(a1 + 72) + 56LL) )
  {
    result = sub_E8BB0(
               0xBu,
               "%s at line %d of [%.10s]",
               "database corruption",
               73717,
               "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
    *a4 = 11;
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 80);
    v9 = *(unsigned __int8 *)(a1 + 9);
    result = sub_E93B0(a1, v7, a3);
    if ( (_DWORD)result )
    {
      *a4 = result;
    }
    else
    {
      v11 = *(_WORD *)(a1 + 24) - 1;
      v12 = *(_WORD *)(a1 + 24) == 1;
      *(_WORD *)(a1 + 24) = v11;
      if ( v12 )
      {
        *(_DWORD *)(v8 + v9 + 1) = 0;
        *(_BYTE *)(v8 + v9 + 7) = 0;
        *(_BYTE *)(v8 + v9 + 5) = BYTE1(*(_DWORD *)(*(_QWORD *)(a1 + 72) + 56LL));
        *(_BYTE *)(v8 + v9 + 6) = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 56LL);
        result = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 56LL)
               - *(unsigned __int8 *)(a1 + 9)
               - (unsigned int)*(unsigned __int8 *)(a1 + 10)
               - 8;
        *(_DWORD *)(a1 + 20) = result;
      }
      else
      {
        memmove(v6, v6 + 1, 2 * (v11 - a2));
        *(_BYTE *)(v8 + v9 + 3) = *(_BYTE *)(a1 + 25);
        result = *(unsigned __int16 *)(a1 + 24);
        *(_BYTE *)(v8 + v9 + 4) = result;
        *(_DWORD *)(a1 + 20) += 2;
      }
    }
  }
  return result;
}
