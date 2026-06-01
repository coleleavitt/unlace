__int64 __fastcall sub_B190(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rbp
  __int64 v3; // rax
  int v5; // r12d
  __int64 (__fastcall *v6)(_QWORD *, char); // rdx
  unsigned int v7; // ebp
  __int64 v8; // r13
  unsigned __int64 v9; // r14
  __int64 v10; // rsi
  void *v11; // rax
  size_t v12; // r14
  char v13; // r12
  char v14; // bp
  size_t v15; // r8
  _BYTE *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  size_t v19; // [rsp+0h] [rbp-118h]
  void *src; // [rsp+8h] [rbp-110h]
  void *v21; // [rsp+30h] [rbp-E8h]
  char v22[136]; // [rsp+50h] [rbp-C8h] BYREF
  unsigned __int64 v23; // [rsp+D8h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 240);
  v23 = __readfsqword(0x28u);
  v2 = getseg();
  v3 = *(_QWORD *)(a1 + 632);
  if ( v2 && *(_BYTE *)(v2 + 184) == 12 && *(_QWORD *)(v3 + 168) )
  {
    if ( get_ea_name() <= 0 || (*(_BYTE *)(*(_QWORD *)(a1 + 632) + 5LL) & 8) != 0 && (unsigned int)sub_BF80(nullptr) )
    {
      v17 = *(_QWORD *)a1;
      *(_DWORD *)(a1 + 144) &= 0xFFFFE7FF;
      (*(void (__fastcall **)(__int64, char *, __int64))(v17 + 136))(a1, &byte_D3A1, 0xFFFFFFFFLL);
      return 1;
    }
    get_ea_name();
    v5 = v1 - get_segm_base();
    sub_AED0((_QWORD *)a1, 0, v5);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 632) + 4LL) & 0x40) == 0 && (v5 & 7) == 0 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, 9);
      v6 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
      v7 = (*(_WORD *)(*(_QWORD *)(a1 + 632) + 4LL) & 8) == 0 ? 46 : 95;
      if ( v6 == sub_9F00 )
      {
        v8 = *(_QWORD *)(a1 + 32);
        v9 = 2;
        if ( v8 )
          v9 = v8-- + 1;
        v10 = *(_QWORD *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 40) < v9 )
        {
          v18 = qvector_reserve();
          *(_QWORD *)(a1 + 24) = v18;
          v10 = v18;
        }
        *(_QWORD *)(a1 + 32) = v9;
        *(_BYTE *)(v10 + v8) = v7;
        *(_BYTE *)(*(_QWORD *)(a1 + 24) + v8 + 1) = 0;
      }
      else
      {
        v6((_QWORD *)a1, v7);
      }
      v11 = *(void **)(a1 + 24);
      v12 = *(_QWORD *)(a1 + 32);
      v13 = v5 - 48;
      *(_QWORD *)(a1 + 24) = 0;
      v14 = 48;
      src = v11;
      *(_OWORD *)(a1 + 32) = 0;
      while ( 1 )
      {
        if ( v12 )
        {
          v21 = (void *)qalloc_or_throw();
          memcpy(v21, src, v12);
          v16 = v21;
          v15 = v12 - 1;
          if ( v12 >= v12 + 1 )
            goto LABEL_22;
        }
        else
        {
          v15 = 0;
        }
        v19 = v15;
        v21 = (void *)qvector_reserve();
        v15 = v19;
        v16 = v21;
LABEL_22:
        v16[v15] = v14;
        *((_BYTE *)v21 + v15 + 1) = 0;
        sub_AED0((_QWORD *)a1, (__int64)v21, v14 + v13);
        if ( v21 )
          qfree();
        if ( ++v14 == 56 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1);
          if ( src )
            qfree();
          return 1;
        }
      }
    }
    return 1;
  }
  else
  {
    if ( (*(_BYTE *)(v3 + 5) & 1) != 0 && !(unsigned __int8)is_loaded() && *(_BYTE *)(v2 + 184) == 2 )
    {
      get_segm_base();
      get_item_end();
      btoa64();
      sub_9F80(a1, 0xFFFF, (__int64)byte_D3C3, *(_QWORD *)(*(_QWORD *)(a1 + 632) + 32LL), v22);
      return 1;
    }
    return 0;
  }
}

