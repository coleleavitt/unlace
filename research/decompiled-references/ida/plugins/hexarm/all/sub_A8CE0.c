__int64 __fastcall sub_A8CE0(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  _BYTE *v3; // r12
  _BYTE *v4; // rbx
  char v6; // bp
  __int64 result; // rax
  int v8; // esi
  int v9; // edx
  _DWORD *v10; // rdi
  int v11; // ecx
  int v12; // ebp
  _BYTE *v13; // rax

  if ( *a2 != 1 )
  {
    if ( !under_debugger )
      sub_3835A0(51590);
LABEL_19:
    BUG();
  }
  v3 = a3;
  if ( *a3 != 1 )
  {
    if ( !under_debugger )
      sub_3835A0(51591);
    goto LABEL_19;
  }
  v4 = a2;
  v6 = sub_11C690(a2, *(_QWORD *)(a1 + 1496), 0);
  if ( v6 != (unsigned __int8)sub_11C690(v3, *(_QWORD *)(a1 + 1496), 0) )
    return 0;
  if ( !(unsigned __int8)sub_11C690(a2, *(_QWORD *)(a1 + 1496), 0) )
  {
    v13 = v3;
    v3 = a2;
    v4 = v13;
  }
  v8 = *((_DWORD *)v3 + 2);
  v9 = *((_DWORD *)v3 + 1);
  if ( v8 + v9 != *((_DWORD *)v4 + 2) )
    return 0;
  v10 = *(_DWORD **)(a1 + 1504);
  result = 1;
  v11 = v10[17];
  if ( v8 < v11 )
  {
    v12 = *((_DWORD *)v4 + 1) + v9;
    if ( v8 + v12 <= v11
      && (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 88LL))(v10)
      && v12 <= (int)sub_133330(*(_QWORD *)(a1 + 1504), 0, *((unsigned int *)v3 + 2), 0x7FFFFFFF, 0)
      && !(unsigned __int8)sub_13AAD0(a1, *((unsigned int *)v3 + 2), -1) )
    {
      return (unsigned int)sub_13AAD0(a1, *((unsigned int *)v4 + 2), -1) ^ 1;
    }
    return 0;
  }
  return result;
}

