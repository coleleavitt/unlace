void __fastcall sub_487E0(__int64 a1, char a2)
{
  unsigned __int64 v3; // rdx
  _QWORD *v4; // rsi
  __int64 v5; // r12
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx

  if ( *(_BYTE *)(a1 + 969) )
  {
    v3 = *(_QWORD *)(a1 + 848);
    if ( v3 <= 0x13 )
    {
      v4 = *(_QWORD **)(a1 + 840);
      v5 = *(_QWORD *)(a1 + 32);
      v6 = &v4[v3];
      if ( v4 == v6 )
        goto LABEL_13;
      v7 = *(_QWORD **)(a1 + 840);
      while ( v5 != *v7 )
      {
        if ( v6 == ++v7 )
          goto LABEL_13;
      }
      if ( v7 == v6 )
      {
LABEL_13:
        if ( *(_QWORD *)(a1 + 856) < v3 + 1 )
        {
          v8 = qvector_reserve();
          v9 = *(_QWORD *)(a1 + 848);
          *(_QWORD *)(a1 + 840) = v8;
          v6 = (_QWORD *)(v8 + 8 * v9);
        }
        *v6 = v5;
        ++*(_QWORD *)(a1 + 848);
      }
    }
    else
    {
      *(_BYTE *)(a1 + 792) = 1;
    }
  }
  if ( a2 && *(_QWORD *)(a1 + 392) != -1 && *(_QWORD *)(a1 + 400) == -1 && !*(_BYTE *)(a1 + 514) )
    **(_DWORD **)(a1 + 376) |= 0x2000u;
}
