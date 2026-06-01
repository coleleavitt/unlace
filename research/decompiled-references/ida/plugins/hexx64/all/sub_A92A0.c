__int64 __fastcall sub_A92A0(__int64 a1, unsigned __int8 *a2, unsigned __int8 *a3, double a4)
{
  unsigned __int8 *v4; // r12
  unsigned __int8 *v5; // rbx
  char v7; // bp
  __int64 result; // rax
  int v9; // esi
  int v10; // edx
  _DWORD *v11; // rdi
  int v12; // ecx
  int v13; // ebp
  unsigned __int8 *v14; // rax

  if ( *a2 != 1 )
  {
    if ( !under_debugger )
      sub_383060(0xC986u, a4);
LABEL_19:
    BUG();
  }
  v4 = a3;
  if ( *a3 != 1 )
  {
    if ( !under_debugger )
      sub_383060(0xC987u, a4);
    goto LABEL_19;
  }
  v5 = a2;
  v7 = sub_11CC50(a2, *(_QWORD *)(a1 + 1496));
  if ( v7 != sub_11CC50(v4, *(_QWORD *)(a1 + 1496)) )
    return 0;
  if ( !sub_11CC50(a2, *(_QWORD *)(a1 + 1496)) )
  {
    v14 = v4;
    v4 = a2;
    v5 = v14;
  }
  v9 = *((_DWORD *)v4 + 2);
  v10 = *((_DWORD *)v4 + 1);
  if ( v9 + v10 != *((_DWORD *)v5 + 2) )
    return 0;
  v11 = *(_DWORD **)(a1 + 1504);
  result = 1;
  v12 = v11[17];
  if ( v9 < v12 )
  {
    v13 = *((_DWORD *)v5 + 1) + v10;
    if ( v9 + v13 <= v12
      && (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 88LL))(v11)
      && v13 <= (int)sub_1338F0(*(_DWORD **)(a1 + 1504), nullptr, *((_DWORD *)v4 + 2), 0x7FFFFFFFu)
      && !(unsigned __int8)sub_13B090(a1, *((_DWORD *)v4 + 2)) )
    {
      return (unsigned int)sub_13B090(a1, *((_DWORD *)v5 + 2)) ^ 1;
    }
    return 0;
  }
  return result;
}

