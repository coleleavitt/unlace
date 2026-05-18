unsigned __int64 __fastcall sub_CBDE0(__int64 a1, __int64 a2)
{
  unsigned int v3; // ecx
  unsigned int v4; // r12d
  int v5; // r13d
  unsigned __int64 result; // rax
  __int64 *i; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rax

  v3 = *(_DWORD *)(a1 + 60);
  if ( *(_DWORD *)(a1 + 44) - (int)a2 >= v3 )
  {
    v4 = v3 >> 1;
    v5 = (v3 >> 1) - 1;
  }
  else
  {
    v4 = (unsigned int)a2 % v3;
    v5 = *(_DWORD *)(a1 + 44) % v3;
  }
  while ( 1 )
  {
    result = v4;
    for ( i = (__int64 *)(*(_QWORD *)(a1 + 64) + 8LL * v4); ; i = (__int64 *)(v8 + 24) )
    {
      v8 = *i;
      if ( !*i )
        break;
      while ( *(_DWORD *)(v8 + 16) >= (unsigned int)a2 )
      {
        --*(_DWORD *)(a1 + 56);
        *i = *(_QWORD *)(v8 + 24);
        v9 = *(_QWORD *)(v8 + 40);
        if ( v9 )
        {
          *(_QWORD *)(*(_QWORD *)(v8 + 48) + 40LL) = v9;
          v9 = *(_QWORD *)(v8 + 48);
          *(_QWORD *)(*(_QWORD *)(v8 + 40) + 48LL) = v9;
          v10 = *(_QWORD *)(v8 + 32);
          *(_QWORD *)(v8 + 40) = 0;
          --*(_DWORD *)(v10 + 52);
        }
        result = (unsigned __int64)sub_CBD10(v8, a2, v9);
        v8 = *i;
        if ( !*i )
          goto LABEL_9;
      }
    }
LABEL_9:
    if ( v4 == v5 )
      return result;
    v4 = (v4 + 1) % *(_DWORD *)(a1 + 60);
  }
}
