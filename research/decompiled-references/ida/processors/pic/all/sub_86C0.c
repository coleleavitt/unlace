__int64 __fastcall sub_86C0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r13
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6; // r13
  __int64 v7; // rax
  _QWORD *v8; // r13
  int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // rdx
  _BYTE *v12; // rcx
  unsigned __int64 v13; // rax

  v2 = a2[2];
  v3 = getseg();
  if ( !v3 )
    return 0;
  v4 = v3;
  result = 0;
  if ( *(_BYTE *)(v4 + 184) == 12 && *(_QWORD *)(*(_QWORD *)(a1 + 24) + 168LL) )
  {
    if ( get_ea_name() <= 0 )
    {
      (*(void (__fastcall **)(_QWORD *, void *, __int64))(*a2 + 136LL))(a2, &unk_D303, 0xFFFFFFFFLL);
    }
    else
    {
      *((_DWORD *)a2 + 36) |= 0x2000u;
      v6 = v2 - get_segm_base();
      v7 = sub_A7E0(a1, v6);
      v8 = (_QWORD *)v7;
      if ( v7 && *(_QWORD *)(v7 + 8) )
      {
        v9 = 0;
        v10 = 0;
        do
        {
          v11 = *v8 + 48 * v10;
          if ( *(_QWORD *)(v11 + 8) )
          {
            v12 = *(_BYTE **)v11;
            if ( *(_QWORD *)v11 )
            {
              if ( *v12 )
                sub_72B0(a1, a2, 1, (__int64)v12, v10);
            }
          }
          ++v9;
          v13 = v8[1];
          v10 = v9;
        }
        while ( v9 < v13 );
        if ( v13 )
          (*(void (__fastcall **)(_QWORD *))(*a2 + 160LL))(a2);
      }
    }
    return 1;
  }
  return result;
}

