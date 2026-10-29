__int64 __fastcall sub_16700(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r12
  __int64 v4; // rax
  unsigned int v5; // edx
  _QWORD *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  _BYTE *v10; // rcx
  _QWORD *v11; // r13
  int v12; // r12d
  __int64 v13; // r8
  int *v14; // r9
  __int64 v15; // rax
  unsigned __int64 v16; // rax

  v2 = (_QWORD *)a2[2];
  v4 = getseg();
  v5 = 0;
  if ( v4 && *(_BYTE *)(v4 + 184) == 12 && *(_QWORD *)(*(_QWORD *)(a1 + 24) + 168LL) )
  {
    if ( get_ea_name() <= 0 )
    {
      (*(void (__fastcall **)(_QWORD *, char *, __int64))(*a2 + 136LL))(a2, &byte_1BE10, 0xFFFFFFFFLL);
    }
    else
    {
      v7 = v2;
      v8 = sub_17C40(a1, v2);
      v11 = (_QWORD *)v8;
      if ( v8 && *(_QWORD *)(v8 + 8) )
      {
        v12 = 0;
        v13 = 0;
        do
        {
          v14 = &dword_1C204;
          v15 = *v11 + 48 * v13;
          if ( *(_QWORD *)(v15 + 32) )
            v14 = *(int **)(v15 + 24);
          if ( *(_QWORD *)(v15 + 8) )
          {
            v10 = *(_BYTE **)v15;
            if ( *(_QWORD *)v15 )
            {
              if ( *v10 )
              {
                v7 = a2;
                sub_15500(a1, a2, 1, (__int64)v10, v13, v14);
              }
            }
          }
          ++v12;
          v16 = v11[1];
          v13 = v12;
        }
        while ( v12 < v16 );
        if ( v16 )
          (*(void (__fastcall **)(_QWORD *, _QWORD *, __int64, _BYTE *, _QWORD, int *))(*a2 + 160LL))(
            a2,
            v7,
            v9,
            v10,
            v12,
            v14);
      }
    }
    return 1;
  }
  return v5;
}

