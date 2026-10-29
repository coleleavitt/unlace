__int64 __fastcall sub_F2BF0(__int64 a1, double a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 i; // rbx
  __int64 v9; // rax

  sub_64280((__int64 *)(a1 + 240), (__int64 *)(a1 + 96), a2);
  result = sub_316CB0((__int64 *)(a1 + 256), (__int64 **)(a1 + 112), v3, v4);
  v6 = *(_QWORD *)(a1 + 48);
  if ( v6 )
  {
    v7 = *(_QWORD *)(a1 + 56);
    if ( v7 )
    {
      for ( i = 0; i != v7; ++i )
      {
        v9 = i;
        sub_11CDA0(16 * v9 + v6);
        v6 = *(_QWORD *)(a1 + 48);
      }
    }
    *(_QWORD *)(a1 + 56) = 0;
    result = qfree(v6);
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 64) = 0;
  }
  *(_DWORD *)(a1 + 280) |= 1u;
  return result;
}

