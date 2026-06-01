__int64 __fastcall sub_1DA920(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4, int a5)
{
  __int64 v7; // r15
  __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  __int64 result; // rax
  _QWORD *v11; // rax
  __int64 v12; // rcx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rbx
  int v16; // eax
  int v17; // r12d
  __int64 v18; // r13
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  void (*v22)(); // rax

  if ( *(int *)(a3 + 96) <= 0 )
  {
    v8 = 0;
  }
  else
  {
    v7 = 0;
    v8 = 0;
    do
    {
      if ( sub_60730(a4, v7) )
        v8 = *(_QWORD *)(*(_QWORD *)(a3 + 72) + (v7 << 6) + 8) + v8 - *(_QWORD *)(*(_QWORD *)(a3 + 72) + (v7 << 6));
      ++v7;
    }
    while ( *(_DWORD *)(a3 + 96) > (int)v7 );
  }
  v9 = a2[101] + v8;
  a2[101] = v9;
  if ( (int)(*(_DWORD *)(*(_QWORD *)(a1 + 1496) + 652LL) << 10) < v9 )
    return 4294967267LL;
  *(_QWORD *)(a1 + 920) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1504) + 336LL))(*(_QWORD *)(a1 + 1504));
  result = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD *))(*a2 + 16LL))(a2, a3, a4);
  if ( !(_DWORD)result )
  {
    if ( !*(_QWORD *)(a1 + 8)
      || (v11 = sub_1CA620(a1), v11[4] == *(_QWORD *)(a1 + 88))
      && *((unsigned __int16 *)v11 + 20) == *(_QWORD *)(a1 + 96)
      && v11[7] == *(_QWORD *)(a1 + 104) )
    {
      sub_63DD0(a1, *(_QWORD *)(a1 + 40), 2);
      result = sub_1D27C0(a1, (__int64)a2, a3, a4, *(_QWORD **)(a1 + 8), a5);
      if ( !(_DWORD)result )
      {
        v15 = 0;
        if ( *(int *)(a1 + 64) > 1 )
        {
          while ( 1 )
          {
            v17 = v15 + 1;
            v18 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * (v15 + 1));
            if ( !(unsigned __int8)sub_1D1250(v18) )
              break;
            v16 = *(_DWORD *)(a1 + 64);
            if ( (int)v15 + 2 >= v16 )
              goto LABEL_20;
            ++v15;
            if ( v17 + 1 >= (unsigned int)v16 )
            {
              if ( !under_debugger )
                sub_37E160(52719);
              BUG();
            }
          }
          *(_QWORD *)(a1 + 488) = *(_QWORD *)(v18 + 32);
        }
LABEL_20:
        if ( !*(_QWORD *)(a1 + 8) || (result = sub_1DA780(a1, (__int64)a2, a5, v12, v13, v14), !(_DWORD)result) )
        {
          sub_1D0DF0(a1);
          v22 = *(void (**)())(*a2 + 40LL);
          if ( v22 != nullsub_121 )
            ((void (__fastcall *)(_QWORD *))v22)(a2);
          *(_DWORD *)(*(_QWORD *)(a1 + 1496) + 988LL) = *(_DWORD *)(a1 + 64);
          result = sub_339220(*(_QWORD *)(a1 + 1496), 3, a1, v19, v20, v21);
          if ( !(_DWORD)result )
          {
            result = sub_32BEC0(a1, 1);
            if ( (_DWORD)result )
              return 4294967263LL;
          }
        }
      }
    }
    else
    {
      return 4294967283LL;
    }
  }
  return result;
}

