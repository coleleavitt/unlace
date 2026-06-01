__int64 __fastcall sub_2ECA0(_QWORD *a1, _DWORD *a2, _DWORD *a3, unsigned __int64 a4, __int64 a5)
{
  _QWORD *v6; // rax

  v6 = (_QWORD *)sub_2C930(a1, a4, a5);
  if ( !v6 || v6[12] == -1 || !v6[15] )
    return 0;
  if ( a2 )
    *a2 = *(_DWORD *)(v6[14] + 8LL);
  if ( a3 )
    *a3 = *(_DWORD *)(v6[14] + 16LL * v6[15] - 8);
  return 1;
}

