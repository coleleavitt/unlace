__int64 __fastcall sub_28DAE0(__int64 a1, __int64 a2, double a3)
{
  int v3; // ebp
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // eax
  __int64 i; // rdx
  __int64 *v17; // rbx
  int v18; // ecx
  __int64 v19; // rax

  v3 = *(_DWORD *)(*(_QWORD *)(a2 + 24) + 8LL);
  if ( (unsigned int)(v3 - 17) > 1
    || (unsigned __int8)sub_285160(a2, 1, 1)
    || (unsigned __int8)sub_285160(a2, 66, 1)
    || (unsigned __int8)sub_285230(a2) )
  {
    return 0;
  }
  sub_255850((__int64 *)a2, *(_QWORD *)(a2 + 24), a3);
  v6 = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 8) = (v3 != 18) + 17;
  v10 = sub_244460(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v6, v7, v8, v9, a3);
  v11 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 24) = v10;
  *(_QWORD *)(a2 + 32) = sub_244460(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v11, v12, v13, v14, a3);
  v15 = *(_DWORD *)(a1 + 24) - 1;
  if ( v15 >= 0 )
  {
    for ( i = *(_QWORD *)(a1 + 16) + 8LL * (unsigned int)v15; ; i -= 8 )
    {
      v17 = *(__int64 **)i;
      v18 = *(_DWORD *)(*(_QWORD *)i + 8LL);
      if ( v18 > 69 )
        break;
      if ( --v15 == -1 )
        return 1;
    }
    if ( v18 == 73 )
    {
      v19 = sub_2418B0(v17[3]);
      if ( v19 != -1 )
        *v17 = v19;
    }
  }
  return 1;
}

