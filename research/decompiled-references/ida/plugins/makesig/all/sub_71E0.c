unsigned __int64 __fastcall sub_71E0(__int64 a1)
{
  __int64 *v1; // rsi
  __int64 v3; // rax
  char i; // al
  _QWORD *v5; // rax
  __int64 v6; // rbp
  __int64 flags; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  char v14; // cl
  __int64 v15; // r15
  __int64 v16; // rbx
  __int64 v17; // rax
  char j; // al
  __int64 v20; // rsi
  size_t n; // [rsp+10h] [rbp-F0h]
  __int64 v22; // [rsp+18h] [rbp-E8h] BYREF
  __int128 v23; // [rsp+20h] [rbp-E0h]
  char v24[8]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+40h] [rbp-C0h]
  void *src; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v27; // [rsp+60h] [rbp-A0h]
  __int64 v28; // [rsp+78h] [rbp-88h] BYREF
  void *v29; // [rsp+80h] [rbp-80h]
  __int128 v30; // [rsp+88h] [rbp-78h]
  __int64 v31; // [rsp+98h] [rbp-68h] BYREF
  __int64 v32; // [rsp+A0h] [rbp-60h]
  __int128 v33; // [rsp+A8h] [rbp-58h]
  __int64 v34; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v35; // [rsp+C0h] [rbp-40h]

  v1 = *(__int64 **)a1;
  v35 = __readfsqword(0x28u);
  v32 = 0xFFFFFFFFLL;
  v3 = -1;
  v31 = 0;
  v34 = -1;
  v33 = 0;
  if ( v1 )
    v3 = *v1;
  v34 = v3;
  for ( i = func_tail_iterator_set(&v31, v1, -1); i; i = func_item_iterator_next(&v31, sub_45E0, 0) )
  {
    if ( v31 )
    {
      v5 = (_QWORD *)v31;
      if ( (int)v32 >= 0 && (int)v32 < *(_DWORD *)(v31 + 128) )
        v5 = (_QWORD *)(*(_QWORD *)(v31 + 136) + 16LL * (int)v32);
      if ( *v5 != **(_QWORD **)a1 )
        break;
    }
    else if ( (_QWORD)v33 != **(_QWORD **)a1 )
    {
      break;
    }
    v6 = v34;
    flags = get_flags_ex(v34, 4);
    v22 = 0;
    v8 = flags & 0x600;
    v23 = 0;
    if ( v8 == 1024 )
    {
      if ( (flags & 0xF00000) != 0x500000 )
        continue;
      v9 = get_item_end(v6) - v6;
      v10 = v23;
      if ( (unsigned __int64)v23 < v9 )
      {
        v20 = v22;
        if ( *((_QWORD *)&v23 + 1) < v9 )
        {
          v22 = qvector_reserve(&v22, v22, v9, 1);
          v20 = v22;
          v10 = v23;
        }
        memset((void *)(v20 + v10), 0, v9 - v10);
        *(_QWORD *)&v23 = v9;
      }
      else if ( v9 != (_QWORD)v23 )
      {
        *(_QWORD *)&v23 = v9;
      }
      v11 = v22;
      if ( 8 * v9 )
      {
        v12 = 0;
        do
        {
          v13 = v12;
          v14 = v12++;
          *(_BYTE *)(v11 + (v13 >> 3)) |= 1 << (v14 & 7);
        }
        while ( 8 * v9 != v12 );
        v11 = v22;
      }
    }
    else
    {
      if ( v8 != 1536 )
        continue;
      v17 = sub_4EA0(0x52u, &v22, &v28, v6);
      v11 = v22;
      if ( v17 != 1 )
      {
        if ( v22 )
          goto LABEL_31;
        continue;
      }
    }
    if ( (_QWORD)v23 )
    {
      v15 = 0;
      v16 = -1;
      while ( 1 )
      {
        if ( *(_BYTE *)(v11 + v15) )
        {
          v28 = v6 + v15;
          sub_6C00((_QWORD *)(a1 + 40), (unsigned __int64 *)&v28);
          if ( v16 == -1 )
            v16 = v15;
        }
        if ( ++v15 >= (unsigned __int64)v23 )
          break;
        v11 = v22;
      }
      if ( v16 != -1 )
      {
        v27 = 0;
        src = nullptr;
        for ( j = xrefblk_t_first_from(v24, v6, 1); j; j = xrefblk_t_next_from(v24) )
        {
          if ( (get_flags_ex(v25, 4) & 0xC000) == 0x4000 && get_ea_name(&src, v25, 1, 0) > 0 )
          {
            v29 = nullptr;
            v28 = v16 + v6;
            v30 = 0;
            if ( (_QWORD)v27 )
            {
              n = v27;
              v29 = (void *)qalloc_or_throw(v27);
              *((_QWORD *)&v30 + 1) = n;
              memcpy(v29, src, n);
              *(_QWORD *)&v30 = n;
            }
            sub_48E0((__int64 *)(a1 + 88), (__int64)&v28);
            if ( v29 )
              qfree(v29);
          }
        }
        if ( src )
        {
          *(_QWORD *)&v27 = 0;
          qfree(src);
        }
      }
      v11 = v22;
    }
    if ( v11 )
    {
LABEL_31:
      *(_QWORD *)&v23 = 0;
      qfree(v11);
      continue;
    }
  }
  if ( v31 )
    lock_func_range(v31, 0);
  return v35 - __readfsqword(0x28u);
}

