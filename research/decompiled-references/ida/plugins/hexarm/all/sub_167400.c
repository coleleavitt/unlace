__int64 __fastcall sub_167400(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rdx
  _DWORD *v3; // rax
  unsigned int v4; // ecx

  v2 = *a2;
  v3 = (_DWORD *)*a1;
  v4 = 0;
  if ( *(_DWORD *)*a1 == *(_DWORD *)*a2
    && v3[9] == *(_DWORD *)(v2 + 36)
    && *((_BYTE *)v3 + 32) == 4
    && *(_BYTE *)(v2 + 32) == 4 )
  {
    v4 = 1;
    *a1 = *((_QWORD *)v3 + 5);
    *a2 = *(_QWORD *)(*a2 + 40);
  }
  return v4;
}

