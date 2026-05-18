__int64 __fastcall sub_169550(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // r12
  __int64 v5; // r13
  unsigned __int64 v6; // rbp
  __int64 (__fastcall *v7)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  int v8; // eax
  signed int v9; // esi

  v2 = *(_QWORD *)(a1 + 40);
  if ( !v2 )
    return 0;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = v4 + 32 * v2 - 32;
  v6 = sub_199140(a1, a2);
  if ( v6 >= *(_QWORD *)(v5 + 16) )
  {
    v7 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(a1 + 8);
    if ( v7 )
    {
      v8 = v7(*(unsigned __int8 *)(v4 + 24), *(_QWORD *)(v4 + 8), *(_QWORD *)v4, *(_QWORD *)(a1 + 16));
      if ( v8 == 2 )
      {
        *(_DWORD *)(a1 + 96) = -15059582;
        *(_QWORD *)(a1 + 88) = "cancelled";
        return 1;
      }
      if ( v8 == 1 )
      {
        *(_DWORD *)(a1 + 96) = -21015;
        *(_QWORD *)(a1 + 88) = "skip_iter";
      }
      else
      {
        v9 = *(_DWORD *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 8) && v9 >= 0 )
          *(_QWORD *)(v5 + 16) = sub_167150(v6, v9);
        else
          *(_QWORD *)(v5 + 16) = 0;
      }
    }
  }
  return 0;
}
