__int64 __fastcall sub_D0730(__int64 a1, int a2, unsigned int a3)
{
  unsigned int v4; // r13d
  int v6; // ebp
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 (__fastcall *v12)(__int64, _QWORD); // rax
  __int64 result; // rax
  unsigned int v14; // [rsp+Ch] [rbp-3Ch]

  v4 = a3 + 1;
  v6 = 0;
LABEL_2:
  v7 = *(_DWORD *)(a1 + 532);
  while ( v7 > v6 )
  {
    while ( 1 )
    {
      v8 = v6++;
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 568) + 8 * v8);
      v10 = *(_QWORD *)(v9 + 16);
      if ( !v10 )
        break;
      v11 = **(_QWORD **)(v9 + 8);
      if ( *(int *)v11 <= 1 )
        break;
      ++*(_DWORD *)(v9 + 24);
      if ( a2 )
      {
        if ( a2 == 2 )
          v12 = *(__int64 (__fastcall **)(__int64, _QWORD))(v11 + 176);
        else
          v12 = *(__int64 (__fastcall **)(__int64, _QWORD))(v11 + 168);
      }
      else
      {
        v12 = *(__int64 (__fastcall **)(__int64, _QWORD))(v11 + 160);
        *(_DWORD *)(v9 + 32) = v4;
      }
      if ( v12 && (signed int)a3 < *(_DWORD *)(v9 + 32) )
      {
        v14 = v12(v10, a3);
        sub_D00D0(v9);
        result = v14;
        if ( !v14 )
          goto LABEL_2;
        return result;
      }
      sub_D00D0(v9);
      v7 = *(_DWORD *)(a1 + 532);
      if ( v7 <= v6 )
        return 0;
    }
  }
  return 0;
}
