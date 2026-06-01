__int64 __fastcall sub_5BF0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v6; // rax
  unsigned __int64 v7; // rdx

  if ( *(_DWORD *)a3 == 1 )
  {
    *(_QWORD *)(a1 + 48) = 0;
    v4 = *(_QWORD *)(a3 + 4);
    v6 = a2[3];
    v7 = v6 + v4;
    if ( __CFADD__(v6, v4) || a2[1] < v7 )
      sub_5BD0(a1, a2, v7);
    utf16_utf8(a1 + 40, *a2 + v6, v4 / 2);
    *(_DWORD *)(a1 + 32) = *(_DWORD *)a3;
    return 0;
  }
  else
  {
    *(_DWORD *)(a1 + 32) = *(_DWORD *)a3;
    return 0;
  }
}
