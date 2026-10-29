_BOOL8 __fastcall sub_206A80(__int64 a1, _BYTE *a2, __int64 a3, unsigned __int8 a4, double a5, __m128 a6)
{
  __int64 *v8; // r12
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  unsigned __int64 *v12; // rcx
  unsigned __int64 *v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx

  if ( (**(_DWORD **)(a1 + 8) & 0x40000) != 0 )
    return 0;
  if ( *a2 != 15 )
  {
    if ( *a2 == 5
      && **(_DWORD **)(a1 + 32) != 62
      && (unsigned __int8)sub_1CBA80(*(_QWORD *)(a1 + 16), *(_QWORD *)(a3 + 24), (unsigned __int64)a2, a4, a5, a6) )
    {
      v8 = *(__int64 **)(*(_QWORD *)(a1 + 184) + 112LL);
      v9 = sub_330F80(*(_QWORD **)(a1 + 8), *(_QWORD *)(*(_QWORD *)(a3 + 32) + 24LL));
      v10 = v8[1];
      v11 = v9;
      v12 = (unsigned __int64 *)(*v8 + 8 * v10);
      if ( (unsigned __int64 *)*v8 == v12 )
        goto LABEL_15;
      v13 = (unsigned __int64 *)*v8;
      while ( v11 != *v13 )
      {
        if ( v12 == ++v13 )
          goto LABEL_15;
      }
      if ( v12 == v13 )
      {
LABEL_15:
        v14 = v10 + 1;
        if ( v8[2] < v14 )
        {
          v15 = qvector_reserve((__int64)v8, *v8, v14, 8);
          v16 = v8[1];
          *v8 = v15;
          v12 = (unsigned __int64 *)(v15 + 8 * v16);
        }
        *v12 = v11;
        ++v8[1];
      }
      return 1;
    }
    return 0;
  }
  return (unsigned __int8)sub_1CBA80(*(_QWORD *)(a1 + 16), *(_QWORD *)(a3 + 24), (unsigned __int64)a2, a4, a5, a6) != 0;
}

