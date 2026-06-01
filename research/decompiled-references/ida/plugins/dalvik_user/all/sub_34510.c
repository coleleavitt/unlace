__int64 __fastcall sub_34510(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  size_t v5; // r12
  __int64 v6; // rsi
  __int128 v7; // kr00_16
  __int64 v8; // rdi
  void *v9; // [rsp+0h] [rbp-458h]
  __int128 v10; // [rsp+8h] [rbp-450h]
  char src; // [rsp+20h] [rbp-438h] BYREF
  unsigned __int64 v12; // [rsp+428h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v2 = netnode_supval();
  if ( v2 >= 0 )
  {
    v3 = v2;
    if ( v2 == 9 )
    {
      if ( !src )
      {
        netnode_qgetblob();
        return 1;
      }
      v5 = 8;
      v10 = 0;
    }
    else
    {
      if ( !v2 )
        return 1;
      v6 = 0;
      v10 = 0;
      v5 = v2 - 1;
      v7 = 0u;
      if ( v2 == 1 )
      {
LABEL_8:
        v8 = *a1;
        *a1 = v6;
        *(_OWORD *)(a1 + 1) = v7;
        if ( v8 )
          qfree();
        return 1;
      }
    }
    v9 = (void *)qvector_reserve();
    *(_QWORD *)&v10 = v3;
    memmove(v9, &src, v5);
    *((_BYTE *)v9 + v5) = 0;
    v6 = (__int64)v9;
    v7 = v10;
    goto LABEL_8;
  }
  return 0;
}

