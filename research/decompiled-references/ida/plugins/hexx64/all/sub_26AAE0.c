bool __fastcall sub_26AAE0(__int64 a1, _QWORD *a2, __int64 a3, double a4)
{
  __int64 v4; // r13
  __int64 v5; // rax
  int v7; // ebx
  int v8; // ecx
  __int64 v9; // r14
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // eax
  char v15; // cl
  unsigned __int64 v16; // rax
  __int128 v17; // rax
  __int64 v18; // rcx
  __int64 v20; // rax

  if ( a3 <= 0 )
  {
    if ( !under_debugger )
      sub_383060(0xCD03u, a4);
    BUG();
  }
  v4 = *a2;
  v5 = a2[3];
  v7 = a3;
  v8 = *(_DWORD *)(*a2 + 8LL);
  if ( v8 != 65 )
  {
    if ( !(v5 % a3) )
      return 1;
    if ( v8 != 34 )
    {
      if ( v8 == 37 )
      {
        v9 = *(_QWORD *)(v4 + 24);
        if ( *(_DWORD *)(v9 + 8) == 61 || (v9 = *(_QWORD *)(v4 + 32), *(_DWORD *)(v9 + 8) == 61) )
        {
          if ( v9 )
          {
            v10 = sub_255A30(*(__int64 **)(v9 + 24));
            v11 = a2[3];
            if ( (!v10 || !v11 || *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) / v10 >= v11) && !((__int64)(v11 * v10) % v7) )
            {
              a2[3] = v11 * v10;
              v12 = *(_QWORD *)(v4 + 24);
              if ( v12 == v9 )
                v12 = *(_QWORD *)(v4 + 32);
              goto LABEL_21;
            }
          }
        }
      }
      return 0;
    }
    v13 = *(_QWORD *)(v4 + 32);
    if ( *(_DWORD *)(v13 + 8) == 61 )
    {
      v14 = sub_255A30(*(__int64 **)(v13 + 24));
      v15 = v14;
      if ( (unsigned __int64)v14 > 0x3F || (v16 = a2[3]) == 0 )
      {
        v18 = 0;
LABEL_20:
        a2[3] = v18;
        v12 = *(_QWORD *)(v4 + 24);
LABEL_21:
        *a2 = v12;
        return 1;
      }
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) >> v15 >= v16 )
      {
        v17 = (__int64)(v16 << v15);
        v18 = v17;
        if ( !(unsigned __int64)(v17 % v7) )
          goto LABEL_20;
      }
    }
    return 0;
  }
  v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 432LL) + 104LL * *(int *)(v4 + 32) + 96) * v5;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 24LL) == 8 )
    return v20 % a3 == 0;
  else
    return (int)v20 % a3 == 0;
}

