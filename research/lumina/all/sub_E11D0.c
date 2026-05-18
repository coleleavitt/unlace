__int64 __fastcall sub_E11D0(__int64 **a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 *v3; // r12
  __int64 v4; // rdi
  __int64 v5; // rbx
  __m128i *v6; // rax

  if ( (*(_DWORD *)(a2 + 4) & 0x6000) == 0 )
  {
    v2 = *(_QWORD *)(a2 + 56);
    if ( v2 )
    {
      v3 = *a1;
      v4 = **a1;
      v5 = 32LL * *(__int16 *)(a2 + 50);
      if ( *(_BYTE *)a2 == 0xA9 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v2 + 32) + v5 + 8) != a2 )
          return 0;
        if ( !a2 )
          return 0;
        v6 = sub_DD6E0(v4, a2, 0, nullptr);
        if ( !v6 )
          return 0;
        *(_QWORD *)(*(_QWORD *)(v2 + 32) + v5 + 8) = v6;
      }
      else
      {
        if ( *(_QWORD *)(*(_QWORD *)(v2 + 48) + 32LL * *(__int16 *)(a2 + 50)) != a2 )
          return 0;
        if ( !a2 )
          return 0;
        v6 = sub_DD6E0(v4, a2, 0, nullptr);
        if ( !v6 )
          return 0;
        *(_QWORD *)(*(_QWORD *)(v2 + 48) + v5) = v6;
      }
      v3[11] = (__int64)sub_E0F20(v3, (int *)v3[11], (__int64)v6);
    }
    return 0;
  }
  return 0;
}
