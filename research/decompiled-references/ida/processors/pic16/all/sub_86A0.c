__int64 __fastcall sub_86A0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 result; // rax
  __int64 v6; // r13
  __int64 v7; // rax
  _QWORD *v8; // r13
  int v9; // r12d
  __int64 v10; // r8
  __int64 v11; // rdx
  _BYTE *v12; // rcx
  unsigned __int64 v13; // rax

  v2 = *(_QWORD *)(a2 + 16);
  v3 = getseg();
  if ( !v3 )
    return 0;
  v4 = v3;
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 24) + 168LL) )
    return 0;
  if ( get_ea_name() > 0 )
  {
    *(_DWORD *)(a2 + 144) |= 0x2000u;
    v6 = v2 - get_segm_base();
    v7 = sub_A6B0(a1, v6);
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
              sub_7590(*(_QWORD *)(a1 + 24), (_QWORD *)a2, 1, (__int64)v12, v10);
          }
        }
        ++v9;
        v13 = v8[1];
        v10 = v9;
      }
      while ( v9 < v13 );
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 160LL))(a2);
    }
    return 1;
  }
  result = 0;
  if ( *(_BYTE *)(v4 + 184) == 12 )
  {
    (*(void (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a2 + 136LL))(a2, &byte_D4B9, 0xFFFFFFFFLL);
    return 1;
  }
  return result;
}

