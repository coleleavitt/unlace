__int64 __fastcall sub_31B70(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // r12
  __int64 v4; // r13
  unsigned __int64 v5; // rbp
  __int64 (__fastcall *v6)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  int v7; // eax
  signed int v8; // esi

  v1 = *(_QWORD *)(a1 + 40);
  if ( !v1 )
    return 0;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = v3 + 32 * v1 - 32;
  v5 = qtime64();
  if ( v5 >= *(_QWORD *)(v4 + 16) )
  {
    v6 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(a1 + 8);
    if ( v6 )
    {
      v7 = v6(*(unsigned __int8 *)(v3 + 24), *(_QWORD *)(v3 + 8), *(_QWORD *)v3, *(_QWORD *)(a1 + 16));
      if ( v7 == 2 )
      {
        *(_DWORD *)(a1 + 96) = -15059582;
        *(_QWORD *)(a1 + 88) = "cancelled";
        return 1;
      }
      if ( v7 == 1 )
      {
        *(_DWORD *)(a1 + 96) = -21015;
        *(_QWORD *)(a1 + 88) = "skip_iter";
      }
      else
      {
        v8 = *(_DWORD *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 8) && v8 >= 0 )
          *(_QWORD *)(v4 + 16) = sub_30220(v5, v8);
        else
          *(_QWORD *)(v4 + 16) = 0;
      }
    }
  }
  return 0;
}

